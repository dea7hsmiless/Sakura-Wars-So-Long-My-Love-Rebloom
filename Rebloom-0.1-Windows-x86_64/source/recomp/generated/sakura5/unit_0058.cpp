#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0058[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0,
    0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88,
    0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 112, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0,
    0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0,
    0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0,
    0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244,
    0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0,
    339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353,
    0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0,
    0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0058(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00280000;
    case 2u: goto L_00280008;
    case 3u: goto L_00280028;
    case 4u: goto L_0028002C;
    case 5u: goto L_00280040;
    case 6u: goto L_00280104;
    case 7u: goto L_0028012C;
    case 8u: goto L_00280144;
    case 9u: goto L_00280168;
    case 10u: goto L_002801BC;
    case 11u: goto L_002801E0;
    case 12u: goto L_00280218;
    case 13u: goto L_00280268;
    case 14u: goto L_002802B4;
    case 15u: goto L_002802FC;
    case 16u: goto L_00280310;
    case 17u: goto L_00280324;
    case 18u: goto L_00280350;
    case 19u: goto L_0028036C;
    case 20u: goto L_00280378;
    case 21u: goto L_0028039C;
    case 22u: goto L_002803EC;
    case 23u: goto L_00280420;
    case 24u: goto L_00280438;
    case 25u: goto L_00280444;
    case 26u: goto L_00280470;
    case 27u: goto L_00280490;
    case 28u: goto L_002804A0;
    case 29u: goto L_002804D4;
    case 30u: goto L_00280500;
    case 31u: goto L_00280554;
    case 32u: goto L_00280578;
    case 33u: goto L_00280598;
    case 34u: goto L_002805E4;
    case 35u: goto L_002805FC;
    case 36u: goto L_00280620;
    case 37u: goto L_0028063C;
    case 38u: goto L_00280698;
    case 39u: goto L_002806DC;
    case 40u: goto L_00280700;
    case 41u: goto L_0028071C;
    case 42u: goto L_00280768;
    case 43u: goto L_002807A0;
    case 44u: goto L_002807DC;
    case 45u: goto L_002807F0;
    case 46u: goto L_00280880;
    case 47u: goto L_002808A8;
    case 48u: goto L_002808D4;
    case 49u: goto L_002808FC;
    case 50u: goto L_0028094C;
    case 51u: goto L_00280950;
    case 52u: goto L_0028096C;
    case 53u: goto L_00280998;
    case 54u: goto L_002809BC;
    case 55u: goto L_002809C0;
    case 56u: goto L_002809E0;
    case 57u: goto L_00280A4C;
    case 58u: goto L_00280A7C;
    case 59u: goto L_00280AD0;
    case 60u: goto L_00280B64;
    case 61u: goto L_00280BA8;
    case 62u: goto L_00280BB4;
    case 63u: goto L_00280C18;
    case 64u: goto L_00280C2C;
    case 65u: goto L_00280C38;
    case 66u: goto L_00280C40;
    case 67u: goto L_00280C54;
    case 68u: goto L_00280C64;
    case 69u: goto L_00280C74;
    case 70u: goto L_00280CD0;
    case 71u: goto L_00280CE8;
    case 72u: goto L_00280D04;
    case 73u: goto L_00280D10;
    case 74u: goto L_00280D18;
    case 75u: goto L_00280D2C;
    case 76u: goto L_00280D4C;
    case 77u: goto L_00280D6C;
    case 78u: goto L_00280D78;
    case 79u: goto L_00280D84;
    case 80u: goto L_00280D8C;
    case 81u: goto L_00280DA0;
    case 82u: goto L_00280DB0;
    case 83u: goto L_00280DB8;
    case 84u: goto L_00280DC4;
    case 85u: goto L_00280DD0;
    case 86u: goto L_00280DD8;
    case 87u: goto L_00280DEC;
    case 88u: goto L_00280DFC;
    case 89u: goto L_00280E04;
    case 90u: goto L_00280E20;
    case 91u: goto L_00280E58;
    case 92u: goto L_00280E64;
    case 93u: goto L_00280E6C;
    case 94u: goto L_00280E80;
    case 95u: goto L_00280EA8;
    case 96u: goto L_00280EB0;
    case 97u: goto L_00280ECC;
    case 98u: goto L_00280EE4;
    case 99u: goto L_00280F00;
    case 100u: goto L_00280F1C;
    case 101u: goto L_00280F30;
    case 102u: goto L_00280F5C;
    case 103u: goto L_00280F70;
    case 104u: goto L_00280F8C;
    case 105u: goto L_00280FAC;
    case 106u: goto L_00280FC8;
    case 107u: goto L_00280FD8;
    case 108u: goto L_00280FE0;
    case 109u: goto L_00280FF4;
    case 110u: goto L_00281004;
    case 111u: goto L_00281078;
    case 112u: goto L_00281094;
    case 113u: goto L_00281098;
    case 114u: goto L_002810E8;
    case 115u: goto L_00281108;
    case 116u: goto L_00281130;
    case 117u: goto L_00281144;
    case 118u: goto L_00281164;
    case 119u: goto L_00281184;
    case 120u: goto L_002811A0;
    case 121u: goto L_002811BC;
    case 122u: goto L_00281230;
    case 123u: goto L_00281244;
    case 124u: goto L_00281264;
    case 125u: goto L_00281280;
    case 126u: goto L_00281300;
    case 127u: goto L_0028130C;
    case 128u: goto L_00281344;
    case 129u: goto L_00281380;
    case 130u: goto L_002813C0;
    case 131u: goto L_002813DC;
    case 132u: goto L_002813FC;
    case 133u: goto L_00281430;
    case 134u: goto L_0028146C;
    case 135u: goto L_00281478;
    case 136u: goto L_00281484;
    case 137u: goto L_00281490;
    case 138u: goto L_0028149C;
    case 139u: goto L_002814B8;
    case 140u: goto L_002814D4;
    case 141u: goto L_002814E4;
    case 142u: goto L_00281500;
    case 143u: goto L_00281518;
    case 144u: goto L_00281530;
    case 145u: goto L_00281540;
    case 146u: goto L_00281550;
    case 147u: goto L_00281558;
    case 148u: goto L_0028155C;
    case 149u: goto L_00281580;
    case 150u: goto L_002815C0;
    case 151u: goto L_002815DC;
    case 152u: goto L_002815E8;
    case 153u: goto L_00281608;
    case 154u: goto L_00281628;
    case 155u: goto L_00281648;
    case 156u: goto L_00281668;
    case 157u: goto L_00281698;
    case 158u: goto L_002816B8;
    case 159u: goto L_002816D8;
    case 160u: goto L_002816F8;
    case 161u: goto L_00281710;
    case 162u: goto L_0028172C;
    case 163u: goto L_00281734;
    case 164u: goto L_0028173C;
    case 165u: goto L_0028175C;
    case 166u: goto L_00281778;
    case 167u: goto L_00281794;
    case 168u: goto L_0028179C;
    case 169u: goto L_002817B8;
    case 170u: goto L_002817C0;
    case 171u: goto L_002817C8;
    case 172u: goto L_002817E8;
    case 173u: goto L_00281804;
    case 174u: goto L_0028180C;
    case 175u: goto L_0028182C;
    case 176u: goto L_00281848;
    case 177u: goto L_00281864;
    case 178u: goto L_0028186C;
    case 179u: goto L_00281874;
    case 180u: goto L_00281894;
    case 181u: goto L_002818B0;
    case 182u: goto L_002818CC;
    case 183u: goto L_002818E0;
    case 184u: goto L_00281900;
    case 185u: goto L_00281938;
    case 186u: goto L_00281A5C;
    case 187u: goto L_00281B60;
    case 188u: goto L_00281B90;
    case 189u: goto L_00281BDC;
    case 190u: goto L_00281C14;
    case 191u: goto L_00281C20;
    case 192u: goto L_00281D44;
    case 193u: goto L_00281D54;
    case 194u: goto L_00281D64;
    case 195u: goto L_00281D74;
    case 196u: goto L_00281D84;
    case 197u: goto L_00281D98;
    case 198u: goto L_00281DAC;
    case 199u: goto L_00281DBC;
    case 200u: goto L_00281DD4;
    case 201u: goto L_00281DE4;
    case 202u: goto L_00281DF4;
    case 203u: goto L_00281E04;
    case 204u: goto L_00281E10;
    case 205u: goto L_00281E1C;
    case 206u: goto L_00281E28;
    case 207u: goto L_00281E38;
    case 208u: goto L_00281E48;
    case 209u: goto L_00281E5C;
    case 210u: goto L_00281E70;
    case 211u: goto L_00281E88;
    case 212u: goto L_00281EA4;
    case 213u: goto L_00281EC0;
    case 214u: goto L_00281F38;
    case 215u: goto L_00281F44;
    case 216u: goto L_00281F4C;
    case 217u: goto L_00281F64;
    case 218u: goto L_00281F88;
    case 219u: goto L_00281FEC;
    case 220u: goto L_0028200C;
    case 221u: goto L_0028208C;
    case 222u: goto L_002820B8;
    case 223u: goto L_002820E0;
    case 224u: goto L_002820EC;
    case 225u: goto L_00282110;
    case 226u: goto L_00282128;
    case 227u: goto L_00282160;
    case 228u: goto L_00282180;
    case 229u: goto L_002821C0;
    case 230u: goto L_00282238;
    case 231u: goto L_00282248;
    case 232u: goto L_00282258;
    case 233u: goto L_00282268;
    case 234u: goto L_00282278;
    case 235u: goto L_00282294;
    case 236u: goto L_002822B0;
    case 237u: goto L_002822E0;
    case 238u: goto L_002822F0;
    case 239u: goto L_0028236C;
    case 240u: goto L_002823A0;
    case 241u: goto L_002823CC;
    case 242u: goto L_002823D4;
    case 243u: goto L_002823F4;
    case 244u: goto L_002823FC;
    case 245u: goto L_00282404;
    case 246u: goto L_00282420;
    case 247u: goto L_00282460;
    case 248u: goto L_0028246C;
    case 249u: goto L_00282484;
    case 250u: goto L_002824A0;
    case 251u: goto L_002824B0;
    case 252u: goto L_002824C0;
    case 253u: goto L_00282514;
    case 254u: goto L_0028254C;
    case 255u: goto L_002825C0;
    case 256u: goto L_002825FC;
    case 257u: goto L_00282630;
    case 258u: goto L_00282664;
    case 259u: goto L_0028269C;
    case 260u: goto L_002826D4;
    case 261u: goto L_00282710;
    case 262u: goto L_00282740;
    case 263u: goto L_00282770;
    case 264u: goto L_00282798;
    case 265u: goto L_002827EC;
    case 266u: goto L_00282820;
    case 267u: goto L_00282868;
    case 268u: goto L_00282884;
    case 269u: goto L_0028288C;
    case 270u: goto L_002828C0;
    case 271u: goto L_00282930;
    case 272u: goto L_00282954;
    case 273u: goto L_002829AC;
    case 274u: goto L_002829C8;
    case 275u: goto L_00282A04;
    case 276u: goto L_00282A30;
    case 277u: goto L_00282A70;
    case 278u: goto L_00282A80;
    case 279u: goto L_00282AD0;
    case 280u: goto L_00282ADC;
    case 281u: goto L_00282B00;
    case 282u: goto L_00282B5C;
    case 283u: goto L_00282BB4;
    case 284u: goto L_00282BE8;
    case 285u: goto L_00282BF0;
    case 286u: goto L_00282C74;
    case 287u: goto L_00282C88;
    case 288u: goto L_00282CA0;
    case 289u: goto L_00282CB4;
    case 290u: goto L_00282CC4;
    case 291u: goto L_00282CD8;
    case 292u: goto L_00282D30;
    case 293u: goto L_00282D40;
    case 294u: goto L_00282D88;
    case 295u: goto L_00282D9C;
    case 296u: goto L_00282DB4;
    case 297u: goto L_00282DC8;
    case 298u: goto L_00282DD8;
    case 299u: goto L_00282DEC;
    case 300u: goto L_00282E20;
    case 301u: goto L_00282E30;
    case 302u: goto L_00282E9C;
    case 303u: goto L_00282EB0;
    case 304u: goto L_00282EC8;
    case 305u: goto L_00282EDC;
    case 306u: goto L_00282F08;
    case 307u: goto L_00282F1C;
    case 308u: goto L_00282F30;
    case 309u: goto L_00282F48;
    case 310u: goto L_00282F5C;
    case 311u: goto L_00282F70;
    case 312u: goto L_00282F88;
    case 313u: goto L_00282F9C;
    case 314u: goto L_00282FB4;
    case 315u: goto L_00282FC8;
    case 316u: goto L_00282FD8;
    case 317u: goto L_00282FE4;
    case 318u: goto L_00282FF0;
    case 319u: goto L_0028301C;
    case 320u: goto L_0028302C;
    case 321u: goto L_00283068;
    case 322u: goto L_0028307C;
    case 323u: goto L_00283094;
    case 324u: goto L_002830A8;
    case 325u: goto L_002830B8;
    case 326u: goto L_002830CC;
    case 327u: goto L_00283100;
    case 328u: goto L_00283110;
    case 329u: goto L_0028314C;
    case 330u: goto L_00283164;
    case 331u: goto L_00283178;
    case 332u: goto L_0028318C;
    case 333u: goto L_00283194;
    case 334u: goto L_002831A4;
    case 335u: goto L_002831B8;
    case 336u: goto L_002831D0;
    case 337u: goto L_002831E4;
    case 338u: goto L_002831F4;
    case 339u: goto L_00283200;
    case 340u: goto L_0028320C;
    case 341u: goto L_00283270;
    case 342u: goto L_00283280;
    case 343u: goto L_002832F4;
    case 344u: goto L_00283314;
    case 345u: goto L_00283334;
    case 346u: goto L_00283354;
    case 347u: goto L_00283374;
    case 348u: goto L_00283394;
    case 349u: goto L_002833C8;
    case 350u: goto L_002833D4;
    case 351u: goto L_002833E0;
    case 352u: goto L_002833EC;
    case 353u: goto L_002833FC;
    case 354u: goto L_00283408;
    case 355u: goto L_00283410;
    case 356u: goto L_00283460;
    case 357u: goto L_002834A8;
    case 358u: goto L_002834D4;
    case 359u: goto L_00283510;
    case 360u: goto L_0028351C;
    case 361u: goto L_00283560;
    case 362u: goto L_00283588;
    case 363u: goto L_00283598;
    case 364u: goto L_002835A0;
    case 365u: goto L_002835AC;
    case 366u: goto L_002835B4;
    case 367u: goto L_002835C0;
    case 368u: goto L_002835C8;
    case 369u: goto L_002835E0;
    case 370u: goto L_002835F0;
    case 371u: goto L_002835F8;
    case 372u: goto L_00283604;
    case 373u: goto L_0028360C;
    case 374u: goto L_002836AC;
    case 375u: goto L_002836B8;
    case 376u: goto L_00283704;
    case 377u: goto L_00283720;
    case 378u: goto L_00283734;
    case 379u: goto L_0028375C;
    case 380u: goto L_00283770;
    case 381u: goto L_00283778;
    case 382u: goto L_00283790;
    case 383u: goto L_002837AC;
    case 384u: goto L_0028381C;
    case 385u: goto L_00283880;
    case 386u: goto L_0028388C;
    case 387u: goto L_002838B0;
    case 388u: goto L_002838D0;
    case 389u: goto L_002838D8;
    case 390u: goto L_00283904;
    case 391u: goto L_0028390C;
    case 392u: goto L_0028391C;
    case 393u: goto L_002839E0;
    case 394u: goto L_002839E8;
    case 395u: goto L_002839F4;
    case 396u: goto L_00283A10;
    case 397u: goto L_00283A24;
    case 398u: goto L_00283A4C;
    case 399u: goto L_00283A70;
    case 400u: goto L_00283AB4;
    case 401u: goto L_00283AC0;
    case 402u: goto L_00283B30;
    case 403u: goto L_00283B44;
    case 404u: goto L_00283B80;
    case 405u: goto L_00283BDC;
    case 406u: goto L_00283BFC;
    case 407u: goto L_00283C20;
    case 408u: goto L_00283C34;
    case 409u: goto L_00283C40;
    case 410u: goto L_00283C70;
    case 411u: goto L_00283C9C;
    case 412u: goto L_00283CB4;
    case 413u: goto L_00283CD0;
    case 414u: goto L_00283D2C;
    case 415u: goto L_00283D40;
    case 416u: goto L_00283D90;
    case 417u: goto L_00283DD0;
    case 418u: goto L_00283DE0;
    case 419u: goto L_00283E44;
    case 420u: goto L_00283E60;
    case 421u: goto L_00283E90;
    case 422u: goto L_00283ED0;
    case 423u: goto L_00283EE0;
    case 424u: goto L_00283EEC;
    case 425u: goto L_00283EF8;
    case 426u: goto L_00283F10;
    case 427u: goto L_00283F30;
    case 428u: goto L_00283F50;
    case 429u: goto L_00283F70;
    case 430u: goto L_00283F90;
    default: bad_entry(c, 0x00280000u); return;
    }
