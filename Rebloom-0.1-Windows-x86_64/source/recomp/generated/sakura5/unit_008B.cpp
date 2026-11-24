#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008B[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0,
    0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0,
    0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 255,
    0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0,
    0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0,
    0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0,
    0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0,
    0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0,
    312, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0, 375,
    0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382,
    0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 390, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 398,
    0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 407,
    0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 415,
    0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420,
    0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0,
    0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0,
    447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 0, 451, 0, 452, 0, 0, 453, 0, 454, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488,
    0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0,
    0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0,
    0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0,
};

void unit_008B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0034C000;
    case 2u: goto L_0034C008;
    case 3u: goto L_0034C030;
    case 4u: goto L_0034C044;
    case 5u: goto L_0034C054;
    case 6u: goto L_0034C0E4;
    case 7u: goto L_0034C0F4;
    case 8u: goto L_0034C14C;
    case 9u: goto L_0034C164;
    case 10u: goto L_0034C168;
    case 11u: goto L_0034C194;
    case 12u: goto L_0034C19C;
    case 13u: goto L_0034C1D4;
    case 14u: goto L_0034C1F0;
    case 15u: goto L_0034C220;
    case 16u: goto L_0034C23C;
    case 17u: goto L_0034C250;
    case 18u: goto L_0034C2B4;
    case 19u: goto L_0034C2C8;
    case 20u: goto L_0034C2E4;
    case 21u: goto L_0034C2F4;
    case 22u: goto L_0034C308;
    case 23u: goto L_0034C31C;
    case 24u: goto L_0034C32C;
    case 25u: goto L_0034C344;
    case 26u: goto L_0034C358;
    case 27u: goto L_0034C394;
    case 28u: goto L_0034C3C0;
    case 29u: goto L_0034C3CC;
    case 30u: goto L_0034C3EC;
    case 31u: goto L_0034C40C;
    case 32u: goto L_0034C41C;
    case 33u: goto L_0034C440;
    case 34u: goto L_0034C480;
    case 35u: goto L_0034C4A4;
    case 36u: goto L_0034C4B8;
    case 37u: goto L_0034C508;
    case 38u: goto L_0034C57C;
    case 39u: goto L_0034C5D0;
    case 40u: goto L_0034C60C;
    case 41u: goto L_0034C648;
    case 42u: goto L_0034C684;
    case 43u: goto L_0034C6E4;
    case 44u: goto L_0034C768;
    case 45u: goto L_0034C778;
    case 46u: goto L_0034C788;
    case 47u: goto L_0034C804;
    case 48u: goto L_0034C810;
    case 49u: goto L_0034C874;
    case 50u: goto L_0034C8D0;
    case 51u: goto L_0034C8FC;
    case 52u: goto L_0034C93C;
    case 53u: goto L_0034C944;
    case 54u: goto L_0034C950;
    case 55u: goto L_0034C9B0;
    case 56u: goto L_0034CA08;
    case 57u: goto L_0034CA9C;
    case 58u: goto L_0034CB40;
    case 59u: goto L_0034CB54;
    case 60u: goto L_0034CBA4;
    case 61u: goto L_0034CBB4;
    case 62u: goto L_0034CC24;
    case 63u: goto L_0034CC58;
    case 64u: goto L_0034CC6C;
    case 65u: goto L_0034CCA0;
    case 66u: goto L_0034CD00;
    case 67u: goto L_0034CD90;
    case 68u: goto L_0034CDA0;
    case 69u: goto L_0034CDB8;
    case 70u: goto L_0034CDC8;
    case 71u: goto L_0034CE00;
    case 72u: goto L_0034CE08;
    case 73u: goto L_0034CE78;
    case 74u: goto L_0034CEA8;
    case 75u: goto L_0034CED4;
    case 76u: goto L_0034CF00;
    case 77u: goto L_0034CF88;
    case 78u: goto L_0034CFA4;
    case 79u: goto L_0034CFB0;
    case 80u: goto L_0034D000;
    case 81u: goto L_0034D038;
    case 82u: goto L_0034D058;
    case 83u: goto L_0034D060;
    case 84u: goto L_0034D0A4;
    case 85u: goto L_0034D0E4;
    case 86u: goto L_0034D124;
    case 87u: goto L_0034D164;
    case 88u: goto L_0034D1D0;
    case 89u: goto L_0034D22C;
    case 90u: goto L_0034D238;
    case 91u: goto L_0034D250;
    case 92u: goto L_0034D270;
    case 93u: goto L_0034D304;
    case 94u: goto L_0034D310;
    case 95u: goto L_0034D328;
    case 96u: goto L_0034D340;
    case 97u: goto L_0034D3D4;
    case 98u: goto L_0034D3E0;
    case 99u: goto L_0034D3F8;
    case 100u: goto L_0034D410;
    case 101u: goto L_0034D46C;
    case 102u: goto L_0034D478;
    case 103u: goto L_0034D484;
    case 104u: goto L_0034D49C;
    case 105u: goto L_0034D4C0;
    case 106u: goto L_0034D4D0;
    case 107u: goto L_0034D4E0;
    case 108u: goto L_0034D4F0;
    case 109u: goto L_0034D500;
    case 110u: goto L_0034D510;
    case 111u: goto L_0034D540;
    case 112u: goto L_0034D560;
    case 113u: goto L_0034D580;
    case 114u: goto L_0034D594;
    case 115u: goto L_0034D5D0;
    case 116u: goto L_0034D630;
    case 117u: goto L_0034D650;
    case 118u: goto L_0034D654;
    case 119u: goto L_0034D680;
    case 120u: goto L_0034D694;
    case 121u: goto L_0034D6D4;
    case 122u: goto L_0034D6F0;
    case 123u: goto L_0034D768;
    case 124u: goto L_0034D774;
    case 125u: goto L_0034D78C;
    case 126u: goto L_0034D7B0;
    case 127u: goto L_0034D80C;
    case 128u: goto L_0034D818;
    case 129u: goto L_0034D824;
    case 130u: goto L_0034D83C;
    case 131u: goto L_0034D860;
    case 132u: goto L_0034D870;
    case 133u: goto L_0034D880;
    case 134u: goto L_0034D8B0;
    case 135u: goto L_0034D8D0;
    case 136u: goto L_0034D8F0;
    case 137u: goto L_0034D904;
    case 138u: goto L_0034D940;
    case 139u: goto L_0034D9E0;
    case 140u: goto L_0034DA00;
    case 141u: goto L_0034DA14;
    case 142u: goto L_0034DA34;
    case 143u: goto L_0034DA44;
    case 144u: goto L_0034DA64;
    case 145u: goto L_0034DA90;
    case 146u: goto L_0034DAA0;
    case 147u: goto L_0034DABC;
    case 148u: goto L_0034DAD0;
    case 149u: goto L_0034DAE8;
    case 150u: goto L_0034DB00;
    case 151u: goto L_0034DB84;
    case 152u: goto L_0034DB8C;
    case 153u: goto L_0034DBA8;
    case 154u: goto L_0034DBD0;
    case 155u: goto L_0034DBEC;
    case 156u: goto L_0034DC28;
    case 157u: goto L_0034DC40;
    case 158u: goto L_0034DC64;
    case 159u: goto L_0034DCA0;
    case 160u: goto L_0034DCB0;
    case 161u: goto L_0034DCD0;
    case 162u: goto L_0034DCE4;
    case 163u: goto L_0034DCFC;
    case 164u: goto L_0034DD30;
    case 165u: goto L_0034DD4C;
    case 166u: goto L_0034DD90;
    case 167u: goto L_0034DDF0;
    case 168u: goto L_0034DE10;
    case 169u: goto L_0034DE2C;
    case 170u: goto L_0034DE50;
    case 171u: goto L_0034DE6C;
    case 172u: goto L_0034DE74;
    case 173u: goto L_0034DE90;
    case 174u: goto L_0034DEAC;
    case 175u: goto L_0034DEDC;
    case 176u: goto L_0034DF28;
    case 177u: goto L_0034DF30;
    case 178u: goto L_0034DF38;
    case 179u: goto L_0034DF48;
    case 180u: goto L_0034DF58;
    case 181u: goto L_0034DF68;
    case 182u: goto L_0034DF78;
    case 183u: goto L_0034DF88;
    case 184u: goto L_0034DF98;
    case 185u: goto L_0034DFA8;
    case 186u: goto L_0034DFBC;
    case 187u: goto L_0034DFE0;
    case 188u: goto L_0034DFF4;
    case 189u: goto L_0034E020;
    case 190u: goto L_0034E034;
    case 191u: goto L_0034E0A8;
    case 192u: goto L_0034E0B0;
    case 193u: goto L_0034E0E0;
    case 194u: goto L_0034E0F0;
    case 195u: goto L_0034E110;
    case 196u: goto L_0034E140;
    case 197u: goto L_0034E190;
    case 198u: goto L_0034E1B0;
    case 199u: goto L_0034E1C0;
    case 200u: goto L_0034E1F0;
    case 201u: goto L_0034E268;
    case 202u: goto L_0034E274;
    case 203u: goto L_0034E28C;
    case 204u: goto L_0034E2B0;
    case 205u: goto L_0034E30C;
    case 206u: goto L_0034E318;
    case 207u: goto L_0034E330;
    case 208u: goto L_0034E350;
    case 209u: goto L_0034E3C8;
    case 210u: goto L_0034E3D4;
    case 211u: goto L_0034E3EC;
    case 212u: goto L_0034E410;
    case 213u: goto L_0034E46C;
    case 214u: goto L_0034E478;
    case 215u: goto L_0034E484;
    case 216u: goto L_0034E49C;
    case 217u: goto L_0034E4C0;
    case 218u: goto L_0034E4F8;
    case 219u: goto L_0034E510;
    case 220u: goto L_0034E520;
    case 221u: goto L_0034E530;
    case 222u: goto L_0034E540;
    case 223u: goto L_0034E550;
    case 224u: goto L_0034E560;
    case 225u: goto L_0034E570;
    case 226u: goto L_0034E5A0;
    case 227u: goto L_0034E5C0;
    case 228u: goto L_0034E5E0;
    case 229u: goto L_0034E5F4;
    case 230u: goto L_0034E620;
    case 231u: goto L_0034E660;
    case 232u: goto L_0034E67C;
    case 233u: goto L_0034E69C;
    case 234u: goto L_0034E6C8;
    case 235u: goto L_0034E6F0;
    case 236u: goto L_0034E72C;
    case 237u: goto L_0034E74C;
    case 238u: goto L_0034E770;
    case 239u: goto L_0034E7CC;
    case 240u: goto L_0034E7D8;
    case 241u: goto L_0034E7E4;
    case 242u: goto L_0034E7FC;
    case 243u: goto L_0034E820;
    case 244u: goto L_0034E830;
    case 245u: goto L_0034E848;
    case 246u: goto L_0034E85C;
    case 247u: goto L_0034E870;
    case 248u: goto L_0034E880;
    case 249u: goto L_0034E894;
    case 250u: goto L_0034E8B8;
    case 251u: goto L_0034E8D0;
    case 252u: goto L_0034E8D8;
    case 253u: goto L_0034E8E0;
    case 254u: goto L_0034E8E8;
    case 255u: goto L_0034E8FC;
    case 256u: goto L_0034E90C;
    case 257u: goto L_0034E91C;
    case 258u: goto L_0034E92C;
    case 259u: goto L_0034E934;
    case 260u: goto L_0034E948;
    case 261u: goto L_0034E958;
    case 262u: goto L_0034E968;
    case 263u: goto L_0034E978;
    case 264u: goto L_0034E988;
    case 265u: goto L_0034E998;
    case 266u: goto L_0034E9A8;
    case 267u: goto L_0034E9B8;
    case 268u: goto L_0034E9C8;
    case 269u: goto L_0034E9D8;
    case 270u: goto L_0034E9E8;
    case 271u: goto L_0034E9F8;
    case 272u: goto L_0034EA08;
    case 273u: goto L_0034EA18;
    case 274u: goto L_0034EA28;
    case 275u: goto L_0034EA38;
    case 276u: goto L_0034EA48;
    case 277u: goto L_0034EA5C;
    case 278u: goto L_0034EA64;
    case 279u: goto L_0034EA80;
    case 280u: goto L_0034EA90;
    case 281u: goto L_0034EAA0;
    case 282u: goto L_0034EAB0;
    case 283u: goto L_0034EABC;
    case 284u: goto L_0034EAD8;
    case 285u: goto L_0034EAE8;
    case 286u: goto L_0034EAF8;
    case 287u: goto L_0034EB08;
    case 288u: goto L_0034EB14;
    case 289u: goto L_0034EB24;
    case 290u: goto L_0034EB2C;
    case 291u: goto L_0034EB3C;
    case 292u: goto L_0034EB48;
    case 293u: goto L_0034EB60;
    case 294u: goto L_0034EB80;
    case 295u: goto L_0034EBA0;
    case 296u: goto L_0034EBE4;
    case 297u: goto L_0034EBF4;
    case 298u: goto L_0034EC0C;
    case 299u: goto L_0034EC30;
    case 300u: goto L_0034EC94;
    case 301u: goto L_0034ECB8;
    case 302u: goto L_0034ECD0;
    case 303u: goto L_0034ECE0;
    case 304u: goto L_0034ECF8;
    case 305u: goto L_0034ED04;
    case 306u: goto L_0034ED0C;
    case 307u: goto L_0034ED34;
    case 308u: goto L_0034ED44;
    case 309u: goto L_0034ED54;
    case 310u: goto L_0034ED5C;
    case 311u: goto L_0034ED70;
    case 312u: goto L_0034ED80;
    case 313u: goto L_0034ED88;
    case 314u: goto L_0034ED9C;
    case 315u: goto L_0034EDB0;
    case 316u: goto L_0034EDCC;
    case 317u: goto L_0034EDDC;
    case 318u: goto L_0034EDEC;
    case 319u: goto L_0034EDF8;
    case 320u: goto L_0034EE30;
    case 321u: goto L_0034EE40;
    case 322u: goto L_0034EE50;
    case 323u: goto L_0034EE70;
    case 324u: goto L_0034EE80;
    case 325u: goto L_0034EE90;
    case 326u: goto L_0034EEDC;
    case 327u: goto L_0034EEE4;
    case 328u: goto L_0034EEEC;
    case 329u: goto L_0034EF08;
    case 330u: goto L_0034EF20;
    case 331u: goto L_0034EF28;
    case 332u: goto L_0034EF50;
    case 333u: goto L_0034EF74;
    case 334u: goto L_0034EF7C;
    case 335u: goto L_0034EFA4;
    case 336u: goto L_0034EFAC;
    case 337u: goto L_0034EFD0;
    case 338u: goto L_0034EFD8;
    case 339u: goto L_0034F000;
    case 340u: goto L_0034F008;
    case 341u: goto L_0034F02C;
    case 342u: goto L_0034F034;
    case 343u: goto L_0034F05C;
    case 344u: goto L_0034F070;
    case 345u: goto L_0034F094;
    case 346u: goto L_0034F0B8;
    case 347u: goto L_0034F0D4;
    case 348u: goto L_0034F0E0;
    case 349u: goto L_0034F0E8;
    case 350u: goto L_0034F0F8;
    case 351u: goto L_0034F11C;
    case 352u: goto L_0034F138;
    case 353u: goto L_0034F144;
    case 354u: goto L_0034F14C;
    case 355u: goto L_0034F160;
    case 356u: goto L_0034F194;
    case 357u: goto L_0034F1B0;
    case 358u: goto L_0034F214;
    case 359u: goto L_0034F224;
    case 360u: goto L_0034F22C;
    case 361u: goto L_0034F234;
    case 362u: goto L_0034F260;
    case 363u: goto L_0034F270;
    case 364u: goto L_0034F2A0;
    case 365u: goto L_0034F2B8;
    case 366u: goto L_0034F2D0;
    case 367u: goto L_0034F310;
    case 368u: goto L_0034F318;
    case 369u: goto L_0034F320;
    case 370u: goto L_0034F33C;
    case 371u: goto L_0034F348;
    case 372u: goto L_0034F358;
    case 373u: goto L_0034F36C;
    case 374u: goto L_0034F374;
    case 375u: goto L_0034F37C;
    case 376u: goto L_0034F38C;
    case 377u: goto L_0034F3A0;
    case 378u: goto L_0034F3B0;
    case 379u: goto L_0034F3C0;
    case 380u: goto L_0034F3D4;
    case 381u: goto L_0034F3E0;
    case 382u: goto L_0034F3FC;
    case 383u: goto L_0034F404;
    case 384u: goto L_0034F40C;
    case 385u: goto L_0034F41C;
    case 386u: goto L_0034F430;
    case 387u: goto L_0034F454;
    case 388u: goto L_0034F460;
    case 389u: goto L_0034F468;
    case 390u: goto L_0034F474;
    case 391u: goto L_0034F488;
    case 392u: goto L_0034F4A0;
    case 393u: goto L_0034F4A8;
    case 394u: goto L_0034F4BC;
    case 395u: goto L_0034F4D0;
    case 396u: goto L_0034F4E4;
    case 397u: goto L_0034F4F4;
    case 398u: goto L_0034F4FC;
    case 399u: goto L_0034F508;
    case 400u: goto L_0034F514;
    case 401u: goto L_0034F524;
    case 402u: goto L_0034F538;
    case 403u: goto L_0034F550;
    case 404u: goto L_0034F564;
    case 405u: goto L_0034F56C;
    case 406u: goto L_0034F574;
    case 407u: goto L_0034F57C;
    case 408u: goto L_0034F584;
    case 409u: goto L_0034F58C;
    case 410u: goto L_0034F5A8;
    case 411u: goto L_0034F5BC;
    case 412u: goto L_0034F5C8;
    case 413u: goto L_0034F5DC;
    case 414u: goto L_0034F5E4;
    case 415u: goto L_0034F5FC;
    case 416u: goto L_0034F604;
    case 417u: goto L_0034F60C;
    case 418u: goto L_0034F654;
    case 419u: goto L_0034F670;
    case 420u: goto L_0034F67C;
    case 421u: goto L_0034F68C;
    case 422u: goto L_0034F6A0;
    case 423u: goto L_0034F6B4;
    case 424u: goto L_0034F6C4;
    case 425u: goto L_0034F6D8;
    case 426u: goto L_0034F6E8;
    case 427u: goto L_0034F6F8;
    case 428u: goto L_0034F710;
    case 429u: goto L_0034F720;
    case 430u: goto L_0034F740;
    case 431u: goto L_0034F754;
    case 432u: goto L_0034F764;
    case 433u: goto L_0034F778;
    case 434u: goto L_0034F79C;
    case 435u: goto L_0034F7B4;
    case 436u: goto L_0034F7C8;
    case 437u: goto L_0034F7D8;
    case 438u: goto L_0034F7E0;
    case 439u: goto L_0034F800;
    case 440u: goto L_0034F810;
    case 441u: goto L_0034F860;
    case 442u: goto L_0034F870;
    case 443u: goto L_0034F890;
    case 444u: goto L_0034F8B0;
    case 445u: goto L_0034F8CC;
    case 446u: goto L_0034F8E0;
    case 447u: goto L_0034F900;
    case 448u: goto L_0034F93C;
    case 449u: goto L_0034F944;
    case 450u: goto L_0034F94C;
    case 451u: goto L_0034F958;
    case 452u: goto L_0034F960;
    case 453u: goto L_0034F96C;
    case 454u: goto L_0034F974;
    case 455u: goto L_0034F990;
    case 456u: goto L_0034F9A0;
    case 457u: goto L_0034F9AC;
    case 458u: goto L_0034F9C0;
    case 459u: goto L_0034F9C8;
    case 460u: goto L_0034F9D0;
    case 461u: goto L_0034F9F0;
    case 462u: goto L_0034FA0C;
    case 463u: goto L_0034FA18;
    case 464u: goto L_0034FA30;
    case 465u: goto L_0034FA40;
    case 466u: goto L_0034FA50;
    case 467u: goto L_0034FA6C;
    case 468u: goto L_0034FA90;
    case 469u: goto L_0034FAA8;
    case 470u: goto L_0034FAD4;
    case 471u: goto L_0034FAEC;
    case 472u: goto L_0034FB04;
    case 473u: goto L_0034FB2C;
    case 474u: goto L_0034FB44;
    case 475u: goto L_0034FB60;
    case 476u: goto L_0034FB78;
    case 477u: goto L_0034FBA0;
    case 478u: goto L_0034FBD8;
    case 479u: goto L_0034FBE0;
    case 480u: goto L_0034FBF0;
    case 481u: goto L_0034FC14;
    case 482u: goto L_0034FC2C;
    case 483u: goto L_0034FC34;
    case 484u: goto L_0034FC4C;
    case 485u: goto L_0034FC80;
    case 486u: goto L_0034FCB0;
    case 487u: goto L_0034FCD8;
    case 488u: goto L_0034FCFC;
    case 489u: goto L_0034FD14;
    case 490u: goto L_0034FD30;
    case 491u: goto L_0034FD6C;
    case 492u: goto L_0034FD90;
    case 493u: goto L_0034FDB4;
    case 494u: goto L_0034FDC8;
    case 495u: goto L_0034FDE4;
    case 496u: goto L_0034FE04;
    case 497u: goto L_0034FE20;
    case 498u: goto L_0034FE28;
    case 499u: goto L_0034FE40;
    case 500u: goto L_0034FE58;
    case 501u: goto L_0034FE70;
    case 502u: goto L_0034FE94;
    case 503u: goto L_0034FEA0;
    case 504u: goto L_0034FED0;
    case 505u: goto L_0034FEF0;
    case 506u: goto L_0034FF24;
    case 507u: goto L_0034FF40;
    case 508u: goto L_0034FF84;
    case 509u: goto L_0034FF98;
    case 510u: goto L_0034FFB4;
    case 511u: goto L_0034FFBC;
    case 512u: goto L_0034FFF0;
    default: bad_entry(c, 0x0034C000u); return;
    }
L_0034C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C008u); set32(c.r[5], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0034C008u) [[unlikely]] return; }
L_0034C008:
    set32(c.r[2], ld32((c.r[18].w[0] + 308u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[18].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C030u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034C030u) [[unlikely]] return; }
L_0034C030:
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 5;
L_0034C044:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0034C074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C054u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0034C054u) [[unlikely]] return; }
L_0034C054:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0034C068; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034C074; } }
L_0034C068:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0034C074:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 104u));  goto L_0034C0A8; }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034C0A4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0034C164; } }
L_0034C0A4:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 1;
L_0034C0A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034C164; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 9;
L_0034C0E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0034C114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C0F4u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0034C0F4u) [[unlikely]] return; }
L_0034C0F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0034C108; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034C114; } }
L_0034C108:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0034C114:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 104u));  goto L_0034C128; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0034C164; } }
L_0034C128:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034C164; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
L_0034C14C:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C164u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 257u, depth + 1u); else { c.pc = 0x002CEEE0u; return; } if (c.pc != 0x0034C164u) [[unlikely]] return; }
L_0034C164:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_0034C168:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0034C1A0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034C19C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C194u); st32((c.r[17].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x0034C194u) [[unlikely]] return; }
L_0034C194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C19Cu); set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x0034C19Cu) [[unlikely]] return; }
L_0034C19C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0034C1A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0034C1C4; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0034C1C4:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
L_0034C1D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034C1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 9u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034C218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034C234; } }
L_0034C218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C220u);  if (depth < kMaxDepth) unit_008B(c, 17u, depth + 1u); else { c.pc = 0x0034C250u; return; } if (c.pc != 0x0034C220u) [[unlikely]] return; }
L_0034C220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C23C; } }
L_0034C230:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034C234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C23Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x0034C23Cu) [[unlikely]] return; }
L_0034C23C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C250:
    set32(c.r[29], c.r[29].w[0] - 496u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 99u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[16], c.r[2].w[0] + 1424u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C2B4u); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 3u, depth + 1u); else { c.pc = 0x002A4040u; return; } if (c.pc != 0x0034C2B4u) [[unlikely]] return; }