L_00280000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_00280008:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 7u);  goto L_00280028; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00280024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_00280024:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_00280028:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  goto L_00280038; }
    goto L_00280030;
L_0028002C:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 1;
L_00280030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_00280038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280040u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00280040u) [[unlikely]] return; }
L_00280040:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 164u)));  goto L_00280068; }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00280064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_00280064:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 1;
L_00280068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 164u)));  goto L_00280080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_00280080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 1296u)));  goto L_00280098; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_00280098:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 172u)));  goto L_002800A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_002800A8:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 8ull;  goto L_002800BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_002800BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2048ull;  goto L_002800CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_002800CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 4096ull;  goto L_002800DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_002800DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 16u)));  goto L_002800EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_002800EC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280104u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280104u) [[unlikely]] return; }
L_00280104:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_00280114; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_00280114:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[22], c.r[2].w[0] + 452u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028012Cu); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028012Cu) [[unlikely]] return; }
L_0028012C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_002801D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002801C4; } }
L_00280144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002801C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280168u); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00280168u) [[unlikely]] return; }
L_00280168:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002801C0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002801C0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002801C0; } }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002801C0; } }
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002801C0; } }
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002801C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00280238; } }
    goto L_002801C0;
L_002801BC:
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002801C0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002801C4:
    c.r[2].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00280144u | kUnwind; return; } goto L_00280144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00280238; } }
L_002801D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_0028022C; } }
L_002801E0:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 148u)));
    c.r[2].d[0] = c.r[4].sd[0] < 3000ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0028022C; }
    c.r[1].d[0] = c.r[4].sd[0] < 3005ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00280228; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280228; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 1296u)));
    c.budget -= 1;
L_00280218:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00280228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00280238; } }
L_00280228:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028022C:
    c.r[2].d[0] = c.r[6].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002801E0u | kUnwind; return; } goto L_002801E0; }
L_00280238:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_00280248; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00280324; } }
L_00280248:
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[3].w[0] + 408u);  if (t) { goto L_002802C4; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280268u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00280268u) [[unlikely]] return; }
L_00280268:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028027C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_00280290; } }
L_0028027C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_00280290; }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_00280290:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002802B4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002802B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002802B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002802B4u) [[unlikely]] return; }
L_002802B4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], 0u + 105u);  goto L_002802C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_00280308; } }
L_002802C4:
    set32(c.r[2], 0u + 105u);
    c.budget -= 1;
L_002802C8:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_002802D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_00280308; } }
L_002802D8:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002802EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00280308; } }
L_002802EC:
    set32(c.r[6], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002802FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x002802FCu) [[unlikely]] return; }
L_002802FC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00280308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280310u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00280310u) [[unlikely]] return; }
L_00280310:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00280320; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00280320:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00280324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00280350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028036Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0028036Cu) [[unlikely]] return; }
L_0028036C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280378u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00280378u) [[unlikely]] return; }
L_00280378:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23680u);
    set32(c.r[2], c.r[2].w[0] + 23736u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 9;
L_0028039C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 80u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 99ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 488u), 0u);
    st32((c.r[3].w[0] + 888u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 1292u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028039Cu | kUnwind; return; } goto L_0028039C; } }
    st32((c.r[16].w[0] + 480u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 484u), 0u);
    set32(c.r[4], c.r[4].w[0] - 3776u);
    st32((c.r[16].w[0] + 1288u), 0u);
    st32((c.r[16].w[0] + 1688u), 0u);
    st32((c.r[16].w[0] + 476u), 0u);
    st32((c.r[16].w[0] + 884u), 0u);
    st32((c.r[16].w[0] + 1284u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002803ECu); st32((c.r[16].w[0] + 1692u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002803ECu) [[unlikely]] return; }
L_002803EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00280420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280438u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00280438u) [[unlikely]] return; }
L_00280438:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280444u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00280444u) [[unlikely]] return; }
L_00280444:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00280470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00280494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280490u);  if (depth < kMaxDepth) unit_0058(c, 30u, depth + 1u); else { c.pc = 0x00280500u; return; } if (c.pc != 0x00280490u) [[unlikely]] return; }
L_00280490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00280494:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002804A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 72u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002804CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002804E8; } }
L_002804CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002804D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x002804D4u) [[unlikely]] return; }
L_002804D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002804E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00280500:
    set32(c.r[29], c.r[29].w[0] - 544u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 1100u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00280768; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[23], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] + 2916u);  if (t) { goto L_002805E8; } }