L_0034C2B4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C2C8u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0034C2C8u) [[unlikely]] return; }
L_0034C2C8:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0034C2FC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C2E4u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0034C2E4u) [[unlikely]] return; }
L_0034C2E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C2F4u); set32(c.r[4], c.r[4].w[0] - 16624u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0034C2F4u) [[unlikely]] return; }
L_0034C2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C424; } }
L_0034C2FC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C308u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0034C308u) [[unlikely]] return; }
L_0034C308:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1296u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C31Cu); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0034C31Cu) [[unlikely]] return; }
L_0034C31C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C32Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 33u, depth + 1u); else { c.pc = 0x0034C440u; return; } if (c.pc != 0x0034C32Cu) [[unlikely]] return; }
L_0034C32C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0034C34C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C344u); set32(c.r[4], c.r[4].w[0] - 16576u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0034C344u) [[unlikely]] return; }
L_0034C344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C424; } }
L_0034C34C:
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C358u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_005C(c, 364u, depth + 1u); else { c.pc = 0x002933C0u; return; } if (c.pc != 0x0034C358u) [[unlikely]] return; }
L_0034C358:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[2].w[0] + 688u) & ~15u, c.r[3]);  goto L_0034C368; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C424; } }
L_0034C368:
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 704u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[2].w[0] + 720u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0034C38C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0034C38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C394u); set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0034C394u) [[unlikely]] return; }
L_0034C394:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034C414; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_0034C3C4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0034C3C0u) [[unlikely]] return; }
L_0034C3C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0034C3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3CCu); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x002A4410u; return; } if (c.pc != 0x0034C3CCu) [[unlikely]] return; }
L_0034C3CC:
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3ECu); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x0034C3ECu) [[unlikely]] return; }
L_0034C3EC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0034C424; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C40Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0034C40Cu) [[unlikely]] return; }
L_0034C40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034C420; } }
L_0034C414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C41Cu);  if (depth < kMaxDepth) unit_008B(c, 80u, depth + 1u); else { c.pc = 0x0034D000u; return; } if (c.pc != 0x0034C41Cu) [[unlikely]] return; }
L_0034C41C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0034C420:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0034C424:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_0034C440:
    set32(c.r[29], c.r[29].w[0] - 752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C480u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0034C480u) [[unlikely]] return; }
L_0034C480:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = c.f[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_0034C4AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4A4u); set32(c.r[4], c.r[4].w[0] - 16464u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0034C4A4u) [[unlikely]] return; }
L_0034C4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034CCC4; } }
L_0034C4AC:
    set32(c.r[4], c.r[20].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4B8u); set32(c.r[21], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0034C4B8u) [[unlikely]] return; }
L_0034C4B8:
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32272u));  goto L_0034C9C8; }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_0034C868; }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0034C75C; }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0034C5BC; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0034C4FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_0034C9F8; } }
L_0034C4FC:
    set32(c.r[5], 0u + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C508u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 354u, depth + 1u); else { c.pc = 0x002A3550u; return; } if (c.pc != 0x0034C508u) [[unlikely]] return; }
L_0034C508:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  goto L_0034C530; }
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0034C564; }
    set32(c.r[2], 0u + 116u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034C560; } }
L_0034C530:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 116u);  goto L_0034C55C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034C560; } }
    set32(c.r[2], 0u + 116u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034C560; } }
L_0034C55C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0034C560:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0034C564:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0034CA80; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C57Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 354u, depth + 1u); else { c.pc = 0x002A3550u; return; } if (c.pc != 0x0034C57Cu) [[unlikely]] return; }
L_0034C57C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32696u));  goto L_0034C5A4; }
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034CA7C; } }
    set32(c.r[2], 0u + 104u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034CA7C; } }
L_0034C5A4:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034CA7C; } }
    set32(c.r[2], 0u + 104u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034CA7C; } }
L_0034C5BC:
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[21] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C5D0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0034C5D0u) [[unlikely]] return; }
L_0034C5D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0034C5FC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C5F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 4;
L_0034C5F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0034C5FC:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C60Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0034C60Cu) [[unlikely]] return; }
L_0034C60C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0034C638; }
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 4;
L_0034C634:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0034C638:
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C648u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0034C648u) [[unlikely]] return; }
L_0034C648:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0034C674; }
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C670; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 4;
L_0034C670:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0034C674:
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C684u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0034C684u) [[unlikely]] return; }
L_0034C684:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32668u));  goto L_0034C6B0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C6AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 4;
L_0034C6AC:
    c.f[1] = ld32((c.r[28].w[0] - 32668u));
    c.budget -= 1;
L_0034C6B0:
    c.f[2] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[21]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034CA7C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0034C6E4u) [[unlikely]] return; }
L_0034C6E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0034C710; }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] << 4);  goto L_0034C70C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034C710; } }
L_0034C70C:
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0034C710:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_0034C720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C750; } }
L_0034C720:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0034C740; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_0034C748; }
L_0034C740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C750; } }
L_0034C748:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0034C750:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034CA7C; } }
L_0034C75C:
    set32(c.r[5], 0u + 117u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C768u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 354u, depth + 1u); else { c.pc = 0x002A3550u; return; } if (c.pc != 0x0034C768u) [[unlikely]] return; }
L_0034C768:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0034C79C; } }
L_0034C778:
    set32(c.r[5], 0u + 117u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C788u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0034C788u) [[unlikely]] return; }
L_0034C788:
    set32(c.r[2], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0034C79C; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0034C79C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C778u | kUnwind; return; } goto L_0034C778; }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32204u));  goto L_0034C7C0; }
    set32(c.r[2], 0u + 117u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034C7EC; } }
L_0034C7C0:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32696u));  goto L_0034C7D8; }
    set32(c.r[2], 0u + 117u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034C7EC; } }
L_0034C7D8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[19].w[0] + 8u), 0u);  goto L_0034C7F0; }
    set32(c.r[2], 0u + 112u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0034C7EC:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_0034C7F0:
    set32(c.r[5], 0u + 20006u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C804u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0034C804u) [[unlikely]] return; }
L_0034C804:
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C810u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0034C810u) [[unlikely]] return; }
L_0034C810:
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 16528u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 16524u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 16520u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    set32(c.r[2], c.r[2].w[0] - 16516u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 24u), c.f[1]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.f[0]);  if (t) { goto L_0034CA7C; } }
L_0034C868:
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C874u); set32(c.r[4], c.r[2].w[0] + 2072u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0034C874u) [[unlikely]] return; }
L_0034C874:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 320u), 0u);
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 324u), 0u);
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], 0u + 99u);
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 340u), 0u);
    set32(c.r[7], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 1296u)));
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 148u)));
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C8D0u); st32((c.r[29].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 3u, depth + 1u); else { c.pc = 0x002A4040u; return; } if (c.pc != 0x0034C8D0u) [[unlikely]] return; }
L_0034C8D0:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[19].w[0] + 32u), 0u);  goto L_0034C8F0; }
    c.f[0] = ld32((c.r[28].w[0] - 32632u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034CA7C; } }
    st32((c.r[19].w[0] + 32u), 0u);
    c.budget -= 1;
L_0034C8F0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C8FCu); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0034C8FCu) [[unlikely]] return; }
L_0034C8FC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0034C930; }
    set32(c.r[2], 0u + 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 16u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 20u), 0u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0034C9A8; } }
L_0034C930:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C93Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0034C93Cu) [[unlikely]] return; }
L_0034C93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C944u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x0034C944u) [[unlikely]] return; }
L_0034C944:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32720u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C950u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 34u, depth + 1u); else { c.pc = 0x00120420u; return; } if (c.pc != 0x0034C950u) [[unlikely]] return; }
L_0034C950:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 115u);  goto L_0034C95C; }
    set32(c.r[2], 0u + 10023u);
    c.budget -= 1;
L_0034C95C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC3C80000u);  goto L_0034C990; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0034C9A8; } }
L_0034C990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
L_0034C9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C9B0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0034C9B0u) [[unlikely]] return; }
L_0034C9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034CA7C; } }
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 24u), c.f[0]);  if (t) { goto L_0034CA7C; } }
L_0034C9C8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32676u));  goto L_0034C9E0; }
    set32(c.r[2], 0u + 111u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034CA7C; } }
L_0034C9E0:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034CA7C; } }
    set32(c.r[2], 0u + 112u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0034CA7C; } }
L_0034C9F8:
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CA08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0034CA08u) [[unlikely]] return; }
L_0034CA08:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0034CA34; }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] << 4);  goto L_0034CA30; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CA34; } }
L_0034CA30:
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0034CA34:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_0034CA44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034CA74; } }
L_0034CA44:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0034CA64; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_0034CA6C; }
L_0034CA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034CA74; } }
L_0034CA6C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0034CA74:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0034CA7C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0034CA80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[28].w[0] - 30316u)));  goto L_0034CA90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034CCC4; } }
L_0034CA90:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CB24; } }
L_0034CA9C:
    set32(c.r[5], ld32((c.r[7].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_0034CAB8; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 88u)));
    c.r[4].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 4);  goto L_0034CAC0; }
L_0034CAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0034CAC4; } }
L_0034CAC0:
    set32(c.r[9], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0034CAC4:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[4], c.r[6].w[0] << 2);  goto L_0034CAD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034CB04; } }
L_0034CAD4:
    set32(c.r[5], ld32((c.r[7].w[0] + 56u)));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0034CAF4; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 60u)));
    c.r[4].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[6].w[0] << 2);  goto L_0034CAFC; }
L_0034CAF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034CB04; } }
L_0034CAFC:
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_0034CB04:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0034CB24; }
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0034CB20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0034CB30; } }
L_0034CB20:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0034CB24:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], ld32((c.r[8].w[0] + 112u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CA9Cu | kUnwind; return; } goto L_0034CA9C; }
L_0034CB30:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 32u)));  goto L_0034CB5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB40u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_005C(c, 370u, depth + 1u); else { c.pc = 0x002934E0u; return; } if (c.pc != 0x0034CB40u) [[unlikely]] return; }
L_0034CB40:
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB54u); set32(c.r[4], c.r[4].w[0] - 16416u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0034CB54u) [[unlikely]] return; }
L_0034CB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034CCC4; } }
L_0034CB5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034CBC4; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 260u), 0u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 276u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBA4u); st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 416u, depth + 1u); else { c.pc = 0x002A3FE0u; return; } if (c.pc != 0x0034CBA4u) [[unlikely]] return; }
L_0034CBA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CBC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0034CBB4u) [[unlikely]] return; }
L_0034CBB4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 288u)));
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
L_0034CBC4:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0034CBE4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034CBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034CCC4; } }
L_0034CBE0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0034CBE4:
    set32(c.r[2], 0u + 10004u);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 32u)));  goto L_0034CC0C; }
    set32(c.r[2], 0u + 10016u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034CC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034CCC4; } }