L_00280554:
    set32(c.r[16], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002805E8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_002805E4; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002805C0; } }
L_00280578:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 488u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002805C0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280598u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00280598u) [[unlikely]] return; }
L_00280598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002805BC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002805BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_002805CC; } }
L_002805BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002805C0:
    c.r[3].d[0] = c.r[17].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00280578u | kUnwind; return; } goto L_00280578; }
L_002805CC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002805E4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002805E4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x002805E4u) [[unlikely]] return; }
L_002805E4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002805E8:
    c.r[3].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00280554u | kUnwind; return; } goto L_00280554; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_002805FC:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 488u);
    set32(c.r[3], ld32((c.r[3].w[0] + 488u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002806AC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280620u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00280620u) [[unlikely]] return; }
L_00280620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002806A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002806A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00280668; } }
L_0028063C:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00280668; }
    set32(c.r[4], ld32((c.r[3].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00280664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00280674; } }
L_00280664:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00280668:
    c.r[3].d[0] = c.r[6].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028063Cu | kUnwind; return; } goto L_0028063C; }
L_00280674:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002806A8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 884u)));  goto L_002806A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280698u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280698u) [[unlikely]] return; }
L_00280698:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 884u)));
    c.budget -= 2;
L_002806A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 884u), c.r[3].w[0]);
    c.budget -= 2;
L_002806A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002806AC:
    c.r[3].d[0] = c.r[17].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002805FCu | kUnwind; return; } goto L_002805FC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002806C8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002806C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0028076C; }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[18].w[0] << 2);
    c.budget -= 3;
L_002806DC:
    set32(c.r[2], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] + 488u);
    set32(c.r[2], ld32((c.r[2].w[0] + 488u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);  goto L_00280734; }
    set32(c.r[5], ld32((c.r[2].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280700u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00280700u) [[unlikely]] return; }
L_00280700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280730; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 236u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028071Cu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028071Cu) [[unlikely]] return; }
L_0028071C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_00280738; } }
L_00280730:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_00280734:
    st32((c.r[2].w[0] + 144u), 0u);
    c.budget -= 1;
L_00280738:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002806DCu | kUnwind; return; } goto L_002806DC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00280758; }
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00280758:
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280768u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0067(c, 103u, depth + 1u); else { c.pc = 0x002BD200u; return; } if (c.pc != 0x00280768u) [[unlikely]] return; }
L_00280768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0028076C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 544u);  c.pc = t; return; }
L_002807A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002807E0; }
    set32(c.r[6], ld32((c.r[5].w[0] + 1100u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], 0u + 1u);  goto L_002807D4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002807DC; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002807D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002807DCu);  if (depth < kMaxDepth) unit_0058(c, 45u, depth + 1u); else { c.pc = 0x002807F0u; return; } if (c.pc != 0x002807DCu) [[unlikely]] return; }
L_002807DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002807E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002807F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00280AA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00280860; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_00280860:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028086C; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_0028086C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00280AA4; }
    set32(c.r[22], ld32((c.r[19].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00280954; } }
L_00280880:
    set32(c.r[18], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 3324u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[30], c.r[18].w[0] + 3324u);  if (t) { goto L_00280950; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00280954; }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00280928; } }
L_002808A8:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[16].w[0] << 2);  goto L_002808DC; }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 888u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00280928; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002808D4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002808D4u) [[unlikely]] return; }
L_002808D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002808FC; } }
L_002808DC:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1292u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00280924; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002808FCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002808FCu) [[unlikely]] return; }
L_002808FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280924; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 3324u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00280924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_00280934; } }
L_00280924:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00280928:
    c.r[3].d[0] = c.r[16].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002808A8u | kUnwind; return; } goto L_002808A8; }
L_00280934:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_00280950; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280950u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x00280950u) [[unlikely]] return; }
    goto L_00280950;
L_0028094C:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00280950:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00280954:
    set32(c.r[3], ld32((c.r[22].w[0] + 3320u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00280880u | kUnwind; return; } goto L_00280880; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_0028096C:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[16].w[0] << 2);  goto L_002809A0; }
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[18], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 888u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00280A94; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280998u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00280998u) [[unlikely]] return; }
L_00280998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002809C0; } }
L_002809A0:
    set32(c.r[18], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1292u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00280A90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002809C0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002809C0u) [[unlikely]] return; }
    goto L_002809C0;
L_002809BC:
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.budget -= 1;
L_002809C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280A90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00280A90; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 3320u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00280A10; } }
L_002809E0:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 3324u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00280A10; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00280A0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00280A1C; } }
L_00280A0C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00280A10:
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002809E0u | kUnwind; return; } goto L_002809E0; }
L_00280A1C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00280A90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 1292u)));  goto L_00280A64; }
    set32(c.r[4], ld32((c.r[18].w[0] + 888u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 1284u)));  goto L_00280A58; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280A4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280A4Cu) [[unlikely]] return; }
L_00280A4C:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 888u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 1284u)));
    c.budget -= 3;
L_00280A58:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1284u), c.r[3].w[0]);  if (t) { goto L_00280A90; } }
L_00280A64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 1688u)));  goto L_00280A88; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280A7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280A7Cu) [[unlikely]] return; }
L_00280A7C:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 1292u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 1688u)));
    c.budget -= 3;
L_00280A88:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 1688u), c.r[3].w[0]);
    c.budget -= 2;
L_00280A90:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00280A94:
    c.r[3].d[0] = c.r[16].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028096Cu | kUnwind; return; } goto L_0028096C; }
L_00280AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00280AA4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00280AD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00281264; } }
    st32((c.r[29].w[0] + 96u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00280B10; } }
    set32(c.r[3], c.r[3].w[0] + 52u);
    c.budget -= 1;
L_00280B10:
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 104u), c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    set32(c.r[17], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 14;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00281268; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00280B5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00280B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280B64u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00280B64u) [[unlikely]] return; }
L_00280B64:
    c.f[3] = ld32((c.r[17].w[0] + 736u));
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st32((c.r[29].w[0] + 80u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 744u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 748u));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.f[0]);  if (t) { goto L_00281254; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 3104u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0058[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00280BA8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280BB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00280BB4u) [[unlikely]] return; }
L_00280BB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 1100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 1104u)));  goto L_00280BD0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00281264; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1104u)));
    c.budget -= 1;
L_00280BD0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1288u)));  goto L_00280C04; }
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_00280C2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1288u)));
    c.budget -= 1;
L_00280C04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_00280C24; }
    set32(c.r[5], c.r[2].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280C18u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280C18u) [[unlikely]] return; }
L_00280C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_00280C30; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00280C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280C2Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280C2Cu) [[unlikely]] return; }
L_00280C2C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00280C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280C38u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280C38u) [[unlikely]] return; }
L_00280C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280C40u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00280C40u) [[unlikely]] return; }
L_00280C40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[4].w[0]);  goto L_00281264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280C54u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 90u, depth + 1u); else { c.pc = 0x002E4C50u; return; } if (c.pc != 0x00280C54u) [[unlikely]] return; }
L_00280C54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00280C64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[19].d[0];  if (t) { goto L_00281264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280C74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00280C74u) [[unlikely]] return; }
L_00280C74:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281264; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00281264; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00281264; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 1284u)));  goto L_00280CB8; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00281264; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1284u)));
    c.budget -= 1;
L_00280CB8:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00280D58; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280CD0u); set32(c.r[4], c.r[4].w[0] - 3712u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00280CD0u) [[unlikely]] return; }
L_00280CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00280D58; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00280CE8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[3].w[0] + 888u);
    set32(c.r[3], ld32((c.r[3].w[0] + 888u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00280D58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280D04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 187u, depth + 1u); else { c.pc = 0x00281B60u; return; } if (c.pc != 0x00280D04u) [[unlikely]] return; }
L_00280D04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280D10u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280D10u) [[unlikely]] return; }
L_00280D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280D18u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00280D18u) [[unlikely]] return; }
L_00280D18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_00280D30; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280D2Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 197u, depth + 1u); else { c.pc = 0x002E5A00u; return; } if (c.pc != 0x00280D2Cu) [[unlikely]] return; }
L_00280D2C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00280D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1284u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3648u);
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280D4Cu); st32((c.r[16].w[0] + 1284u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00280D4Cu) [[unlikely]] return; }
L_00280D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00280D58:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00280CE8u | kUnwind; return; } goto L_00280CE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00280D6C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280D78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00280D78u) [[unlikely]] return; }
L_00280D78:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280D84u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280D84u) [[unlikely]] return; }
L_00280D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280D8Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00280D8Cu) [[unlikely]] return; }
L_00280D8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280DA0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DA0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 146u, depth + 1u); else { c.pc = 0x002E5490u; return; } if (c.pc != 0x00280DA0u) [[unlikely]] return; }
L_00280DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 480u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DB0u); set32(c.r[4], c.r[4].w[0] - 3584u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00280DB0u) [[unlikely]] return; }
L_00280DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00280DB8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00280DC4u) [[unlikely]] return; }
L_00280DC4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DD0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280DD0u) [[unlikely]] return; }
L_00280DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DD8u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00280DD8u) [[unlikely]] return; }
L_00280DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280DEC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DECu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 146u, depth + 1u); else { c.pc = 0x002E5490u; return; } if (c.pc != 0x00280DECu) [[unlikely]] return; }
L_00280DEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 484u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DFCu); set32(c.r[4], c.r[4].w[0] - 3536u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00280DFCu) [[unlikely]] return; }
L_00280DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00280E04:
    set32(c.r[5], ld32((c.r[16].w[0] + 476u)));
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 1104u)));  goto L_00280E2C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280E20u); set32(c.r[4], c.r[4].w[0] - 3488u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00280E20u) [[unlikely]] return; }
L_00280E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1104u)));
    c.budget -= 1;
L_00280E2C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00280E50; }
    st32((c.r[29].w[0] + 128u), c.f[3]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_00280E64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00280E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280E58u);  if (depth < kMaxDepth) unit_0058(c, 187u, depth + 1u); else { c.pc = 0x00281B60u; return; } if (c.pc != 0x00280E58u) [[unlikely]] return; }
L_00280E58:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280E64u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280E64u) [[unlikely]] return; }
L_00280E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280E6Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00280E6Cu) [[unlikely]] return; }
L_00280E6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 476u)));  goto L_00280E84; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280E80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002E53F0u; return; } if (c.pc != 0x00280E80u) [[unlikely]] return; }
L_00280E80:
    set32(c.r[3], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 1;
L_00280E84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 3424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 476u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280EA8u); st32((c.r[16].w[0] + 476u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00280EA8u) [[unlikely]] return; }
L_00280EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00280EB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 884u)));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00280F98; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280ECCu); set32(c.r[4], c.r[4].w[0] - 3360u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00280ECCu) [[unlikely]] return; }
L_00280ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00280F98; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.budget -= 1;
L_00280EE4:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[3].w[0] + 488u);
    set32(c.r[3], ld32((c.r[3].w[0] + 488u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00280F98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280F00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00280F00u) [[unlikely]] return; }
L_00280F00:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00280F28; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280F1Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280F1Cu) [[unlikely]] return; }
L_00280F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 256u);  if (t) { goto L_00280F54; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00280F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280F30u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00280F30u) [[unlikely]] return; }
L_00280F30:
    c.f[0] = ld32((c.r[19].w[0] + 736u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 748u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 9;
L_00280F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280F5Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00280F5Cu) [[unlikely]] return; }
L_00280F5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_00280F74; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280F70u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002E53F0u; return; } if (c.pc != 0x00280F70u) [[unlikely]] return; }
L_00280F70:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00280F74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 884u)));
    set32(c.r[4], c.r[4].w[0] - 3296u);
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280F8Cu); st32((c.r[16].w[0] + 884u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00280F8Cu) [[unlikely]] return; }
L_00280F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00280F98:
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00280EE4u | kUnwind; return; } goto L_00280EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00280FAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1288u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_00280FD0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280FC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280FC8u) [[unlikely]] return; }
L_00280FC8:
    st32((c.r[16].w[0] + 1288u), 0u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_00280FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280FD8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00280FD8u) [[unlikely]] return; }
L_00280FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280FE0u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00280FE0u) [[unlikely]] return; }
L_00280FE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1288u), c.r[4].w[0]);  goto L_00281264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280FF4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002E83D0u; return; } if (c.pc != 0x00280FF4u) [[unlikely]] return; }
L_00280FF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 1288u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00281004:
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00281040; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00281040; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00281040:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00281054; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_00281054; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00281054:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281264; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281264; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002810B8; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00281078:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1292u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002810B8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281098u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00281098u) [[unlikely]] return; }
    goto L_00281098;
L_00281094:
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.budget -= 1;
L_00281098:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002810B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_002810C4; } }
L_002810B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002810B8:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00281078u | kUnwind; return; } goto L_00281078; }
L_002810C4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00281264; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1688u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00281264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00281170; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002810E8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[3].w[0] + 1292u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1292u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00281170; }
    set32(c.r[18], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281108u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00281108u) [[unlikely]] return; }
L_00281108:
    c.f[0] = ld32((c.r[18].w[0] + 736u));
    set32(c.r[4], 0u + 256u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 740u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 744u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 748u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281130u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00281130u) [[unlikely]] return; }
L_00281130:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_00281148; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281144u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 197u, depth + 1u); else { c.pc = 0x002E5A00u; return; } if (c.pc != 0x00281144u) [[unlikely]] return; }
L_00281144:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00281148:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1688u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3232u);
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281164u); st32((c.r[16].w[0] + 1688u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00281164u) [[unlikely]] return; }
L_00281164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00281170:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002810E8u | kUnwind; return; } goto L_002810E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00281184:
    set32(c.r[4], ld32((c.r[16].w[0] + 1692u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1100u)));  goto L_002811A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002811A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002811A0u) [[unlikely]] return; }
L_002811A0:
    st32((c.r[16].w[0] + 1692u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1100u)));
    c.budget -= 2;
L_002811A8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00281264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002811BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002811BCu) [[unlikely]] return; }
L_002811BC:
    c.f[4] = ld32((c.r[19].w[0] + 696u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[19].w[0] + 712u));
    set32(c.r[3], c.r[19].w[0] + 688u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[19].w[0] + 708u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[19].w[0] + 692u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_002811F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0] + 32u));  if (t) { goto L_002811F8; } }
L_002811F0:
    c.f[3] = c.f[0];
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 2;
L_002811F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 256u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[3]);
    st32((c.r[29].w[0] + 136u), c.f[4]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281230u); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00281230u) [[unlikely]] return; }
L_00281230:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1692u), c.r[4].w[0]);  goto L_00281264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281244u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 204u, depth + 1u); else { c.pc = 0x002E5AD0u; return; } if (c.pc != 0x00281244u) [[unlikely]] return; }
L_00281244:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 1692u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281264; } }
L_00281254:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281264u); set32(c.r[4], c.r[4].w[0] - 3152u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00281264u) [[unlikely]] return; }
L_00281264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00281268:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00281280:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[17], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 3424u)));
    c.budget -= 13;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002812C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_002812C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002812C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0028135C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00281358; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 164u)));  goto L_002812E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281358; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 1;
L_002812E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00281358; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281300u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281300u) [[unlikely]] return; }
L_00281300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00281348; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_0028130C:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 2916u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00281348; }
    set32(c.r[6], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00281344; } }
    c.r[1].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00281344; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281344u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x00281344u) [[unlikely]] return; }
L_00281344:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00281348:
    set32(c.r[4], ld32((c.r[17].w[0] + 2912u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028130Cu | kUnwind; return; } goto L_0028130C; }
L_00281358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028135C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00281380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 112u);  if (t) { goto L_00281410; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002813B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00281414; } }
L_002813B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002813C0u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002813C0u) [[unlikely]] return; }
L_002813C0:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00281410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00281400; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002813DC:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 3324u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00281400; }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002813FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x002813FCu) [[unlikely]] return; }
L_002813FC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00281400:
    set32(c.r[3], ld32((c.r[16].w[0] + 3320u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002813DCu | kUnwind; return; } goto L_002813DC; }
L_00281410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00281414:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00281430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028155C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00281560; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028146Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x0028146Cu) [[unlikely]] return; }
L_0028146C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281478u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281478u) [[unlikely]] return; }
L_00281478:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281484u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281484u) [[unlikely]] return; }
L_00281484:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281490u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281490u) [[unlikely]] return; }
L_00281490:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028149Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x0028149Cu) [[unlikely]] return; }
L_0028149C:
    set32(c.r[2], ld32((c.r[18].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002814CC; }
    set32(c.r[5], ld32((c.r[2].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002814B8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002814B8u) [[unlikely]] return; }
L_002814B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 484u)));  goto L_002814E8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002814CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002814D4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x002814D4u) [[unlikely]] return; }
L_002814D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002814E4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x002814E4u) [[unlikely]] return; }
L_002814E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 1;
L_002814E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00281528; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281500u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x00281500u) [[unlikely]] return; }
L_00281500:
    set32(c.r[16], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 236u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281518u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00281518u) [[unlikely]] return; }
L_00281518:
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00281554; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00281528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281530u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281530u) [[unlikely]] return; }
L_00281530:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281540u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x00281540u) [[unlikely]] return; }
L_00281540:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281550u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x00281550u) [[unlikely]] return; }
L_00281550:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00281554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028155Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 30u, depth + 1u); else { c.pc = 0x00280500u; return; } if (c.pc != 0x0028155Cu) [[unlikely]] return; }
    goto L_0028155C;
L_00281558:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028155C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00281560:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00281580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002818D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 3056u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0058[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002815C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002815E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002815DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002815DCu) [[unlikely]] return; }
L_002815DC:
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002815E4:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002815E8:
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 488u)));  goto L_00281610; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281608u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281608u) [[unlikely]] return; }
L_00281608:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 488u)));
    c.budget -= 2;
L_00281610:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 888u)));  goto L_00281630; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281628u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281628u) [[unlikely]] return; }
L_00281628:
    st32((c.r[17].w[0] + 488u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 888u)));
    c.budget -= 2;
L_00281630:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1292u)));  goto L_00281650; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281648u) [[unlikely]] return; }
L_00281648:
    st32((c.r[17].w[0] + 888u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1292u)));
    c.budget -= 2;
L_00281650:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00281670; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281668u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281668u) [[unlikely]] return; }
L_00281668:
    st32((c.r[17].w[0] + 1292u), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00281670:
    c.r[3].d[0] = c.r[18].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002815E8u | kUnwind; return; } goto L_002815E8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 484u)));  goto L_002816A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281698u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281698u) [[unlikely]] return; }
L_00281698:
    st32((c.r[16].w[0] + 480u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 2;
L_002816A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1288u)));  goto L_002816C0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002816B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002816B8u) [[unlikely]] return; }
L_002816B8:
    st32((c.r[16].w[0] + 484u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1288u)));
    c.budget -= 2;
L_002816C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1692u)));  goto L_002816E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002816D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002816D8u) [[unlikely]] return; }
L_002816D8:
    st32((c.r[16].w[0] + 1288u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1692u)));
    c.budget -= 2;
L_002816E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 476u), 0u);  goto L_00281700; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002816F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002816F8u) [[unlikely]] return; }
L_002816F8:
    st32((c.r[16].w[0] + 1692u), 0u);
    st32((c.r[16].w[0] + 476u), 0u);
    c.budget -= 2;
L_00281700:
    st32((c.r[16].w[0] + 884u), 0u);
    st32((c.r[16].w[0] + 1284u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1688u), 0u);  if (t) { goto L_002818E0; } }
L_00281710:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002818E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028172Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028172Cu) [[unlikely]] return; }
L_0028172C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_002818E0; } }
L_00281734:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0028173C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 888u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 888u);  if (t) { goto L_00281760; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028175Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028175Cu) [[unlikely]] return; }
L_0028175C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00281760:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028173Cu | kUnwind; return; } goto L_0028173C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1284u), 0u);  if (t) { goto L_002818E0; } }
L_00281778:
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002818E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281794u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281794u) [[unlikely]] return; }
L_00281794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 480u), 0u);  if (t) { goto L_002818E0; } }
L_0028179C:
    set32(c.r[4], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002818E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002817B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002817B8u) [[unlikely]] return; }