L_0034CC08:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_0034CC0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CCC0; } }
    set32(c.r[6], c.r[4].w[0] + 192u);
    set32(c.r[5], c.r[2].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC24u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0034CC24u) [[unlikely]] return; }
L_0034CC24:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC58u); st32((c.r[29].w[0] + 236u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0034CC58u) [[unlikely]] return; }
L_0034CC58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC6Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0034CC6Cu) [[unlikely]] return; }
L_0034CC6C:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCA0u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0034CCA0u) [[unlikely]] return; }
L_0034CCA0:
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[3]);
    st32((c.r[19].w[0] + 24u), c.f[2]);
    st32((c.r[19].w[0] + 28u), c.f[1]);
    c.budget -= 8;
L_0034CCC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034CCC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_0034CD00:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[18], ld32((c.r[3].w[0] + 1432u)));
    set32(c.r[17], c.r[3].w[0] + 1424u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1436u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0034CEC8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD90u); set32(c.r[6], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x0034CD90u) [[unlikely]] return; }
L_0034CD90:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CDA0u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0034CDA0u) [[unlikely]] return; }
L_0034CDA0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[16].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CDB8u); st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0034CDB8u) [[unlikely]] return; }
L_0034CDB8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CDC8u); set32(c.r[6], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0034CDC8u) [[unlikely]] return; }
L_0034CDC8:
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[2] = ld32((c.r[29].w[0] + 312u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 316u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 308u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 312u), c.f[2]);
    st32((c.r[29].w[0] + 316u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE00u); st32((c.r[29].w[0] + 304u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0034CE00u) [[unlikely]] return; }
L_0034CE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE08u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0034CE08u) [[unlikely]] return; }
L_0034CE08:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0034CE58; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0034CE54; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0034CE54; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_0034CE58; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CE58; } }
L_0034CE48:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CE58; } }
L_0034CE54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034CE58:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 48u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE78u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0034CE78u) [[unlikely]] return; }
L_0034CE78:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEA8u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0034CEA8u) [[unlikely]] return; }
L_0034CEA8:
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[20].w[0]), c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[3]);
    st32((c.r[20].w[0] + 8u), c.f[2]);
    st32((c.r[20].w[0] + 12u), c.f[1]);
    c.budget -= 8;
L_0034CEC8:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_0034CED4:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CED4u | kUnwind; return; } goto L_0034CED4; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF00u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0034CF00u) [[unlikely]] return; }
L_0034CF00:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[6] = ld32((c.r[29].w[0] + 228u));
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 244u));
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.f[7] = ld32((c.r[29].w[0] + 212u));
    c.f[5] = ld32((c.r[29].w[0] + 216u));
    c.f[8] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[7]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[7]);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[29].w[0] + 248u), c.f[1]);
    c.f[4] = ld32((c.r[29].w[0] + 232u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 228u), c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 224u), c.f[8]);
    st32((c.r[29].w[0] + 232u), c.f[3]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 960u)));
    c.budget -= 34;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 452u);  if (t) { goto L_0034CFC4; } }
L_0034CF88:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 5;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0034CFC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFA4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0034CFA4u) [[unlikely]] return; }
L_0034CFA4:
    set32(c.r[4], c.r[20].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFB0u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x0034CFB0u) [[unlikely]] return; }
L_0034CFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034CFD4; } }
L_0034CFC0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0034CFC4:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CF88u | kUnwind; return; } goto L_0034CF88; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034CFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0034D000:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[17], c.r[2].w[0] + 1424u);
    set32(c.r[16], c.r[17].w[0] + 16u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D038u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 66u, depth + 1u); else { c.pc = 0x0034CD00u; return; } if (c.pc != 0x0034D038u) [[unlikely]] return; }
L_0034D038:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[29].w[0] + 112u));  goto L_0034D18C; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 10005u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0034D1AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0034D170; } }
L_0034D058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D060u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0034D060u) [[unlikely]] return; }
L_0034D060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D0A4u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 66u, depth + 1u); else { c.pc = 0x0034CD00u; return; } if (c.pc != 0x0034D0A4u) [[unlikely]] return; }
L_0034D0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D188; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D0E4u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 66u, depth + 1u); else { c.pc = 0x0034CD00u; return; } if (c.pc != 0x0034D0E4u) [[unlikely]] return; }
L_0034D0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D188; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D124u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 66u, depth + 1u); else { c.pc = 0x0034CD00u; return; } if (c.pc != 0x0034D124u) [[unlikely]] return; }
L_0034D124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D188; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D164u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 66u, depth + 1u); else { c.pc = 0x0034CD00u; return; } if (c.pc != 0x0034D164u) [[unlikely]] return; }
L_0034D164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D188; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0034D170:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D058u | kUnwind; return; } goto L_0034D058; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D1AC; } }
L_0034D188:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0034D18C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 8;
L_0034D1AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0034D1D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034D250; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2992u);
    set32(c.r[2], c.r[2].w[0] + 3048u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D238; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D22Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034D22Cu) [[unlikely]] return; }
L_0034D22C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034D238u) [[unlikely]] return; }
L_0034D238:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034D254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D250u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034D250u) [[unlikely]] return; }
L_0034D250:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034D254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034D328; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3088u);
    set32(c.r[2], c.r[2].w[0] + 3144u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D310; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3280u);
    set32(c.r[2], c.r[2].w[0] + 3336u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D310; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28416u);
    set32(c.r[2], c.r[2].w[0] + 28472u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D310; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D304u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034D304u) [[unlikely]] return; }
L_0034D304:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034D310u) [[unlikely]] return; }
L_0034D310:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034D32C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034D328u) [[unlikely]] return; }
L_0034D328:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034D32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034D3F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3184u);
    set32(c.r[2], c.r[2].w[0] + 3240u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D3E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3280u);
    set32(c.r[2], c.r[2].w[0] + 3336u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D3E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28416u);
    set32(c.r[2], c.r[2].w[0] + 28472u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D3E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034D3D4u) [[unlikely]] return; }
L_0034D3D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034D3E0u) [[unlikely]] return; }
L_0034D3E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034D3FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034D3F8u) [[unlikely]] return; }
L_0034D3F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034D3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034D49C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[2], c.r[2].w[0] + 3432u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D484; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D46Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0034D46Cu) [[unlikely]] return; }
L_0034D46C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034D478u) [[unlikely]] return; }
L_0034D478:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D484u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034D484u) [[unlikely]] return; }
L_0034D484:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034D4A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034D49Cu) [[unlikely]] return; }
L_0034D49C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034D4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D4C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D410u | kUnwind; return; } goto L_0034D410; }
L_0034D4D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B8F0u | kUnwind; return; } [[clang::musttail]] return unit_008A(c, 383u, depth); }
L_0034D4E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D340u | kUnwind; return; } goto L_0034D340; }
L_0034D4F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D270u | kUnwind; return; } goto L_0034D270; }
L_0034D500:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D1D0u | kUnwind; return; } goto L_0034D1D0; }
L_0034D510:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D540u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034D540u) [[unlikely]] return; }
L_0034D540:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034D564; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D560u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 113u, depth + 1u); else { c.pc = 0x0034D580u; return; } if (c.pc != 0x0034D560u) [[unlikely]] return; }
L_0034D560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034D564:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034D580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0034D594u) [[unlikely]] return; }
L_0034D594:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 3712u);
    set32(c.r[3], c.r[3].w[0] + 3768u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034D5D0:
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
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0034D610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034D65C; } }
L_0034D610:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 116u);  goto L_0034D628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034D65C; } }
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_0034D628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D630u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034D630u) [[unlikely]] return; }
L_0034D630:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034D660; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D650u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 119u, depth + 1u); else { c.pc = 0x0034D680u; return; } if (c.pc != 0x0034D650u) [[unlikely]] return; }
L_0034D650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D65C; } }
    goto L_0034D658;
L_0034D654:
    c.budget -= 1;
L_0034D658:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034D65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034D660:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034D680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x0034D694u) [[unlikely]] return; }
L_0034D694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 3616u);
    set32(c.r[3], c.r[3].w[0] + 3672u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u + 77u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D6D4u); st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x0034D6D4u) [[unlikely]] return; }
L_0034D6D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034D6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034D78C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3616u);
    set32(c.r[2], c.r[2].w[0] + 3672u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D774; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D774; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034D768u) [[unlikely]] return; }
L_0034D768:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034D774u) [[unlikely]] return; }
L_0034D774:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034D790; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D78Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034D78Cu) [[unlikely]] return; }
L_0034D78C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034D790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034D83C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3712u);
    set32(c.r[2], c.r[2].w[0] + 3768u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034D824; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D80Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0034D80Cu) [[unlikely]] return; }
L_0034D80C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D818u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034D818u) [[unlikely]] return; }
L_0034D818:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034D824u) [[unlikely]] return; }
L_0034D824:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034D840; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D83Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034D83Cu) [[unlikely]] return; }
L_0034D83C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034D840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D860:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D7B0u | kUnwind; return; } goto L_0034D7B0; }
L_0034D870:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D6F0u | kUnwind; return; } goto L_0034D6F0; }
L_0034D880:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8B0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034D8B0u) [[unlikely]] return; }
L_0034D8B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034D8D4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 136u, depth + 1u); else { c.pc = 0x0034D8F0u; return; } if (c.pc != 0x0034D8D0u) [[unlikely]] return; }
L_0034D8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034D8D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034D8F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D904u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0034D904u) [[unlikely]] return; }
L_0034D904:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 4240u);
    set32(c.r[2], c.r[2].w[0] + 4296u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034D940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 21u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0034DA3C; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 100u);  goto L_0034DA0C; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0034D994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034DA70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0034D994:
    set32(c.r[3], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0034D9AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_0034D9AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034D9AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DA6C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0034D9C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_0034D9C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034D9C8:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], 0u + 20003u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034DA6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D9E0u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034D9E0u) [[unlikely]] return; }
L_0034D9E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034DA74; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 173u, depth + 1u); else { c.pc = 0x0034DE90u; return; } if (c.pc != 0x0034DA00u) [[unlikely]] return; }
L_0034DA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DA70; } }
    set32(c.r[4], 0u + 100u);
    c.budget -= 1;
L_0034DA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA14u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034DA14u) [[unlikely]] return; }
L_0034DA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DA70; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 164u, depth + 1u); else { c.pc = 0x0034DD30u; return; } if (c.pc != 0x0034DA34u) [[unlikely]] return; }
L_0034DA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DA70; } }
L_0034DA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA44u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034DA44u) [[unlikely]] return; }
L_0034DA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DA70; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 194u, depth + 1u); else { c.pc = 0x0034E0F0u; return; } if (c.pc != 0x0034DA64u) [[unlikely]] return; }
L_0034DA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DA70; } }
L_0034DA6C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034DA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034DA74:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034DA90:
    set32(c.r[3], ld32((c.r[4].w[0] + 1424u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0034DAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[4].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_0034DABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DABCu);  if (depth < kMaxDepth) unit_008B(c, 157u, depth + 1u); else { c.pc = 0x0034DC40u; return; } if (c.pc != 0x0034DABCu) [[unlikely]] return; }
L_0034DABC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034DAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0034DAE8u) [[unlikely]] return; }
L_0034DAE8:
    set32(c.r[5], ld32((c.r[17].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0034DBC0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB00u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0034DB00u) [[unlikely]] return; }
L_0034DB00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034DBBC; } }
    c.f[0] = ld32((c.r[17].w[0] + 192u));
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
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB84u); st32((c.r[4].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0034DB84u) [[unlikely]] return; }
L_0034DB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0034DBAC; } }
L_0034DB8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 496u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBA8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0034DBA8u) [[unlikely]] return; }
L_0034DBA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0034DBAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 472u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DB8Cu | kUnwind; return; } goto L_0034DB8C; }
L_0034DBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0034DBC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034DBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0034DBECu) [[unlikely]] return; }
L_0034DBEC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1180u)));  goto L_0034DC00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0034DC2C; } }
L_0034DC00:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034DC28; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC28u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0034DC28u) [[unlikely]] return; }
L_0034DC28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0034DC2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034DC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1424u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034DCC0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC64u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0034DC64u) [[unlikely]] return; }
L_0034DC64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0034DCC4; }
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DCA0u) [[unlikely]] return; }
L_0034DCA0:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DCB0u) [[unlikely]] return; }
L_0034DCB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_0034DCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0034DCC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 282u, depth + 1u); else { c.pc = 0x0028AE60u; return; } if (c.pc != 0x0034DCE4u) [[unlikely]] return; }
L_0034DCE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0034DD18; }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCFCu); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0034DCFCu) [[unlikely]] return; }
L_0034DCFC:
    c.f[1] = ld32((c.r[16].w[0] + 1140u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1140u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 1136u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
L_0034DD18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 284u, depth + 1u); else { c.pc = 0x00276A70u; return; } if (c.pc != 0x0034DD4Cu) [[unlikely]] return; }
L_0034DD4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 4144u);
    set32(c.r[2], c.r[2].w[0] + 4200u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1424u)));
    c.budget -= 9;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034DE30; }
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034DD88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034DDE0; } }
L_0034DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD90u); set32(c.r[5], 0u + 73u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0034DD90u) [[unlikely]] return; }
L_0034DD90:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0034DDB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DDC0; } }
L_0034DDB0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0034DDC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0034DDE0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0034DDD8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034DDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DDE0; } }
L_0034DDE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0034DDF0u) [[unlikely]] return; }
L_0034DDF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0034DE2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE10u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0034DE10u) [[unlikely]] return; }
L_0034DE10:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30624u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE2Cu); st32((c.r[17].w[0] + 308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x0034DE2Cu) [[unlikely]] return; }
L_0034DE2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034DE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034DE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE6Cu); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0034DE6Cu) [[unlikely]] return; }
L_0034DE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 295u, depth + 1u); else { c.pc = 0x00276BC0u; return; } if (c.pc != 0x0034DE74u) [[unlikely]] return; }
L_0034DE74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DEACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x0034DEACu) [[unlikely]] return; }
L_0034DEAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 4048u);
    set32(c.r[2], c.r[2].w[0] + 4104u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 72u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DEDCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0034DEDCu) [[unlikely]] return; }
L_0034DEDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0034DF08; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0034DF08:
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF28u); st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0034DF28u) [[unlikely]] return; }
L_0034DF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0034DF30u) [[unlikely]] return; }
L_0034DF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 157u, depth + 1u); else { c.pc = 0x0034DC40u; return; } if (c.pc != 0x0034DF38u) [[unlikely]] return; }
L_0034DF38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF48u); set32(c.r[6], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034DF48u) [[unlikely]] return; }
L_0034DF48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF58u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034DF58u) [[unlikely]] return; }
L_0034DF58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF68u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034DF68u) [[unlikely]] return; }
L_0034DF68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF78u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034DF78u) [[unlikely]] return; }
L_0034DF78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF88u); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034DF88u) [[unlikely]] return; }
L_0034DF88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF98u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034DF98u) [[unlikely]] return; }
L_0034DF98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFA8u); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034DFA8u) [[unlikely]] return; }
L_0034DFA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFBCu); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DFBCu) [[unlikely]] return; }
L_0034DFBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034DFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x0034DFF4u) [[unlikely]] return; }
L_0034DFF4:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0034E034u) [[unlikely]] return; }
L_0034E034:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0034E098; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0034E064; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  goto L_0034E060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0034E0D0; } }
L_0034E060:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0034E064:
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  goto L_0034E07C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034E084; } }
L_0034E07C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_0034E084:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034E0CC; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
L_0034E098:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0A8u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034E0A8u) [[unlikely]] return; }
L_0034E0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0B0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x0034E0B0u) [[unlikely]] return; }
L_0034E0B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 7;
L_0034E0CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0034E0D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E0E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0034E0F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E110u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x0034E110u) [[unlikely]] return; }
L_0034E110:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3952u);
    set32(c.r[2], c.r[2].w[0] + 4008u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1424u)));
    c.budget -= 9;
    if (c.r[5].sd[0] < 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0034E1D4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E140u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0034E140u) [[unlikely]] return; }
L_0034E140:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 1424u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[2].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 196u));
    st32((c.r[2].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 200u));
    st32((c.r[2].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 204u));
    st32((c.r[2].w[0] + 204u), c.f[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E190u); st32((c.r[2].w[0] + 176u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0034E190u) [[unlikely]] return; }
L_0034E190:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1B0u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0034E1B0u) [[unlikely]] return; }
L_0034E1B0:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034E1C0u) [[unlikely]] return; }
L_0034E1C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_0034E1D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034E1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034E28C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3952u);
    set32(c.r[2], c.r[2].w[0] + 4008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034E274; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034E274; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E268u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034E268u) [[unlikely]] return; }
L_0034E268:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034E274u) [[unlikely]] return; }
L_0034E274:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034E290; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E28Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034E28Cu) [[unlikely]] return; }
L_0034E28C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034E290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034E330; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 4048u);
    set32(c.r[2], c.r[2].w[0] + 4104u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034E318; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E30Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034E30Cu) [[unlikely]] return; }
L_0034E30C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034E318u) [[unlikely]] return; }
L_0034E318:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034E334; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034E330u) [[unlikely]] return; }
L_0034E330:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034E334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034E3EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 4144u);
    set32(c.r[2], c.r[2].w[0] + 4200u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034E3D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22928u);
    set32(c.r[2], c.r[2].w[0] + 22984u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034E3D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034E3C8u) [[unlikely]] return; }
L_0034E3C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034E3D4u) [[unlikely]] return; }
L_0034E3D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034E3F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034E3ECu) [[unlikely]] return; }
L_0034E3EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034E3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034E49C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 4240u);
    set32(c.r[2], c.r[2].w[0] + 4296u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034E484; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E46Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0034E46Cu) [[unlikely]] return; }
L_0034E46C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034E478u) [[unlikely]] return; }
L_0034E478:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E484u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034E484u) [[unlikely]] return; }
L_0034E484:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034E4A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034E49Cu) [[unlikely]] return; }
L_0034E49C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034E4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1424u)));
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], ld32((c.r[5].w[0] + 148u)));  goto L_0034E4DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4F8; } }
L_0034E4DC:
    set32(c.r[2], 0u + 20003u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034E4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034E4F8; } }
L_0034E4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E4F8u);  if (depth < kMaxDepth) unit_0057(c, 243u, depth + 1u); else { c.pc = 0x0027ED10u; return; } if (c.pc != 0x0034E4F8u) [[unlikely]] return; }
L_0034E4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034E510:
    set32(c.r[2], ld32((c.r[4].w[0] + 1424u)));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0034E520:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E410u | kUnwind; return; } goto L_0034E410; }
L_0034E530:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DBD0u | kUnwind; return; } goto L_0034DBD0; }
L_0034E540:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E350u | kUnwind; return; } goto L_0034E350; }
L_0034E550:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E2B0u | kUnwind; return; } goto L_0034E2B0; }
L_0034E560:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E1F0u | kUnwind; return; } goto L_0034E1F0; }
L_0034E570:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E5A0u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034E5A0u) [[unlikely]] return; }
L_0034E5A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034E5C4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E5C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 228u, depth + 1u); else { c.pc = 0x0034E5E0u; return; } if (c.pc != 0x0034E5C0u) [[unlikely]] return; }
L_0034E5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034E5C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034E5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E5F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0034E5F4u) [[unlikely]] return; }
L_0034E5F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4480u);
    set32(c.r[3], c.r[3].w[0] + 4536u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034E6DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0034E650; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_0034E650:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0034E6E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E660u); set32(c.r[5], ld32((c.r[16].w[0] + 1296u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0034E660u) [[unlikely]] return; }
L_0034E660:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0034E6DC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E67Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034E67Cu) [[unlikely]] return; }
L_0034E67C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034E6B4; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 816u);
    set32(c.r[8], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E69Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x0034E69Cu) [[unlikely]] return; }
L_0034E69C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 976u), c.r[17].w[0]);  if (t) { goto L_0034E6DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0034E6DC; } }
L_0034E6B4:
    set32(c.r[5], c.r[16].w[0] + 816u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6C8u); set32(c.r[8], 0u + 8192u);  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x0034E6C8u) [[unlikely]] return; }
L_0034E6C8:
    st32((c.r[16].w[0] + 976u), 0u);
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 5;
L_0034E6DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0034E6E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034E760; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0034E71C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_0034E71C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0034E764; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E72Cu); set32(c.r[5], ld32((c.r[16].w[0] + 1296u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0034E72Cu) [[unlikely]] return; }
L_0034E72C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034E760; } }
    set32(c.r[5], c.r[16].w[0] + 816u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E74Cu); set32(c.r[8], 0u + 8192u);  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x0034E74Cu) [[unlikely]] return; }
L_0034E74C:
    st32((c.r[16].w[0] + 976u), 0u);
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 5;
L_0034E760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0034E764:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034E7FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 4480u);
    set32(c.r[2], c.r[2].w[0] + 4536u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034E7E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0034E7CCu) [[unlikely]] return; }
L_0034E7CC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034E7D8u) [[unlikely]] return; }
L_0034E7D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034E7E4u) [[unlikely]] return; }
L_0034E7E4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034E800; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034E7FCu) [[unlikely]] return; }
L_0034E7FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034E800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E820:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E770u | kUnwind; return; } goto L_0034E770; }
L_0034E830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E848u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034E848u) [[unlikely]] return; }
L_0034E848:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30224u), c.r[2].w[0]);  goto L_0034E860; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E85Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 248u, depth + 1u); else { c.pc = 0x0034E880u; return; } if (c.pc != 0x0034E85Cu) [[unlikely]] return; }
L_0034E85C:
    st32((c.r[28].w[0] - 30224u), c.r[2].w[0]);
    c.budget -= 1;
L_0034E860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E870:
    set32(c.r[2], ld32((c.r[28].w[0] - 30224u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 76u)));  c.pc = t; return; }