L_002817B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 484u), 0u);  if (t) { goto L_002818E0; } }
L_002817C0:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_002817C8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 80u);  if (t) { goto L_002817EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002817E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002817E8u) [[unlikely]] return; }
L_002817E8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002817EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002817C8u | kUnwind; return; } goto L_002817C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 476u), 0u);  if (t) { goto L_002818E0; } }
L_00281804:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0028180C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 488u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 488u);  if (t) { goto L_00281830; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028182Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028182Cu) [[unlikely]] return; }
L_0028182C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00281830:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028180Cu | kUnwind; return; } goto L_0028180C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 884u), 0u);  if (t) { goto L_002818E0; } }
L_00281848:
    set32(c.r[4], ld32((c.r[16].w[0] + 1288u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002818E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281864u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281864u) [[unlikely]] return; }
L_00281864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1288u), 0u);  if (t) { goto L_002818E0; } }
L_0028186C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_00281874:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1292u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 1292u);  if (t) { goto L_00281898; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281894u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281894u) [[unlikely]] return; }
L_00281894:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00281898:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00281874u | kUnwind; return; } goto L_00281874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1688u), 0u);  if (t) { goto L_002818E0; } }
L_002818B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1692u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002818E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002818CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002818CCu) [[unlikely]] return; }
L_002818CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1692u), 0u);  if (t) { goto L_002818E0; } }
L_002818D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002818E0u); set32(c.r[4], c.r[4].w[0] - 3152u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002818E0u) [[unlikely]] return; }
L_002818E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002818E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00281900:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 76u)));  goto L_00281A30; }
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);  goto L_0028192C; }
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.budget -= 6;
L_0028192C:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 3;
L_00281938:
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 488u)));  goto L_00281958; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 488u)));
    c.budget -= 4;
L_00281958:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 888u)));  goto L_00281970; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 888u)));
    c.budget -= 4;
L_00281970:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 1292u)));  goto L_00281988; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 1292u)));
    c.budget -= 4;
L_00281988:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002819A0; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 4;
L_002819A0:
    c.r[3].d[0] = c.r[8].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00281938u | kUnwind; return; } goto L_00281938; }
    set32(c.r[6], ld32((c.r[4].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 484u)));  goto L_002819D0; }
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 6;
L_002819D0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 1288u)));  goto L_002819F0; }
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 1288u)));
    c.budget -= 6;
L_002819F0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 1692u)));  goto L_00281A10; }
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1692u)));
    c.budget -= 6;
L_00281A10:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00281B50; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00281B50; } }
L_00281A30:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);  goto L_00281A50; }
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.budget -= 6;
L_00281A50:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 3;
L_00281A5C:
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 488u)));  goto L_00281A7C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 488u)));
    c.budget -= 4;
L_00281A7C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 888u)));  goto L_00281A94; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 888u)));
    c.budget -= 4;
L_00281A94:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 1292u)));  goto L_00281AAC; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 1292u)));
    c.budget -= 4;
L_00281AAC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00281AC4; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 4;
L_00281AC4:
    c.r[3].d[0] = c.r[8].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00281A5Cu | kUnwind; return; } goto L_00281A5C; }
    set32(c.r[6], ld32((c.r[4].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 484u)));  goto L_00281AF4; }
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 6;
L_00281AF4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 1288u)));  goto L_00281B14; }
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 1288u)));
    c.budget -= 6;
L_00281B14:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 1692u)));  goto L_00281B34; }
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1692u)));
    c.budget -= 6;
L_00281B34:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00281B50; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_00281B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00281B60:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 1692u)));  goto L_00281B74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 80u);  if (t) { goto L_00281B88; } }
L_00281B74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00281B84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 80u);  if (t) { goto L_00281B88; } }
L_00281B84:
    set32(c.r[2], c.r[2].w[0] + 15312u);
    c.budget -= 1;
L_00281B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00281B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00281C18; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281BE4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00281BD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 368u)));  if (t) { goto L_00281BD4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00281BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281BDCu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0058(c, 45u, depth + 1u); else { c.pc = 0x002807F0u; return; } if (c.pc != 0x00281BDCu) [[unlikely]] return; }
L_00281BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281C14; } }
L_00281BE4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00281C14; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00281C0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281C14; } }
L_00281C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281C14u);  if (depth < kMaxDepth) unit_0058(c, 43u, depth + 1u); else { c.pc = 0x002807A0u; return; } if (c.pc != 0x00281C14u) [[unlikely]] return; }
L_00281C14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00281C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00281C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 121u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[6].w[0] + 116u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00281E50; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00281E54; }
    set32(c.r[3], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281E40; } }
    set32(c.r[3], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281E30; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00281DFC; }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 1u);  goto L_00281DDC; }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00281DB4; }
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00281DA4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281DA0; } }
    set32(c.r[3], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281DA0; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281DA0; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00281D90; }
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D8C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D8C; } }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D8C; } }
    set32(c.r[3], 0u + 87u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D8C; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D7C; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D6C; } }
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D5C; } }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D4C; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00281D3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00281E60; } }
L_00281D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D44u);  if (depth < kMaxDepth) unit_0058(c, 210u, depth + 1u); else { c.pc = 0x00281E70u; return; } if (c.pc != 0x00281D44u) [[unlikely]] return; }
L_00281D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D54u);  if (depth < kMaxDepth) unit_0058(c, 213u, depth + 1u); else { c.pc = 0x00281EC0u; return; } if (c.pc != 0x00281D54u) [[unlikely]] return; }
L_00281D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D64u);  if (depth < kMaxDepth) unit_0058(c, 225u, depth + 1u); else { c.pc = 0x00282110u; return; } if (c.pc != 0x00281D64u) [[unlikely]] return; }
L_00281D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D74u);  if (depth < kMaxDepth) unit_0058(c, 229u, depth + 1u); else { c.pc = 0x002821C0u; return; } if (c.pc != 0x00281D74u) [[unlikely]] return; }
L_00281D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D84u);  if (depth < kMaxDepth) unit_0058(c, 237u, depth + 1u); else { c.pc = 0x002822E0u; return; } if (c.pc != 0x00281D84u) [[unlikely]] return; }
L_00281D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281D8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00281D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 184u, depth + 1u); else { c.pc = 0x00281900u; return; } if (c.pc != 0x00281D98u) [[unlikely]] return; }
L_00281D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281DA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00281DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281DACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 184u, depth + 1u); else { c.pc = 0x00281900u; return; } if (c.pc != 0x00281DACu) [[unlikely]] return; }
L_00281DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281DBCu);  if (depth < kMaxDepth) unit_0058(c, 184u, depth + 1u); else { c.pc = 0x00281900u; return; } if (c.pc != 0x00281DBCu) [[unlikely]] return; }
L_00281DBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00281E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281DD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 133u, depth + 1u); else { c.pc = 0x00281430u; return; } if (c.pc != 0x00281DD4u) [[unlikely]] return; }
L_00281DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281DE4u);  if (depth < kMaxDepth) unit_0058(c, 184u, depth + 1u); else { c.pc = 0x00281900u; return; } if (c.pc != 0x00281DE4u) [[unlikely]] return; }
L_00281DE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281DF4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x00281DF4u) [[unlikely]] return; }
L_00281DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x00281E04u) [[unlikely]] return; }
L_00281E04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E10u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281E10u) [[unlikely]] return; }
L_00281E10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E1Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281E1Cu) [[unlikely]] return; }
L_00281E1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 184u, depth + 1u); else { c.pc = 0x00281900u; return; } if (c.pc != 0x00281E28u) [[unlikely]] return; }
L_00281E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E38u);  if (depth < kMaxDepth) unit_0058(c, 238u, depth + 1u); else { c.pc = 0x002822F0u; return; } if (c.pc != 0x00281E38u) [[unlikely]] return; }
L_00281E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E48u);  if (depth < kMaxDepth) unit_0058(c, 240u, depth + 1u); else { c.pc = 0x002823A0u; return; } if (c.pc != 0x00281E48u) [[unlikely]] return; }
L_00281E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00281E5C; } }
L_00281E50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00281E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E5Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281E5Cu) [[unlikely]] return; }
L_00281E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00281E60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00281E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00281E88u) [[unlikely]] return; }
L_00281E88:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 3008u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281EA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00281EA4u) [[unlikely]] return; }
L_00281EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00281EC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 112u);  if (t) { goto L_002820EC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1100u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 1692u)));  goto L_00282094; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00282084; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00281F30; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00281F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002820F0; } }
L_00281F2C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00281F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281F38u);  if (depth < kMaxDepth) unit_0058(c, 125u, depth + 1u); else { c.pc = 0x00281280u; return; } if (c.pc != 0x00281F38u) [[unlikely]] return; }
L_00281F38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281F44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 43u, depth + 1u); else { c.pc = 0x002807A0u; return; } if (c.pc != 0x00281F44u) [[unlikely]] return; }
L_00281F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281F4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00281F4Cu) [[unlikely]] return; }
L_00281F4C:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002820EC; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 2;
L_00281F64:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[3].w[0] + 888u);
    set32(c.r[3], ld32((c.r[3].w[0] + 888u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00282070; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281F88u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00281F88u) [[unlikely]] return; }
L_00281F88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028206C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00281FDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00281FB4; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00281FB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281FDC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00281FC8; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00281FC8:
    set32(c.r[4], ld32((c.r[3].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00281FDC; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00281FDC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00282034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00282028; } }
L_00281FEC:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00282028; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028200Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028200Cu) [[unlikely]] return; }
L_0028200C:
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00282024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00282034; } }
L_00282024:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00282028:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00281FECu | kUnwind; return; } goto L_00281FEC; }
L_00282034:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0])));  goto L_00282058; }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0028206C; } }
L_00282058:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_0028206C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00282070:
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00281F64u | kUnwind; return; } goto L_00281F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002820EC; } }
L_00282084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028208Cu);  if (depth < kMaxDepth) unit_0058(c, 133u, depth + 1u); else { c.pc = 0x00281430u; return; } if (c.pc != 0x0028208Cu) [[unlikely]] return; }
L_0028208C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002820EC; } }
L_00282094:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002820C4; }
    set32(c.r[2], ld32((c.r[6].w[0] + 3312u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002820AC; }
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002820AC:
    set32(c.r[5], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002820B8u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002820B8u) [[unlikely]] return; }
L_002820B8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002820E4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002820C4:
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002820D4; }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002820D4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002820E0u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x002820E0u) [[unlikely]] return; }
L_002820E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002820E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002820ECu);  if (depth < kMaxDepth) unit_0058(c, 125u, depth + 1u); else { c.pc = 0x00281280u; return; } if (c.pc != 0x002820ECu) [[unlikely]] return; }
L_002820EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002820F0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00282110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282128u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00282128u) [[unlikely]] return; }
L_00282128:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002821B0; }
    set32(c.r[5], ld32((c.r[4].w[0] + 1100u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00282158; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00282158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002821AC; } }
L_00282158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282160u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00282160u) [[unlikely]] return; }
L_00282160:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002821AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 4;
L_00282180:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 888u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002821A0; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_002821A0:
    c.r[3].d[0] = c.r[6].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00282180u | kUnwind; return; } goto L_00282180; }
L_002821AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002821B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002821C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002822C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002822CC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 1100u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u - 1u);  goto L_00282260; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00282250; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00282230; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028222C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002822C8; } }
L_0028222C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00282230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282238u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00282238u) [[unlikely]] return; }
L_00282238:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282248u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x00282248u) [[unlikely]] return; }
L_00282248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002822C8; } }
L_00282250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282258u);  if (depth < kMaxDepth) unit_0058(c, 133u, depth + 1u); else { c.pc = 0x00281430u; return; } if (c.pc != 0x00282258u) [[unlikely]] return; }
L_00282258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002822C8; } }
L_00282260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282268u);  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00281580u; return; } if (c.pc != 0x00282268u) [[unlikely]] return; }
L_00282268:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282278u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x00282278u) [[unlikely]] return; }
L_00282278:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002822C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002822B4; } }
L_00282294:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 2916u)));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[16].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002822B4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002822B0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x002822B0u) [[unlikely]] return; }
L_002822B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002822B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2912u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00282294u | kUnwind; return; } goto L_00282294; }
L_002822C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002822CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002822E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00281430u | kUnwind; return; } goto L_00281430; }
L_002822F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00282314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_00282318; } }
L_00282314:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00282318:
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 544u)));  goto L_0028232C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00282348; } }
L_0028232C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 912u)));  goto L_0028233C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00282348; } }
L_0028233C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 516u)));
    c.budget -= 3;
L_00282348:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0028238C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1288u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1288u)));  goto L_00282370; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028236Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x0028236Cu) [[unlikely]] return; }
L_0028236C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1288u)));
    c.budget -= 1;
L_00282370:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00282388; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00282388; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    st32((c.r[4].w[0] + 236u), c.r[3].w[0]);
    c.budget -= 2;
L_00282388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028238C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002823A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002823CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x002823CCu) [[unlikely]] return; }
L_002823CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002823D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 133u, depth + 1u); else { c.pc = 0x00281430u; return; } if (c.pc != 0x002823D4u) [[unlikely]] return; }
L_002823D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002823E8; }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002823E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002823F4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0058(c, 59u, depth + 1u); else { c.pc = 0x00280AD0u; return; } if (c.pc != 0x002823F4u) [[unlikely]] return; }
L_002823F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002823FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 129u, depth + 1u); else { c.pc = 0x00281380u; return; } if (c.pc != 0x002823FCu) [[unlikely]] return; }
L_002823FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282404u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 125u, depth + 1u); else { c.pc = 0x00281280u; return; } if (c.pc != 0x00282404u) [[unlikely]] return; }
L_00282404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00282420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00282484; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23680u);
    set32(c.r[2], c.r[2].w[0] + 23736u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282460u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00282460u) [[unlikely]] return; }
L_00282460:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028246Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0028246Cu) [[unlikely]] return; }
L_0028246C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00282488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282484u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00282484u) [[unlikely]] return; }
L_00282484:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00282488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002824A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00282420u | kUnwind; return; } goto L_00282420; }
L_002824B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00281C20u | kUnwind; return; } goto L_00281C20; }
L_002824C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[4], 0u + 32u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282514u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00282514u) [[unlikely]] return; }
L_00282514:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002825EC; } }
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.f[22]);
    st32((c.r[16].w[0] + 16u), c.f[21]);
    st32((c.r[16].w[0] + 20u), c.f[20]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028254Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028254Cu) [[unlikely]] return; }
L_0028254C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028255C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0028255C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_00282574; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00282580; } }
L_00282574:
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00282580:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_00282598; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002825A4; } }
L_00282598:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_002825A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 136u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 136u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002825C0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002825C0u) [[unlikely]] return; }
L_002825C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00282600; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 684u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00282600; } }
L_002825EC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00282600; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002825FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002825FCu) [[unlikely]] return; }
L_002825FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00282600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00282630:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282664u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00282664u) [[unlikely]] return; }
L_00282664:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00282700; } }
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028269Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028269Cu) [[unlikely]] return; }
L_0028269C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_002826B0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
L_002826B0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 136u)));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 136u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002826D4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002826D4u) [[unlikely]] return; }
L_002826D4:
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00282714; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 684u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00282714; } }
L_00282700:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00282714; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00282710u) [[unlikely]] return; }
L_00282710:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00282714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00282740:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002827F8; } }
L_00282770:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_00282788; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = c.r[18].d[0] + 0ull;  goto L_002827F4; }
L_00282788:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282798u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00282798u) [[unlikely]] return; }
L_00282798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002827D0; } }
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[2].w[0] + 1148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1148u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 1152u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1152u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 1412u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[2].w[0] + 1416u), c.r[3].w[0]);
    c.budget -= 12;
L_002827D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002827DC; } }
    st32((c.r[20].w[0] + 136u), c.r[16].w[0]);
    c.budget -= 1;
L_002827DC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002827F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002827ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002827ECu) [[unlikely]] return; }
L_002827EC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002827F0:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002827F4:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002827F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282770u | kUnwind; return; } goto L_00282770; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00282820:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282868u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00282868u) [[unlikely]] return; }
L_00282868:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 648u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282884u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00282884u) [[unlikely]] return; }
L_00282884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00282A34; } }
L_0028288C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_00282A30; } }
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[18].d[0] = c.r[19].d[0] + 0ull;  goto L_00282A30; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002828C0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002828C0u) [[unlikely]] return; }
L_002828C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 136u)));  goto L_00282A08; }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[19].w[0] + 16u));  goto L_00282938; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));
    c.f[0] = ld32((c.r[16].w[0] + 1148u));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[8], 0u + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[16].w[0] + 1412u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282930u); st32((c.r[16].w[0] + 1416u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00282930u) [[unlikely]] return; }
L_00282930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00282A04; } }
L_00282938:
    c.f[0] = ld32((c.r[16].w[0] + 1148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 1152u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1152u), c.f[0]);
    c.budget -= 7;
L_00282954:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[16].w[0] + 1412u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[16].w[0] + 1416u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00282A04; } }
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00282A04; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[16].d[0];  if (t) { goto L_002829C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002829ACu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002829ACu) [[unlikely]] return; }
L_002829AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002829C8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 476u)));
    set32(c.r[6], 0u + 999u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002829C8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002829C8u) [[unlikely]] return; }
L_002829C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[22].d[0];  if (t) { goto L_00282A04; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[21].d[0];  if (t) { goto L_00282A04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002829EC; }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002829EC:
    set32(c.r[5], 0u + 20u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282A04u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00282A04u) [[unlikely]] return; }
L_00282A04:
    set32(c.r[3], ld32((c.r[20].w[0] + 136u)));
    c.budget -= 1;
L_00282A08:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_00282A14; } }
    st32((c.r[20].w[0] + 136u), c.r[17].w[0]);
    c.budget -= 1;
L_00282A14:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00282A20; } }
    st32((c.r[18].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 1;
L_00282A20:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_00282A34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282A30u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00282A30u) [[unlikely]] return; }
L_00282A30:
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00282A34:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028288Cu | kUnwind; return; } goto L_0028288C; }
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
L_00282A70:
    set32(c.r[6], ld32((c.r[4].w[0] + 136u)));
    c.f[1] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);  if (t) { goto L_00282AC0; } }
L_00282A80:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 28u)));  goto L_00282AC0; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_00282AB0; }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00282AB0:
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
L_00282AC0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00282A80u | kUnwind; return; } goto L_00282A80; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00282AD0:
    set32(c.r[5], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 2u);  if (t) { goto L_00282AEC; } }
L_00282ADC:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 4;
L_00282AEC:
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282ADCu | kUnwind; return; } goto L_00282ADC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00282B00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[4], c.r[21].w[0] + 52u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282B5Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x00282B5Cu) [[unlikely]] return; }
L_00282B5C:
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_00282B90; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 172u)));  goto L_00282B94; }
    c.r[1].d[0] = c.r[4].sd[0] < 4023ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00282B90; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_00283418; } }
L_00282B90:
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 1;
L_00282B94:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00282BAC; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00283414; } }
L_00282BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282BB4u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00282BB4u) [[unlikely]] return; }
L_00282BB4:
    set32(c.r[2], ld32((c.r[20].w[0] + 608u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 2144u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00282BD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1] ^ fp::kSign;  if (t) { goto L_00283414; } }
L_00282BD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282BE8u); set32(c.r[16], c.r[2].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 58u, depth + 1u); else { c.pc = 0x002C8900u; return; } if (c.pc != 0x00282BE8u) [[unlikely]] return; }
L_00282BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282BF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x00282BF0u) [[unlikely]] return; }
L_00282BF0:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00282C20; } }
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[0];  goto L_00282C18; }
L_00282C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00282C2C; } }
L_00282C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
L_00282C2C:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00283140; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0028305C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 148u)));  goto L_00282E6C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00282D7C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00282C68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_002832C0; } }
L_00282C68:
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282C74u); set32(c.r[5], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x00291D80u; return; } if (c.pc != 0x00282C74u) [[unlikely]] return; }
L_00282C74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 136u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 130u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282C88u); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0028C020u; return; } if (c.pc != 0x00282C88u) [[unlikely]] return; }
L_00282C88:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[21].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282CA0u); set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x00282CA0u) [[unlikely]] return; }
L_00282CA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 134u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282CB4u); set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 389u, depth + 1u); else { c.pc = 0x0028BFA0u; return; } if (c.pc != 0x00282CB4u) [[unlikely]] return; }
L_00282CB4:
    set32(c.r[3], c.r[22].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282CC4u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00282CC4u) [[unlikely]] return; }
L_00282CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282CD8u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00282CD8u) [[unlikely]] return; }
L_00282CD8:
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[21], c.f[22]);
    c.f[21] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = c.f[0];  goto L_00282CFC; }
L_00282CFC:
    set32(c.r[3], ld32((c.r[20].w[0] + 608u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 860u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[23].w[0] << 2);  goto L_00282D18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_00282D20; } }
L_00282D18:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[22] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_00282D20:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00282D38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282D30u); c.f[12] = ld32((c.r[16].w[0] + 52u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00282D30u) [[unlikely]] return; }
L_00282D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 608u)));  if (t) { goto L_00282D58; } }
L_00282D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282D40u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00282D40u) [[unlikely]] return; }
L_00282D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00282D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 52u));  if (t) { goto L_00282D54; } }
L_00282D50:
    c.f[0] = 0u;
    c.budget -= 1;
L_00282D54:
    set32(c.r[2], ld32((c.r[19].w[0] + 608u)));
    c.budget -= 1;
L_00282D58:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[21], c.f[22]);
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 960u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0] ^ fp::kSign;  if (t) { goto L_002832BC; } }
L_00282D7C:
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282D88u); set32(c.r[5], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x00291D80u; return; } if (c.pc != 0x00282D88u) [[unlikely]] return; }
L_00282D88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 136u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 130u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282D9Cu); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0028C020u; return; } if (c.pc != 0x00282D9Cu) [[unlikely]] return; }
L_00282D9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[21].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282DB4u); set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x00282DB4u) [[unlikely]] return; }
L_00282DB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 134u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282DC8u); set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 389u, depth + 1u); else { c.pc = 0x0028BFA0u; return; } if (c.pc != 0x00282DC8u) [[unlikely]] return; }
L_00282DC8:
    set32(c.r[3], c.r[22].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282DD8u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00282DD8u) [[unlikely]] return; }