L_0034E880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0034E894u) [[unlikely]] return; }
L_0034E894:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 4720u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8B8u); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0018(c, 53u, depth + 1u); else { c.pc = 0x00180510u; return; } if (c.pc != 0x0034E8B8u) [[unlikely]] return; }
L_0034E8B8:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8D0u); c.r[5].d[0] = c.r[2].d[0] | 21315ull;  if (depth < kMaxDepth) unit_000B(c, 143u, depth + 1u); else { c.pc = 0x0014EF30u; return; } if (c.pc != 0x0034E8D0u) [[unlikely]] return; }
L_0034E8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0034EB80u; return; } if (c.pc != 0x0034E8D8u) [[unlikely]] return; }
L_0034E8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 293u, depth + 1u); else { c.pc = 0x0034EB60u; return; } if (c.pc != 0x0034E8E0u) [[unlikely]] return; }
L_0034E8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8E8u);  if (depth < kMaxDepth) unit_000B(c, 103u, depth + 1u); else { c.pc = 0x0014EC60u; return; } if (c.pc != 0x0034E8E8u) [[unlikely]] return; }
L_0034E8E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0034E914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8FCu);  if (depth < kMaxDepth) unit_00A7(c, 38u, depth + 1u); else { c.pc = 0x003BC760u; return; } if (c.pc != 0x0034E8FCu) [[unlikely]] return; }
L_0034E8FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E90Cu); set32(c.r[5], c.r[5].w[0] - 16336u);  if (depth < kMaxDepth) unit_0025(c, 535u, depth + 1u); else { c.pc = 0x001B7FC0u; return; } if (c.pc != 0x0034E90Cu) [[unlikely]] return; }
L_0034E90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E92C; } }
L_0034E914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E91Cu);  if (depth < kMaxDepth) unit_00A7(c, 38u, depth + 1u); else { c.pc = 0x003BC760u; return; } if (c.pc != 0x0034E91Cu) [[unlikely]] return; }
L_0034E91C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E92Cu); set32(c.r[5], c.r[5].w[0] - 16325u);  if (depth < kMaxDepth) unit_0025(c, 535u, depth + 1u); else { c.pc = 0x001B7FC0u; return; } if (c.pc != 0x0034E92Cu) [[unlikely]] return; }
L_0034E92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E934u);  if (depth < kMaxDepth) unit_000B(c, 103u, depth + 1u); else { c.pc = 0x0014EC60u; return; } if (c.pc != 0x0034E934u) [[unlikely]] return; }
L_0034E934:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0034E960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E948u);  if (depth < kMaxDepth) unit_00A7(c, 39u, depth + 1u); else { c.pc = 0x003BC770u; return; } if (c.pc != 0x0034E948u) [[unlikely]] return; }
L_0034E948:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E958u); set32(c.r[5], c.r[5].w[0] - 16320u);  if (depth < kMaxDepth) unit_0026(c, 12u, depth + 1u); else { c.pc = 0x001B80B0u; return; } if (c.pc != 0x0034E958u) [[unlikely]] return; }
L_0034E958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_0034E97C; } }
L_0034E960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E968u);  if (depth < kMaxDepth) unit_00A7(c, 39u, depth + 1u); else { c.pc = 0x003BC770u; return; } if (c.pc != 0x0034E968u) [[unlikely]] return; }
L_0034E968:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E978u); set32(c.r[5], c.r[5].w[0] - 16325u);  if (depth < kMaxDepth) unit_0026(c, 12u, depth + 1u); else { c.pc = 0x001B80B0u; return; } if (c.pc != 0x0034E978u) [[unlikely]] return; }
L_0034E978:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0034E97C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E988u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034E988u) [[unlikely]] return; }
L_0034E988:
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E998u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034E998u) [[unlikely]] return; }
L_0034E998:
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034E9A8u) [[unlikely]] return; }
L_0034E9A8:
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034E9B8u) [[unlikely]] return; }
L_0034E9B8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034E9C8u) [[unlikely]] return; }
L_0034E9C8:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034E9D8u) [[unlikely]] return; }
L_0034E9D8:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034E9E8u) [[unlikely]] return; }
L_0034E9E8:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034E9F8u) [[unlikely]] return; }
L_0034E9F8:
    set32(c.r[4], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA08u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034EA08u) [[unlikely]] return; }
L_0034EA08:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034EA18u) [[unlikely]] return; }
L_0034EA18:
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034EA28u) [[unlikely]] return; }
L_0034EA28:
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034EA38u) [[unlikely]] return; }
L_0034EA38:
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034EA48u) [[unlikely]] return; }
L_0034EA48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[4], c.r[4].w[0] - 16305u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA5Cu); c.r[5].d[0] = c.r[2].d[0] | 484ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0034EA5Cu) [[unlikely]] return; }
L_0034EA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA64u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x0034EA64u) [[unlikely]] return; }
L_0034EA64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 484ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 15u);  goto L_0034EA98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA80u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x0034EA80u) [[unlikely]] return; }
L_0034EA80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA90u); set32(c.r[4], c.r[4].w[0] - 16274u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0034EA90u) [[unlikely]] return; }
L_0034EA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0034EAB4; } }
L_0034EA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAA0u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x0034EAA0u) [[unlikely]] return; }
L_0034EAA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAB0u); set32(c.r[4], c.r[4].w[0] - 16232u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0034EAB0u) [[unlikely]] return; }
L_0034EAB0:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0034EAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EABCu);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x0034EABCu) [[unlikely]] return; }
L_0034EABC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 484ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_0034EAF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAD8u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x0034EAD8u) [[unlikely]] return; }
L_0034EAD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAE8u); set32(c.r[4], c.r[4].w[0] - 16198u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0034EAE8u) [[unlikely]] return; }
L_0034EAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 15u);  if (t) { goto L_0034EB0C; } }
L_0034EAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAF8u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x0034EAF8u) [[unlikely]] return; }
L_0034EAF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB08u); set32(c.r[4], c.r[4].w[0] - 16157u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0034EB08u) [[unlikely]] return; }
L_0034EB08:
    set32(c.r[4], 0u + 15u);
    c.budget -= 1;
L_0034EB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB14u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0034EB14u) [[unlikely]] return; }
L_0034EB14:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034EB24u) [[unlikely]] return; }
L_0034EB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB2Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0034EB2Cu) [[unlikely]] return; }
L_0034EB2C:
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB3Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 524u, depth + 1u); else { c.pc = 0x001B7EC0u; return; } if (c.pc != 0x0034EB3Cu) [[unlikely]] return; }
L_0034EB3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 344u, depth + 1u); else { c.pc = 0x0034F070u; return; } if (c.pc != 0x0034EB48u) [[unlikely]] return; }
L_0034EB48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034EB60:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0034EB80:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0034EBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034EC0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4720u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034EBEC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034EBE4u) [[unlikely]] return; }
L_0034EBE4:
    st32((c.r[17].w[0] + 72u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0034EBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034EBF4u) [[unlikely]] return; }
L_0034EBF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034EC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034EC0Cu) [[unlikely]] return; }
L_0034EC0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034EC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034EC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034ED14; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_0034ECC8; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 88u);  goto L_0034EC8C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_0034EC78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0034EE1C; } }
L_0034EC78:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0034EE18; } }
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], 0u + 88u);
    c.budget -= 2;
L_0034EC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC94u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034EC94u) [[unlikely]] return; }
L_0034EC94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  goto L_0034ECBC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 16124u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECB8u); set32(c.r[7], c.r[7].w[0] - 16111u);  if (depth < kMaxDepth) unit_00A7(c, 94u, depth + 1u); else { c.pc = 0x003BCD70u; return; } if (c.pc != 0x0034ECB8u) [[unlikely]] return; }
L_0034ECB8:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_0034ECBC:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
L_0034ECC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECD0u);  if (depth < kMaxDepth) unit_008B(c, 324u, depth + 1u); else { c.pc = 0x0034EE80u; return; } if (c.pc != 0x0034ECD0u) [[unlikely]] return; }
L_0034ECD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034EE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECE0u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_008B(c, 323u, depth + 1u); else { c.pc = 0x0034EE70u; return; } if (c.pc != 0x0034ECE0u) [[unlikely]] return; }
L_0034ECE0:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034ECF8u) [[unlikely]] return; }
L_0034ECF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED04u); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0014EF10u; return; } if (c.pc != 0x0034ED04u) [[unlikely]] return; }
L_0034ED04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 141u, depth + 1u); else { c.pc = 0x0014EEF0u; return; } if (c.pc != 0x0034ED0Cu) [[unlikely]] return; }
L_0034ED0C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0034ED14:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[17], ld32((c.r[16].w[0] + 68u)));  goto L_0034ED2C; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
L_0034ED2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED34u);  if (depth < kMaxDepth) unit_0024(c, 315u, depth + 1u); else { c.pc = 0x001B23D0u; return; } if (c.pc != 0x0034ED34u) [[unlikely]] return; }
L_0034ED34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0034ED54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED44u);  if (depth < kMaxDepth) unit_0024(c, 315u, depth + 1u); else { c.pc = 0x001B23D0u; return; } if (c.pc != 0x0034ED44u) [[unlikely]] return; }
L_0034ED44:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 344u, depth + 1u); else { c.pc = 0x0034F070u; return; } if (c.pc != 0x0034ED54u) [[unlikely]] return; }
L_0034ED54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED5Cu);  if (depth < kMaxDepth) unit_0026(c, 358u, depth + 1u); else { c.pc = 0x001BAF80u; return; } if (c.pc != 0x0034ED5Cu) [[unlikely]] return; }
L_0034ED5C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0034ED78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED70u);  if (depth < kMaxDepth) unit_0025(c, 497u, depth + 1u); else { c.pc = 0x001B7B50u; return; } if (c.pc != 0x0034ED70u) [[unlikely]] return; }
L_0034ED70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EE18; } }
L_0034ED78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED80u);  if (depth < kMaxDepth) unit_0025(c, 496u, depth + 1u); else { c.pc = 0x001B7B30u; return; } if (c.pc != 0x0034ED80u) [[unlikely]] return; }
L_0034ED80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED88u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 322u, depth + 1u); else { c.pc = 0x0034EE50u; return; } if (c.pc != 0x0034ED88u) [[unlikely]] return; }
L_0034ED88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 256u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED9Cu); c.r[5].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_008B(c, 321u, depth + 1u); else { c.pc = 0x0034EE40u; return; } if (c.pc != 0x0034ED9Cu) [[unlikely]] return; }
L_0034ED9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034EDF0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDB0u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_008B(c, 320u, depth + 1u); else { c.pc = 0x0034EE30u; return; } if (c.pc != 0x0034EDB0u) [[unlikely]] return; }
L_0034EDB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034EDEC; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 120u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDCCu); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x0034EDCCu) [[unlikely]] return; }
L_0034EDCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_0034EDE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDDCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 128u, depth + 1u); else { c.pc = 0x001B0BF0u; return; } if (c.pc != 0x0034EDDCu) [[unlikely]] return; }
L_0034EDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EDEC; } }
L_0034EDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDECu);  if (depth < kMaxDepth) unit_0024(c, 128u, depth + 1u); else { c.pc = 0x001B0BF0u; return; } if (c.pc != 0x0034EDECu) [[unlikely]] return; }
L_0034EDEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034EDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDF8u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_008B(c, 320u, depth + 1u); else { c.pc = 0x0034EE30u; return; } if (c.pc != 0x0034EDF8u) [[unlikely]] return; }
L_0034EDF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034EE18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_0034EE14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), 0u);  if (t) { goto L_0034EE18; } }
L_0034EE14:
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_0034EE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0034EE1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034EE30:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0034EE40:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0034EE50:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[28].w[0] - 30632u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0034EE70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  c.pc = t; return; }
L_0034EE80:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_0034EE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_0034EEC0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0034F060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F05C; } }
L_0034EEC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_0034EF40; }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0034EF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EEDCu);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x0034EEDCu) [[unlikely]] return; }
L_0034EEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EEE4u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x0034EEE4u) [[unlikely]] return; }
L_0034EEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EEECu);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x0034EEECu) [[unlikely]] return; }
L_0034EEEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_0034EF10; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 50u);
    set32(c.r[5], 0u + 70u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF08u); set32(c.r[6], c.r[6].w[0] - 16100u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0034EF08u) [[unlikely]] return; }
L_0034EF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EF20; } }
L_0034EF10:
    set32(c.r[4], 0u + 50u);
    set32(c.r[5], 0u + 70u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF20u); set32(c.r[6], c.r[6].w[0] - 16078u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0034EF20u) [[unlikely]] return; }