L_00282DD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282DECu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00282DECu) [[unlikely]] return; }
L_00282DEC:
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[21], c.f[22]);
    c.f[21] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = c.f[0];  goto L_00282E10; }
L_00282E10:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.f[22] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_00282E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282E20u); c.f[12] = ld32((c.r[16].w[0] + 56u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00282E20u) [[unlikely]] return; }
L_00282E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 608u)));  if (t) { goto L_00282E48; } }
L_00282E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282E30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00282E30u) [[unlikely]] return; }
L_00282E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00282E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 56u));  if (t) { goto L_00282E44; } }
L_00282E40:
    c.f[0] = 0u;
    c.budget -= 1;
L_00282E44:
    set32(c.r[2], ld32((c.r[19].w[0] + 608u)));
    c.budget -= 1;
L_00282E48:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[21], c.f[22]);
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 964u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0] ^ fp::kSign;  if (t) { goto L_002832BC; } }
L_00282E6C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00282F3C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[17], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00282EF8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282E9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 364u, depth + 1u); else { c.pc = 0x002933C0u; return; } if (c.pc != 0x00282E9Cu) [[unlikely]] return; }
L_00282E9C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282EB0u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x00282EB0u) [[unlikely]] return; }
L_00282EB0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[21].w[0] + 52u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 106u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282EC8u); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x00282EC8u) [[unlikely]] return; }
L_00282EC8:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00282F7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282EDCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x00282EDCu) [[unlikely]] return; }
L_00282EDC:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_00282F78; } }
L_00282EF8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F08u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00282F08u) [[unlikely]] return; }
L_00282F08:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F1Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x00282F1Cu) [[unlikely]] return; }
L_00282F1C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 134u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F30u); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 389u, depth + 1u); else { c.pc = 0x0028BFA0u; return; } if (c.pc != 0x00282F30u) [[unlikely]] return; }
L_00282F30:
    set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00282F78; } }
L_00282F3C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F48u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00282F48u) [[unlikely]] return; }
L_00282F48:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F5Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x00282F5Cu) [[unlikely]] return; }
L_00282F5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 134u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F70u); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 389u, depth + 1u); else { c.pc = 0x0028BFA0u; return; } if (c.pc != 0x00282F70u) [[unlikely]] return; }
L_00282F70:
    set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00282F78:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00282F7C:
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F88u); set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x00282F88u) [[unlikely]] return; }
L_00282F88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 134u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F9Cu); set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 389u, depth + 1u); else { c.pc = 0x0028BFA0u; return; } if (c.pc != 0x00282F9Cu) [[unlikely]] return; }
L_00282F9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[22].w[0] + c.r[21].w[0]);
    set32(c.r[21], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282FB4u); set32(c.r[5], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x00291D80u; return; } if (c.pc != 0x00282FB4u) [[unlikely]] return; }
L_00282FB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 136u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 130u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282FC8u); set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0028C020u; return; } if (c.pc != 0x00282FC8u) [[unlikely]] return; }
L_00282FC8:
    set32(c.r[3], c.r[23].w[0] + c.r[22].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282FD8u); set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00282FD8u) [[unlikely]] return; }
L_00282FD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282FE4u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00282FE4u) [[unlikely]] return; }
L_00282FE4:
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282FF0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00282FF0u) [[unlikely]] return; }
L_00282FF0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = c.f[0];  goto L_0028300C; }
L_0028300C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.f[22] = ld32((c.r[16].w[0] + 28u));  if (t) { goto L_00283024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028301Cu); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0028301Cu) [[unlikely]] return; }
L_0028301C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[22]);  if (t) { goto L_00283044; } }
L_00283024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028302Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0028302Cu) [[unlikely]] return; }
L_0028302C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028303C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 64u));  if (t) { goto L_00283040; } }
L_0028303C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00283040:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[22]);
    c.budget -= 1;
L_00283044:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0] ^ fp::kSign;  if (t) { goto L_002832BC; } }
L_0028305C:
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283068u); set32(c.r[5], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x00291D80u; return; } if (c.pc != 0x00283068u) [[unlikely]] return; }
L_00283068:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 136u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 130u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028307Cu); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0028C020u; return; } if (c.pc != 0x0028307Cu) [[unlikely]] return; }
L_0028307C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[21].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283094u); set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x00283094u) [[unlikely]] return; }
L_00283094:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 134u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002830A8u); set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 389u, depth + 1u); else { c.pc = 0x0028BFA0u; return; } if (c.pc != 0x002830A8u) [[unlikely]] return; }
L_002830A8:
    set32(c.r[3], c.r[22].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002830B8u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002830B8u) [[unlikely]] return; }
L_002830B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002830CCu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002830CCu) [[unlikely]] return; }
L_002830CC:
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[21], c.f[22]);
    c.f[21] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = c.f[0];  goto L_002830F0; }
L_002830F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.f[22] = ld32((c.r[16].w[0] + 32u));  if (t) { goto L_00283108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283100u); c.f[12] = ld32((c.r[16].w[0] + 68u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00283100u) [[unlikely]] return; }
L_00283100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[22]);  if (t) { goto L_00283128; } }
L_00283108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283110u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00283110u) [[unlikely]] return; }
L_00283110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00283120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 68u));  if (t) { goto L_00283124; } }
L_00283120:
    c.f[0] = 0u;
    c.budget -= 1;
L_00283124:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[22]);
    c.budget -= 1;
L_00283128:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0] ^ fp::kSign;  if (t) { goto L_002832BC; } }
L_00283140:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028314Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x0028314Cu) [[unlikely]] return; }
L_0028314C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283164u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x00283164u) [[unlikely]] return; }
L_00283164:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283178u); set32(c.r[5], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x00283178u) [[unlikely]] return; }
L_00283178:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 134u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028318Cu); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 389u, depth + 1u); else { c.pc = 0x0028BFA0u; return; } if (c.pc != 0x0028318Cu) [[unlikely]] return; }
L_0028318C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[22].w[0] + c.r[17].w[0]);
    c.budget -= 2;
L_00283194:
    set32(c.r[30], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002831A4u); set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x002831A4u) [[unlikely]] return; }
L_002831A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 134u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002831B8u); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 389u, depth + 1u); else { c.pc = 0x0028BFA0u; return; } if (c.pc != 0x002831B8u) [[unlikely]] return; }
L_002831B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[22].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002831D0u); set32(c.r[5], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x00291D80u; return; } if (c.pc != 0x002831D0u) [[unlikely]] return; }
L_002831D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 136u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 130u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002831E4u); set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0028C020u; return; } if (c.pc != 0x002831E4u) [[unlikely]] return; }
L_002831E4:
    set32(c.r[3], c.r[23].w[0] + c.r[22].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002831F4u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002831F4u) [[unlikely]] return; }
L_002831F4:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283200u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00283200u) [[unlikely]] return; }
L_00283200:
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028320Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028320Cu) [[unlikely]] return; }
L_0028320C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[22] = c.f[0];  goto L_00283228; }
L_00283228:
    c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  goto L_0028323C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = ld32((c.r[16].w[0] + 36u));  if (t) { goto L_00283248; } }
L_0028323C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.f[23] = ld32((c.r[16].w[0] + 44u));  goto L_00283248; }
    c.f[23] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 1;
L_00283248:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 13376u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[21] = ld32((c.r[16].w[0] + 48u));  goto L_00283260; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 2;
L_00283260:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00283278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283270u); c.f[12] = ld32((c.r[16].w[0] + 60u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00283270u) [[unlikely]] return; }
L_00283270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[23]);  if (t) { goto L_00283298; } }
L_00283278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283280u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00283280u) [[unlikely]] return; }
L_00283280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00283290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_00283294; } }
L_00283290:
    c.f[0] = 0u;
    c.budget -= 1;
L_00283294:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[23]);
    c.budget -= 1;
L_00283298:
    set32(c.r[2], ld32((c.r[19].w[0] + 608u)));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 968u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[21] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
L_002832BC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002832C0:
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[0] = c.f[21];  goto L_00283414; }
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[2], 0u + 7000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00283410; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 7007u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002832F4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002832F4u) [[unlikely]] return; }
L_002832F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00283304; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_00283304:
    set32(c.r[5], 0u + 7008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283314u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00283314u) [[unlikely]] return; }
L_00283314:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00283324; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_00283324:
    set32(c.r[5], 0u + 7009u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283334u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00283334u) [[unlikely]] return; }
L_00283334:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00283344; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_00283344:
    set32(c.r[5], 0u + 7010u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283354u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00283354u) [[unlikely]] return; }
L_00283354:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00283364; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_00283364:
    set32(c.r[5], 0u + 7011u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283374u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00283374u) [[unlikely]] return; }
L_00283374:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00283384; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_00283384:
    set32(c.r[5], 0u + 7012u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283394u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00283394u) [[unlikely]] return; }
L_00283394:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  goto L_002833A4; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002833A4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00283410; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 2960u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0058[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002833C8:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_00283410; } }
L_002833D4:
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_00283410; } }
L_002833E0:
    c.f[0] = ld32((c.r[28].w[0] - 32204u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_00283410; } }
L_002833EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_00283410; } }
L_002833FC:
    c.f[0] = ld32((c.r[28].w[0] - 32632u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_00283410; } }
L_00283408:
    c.f[0] = ld32((c.r[28].w[0] - 32696u));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 2;
L_00283410:
    c.f[0] = c.f[21];
    c.budget -= 1;
L_00283414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00283418:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00283460:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00283D70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 2896u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0058[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002834A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002834D8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 2;
L_002834D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002834D8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002834F0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002834F0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00283D74; }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 848u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00283668; } }
L_00283510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00283648; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_0028351C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 452u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00283648; }
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00283614; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 2928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0058[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00283560:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00283614; } }
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00283614; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00283614; } }
L_00283588:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00283614; } }
L_00283598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002835A0u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002835A0u) [[unlikely]] return; }
L_002835A0:
    c.r[2].d[0] = c.r[2].d[0] ^ 7ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00283614; } }
L_002835AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002835B4u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002835B4u) [[unlikely]] return; }
L_002835B4:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00283614; } }
L_002835C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002835C8u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002835C8u) [[unlikely]] return; }
L_002835C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00283614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002835E0u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002835E0u) [[unlikely]] return; }
L_002835E0:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00283614; } }
L_002835F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002835F8u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002835F8u) [[unlikely]] return; }
L_002835F8:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00283614; } }
L_00283604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028360Cu); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028360Cu) [[unlikely]] return; }
L_0028360C:
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00283614:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283644; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_00283654; } }
L_00283644:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00283648:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028351Cu | kUnwind; return; } goto L_0028351C; }
L_00283654:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  goto L_00283678; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00283668:
    c.r[2].d[0] = c.r[20].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283510u | kUnwind; return; } goto L_00283510; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00283678:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 112u)));  goto L_0028372C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_002836B0; }
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002836AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002836ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002836ACu) [[unlikely]] return; }
L_002836AC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002836B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002836B8u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002836B8u) [[unlikely]] return; }
L_002836B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 8u);  goto L_00283708; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00283704; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 13364u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 27u);  goto L_002836F8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 13368u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00283704; } }
    set32(c.r[4], 0u + 27u);
    c.budget -= 1;
L_002836F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283704u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00283704u) [[unlikely]] return; }
L_00283704:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_00283708:
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283720u); set32(c.r[5], 0u + 15u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283720u) [[unlikely]] return; }
L_00283720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00283D70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_0028372C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 2;
L_00283734:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] + 76u);  if (t) { goto L_00283778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028375Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 32u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x0028375Cu) [[unlikely]] return; }
L_0028375C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_0028377C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283770u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 333u, depth + 1u); else { c.pc = 0x00286530u; return; } if (c.pc != 0x00283770u) [[unlikely]] return; }
L_00283770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 334u, depth + 1u); else { c.pc = 0x00286540u; return; } if (c.pc != 0x00283778u) [[unlikely]] return; }
L_00283778:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_0028377C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283790u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00283790u) [[unlikely]] return; }
L_00283790:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 648u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002837ACu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002837ACu) [[unlikely]] return; }
L_002837AC:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[17].d[0]) { st32((c.r[19].w[0] + 1148u), 0u);  goto L_002837C0; }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 172u)));  goto L_002837C8; }
    st32((c.r[19].w[0] + 1148u), 0u);
    c.budget -= 1;
L_002837C0:
    st32((c.r[19].w[0] + 1152u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 2;
L_002837C8:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00283884; }
    c.f[0] = ld32((c.r[19].w[0] + 1148u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 108u)));  goto L_0028380C; }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00283880; } }
    c.f[0] = ld32((c.r[19].w[0] + 1152u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00283880; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 108u)));
    c.budget -= 1;
L_0028380C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0028383C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028381Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028381Cu) [[unlikely]] return; }
L_0028381C:
    c.f[2] = ld32((c.r[18].w[0] + 92u));
    c.f[1] = ld32((c.r[19].w[0] + 1148u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028383C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028383C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 608u)));  goto L_00283854; }
    set32(c.r[2], ld32((c.r[19].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 1500u);  if (t) { goto L_00283858; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 608u)));
    c.budget -= 1;
L_00283854:
    set32(c.r[3], c.r[2].w[0] + 1508u);
    c.budget -= 1;
L_00283858:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00283870; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_00283870; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00283870:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283880u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x00283880u) [[unlikely]] return; }
L_00283880:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00283884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028388Cu);  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x0028388Cu) [[unlikely]] return; }
L_0028388C:
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 6u);  goto L_00283AC4; }
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002838B0u); set32(c.r[5], 0u + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002838B0u) [[unlikely]] return; }
L_002838B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], 0u + 2u);  goto L_002838FC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002838D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002838D0u) [[unlikely]] return; }
L_002838D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002838D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002838D8u) [[unlikely]] return; }
L_002838D8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002838F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002838F8; } }
    st32((c.r[2].w[0] + 116u), 0u);
    c.budget -= 1;
L_002838F8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_002838FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283904u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x00283904u) [[unlikely]] return; }
L_00283904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028390Cu); set32(c.r[4], ld32((c.r[19].w[0] + 144u)));  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x0028390Cu) [[unlikely]] return; }
L_0028390C:
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
L_0028391C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_00283958; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 92u));  if (t) { goto L_0028395C; } }
    c.f[1] = ld32((c.r[5].w[0] + 80u));
    c.budget -= 1;
L_00283958:
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.budget -= 1;
L_0028395C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 92u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0028398C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002839A4; } }
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_0028398C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_002839A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00283D70; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00283D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002839E0u); set32(c.r[4], ld32((c.r[17].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0059(c, 335u, depth + 1u); else { c.pc = 0x00286550u; return; } if (c.pc != 0x002839E0u) [[unlikely]] return; }
L_002839E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002839E8u); set32(c.r[4], ld32((c.r[17].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0059(c, 336u, depth + 1u); else { c.pc = 0x00286560u; return; } if (c.pc != 0x002839E8u) [[unlikely]] return; }
L_002839E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
L_002839F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00283A1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283A10u);  if (depth < kMaxDepth) unit_0059(c, 328u, depth + 1u); else { c.pc = 0x00286460u; return; } if (c.pc != 0x00283A10u) [[unlikely]] return; }
L_00283A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00283D70; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00283A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283A24u);  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x00283A24u) [[unlikely]] return; }
L_00283A24:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 144u)));  if (t) { goto L_00283A38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 676u), c.r[3].w[0]);
    c.budget -= 2;
L_00283A38:
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283A4Cu); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283A4Cu) [[unlikely]] return; }
L_00283A4C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 110u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 112u)));  goto L_00283A68; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_00283D70; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_00283A68:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 2;
L_00283A70:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283A8C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00283A8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283D70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283AB4u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00283AB4u) [[unlikely]] return; }
L_00283AB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 3;
L_00283AC0:
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_00283AC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00283D70; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_00283C24; }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00283C20; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00283C20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00283C20; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283B30u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x00283B30u) [[unlikely]] return; }
L_00283B30:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283B44u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0067(c, 266u, depth + 1u); else { c.pc = 0x002BE830u; return; } if (c.pc != 0x00283B44u) [[unlikely]] return; }
L_00283B44:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[6], c.r[3].w[0] + 380u);  if (t) { goto L_00283C20; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 13364u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00283C20; } }
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 13368u), c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283B80u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00283B80u) [[unlikely]] return; }
L_00283B80:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00283B98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_00283BB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00283B98:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_00283BB8; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_00283BBC; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00283BB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_00283BBC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);  goto L_00283BE0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00283BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283BDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00283BDCu) [[unlikely]] return; }
L_00283BDC:
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_00283BE0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283BFCu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00283BFCu) [[unlikely]] return; }
L_00283BFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283C20; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00283C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283C20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00283C20u) [[unlikely]] return; }
L_00283C20:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_00283C24:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283C34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 4u, depth + 1u); else { c.pc = 0x00290030u; return; } if (c.pc != 0x00283C34u) [[unlikely]] return; }
L_00283C34:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_00283D70; } }
L_00283C40:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283C5C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00283C5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283D70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_00283D70; } }
L_00283C70:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283C8C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00283C8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x00283C9Cu) [[unlikely]] return; }
L_00283C9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_00283CB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283CB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 261u, depth + 1u); else { c.pc = 0x0028E890u; return; } if (c.pc != 0x00283CB4u) [[unlikely]] return; }
L_00283CB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_00283CB8:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], ld32((c.r[3].w[0] + 448u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 52u);  if (t) { goto L_00283CEC; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 1;
L_00283CD0:
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00283CEC; }
    st32((c.r[3].w[0] + 1412u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 1416u), 0u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_00283CEC:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283CD0u | kUnwind; return; } goto L_00283CD0; }
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[3].w[0] + 13364u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[3].w[0] + 13368u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 9;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_00283D44; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283D2Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00283D2Cu) [[unlikely]] return; }
L_00283D2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283D40u);  if (depth < kMaxDepth) unit_0074(c, 249u, depth + 1u); else { c.pc = 0x002F3A40u; return; } if (c.pc != 0x00283D40u) [[unlikely]] return; }
L_00283D40:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_00283D44:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_00283D58; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 644u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_00283D58:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_00283D6C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 648u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
L_00283D6C:
    st32((c.r[3].w[0] + 16u), 0u);
    c.budget -= 1;
L_00283D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00283D74:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00283D90:
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
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00283DC8; } }
    set32(c.r[5], c.r[5].w[0] + 52u);
    c.budget -= 1;
L_00283DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283DD0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00283DD0u) [[unlikely]] return; }
L_00283DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283DE0u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x00283DE0u) [[unlikely]] return; }
L_00283DE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23760u);
    set32(c.r[2], c.r[2].w[0] + 23780u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 308u), 0u);
    set32(c.r[2], 0u + 7000u);
    st32((c.r[20].w[0] + 304u), c.r[18].w[0]);
    set32(c.r[4], c.r[20].w[0] + 352u);
    st32((c.r[20].w[0] + 312u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 144u)));
    st32((c.r[20].w[0] + 316u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 320u), 0u);
    st32((c.r[20].w[0] + 324u), 0u);
    st32((c.r[20].w[0] + 328u), 0u);
    st32((c.r[20].w[0] + 332u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 336u), 0u);
    st32((c.r[20].w[0] + 340u), 0u);
    st32((c.r[20].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 348u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283E44u); st32((c.r[20].w[0] + 416u), 0u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00283E44u) [[unlikely]] return; }
L_00283E44:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283E60u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x00283E60u) [[unlikely]] return; }
L_00283E60:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00283E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00283F10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23760u);
    set32(c.r[2], c.r[2].w[0] + 23780u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283ED0u); set32(c.r[16], ld32((c.r[18].w[0] + 344u)));  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x00283ED0u) [[unlikely]] return; }
L_00283ED0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[18].w[0] + 32u);  goto L_00283EE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283EE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x00283EE0u) [[unlikely]] return; }
L_00283EE0:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_00283EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283EECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 100u, depth + 1u); else { c.pc = 0x003C13B0u; return; } if (c.pc != 0x00283EECu) [[unlikely]] return; }
L_00283EEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283EF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00283EF8u) [[unlikely]] return; }
L_00283EF8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00283F14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283F10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x00283F10u) [[unlikely]] return; }
L_00283F10:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00283F14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00283F30:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 416u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 420u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 424u), c.r[6].w[0]);  c.pc = t; return; }
L_00283F50:
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 416u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 420u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 424u), c.r[6].w[0]);  c.pc = t; return; }
L_00283F70:
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 416u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 420u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 424u), c.r[3].w[0]);  c.pc = t; return; }
L_00283F90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { [[clang::musttail]] return unit_0059(c, 33u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  [[clang::musttail]] return unit_0059(c, 34u, depth); }
    c.f[1] = ld32((c.r[16].w[0] + 332u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00283FFC; } }
    c.f[0] = ld32((c.r[16].w[0] + 324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00283FFC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00283FFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 33u, depth); } }
    [[clang::musttail]] return unit_0059(c, 2u, depth);
}

}