L_0034EF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF28u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x0034EF28u) [[unlikely]] return; }
L_0034EF28:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034EF3C; } }
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_0034EF3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_0034EF40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034F05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF50u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x0034EF50u) [[unlikely]] return; }
L_0034EF50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441B0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF74u); set32(c.r[5], 0u + 77u);  if (depth < kMaxDepth) unit_003D(c, 43u, depth + 1u); else { c.pc = 0x00214610u; return; } if (c.pc != 0x0034EF74u) [[unlikely]] return; }
L_0034EF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF7Cu);  if (depth < kMaxDepth) unit_0024(c, 418u, depth + 1u); else { c.pc = 0x001B3040u; return; } if (c.pc != 0x0034EF7Cu) [[unlikely]] return; }
L_0034EF7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    set32(c.r[2], 0u + 635u);
    set32(c.r[5], 0u + 84u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFA4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_003D(c, 43u, depth + 1u); else { c.pc = 0x00214610u; return; } if (c.pc != 0x0034EFA4u) [[unlikely]] return; }
L_0034EFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFACu);  if (depth < kMaxDepth) unit_0024(c, 390u, depth + 1u); else { c.pc = 0x001B2CE0u; return; } if (c.pc != 0x0034EFACu) [[unlikely]] return; }
L_0034EFAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441B0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFD0u); set32(c.r[5], 0u + 65u);  if (depth < kMaxDepth) unit_003D(c, 43u, depth + 1u); else { c.pc = 0x00214610u; return; } if (c.pc != 0x0034EFD0u) [[unlikely]] return; }
L_0034EFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFD8u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0034EFD8u) [[unlikely]] return; }
L_0034EFD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    set32(c.r[2], 0u + 635u);
    set32(c.r[5], 0u + 66u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F000u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_003D(c, 43u, depth + 1u); else { c.pc = 0x00214610u; return; } if (c.pc != 0x0034F000u) [[unlikely]] return; }
L_0034F000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F008u);  if (depth < kMaxDepth) unit_0013(c, 316u, depth + 1u); else { c.pc = 0x0016F550u; return; } if (c.pc != 0x0034F008u) [[unlikely]] return; }
L_0034F008:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441B0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F02Cu); set32(c.r[5], 0u + 79u);  if (depth < kMaxDepth) unit_003D(c, 43u, depth + 1u); else { c.pc = 0x00214610u; return; } if (c.pc != 0x0034F02Cu) [[unlikely]] return; }
L_0034F02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F034u);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00160A40u; return; } if (c.pc != 0x0034F034u) [[unlikely]] return; }
L_0034F034:
    set32(c.r[3], 0u + 635u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[13] = c.r[6].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F05Cu); set32(c.r[5], 0u + 84u);  if (depth < kMaxDepth) unit_003D(c, 43u, depth + 1u); else { c.pc = 0x00214610u; return; } if (c.pc != 0x0034F05Cu) [[unlikely]] return; }
L_0034F05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0034F060:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034F070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3300u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0034F0F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F094u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0014EC70u; return; } if (c.pc != 0x0034F094u) [[unlikely]] return; }
L_0034F094:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_0034F0C0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 16325u);
    set32(c.r[5], c.r[5].w[0] - 16055u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0B8u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0025(c, 525u, depth + 1u); else { c.pc = 0x001B7EE0u; return; } if (c.pc != 0x0034F0B8u) [[unlikely]] return; }
L_0034F0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0034F0D8; } }
L_0034F0C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 16325u);
    set32(c.r[5], c.r[5].w[0] - 16047u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0D4u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0025(c, 525u, depth + 1u); else { c.pc = 0x001B7EE0u; return; } if (c.pc != 0x0034F0D4u) [[unlikely]] return; }
L_0034F0D4:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0034F0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0E0u);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x0034F0E0u) [[unlikely]] return; }
L_0034F0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 527u, depth + 1u); else { c.pc = 0x001B7F10u; return; } if (c.pc != 0x0034F0E8u) [[unlikely]] return; }
L_0034F0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0034F150; } }
L_0034F0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0F8u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0014EC70u; return; } if (c.pc != 0x0034F0F8u) [[unlikely]] return; }
L_0034F0F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_0034F124; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 16325u);
    set32(c.r[5], c.r[5].w[0] - 16033u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F11Cu); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0025(c, 525u, depth + 1u); else { c.pc = 0x001B7EE0u; return; } if (c.pc != 0x0034F11Cu) [[unlikely]] return; }
L_0034F11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0034F13C; } }
L_0034F124:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 16325u);
    set32(c.r[5], c.r[5].w[0] - 16025u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F138u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0025(c, 525u, depth + 1u); else { c.pc = 0x001B7EE0u; return; } if (c.pc != 0x0034F138u) [[unlikely]] return; }
L_0034F138:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_0034F13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F144u);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x0034F144u) [[unlikely]] return; }
L_0034F144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F14Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 527u, depth + 1u); else { c.pc = 0x001B7F10u; return; } if (c.pc != 0x0034F14Cu) [[unlikely]] return; }
L_0034F14C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0034F150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034F160:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F194u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0034F194u) [[unlikely]] return; }
L_0034F194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4784u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53440000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F1B0u); c.r[5].d[0] = c.r[2].d[0] | 18768ull;  if (depth < kMaxDepth) unit_000B(c, 143u, depth + 1u); else { c.pc = 0x0014EF30u; return; } if (c.pc != 0x0034F1B0u) [[unlikely]] return; }
L_0034F1B0:
    st32((c.r[20].w[0] + 52u), c.r[16].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[20].w[0] + 56u), 0u);
    set32(c.r[2], 0u + 50u);
    st32((c.r[20].w[0] + 72u), 0u);
    st32((c.r[20].w[0] + 76u), 0u);
    st32((c.r[20].w[0] + 80u), 0u);
    st32((c.r[20].w[0] + 84u), 0u);
    st32((c.r[20].w[0] + 88u), 0u);
    st32((c.r[20].w[0] + 92u), 0u);
    st32((c.r[20].w[0] + 96u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 100u), 0u);
    st32((c.r[20].w[0] + 104u), 0u);
    st32((c.r[20].w[0] + 108u), 0u);
    st32((c.r[20].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 116u), 0u);
    st32((c.r[20].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 60u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 23;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0034F21C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F214u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x0034F214u) [[unlikely]] return; }
L_0034F214:
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0034F21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F224u);  if (depth < kMaxDepth) unit_008B(c, 362u, depth + 1u); else { c.pc = 0x0034F260u; return; } if (c.pc != 0x0034F224u) [[unlikely]] return; }
L_0034F224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F22Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0034EB80u; return; } if (c.pc != 0x0034F22Cu) [[unlikely]] return; }
L_0034F22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F234u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 293u, depth + 1u); else { c.pc = 0x0034EB60u; return; } if (c.pc != 0x0034F234u) [[unlikely]] return; }
L_0034F234:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0034F260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_0034F270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034F2B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2A0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034F2A0u) [[unlikely]] return; }
L_0034F2A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034F2BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034F2B8u) [[unlikely]] return; }
L_0034F2B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034F2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034F2D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034F614; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 16000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0034C000u < 16384u) { entry = entries_008B[(t - 0x0034C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034F310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F318u);  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0034EB80u; return; } if (c.pc != 0x0034F318u) [[unlikely]] return; }
L_0034F318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F320u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0034F320u) [[unlikely]] return; }
L_0034F320:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  goto L_0034F340; }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F33Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x0034F33Cu) [[unlikely]] return; }
L_0034F33C:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_0034F340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F348u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0034F348u) [[unlikely]] return; }
L_0034F348:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034F364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F358u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F358u) [[unlikely]] return; }
L_0034F358:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0034F614; } }
L_0034F364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F36Cu);  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x0034F36Cu) [[unlikely]] return; }
L_0034F36C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0034F374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F37Cu); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0034F37Cu) [[unlikely]] return; }
L_0034F37C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034F398; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F38Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F38Cu) [[unlikely]] return; }
L_0034F38C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0034F614; } }
L_0034F398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3A0u);  if (depth < kMaxDepth) unit_008B(c, 444u, depth + 1u); else { c.pc = 0x0034F8B0u; return; } if (c.pc != 0x0034F3A0u) [[unlikely]] return; }
L_0034F3A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 108u)));  goto L_0034F618; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3B0u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x0034F3B0u) [[unlikely]] return; }
L_0034F3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0034F3CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F3C0u) [[unlikely]] return; }
L_0034F3C0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0034F614; } }
L_0034F3CC:
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0034F3D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x0034F3E0u) [[unlikely]] return; }
L_0034F3E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0034F614; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x0034F3FCu) [[unlikely]] return; }
L_0034F3FC:
    set32(c.r[2], 0u + 3u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0034F404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F40Cu); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0034F40Cu) [[unlikely]] return; }
L_0034F40C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034F428; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F41Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F41Cu) [[unlikely]] return; }
L_0034F41C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0034F614; } }
L_0034F428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F430u);  if (depth < kMaxDepth) unit_008B(c, 444u, depth + 1u); else { c.pc = 0x0034F8B0u; return; } if (c.pc != 0x0034F430u) [[unlikely]] return; }
L_0034F430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F614; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 76u), 0u);  goto L_0034F458; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F454u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034F454u) [[unlikely]] return; }
L_0034F454:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_0034F458:
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0034F460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F468u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_008B(c, 443u, depth + 1u); else { c.pc = 0x0034F890u; return; } if (c.pc != 0x0034F468u) [[unlikely]] return; }
L_0034F468:
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F474u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 442u, depth + 1u); else { c.pc = 0x0034F870u; return; } if (c.pc != 0x0034F474u) [[unlikely]] return; }
L_0034F474:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F488u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0034F488u) [[unlikely]] return; }
L_0034F488:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0034F614; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4A0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0034F4A0u) [[unlikely]] return; }
L_0034F4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4A8u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0034F4A8u) [[unlikely]] return; }
L_0034F4A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  goto L_0034F4C0; }
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x0034F4BCu) [[unlikely]] return; }
L_0034F4BC:
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_0034F4C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  goto L_0034F4DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F4D0u) [[unlikely]] return; }
L_0034F4D0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0034F614; } }
L_0034F4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0034F4E4u) [[unlikely]] return; }
L_0034F4E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0034F4F4u) [[unlikely]] return; }
L_0034F4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4FCu); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0034F4FCu) [[unlikely]] return; }
L_0034F4FC:
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F508u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034F508u) [[unlikely]] return; }
L_0034F508:
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x0034F514u) [[unlikely]] return; }
L_0034F514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0034F530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F524u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F524u) [[unlikely]] return; }
L_0034F524:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0034F614; } }
L_0034F530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0034F548; } }
L_0034F538:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_0034F548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F550u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034F550u) [[unlikely]] return; }
L_0034F550:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F538u | kUnwind; return; } goto L_0034F538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F564u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0014EF10u; return; } if (c.pc != 0x0034F564u) [[unlikely]] return; }
L_0034F564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F56Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 141u, depth + 1u); else { c.pc = 0x0014EEF0u; return; } if (c.pc != 0x0034F56Cu) [[unlikely]] return; }
L_0034F56C:
    set32(c.r[2], 0u + 5u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0034F574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F57Cu);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0034F57Cu) [[unlikely]] return; }
L_0034F57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F584u);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x0034F584u) [[unlikely]] return; }
L_0034F584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0034F5C0; } }
L_0034F58C:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0034F5C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5A8u);  if (depth < kMaxDepth) unit_008B(c, 439u, depth + 1u); else { c.pc = 0x0034F800u; return; } if (c.pc != 0x0034F5A8u) [[unlikely]] return; }
L_0034F5A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5BCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x0034F5BCu) [[unlikely]] return; }
L_0034F5BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0034F5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5C8u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034F5C8u) [[unlikely]] return; }
L_0034F5C8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F58Cu | kUnwind; return; } goto L_0034F58C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5DCu);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0034F5DCu) [[unlikely]] return; }
L_0034F5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F614; } }
L_0034F5E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034F614; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5FCu); set32(c.r[4], c.r[4].w[0] - 15968u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0034F5FCu) [[unlikely]] return; }
L_0034F5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F604u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0014EF10u; return; } if (c.pc != 0x0034F604u) [[unlikely]] return; }
L_0034F604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F60Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F60Cu) [[unlikely]] return; }
L_0034F60C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_0034F614:
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 1;
L_0034F618:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034F74C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034F6AC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 16u);  goto L_0034F64C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0034F7E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F7E4; } }
L_0034F64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F654u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0034F654u) [[unlikely]] return; }
L_0034F654:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  goto L_0034F674; }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F670u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x0034F670u) [[unlikely]] return; }
L_0034F670:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_0034F674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F67Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0034F67Cu) [[unlikely]] return; }
L_0034F67C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034F698; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F68Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F68Cu) [[unlikely]] return; }
L_0034F68C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0034F7E4; } }
L_0034F698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6A0u);  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x0034F6A0u) [[unlikely]] return; }
L_0034F6A0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
L_0034F6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6B4u);  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0034F6B4u) [[unlikely]] return; }
L_0034F6B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034F6D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F6C4u) [[unlikely]] return; }
L_0034F6C4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0034F7E4; } }
L_0034F6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6D8u);  if (depth < kMaxDepth) unit_008B(c, 444u, depth + 1u); else { c.pc = 0x0034F8B0u; return; } if (c.pc != 0x0034F6D8u) [[unlikely]] return; }
L_0034F6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F7E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6E8u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x0034F6E8u) [[unlikely]] return; }
L_0034F6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0034F704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F6F8u) [[unlikely]] return; }
L_0034F6F8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0034F7E4; } }
L_0034F704:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x0034F710u) [[unlikely]] return; }
L_0034F710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0034F72C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F720u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F720u) [[unlikely]] return; }
L_0034F720:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0034F7E4; } }
L_0034F72C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F740u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x0034F740u) [[unlikely]] return; }
L_0034F740:
    set32(c.r[2], 0u + 3u);
    st32((c.r[18].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
L_0034F74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F754u);  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0034F754u) [[unlikely]] return; }
L_0034F754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034F770; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F764u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x0034F764u) [[unlikely]] return; }
L_0034F764:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0034F7E4; } }
L_0034F770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F778u);  if (depth < kMaxDepth) unit_008B(c, 444u, depth + 1u); else { c.pc = 0x0034F8B0u; return; } if (c.pc != 0x0034F778u) [[unlikely]] return; }
L_0034F778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F7E4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 76u), 0u);  goto L_0034F7A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F79Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034F79Cu) [[unlikely]] return; }
L_0034F79C:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_0034F7A0:
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F7B4u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0034F7B4u) [[unlikely]] return; }
L_0034F7B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0034F7D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F7C8u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0034F7C8u) [[unlikely]] return; }
L_0034F7C8:
    st32((c.r[18].w[0] + 92u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0034F7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F7D8u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0014EF10u; return; } if (c.pc != 0x0034F7D8u) [[unlikely]] return; }
L_0034F7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F7E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 141u, depth + 1u); else { c.pc = 0x0014EEF0u; return; } if (c.pc != 0x0034F7E0u) [[unlikely]] return; }
L_0034F7E0:
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 1;
L_0034F7E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0034F7E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034F800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F810u);  if (depth < kMaxDepth) unit_008B(c, 441u, depth + 1u); else { c.pc = 0x0034F860u; return; } if (c.pc != 0x0034F810u) [[unlikely]] return; }
L_0034F810:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0034F828; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034F840; } }
L_0034F828:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_0034F840:
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 27072u);  c.pc = t; return; }
L_0034F870:
    c.budget -= 2;
    {  goto L_0034F880; }
L_0034F880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_0034F890:
    c.budget -= 2;
    {  goto L_0034F8A0; }
L_0034F8A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_0034F8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0034F8CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F8CCu);  if (depth < kMaxDepth) unit_008B(c, 324u, depth + 1u); else { c.pc = 0x0034EE80u; return; } if (c.pc != 0x0034F8CCu) [[unlikely]] return; }
L_0034F8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F8E0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0034F900:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034F934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0034F9D4; } }
L_0034F934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F93Cu);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0034F93Cu) [[unlikely]] return; }
L_0034F93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F944u); set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0034F944u) [[unlikely]] return; }
L_0034F944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F94Cu);  if (depth < kMaxDepth) unit_008B(c, 465u, depth + 1u); else { c.pc = 0x0034FA40u; return; } if (c.pc != 0x0034F94Cu) [[unlikely]] return; }
L_0034F94C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F958u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0034F958u) [[unlikely]] return; }
L_0034F958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0034F960u) [[unlikely]] return; }
L_0034F960:
    set32(c.r[5], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F96Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 461u, depth + 1u); else { c.pc = 0x0034F9F0u; return; } if (c.pc != 0x0034F96Cu) [[unlikely]] return; }
L_0034F96C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0034F9A4; } }
L_0034F974:
    set32(c.r[19], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0034F9A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F990u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0034F990u) [[unlikely]] return; }
L_0034F990:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F9A0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x0034F9A0u) [[unlikely]] return; }
L_0034F9A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0034F9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F9ACu); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034F9ACu) [[unlikely]] return; }
L_0034F9AC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F974u | kUnwind; return; } goto L_0034F974; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F9C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0034F9C0u) [[unlikely]] return; }
L_0034F9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F9C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0034F9C8u) [[unlikely]] return; }
L_0034F9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F9D0u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0034F9D0u) [[unlikely]] return; }
L_0034F9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034F9D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034F9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0034FA0Cu) [[unlikely]] return; }
L_0034FA0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 464u, depth + 1u); else { c.pc = 0x0034FA30u; return; } if (c.pc != 0x0034FA18u) [[unlikely]] return; }
L_0034FA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034FA30:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034FA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));  c.pc = t; return; }
L_0034FA50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 277u, depth + 1u); else { c.pc = 0x0014FBE0u; return; } if (c.pc != 0x0034FA6Cu) [[unlikely]] return; }
L_0034FA6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 104u)));  goto L_0034FA98; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 76u), 0u);  goto L_0034FA94; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FA90u) [[unlikely]] return; }
L_0034FA90:
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 1;
L_0034FA94:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0034FA98:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  goto L_0034FB0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0034FAE4; } }
L_0034FAA8:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0034FAE4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  goto L_0034FAD8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FAD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FAD4u) [[unlikely]] return; }
L_0034FAD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0034FAD8:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_0034FAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FAECu); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034FAECu) [[unlikely]] return; }
L_0034FAEC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FAA8u | kUnwind; return; } goto L_0034FAA8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0034FB04u) [[unlikely]] return; }
L_0034FB04:
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 2;
L_0034FB0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_0034FB34; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 100u), 0u);  goto L_0034FB30; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FB2Cu) [[unlikely]] return; }
L_0034FB2C:
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 1;
L_0034FB30:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_0034FB34:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 88u)));  goto L_0034FB4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB44u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0034FB44u) [[unlikely]] return; }
L_0034FB44:
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 2;
L_0034FB4C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  goto L_0034FB68; }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x0034FB60u) [[unlikely]] return; }
L_0034FB60:
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 2;
L_0034FB68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0034FB80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB78u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0034FB78u) [[unlikely]] return; }
L_0034FB78:
    st32((c.r[17].w[0] + 92u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0034FB80:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034FBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034FBE0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[7].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FBD8u); st32((c.r[16].w[0] + 116u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0034EB80u; return; } if (c.pc != 0x0034FBD8u) [[unlikely]] return; }
L_0034FBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FBE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 293u, depth + 1u); else { c.pc = 0x0034EB60u; return; } if (c.pc != 0x0034FBE0u) [[unlikely]] return; }
L_0034FBE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034FBF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC14u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034FC14u) [[unlikely]] return; }
L_0034FC14:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0034FC8C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC2Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x0034FC2Cu) [[unlikely]] return; }
L_0034FC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC34u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0034FC34u) [[unlikely]] return; }
L_0034FC34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 104u)));  goto L_0034FC50; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x0034FC4Cu) [[unlikely]] return; }
L_0034FC4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0034FC50:
    set32(c.r[16], c.r[18].w[0] << 2);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC80u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x0034FC80u) [[unlikely]] return; }
L_0034FC80:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0034FC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034FCB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034FD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0034FD0C; } }
L_0034FCD8:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  goto L_0034FD00; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FCFCu) [[unlikely]] return; }
L_0034FCFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0034FD00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 3;
L_0034FD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD14u); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034FD14u) [[unlikely]] return; }
L_0034FD14:
    c.r[3].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FCD8u | kUnwind; return; } goto L_0034FCD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0034FD7C; } }
L_0034FD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD30u); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034FD30u) [[unlikely]] return; }
L_0034FD30:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034FD78; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034FD78; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 104u)));  goto L_0034FD70; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FD6Cu) [[unlikely]] return; }
L_0034FD6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0034FD70:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_0034FD78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0034FD7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034FD90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDB4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0034FDB4u) [[unlikely]] return; }
L_0034FDB4:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0034FE08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDC8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0034FDC8u) [[unlikely]] return; }
L_0034FDC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 100u)));  goto L_0034FDEC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x0034FDE4u) [[unlikely]] return; }
L_0034FDE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 2;
L_0034FDEC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE04u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x0034FE04u) [[unlikely]] return; }
L_0034FE04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034FE08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034FE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), c.r[5].w[0]);  c.pc = t; return; }
L_0034FE28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] + 21740u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 21744u), c.r[5].w[0]);  c.pc = t; return; }
L_0034FE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 28u, depth); }
L_0034FE58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 29u, depth); }
L_0034FE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21740u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0034FE94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE94u); set32(c.r[4], ld32((c.r[2].w[0] + 21744u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FE94u) [[unlikely]] return; }
L_0034FE94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034FEA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[3].w[0] + 21736u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0034FED4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FED0u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0034FED0u) [[unlikely]] return; }
L_0034FED0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0034FED4:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034FEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 21736u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0034FF28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF24u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0034FF24u) [[unlikely]] return; }
L_0034FF24:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0034FF28:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034FF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 6144ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0034FF70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 15872u);  if (t) { goto L_0034FF7C; } }
L_0034FF70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0034FF90; } }
    set32(c.r[4], c.r[4].w[0] - 15832u);
    c.budget -= 1;
L_0034FF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF84u);  if (depth < kMaxDepth) unit_008B(c, 501u, depth + 1u); else { c.pc = 0x0034FE70u; return; } if (c.pc != 0x0034FF84u) [[unlikely]] return; }
L_0034FF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034FFD8; } }
    c.budget -= 1;
L_0034FF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF98u);  if (depth < kMaxDepth) unit_008B(c, 512u, depth + 1u); else { c.pc = 0x0034FFF0u; return; } if (c.pc != 0x0034FF98u) [[unlikely]] return; }
L_0034FF98:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 60u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034FFD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FFB4u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0034FFB4u) [[unlikely]] return; }
L_0034FFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FFBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 6u, depth + 1u); else { c.pc = 0x00350048u; return; } if (c.pc != 0x0034FFBCu) [[unlikely]] return; }
L_0034FFBC:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0034FFD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034FFD8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034FFF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[3].w[0] + 21752u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_008C(c, 5u, depth); } }
    [[clang::musttail]] return unit_008C(c, 2u, depth);
}

}
