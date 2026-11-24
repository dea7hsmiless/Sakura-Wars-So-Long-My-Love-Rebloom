#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0069[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 56, 0, 57, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0,
    282, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0,
    297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395,
};

void unit_0069(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C4000;
    case 2u: goto L_002C4008;
    case 3u: goto L_002C4010;
    case 4u: goto L_002C4020;
    case 5u: goto L_002C4024;
    case 6u: goto L_002C4034;
    case 7u: goto L_002C4038;
    case 8u: goto L_002C4060;
    case 9u: goto L_002C40A0;
    case 10u: goto L_002C40A8;
    case 11u: goto L_002C40C4;
    case 12u: goto L_002C40D8;
    case 13u: goto L_002C40FC;
    case 14u: goto L_002C4120;
    case 15u: goto L_002C4128;
    case 16u: goto L_002C4168;
    case 17u: goto L_002C4180;
    case 18u: goto L_002C41C0;
    case 19u: goto L_002C41E8;
    case 20u: goto L_002C421C;
    case 21u: goto L_002C4250;
    case 22u: goto L_002C427C;
    case 23u: goto L_002C429C;
    case 24u: goto L_002C42C0;
    case 25u: goto L_002C42F0;
    case 26u: goto L_002C4310;
    case 27u: goto L_002C4330;
    case 28u: goto L_002C4360;
    case 29u: goto L_002C4390;
    case 30u: goto L_002C43A8;
    case 31u: goto L_002C43C0;
    case 32u: goto L_002C43F0;
    case 33u: goto L_002C4408;
    case 34u: goto L_002C4420;
    case 35u: goto L_002C449C;
    case 36u: goto L_002C44B0;
    case 37u: goto L_002C4508;
    case 38u: goto L_002C4520;
    case 39u: goto L_002C4578;
    case 40u: goto L_002C4590;
    case 41u: goto L_002C45E8;
    case 42u: goto L_002C4600;
    case 43u: goto L_002C4614;
    case 44u: goto L_002C4634;
    case 45u: goto L_002C4650;
    case 46u: goto L_002C4670;
    case 47u: goto L_002C4690;
    case 48u: goto L_002C46BC;
    case 49u: goto L_002C46F0;
    case 50u: goto L_002C4714;
    case 51u: goto L_002C471C;
    case 52u: goto L_002C4744;
    case 53u: goto L_002C4754;
    case 54u: goto L_002C47C4;
    case 55u: goto L_002C47EC;
    case 56u: goto L_002C4804;
    case 57u: goto L_002C480C;
    case 58u: goto L_002C4814;
    case 59u: goto L_002C4824;
    case 60u: goto L_002C482C;
    case 61u: goto L_002C4840;
    case 62u: goto L_002C485C;
    case 63u: goto L_002C4884;
    case 64u: goto L_002C48B0;
    case 65u: goto L_002C48C8;
    case 66u: goto L_002C4950;
    case 67u: goto L_002C49D0;
    case 68u: goto L_002C4A00;
    case 69u: goto L_002C4A18;
    case 70u: goto L_002C4A30;
    case 71u: goto L_002C4A44;
    case 72u: goto L_002C4A7C;
    case 73u: goto L_002C4A90;
    case 74u: goto L_002C4AA0;
    case 75u: goto L_002C4AC0;
    case 76u: goto L_002C4B1C;
    case 77u: goto L_002C4B28;
    case 78u: goto L_002C4B40;
    case 79u: goto L_002C4B60;
    case 80u: goto L_002C4B70;
    case 81u: goto L_002C4B8C;
    case 82u: goto L_002C4BCC;
    case 83u: goto L_002C4BE8;
    case 84u: goto L_002C4C20;
    case 85u: goto L_002C4C7C;
    case 86u: goto L_002C4CC8;
    case 87u: goto L_002C4CE4;
    case 88u: goto L_002C4D08;
    case 89u: goto L_002C4D40;
    case 90u: goto L_002C4D5C;
    case 91u: goto L_002C4D80;
    case 92u: goto L_002C4DA0;
    case 93u: goto L_002C4DF0;
    case 94u: goto L_002C4E0C;
    case 95u: goto L_002C4E30;
    case 96u: goto L_002C4E40;
    case 97u: goto L_002C4E78;
    case 98u: goto L_002C4E94;
    case 99u: goto L_002C4EB8;
    case 100u: goto L_002C4ED0;
    case 101u: goto L_002C4F20;
    case 102u: goto L_002C4F3C;
    case 103u: goto L_002C4F60;
    case 104u: goto L_002C4F70;
    case 105u: goto L_002C4FA0;
    case 106u: goto L_002C4FBC;
    case 107u: goto L_002C4FE0;
    case 108u: goto L_002C4FF0;
    case 109u: goto L_002C5040;
    case 110u: goto L_002C505C;
    case 111u: goto L_002C5080;
    case 112u: goto L_002C5090;
    case 113u: goto L_002C50E0;
    case 114u: goto L_002C50FC;
    case 115u: goto L_002C5120;
    case 116u: goto L_002C5130;
    case 117u: goto L_002C5180;
    case 118u: goto L_002C519C;
    case 119u: goto L_002C51C0;
    case 120u: goto L_002C5298;
    case 121u: goto L_002C52C8;
    case 122u: goto L_002C52E4;
    case 123u: goto L_002C5308;
    case 124u: goto L_002C5320;
    case 125u: goto L_002C5380;
    case 126u: goto L_002C53A8;
    case 127u: goto L_002C53E0;
    case 128u: goto L_002C53FC;
    case 129u: goto L_002C5420;
    case 130u: goto L_002C5430;
    case 131u: goto L_002C545C;
    case 132u: goto L_002C548C;
    case 133u: goto L_002C54A8;
    case 134u: goto L_002C54CC;
    case 135u: goto L_002C54E0;
    case 136u: goto L_002C554C;
    case 137u: goto L_002C55C8;
    case 138u: goto L_002C55F4;
    case 139u: goto L_002C5610;
    case 140u: goto L_002C5634;
    case 141u: goto L_002C5650;
    case 142u: goto L_002C56A0;
    case 143u: goto L_002C56D0;
    case 144u: goto L_002C56EC;
    case 145u: goto L_002C5710;
    case 146u: goto L_002C5720;
    case 147u: goto L_002C574C;
    case 148u: goto L_002C577C;
    case 149u: goto L_002C5798;
    case 150u: goto L_002C57BC;
    case 151u: goto L_002C57D0;
    case 152u: goto L_002C5860;
    case 153u: goto L_002C5890;
    case 154u: goto L_002C58AC;
    case 155u: goto L_002C58D0;
    case 156u: goto L_002C58E0;
    case 157u: goto L_002C58FC;
    case 158u: goto L_002C5934;
    case 159u: goto L_002C5950;
    case 160u: goto L_002C5974;
    case 161u: goto L_002C5990;
    case 162u: goto L_002C59F4;
    case 163u: goto L_002C5A0C;
    case 164u: goto L_002C5A1C;
    case 165u: goto L_002C5A4C;
    case 166u: goto L_002C5A68;
    case 167u: goto L_002C5A8C;
    case 168u: goto L_002C5AA0;
    case 169u: goto L_002C5ABC;
    case 170u: goto L_002C5AC8;
    case 171u: goto L_002C5AF8;
    case 172u: goto L_002C5B14;
    case 173u: goto L_002C5B38;
    case 174u: goto L_002C5B50;
    case 175u: goto L_002C5B6C;
    case 176u: goto L_002C5BA4;
    case 177u: goto L_002C5BC0;
    case 178u: goto L_002C5BE4;
    case 179u: goto L_002C5C00;
    case 180u: goto L_002C5D14;
    case 181u: goto L_002C5D44;
    case 182u: goto L_002C5D60;
    case 183u: goto L_002C5D84;
    case 184u: goto L_002C5DA0;
    case 185u: goto L_002C5E44;
    case 186u: goto L_002C5E74;
    case 187u: goto L_002C5E90;
    case 188u: goto L_002C5EB4;
    case 189u: goto L_002C5ED0;
    case 190u: goto L_002C5FDC;
    case 191u: goto L_002C600C;
    case 192u: goto L_002C6028;
    case 193u: goto L_002C604C;
    case 194u: goto L_002C6060;
    case 195u: goto L_002C60E4;
    case 196u: goto L_002C6114;
    case 197u: goto L_002C6130;
    case 198u: goto L_002C6154;
    case 199u: goto L_002C6170;
    case 200u: goto L_002C6194;
    case 201u: goto L_002C61C4;
    case 202u: goto L_002C61E0;
    case 203u: goto L_002C6204;
    case 204u: goto L_002C6220;
    case 205u: goto L_002C629C;
    case 206u: goto L_002C62CC;
    case 207u: goto L_002C62E8;
    case 208u: goto L_002C630C;
    case 209u: goto L_002C6320;
    case 210u: goto L_002C6330;
    case 211u: goto L_002C6370;
    case 212u: goto L_002C63B0;
    case 213u: goto L_002C63EC;
    case 214u: goto L_002C6404;
    case 215u: goto L_002C641C;
    case 216u: goto L_002C6440;
    case 217u: goto L_002C6480;
    case 218u: goto L_002C64AC;
    case 219u: goto L_002C64D0;
    case 220u: goto L_002C64E0;
    case 221u: goto L_002C64F0;
    case 222u: goto L_002C6500;
    case 223u: goto L_002C651C;
    case 224u: goto L_002C6528;
    case 225u: goto L_002C6558;
    case 226u: goto L_002C6570;
    case 227u: goto L_002C659C;
    case 228u: goto L_002C65A8;
    case 229u: goto L_002C65C0;
    case 230u: goto L_002C6600;
    case 231u: goto L_002C660C;
    case 232u: goto L_002C6624;
    case 233u: goto L_002C6640;
    case 234u: goto L_002C665C;
    case 235u: goto L_002C6680;
    case 236u: goto L_002C66B0;
    case 237u: goto L_002C6710;
    case 238u: goto L_002C6730;
    case 239u: goto L_002C6744;
    case 240u: goto L_002C676C;
    case 241u: goto L_002C67D0;
    case 242u: goto L_002C67E4;
    case 243u: goto L_002C67F8;
    case 244u: goto L_002C6804;
    case 245u: goto L_002C6818;
    case 246u: goto L_002C6830;
    case 247u: goto L_002C683C;
    case 248u: goto L_002C6884;
    case 249u: goto L_002C689C;
    case 250u: goto L_002C68D4;
    case 251u: goto L_002C68E8;
    case 252u: goto L_002C68F8;
    case 253u: goto L_002C691C;
    case 254u: goto L_002C6938;
    case 255u: goto L_002C6964;
    case 256u: goto L_002C6994;
    case 257u: goto L_002C69A4;
    case 258u: goto L_002C69C4;
    case 259u: goto L_002C69F0;
    case 260u: goto L_002C69FC;
    case 261u: goto L_002C6A34;
    case 262u: goto L_002C6A4C;
    case 263u: goto L_002C6A80;
    case 264u: goto L_002C6AD4;
    case 265u: goto L_002C6AF8;
    case 266u: goto L_002C6B78;
    case 267u: goto L_002C6B84;
    case 268u: goto L_002C6BA0;
    case 269u: goto L_002C6BB8;
    case 270u: goto L_002C6BD0;
    case 271u: goto L_002C6BEC;
    case 272u: goto L_002C6C00;
    case 273u: goto L_002C6C30;
    case 274u: goto L_002C6C4C;
    case 275u: goto L_002C6C58;
    case 276u: goto L_002C6C94;
    case 277u: goto L_002C6CB0;
    case 278u: goto L_002C6D10;
    case 279u: goto L_002C6D28;
    case 280u: goto L_002C6D3C;
    case 281u: goto L_002C6D6C;
    case 282u: goto L_002C6D80;
    case 283u: goto L_002C6D90;
    case 284u: goto L_002C6DA4;
    case 285u: goto L_002C6DF8;
    case 286u: goto L_002C6E18;
    case 287u: goto L_002C6E34;
    case 288u: goto L_002C6E50;
    case 289u: goto L_002C6E70;
    case 290u: goto L_002C6E84;
    case 291u: goto L_002C6E8C;
    case 292u: goto L_002C6EA8;
    case 293u: goto L_002C6EC0;
    case 294u: goto L_002C6EDC;
    case 295u: goto L_002C6EE8;
    case 296u: goto L_002C6EF4;
    case 297u: goto L_002C6F00;
    case 298u: goto L_002C6F10;
    case 299u: goto L_002C6F20;
    case 300u: goto L_002C6F48;
    case 301u: goto L_002C6F78;
    case 302u: goto L_002C6F8C;
    case 303u: goto L_002C6F94;
    case 304u: goto L_002C6FB0;
    case 305u: goto L_002C6FD4;
    case 306u: goto L_002C6FE8;
    case 307u: goto L_002C703C;
    case 308u: goto L_002C7054;
    case 309u: goto L_002C7094;
    case 310u: goto L_002C70A0;
    case 311u: goto L_002C70BC;
    case 312u: goto L_002C70D0;
    case 313u: goto L_002C70E8;
    case 314u: goto L_002C7124;
    case 315u: goto L_002C713C;
    case 316u: goto L_002C7170;
    case 317u: goto L_002C7180;
    case 318u: goto L_002C7190;
    case 319u: goto L_002C71B8;
    case 320u: goto L_002C71C0;
    case 321u: goto L_002C71CC;
    case 322u: goto L_002C7238;
    case 323u: goto L_002C7254;
    case 324u: goto L_002C7284;
    case 325u: goto L_002C7298;
    case 326u: goto L_002C72F0;
    case 327u: goto L_002C7330;
    case 328u: goto L_002C734C;
    case 329u: goto L_002C7360;
    case 330u: goto L_002C7370;
    case 331u: goto L_002C7384;
    case 332u: goto L_002C73B4;
    case 333u: goto L_002C73D8;
    case 334u: goto L_002C7458;
    case 335u: goto L_002C7464;
    case 336u: goto L_002C7478;
    case 337u: goto L_002C74A8;
    case 338u: goto L_002C74BC;
    case 339u: goto L_002C74CC;
    case 340u: goto L_002C74D8;
    case 341u: goto L_002C7584;
    case 342u: goto L_002C758C;
    case 343u: goto L_002C7598;
    case 344u: goto L_002C75AC;
    case 345u: goto L_002C75D4;
    case 346u: goto L_002C75E0;
    case 347u: goto L_002C7630;
    case 348u: goto L_002C7638;
    case 349u: goto L_002C764C;
    case 350u: goto L_002C768C;
    case 351u: goto L_002C76BC;
    case 352u: goto L_002C76CC;
    case 353u: goto L_002C76D4;
    case 354u: goto L_002C76EC;
    case 355u: goto L_002C7700;
    case 356u: goto L_002C7740;
    case 357u: goto L_002C7754;
    case 358u: goto L_002C7770;
    case 359u: goto L_002C7784;
    case 360u: goto L_002C77A0;
    case 361u: goto L_002C77C4;
    case 362u: goto L_002C7820;
    case 363u: goto L_002C7838;
    case 364u: goto L_002C7848;
    case 365u: goto L_002C7858;
    case 366u: goto L_002C786C;
    case 367u: goto L_002C7884;
    case 368u: goto L_002C7890;
    case 369u: goto L_002C78A8;
    case 370u: goto L_002C78BC;
    case 371u: goto L_002C78D0;
    case 372u: goto L_002C78E4;
    case 373u: goto L_002C7924;
    case 374u: goto L_002C7930;
    case 375u: goto L_002C795C;
    case 376u: goto L_002C7964;
    case 377u: goto L_002C7BF0;
    case 378u: goto L_002C7C3C;
    case 379u: goto L_002C7C88;
    case 380u: goto L_002C7CD4;
    case 381u: goto L_002C7D28;
    case 382u: goto L_002C7D74;
    case 383u: goto L_002C7DA0;
    case 384u: goto L_002C7DD4;
    case 385u: goto L_002C7EAC;
    case 386u: goto L_002C7EE0;
    case 387u: goto L_002C7EF4;
    case 388u: goto L_002C7F14;
    case 389u: goto L_002C7F20;
    case 390u: goto L_002C7F40;
    case 391u: goto L_002C7F60;
    case 392u: goto L_002C7F8C;
    case 393u: goto L_002C7FA8;
    case 394u: goto L_002C7FB4;
    case 395u: goto L_002C7FFC;
    default: bad_entry(c, 0x002C4000u); return;
    }
L_002C4000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4008u); set32(c.r[4], c.r[4].w[0] + 23328u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C4008u) [[unlikely]] return; }
L_002C4008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4020; } }
L_002C4010:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4020u); set32(c.r[4], c.r[4].w[0] + 23376u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C4020u) [[unlikely]] return; }
L_002C4020:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C4024:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3FC8u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 374u, depth); }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002C4038:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C4060:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_002C4098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4194; } }
L_002C4098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C40A0u);  if (depth < kMaxDepth) unit_0069(c, 21u, depth + 1u); else { c.pc = 0x002C4250u; return; } if (c.pc != 0x002C40A0u) [[unlikely]] return; }
L_002C40A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002C4104; } }
L_002C40A8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 52u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_002C4104; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C40C4u); set32(c.r[4], 0u + 332u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002C40C4u) [[unlikely]] return; }
L_002C40C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_002C40DC; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C40D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 334u, depth + 1u); else { c.pc = 0x002C3970u; return; } if (c.pc != 0x002C40D8u) [[unlikely]] return; }
L_002C40D8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002C40DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002C40EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4194; } }
L_002C40EC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C40FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 350u, depth + 1u); else { c.pc = 0x002C3C50u; return; } if (c.pc != 0x002C40FCu) [[unlikely]] return; }
L_002C40FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002C4198; } }
L_002C4104:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C40A8u | kUnwind; return; } goto L_002C40A8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4120u); set32(c.r[4], c.r[4].w[0] + 23424u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C4120u) [[unlikely]] return; }
L_002C4120:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002C4128:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C4184; }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[4].w[0] + 68u);  goto L_002C4170; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 64u)));  goto L_002C4158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4180; } }
L_002C4158:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4168u); set32(c.r[4], c.r[4].w[0] + 23328u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C4168u) [[unlikely]] return; }
L_002C4168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4180; } }
L_002C4170:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4180u); set32(c.r[4], c.r[4].w[0] + 23376u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C4180u) [[unlikely]] return; }
L_002C4180:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C4184:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4128u | kUnwind; return; } goto L_002C4128; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002C4198:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C41C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 10;
L_002C41E8:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 52u);  if (t) { goto L_002C4220; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C4224; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C4220; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C421Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C421Cu) [[unlikely]] return; }
L_002C421C:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_002C4220:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C4224:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C41E8u | kUnwind; return; } goto L_002C41E8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C4250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C42D4; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002C427C:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[3].w[0] + 52u);
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C42C8; }
    set32(c.r[4], c.r[3].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C429Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 153u, depth + 1u); else { c.pc = 0x00181DC0u; return; } if (c.pc != 0x002C429Cu) [[unlikely]] return; }
L_002C429C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C42C4; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C42C4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C42C0u) [[unlikely]] return; }
L_002C42C0:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_002C42C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C42C8:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C427Cu | kUnwind; return; } goto L_002C427C; }
L_002C42D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C42F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 8;
L_002C4310:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 52u);  if (t) { goto L_002C4334; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4330u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4330u) [[unlikely]] return; }
L_002C4330:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002C4334:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4310u | kUnwind; return; } goto L_002C4310; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C4360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C43A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 26960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4390u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C4390u) [[unlikely]] return; }
L_002C4390:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C43AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C43A8u) [[unlikely]] return; }
L_002C43A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C43AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C43C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C4408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43F0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C43F0u) [[unlikely]] return; }
L_002C43F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C440C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C4408u) [[unlikely]] return; }
L_002C4408:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C440C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C4420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1024u)));
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[2].w[0] + 1024u);  if (t) { goto L_002C4458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C449C; } }
L_002C4458:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C4468; }
    set32(c.r[2], ld32((c.r[3].w[0] + 152u)));
    c.budget -= 1;
L_002C4468:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  goto L_002C4478; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C449C; } }
L_002C4478:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.f[12] = ld32((c.r[4].w[0] + 4u));  if (t) { goto L_002C448C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_002C4490; } }
L_002C448C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4490:
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C449Cu); c.r[7].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002C449Cu) [[unlikely]] return; }
L_002C449C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C44B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1024u)));
    c.budget -= 10;
    if (c.r[5].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C450C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C44E8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 1;
L_002C44E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4508; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C4500; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_002C4500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4508u); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x002C4508u) [[unlikely]] return; }
L_002C4508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C450C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C4520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1024u)));
    c.budget -= 10;
    if (c.r[5].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C457C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C4558; }
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 1;
L_002C4558:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4578; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C4570; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_002C4570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4578u); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 271u, depth + 1u); else { c.pc = 0x002C3020u; return; } if (c.pc != 0x002C4578u) [[unlikely]] return; }
L_002C4578:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C457C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C4590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1024u)));
    c.budget -= 10;
    if (c.r[5].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C45EC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C45C8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 1;
L_002C45C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C45E8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C45E0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_002C45E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C45E8u); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 275u, depth + 1u); else { c.pc = 0x002C30B0u; return; } if (c.pc != 0x002C45E8u) [[unlikely]] return; }
L_002C45E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C45EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C4600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002C4614u) [[unlikely]] return; }
L_002C4614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 27088u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], 0u + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4634u); st32((c.r[28].w[0] - 30276u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002C4634u) [[unlikely]] return; }
L_002C4634:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C4650:
    st32((c.r[28].w[0] - 30276u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_002C4670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 8;
L_002C4690:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[18], c.r[3].w[0] + 52u);
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 8;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C46C4; }
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46BCu); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002C46BCu) [[unlikely]] return; }
L_002C46BC:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_002C46C4:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4690u | kUnwind; return; } goto L_002C4690; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C46F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4714u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x002C4714u) [[unlikely]] return; }
L_002C4714:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002C471C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[2], c.r[18].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C4870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4744u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002C4744u) [[unlikely]] return; }
L_002C4744:
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4754u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 290u, depth + 1u); else { c.pc = 0x0020ABD0u; return; } if (c.pc != 0x002C4754u) [[unlikely]] return; }
L_002C4754:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[29].w[0] + 124u), c.r[18].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[18].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 156u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 172u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.r[2].d[0] = 0ull | 65535ull;
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 352u)));
    c.r[19].d[0] = ld16((c.r[3].w[0] + 74u));
    c.budget -= 26;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 352u)));  goto L_002C47D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002C47C4u) [[unlikely]] return; }
L_002C47C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 352u)));
    c.budget -= 4;
L_002C47D4:
    set32(c.r[2], 0u + 3u);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 84u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_002C47FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002C47ECu) [[unlikely]] return; }
L_002C47EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
L_002C47FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4804u);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002C4804u) [[unlikely]] return; }
L_002C4804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C480Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x002C480Cu) [[unlikely]] return; }
L_002C480C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4814u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002C4814u) [[unlikely]] return; }
L_002C4814:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4824u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x002C4824u) [[unlikely]] return; }
L_002C4824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C482Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002C482Cu) [[unlikely]] return; }
L_002C482C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull | 65535ull;  goto L_002C484C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4840u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002C4840u) [[unlikely]] return; }
L_002C4840:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
L_002C484C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002C486C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C485Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002C485Cu) [[unlikely]] return; }
L_002C485C:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002C486C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C4870:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C471Cu | kUnwind; return; } goto L_002C471C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4884u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x002C4884u) [[unlikely]] return; }
L_002C4884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002C48B0:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    c.f[4] = 0u;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 6;
L_002C48C8:
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 52u);  if (t) { goto L_002C48FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[4];  if (t) { goto L_002C4900; } }
L_002C48FC:
    c.f[3] = ld32((c.r[6].w[0] + 80u));
    c.budget -= 1;
L_002C4900:
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0]), c.f[1]);  if (t) { goto L_002C492C; } }
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[4]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[7].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_002C492C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C48C8u | kUnwind; return; } goto L_002C48C8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4950:
    set32(c.r[6], ld32((c.r[28].w[0] - 30276u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C49BC; } }
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[3].w[0] + 52u);  if (t) { goto L_002C4998; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_002C49BC; } }
L_002C4998:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0]), 0u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 9;
L_002C49BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C49D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C4A18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A00u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C4A00u) [[unlikely]] return; }
L_002C4A00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C4A1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C4A18u) [[unlikely]] return; }
L_002C4A18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C4A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C4A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002C4A44u) [[unlikely]] return; }
L_002C4A44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 27152u);
    set32(c.r[3], c.r[3].w[0] + 27208u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 36u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434B0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21569ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A7Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002C4A7Cu) [[unlikely]] return; }
L_002C4A7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C4A90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289A00u | kUnwind; return; } [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_002C4AA0:
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[8].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289AC0u | kUnwind; return; } [[clang::musttail]] return unit_005A(c, 195u, depth); }
L_002C4AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C4B40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27152u);
    set32(c.r[2], c.r[2].w[0] + 27208u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002C4B28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C4B1Cu) [[unlikely]] return; }
L_002C4B1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C4B28u) [[unlikely]] return; }
L_002C4B28:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002C4B44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C4B40u) [[unlikely]] return; }
L_002C4B40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C4B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C4B60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4AC0u | kUnwind; return; } goto L_002C4AC0; }
L_002C4B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B8Cu); set32(c.r[4], 0u + 732u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002C4B8Cu) [[unlikely]] return; }
L_002C4B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C4C00; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C4BA0; } }
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_002C4BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 16128u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BCCu); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x002C4BCCu) [[unlikely]] return; }
L_002C4BCC:
    st32((c.r[16].w[0] + 672u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 668u), 0u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    st32((c.r[16].w[0] + 684u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BE8u); st32((c.r[16].w[0] + 688u), 0u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002C4BE8u) [[unlikely]] return; }
L_002C4BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27248u);
    set32(c.r[2], c.r[2].w[0] + 27276u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 6;
L_002C4C00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C4C20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C4C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C4C68; } }
L_002C4C44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002C4C68; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4C6C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4C68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C4C6C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C7Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 13u, depth + 1u); else { c.pc = 0x001B80E0u; return; } if (c.pc != 0x002C4C7Cu) [[unlikely]] return; }
L_002C4C7C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002C4C94; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 44u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
L_002C4C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002C4D10; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_002C4CC8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C4CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4CC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4CC8u) [[unlikely]] return; }
L_002C4CC8:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4CE4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C4CE4u) [[unlikely]] return; }
L_002C4CE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002C4D84; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C4D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4D08u) [[unlikely]] return; }
L_002C4D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4D80; } }
L_002C4D10:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 64u), 0u);  if (t) { goto L_002C4D40; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C4D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4D40u) [[unlikely]] return; }
L_002C4D40:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D5Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C4D5Cu) [[unlikely]] return; }
L_002C4D5C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C4D80; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C4D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4D80u) [[unlikely]] return; }
L_002C4D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C4D84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C4DA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C4E38; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002C4DF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C4DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4DF0u) [[unlikely]] return; }
L_002C4DF0:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E0Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C4E0Cu) [[unlikely]] return; }
L_002C4E0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C4EBC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C4EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4E30u) [[unlikely]] return; }
L_002C4E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4EB8; } }
L_002C4E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E40u);  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x001B8120u; return; } if (c.pc != 0x002C4E40u) [[unlikely]] return; }
L_002C4E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4EB8; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C4E78; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C4E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4E78u) [[unlikely]] return; }
L_002C4E78:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E94u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C4E94u) [[unlikely]] return; }
L_002C4E94:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C4EB8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C4EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4EB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4EB8u) [[unlikely]] return; }
L_002C4EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C4EBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C4ED0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C4F68; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002C4F20; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C4F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4F20u) [[unlikely]] return; }
L_002C4F20:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F3Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C4F3Cu) [[unlikely]] return; }
L_002C4F3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C4FE4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C4FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4F60u) [[unlikely]] return; }
L_002C4F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4FE0; } }
L_002C4F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F70u);  if (depth < kMaxDepth) unit_0026(c, 15u, depth + 1u); else { c.pc = 0x001B8110u; return; } if (c.pc != 0x002C4F70u) [[unlikely]] return; }
L_002C4F70:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C4FA0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C4FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4FA0u) [[unlikely]] return; }
L_002C4FA0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FBCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C4FBCu) [[unlikely]] return; }
L_002C4FBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C4FE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C4FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C4FE0u) [[unlikely]] return; }
L_002C4FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C4FE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C4FF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C5088; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002C5040; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5040u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5040u) [[unlikely]] return; }
L_002C5040:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C505Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C505Cu) [[unlikely]] return; }
L_002C505C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5124; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5080u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5080u) [[unlikely]] return; }
L_002C5080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5120; } }
L_002C5088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5090u);  if (depth < kMaxDepth) unit_0026(c, 14u, depth + 1u); else { c.pc = 0x001B8100u; return; } if (c.pc != 0x002C5090u) [[unlikely]] return; }
L_002C5090:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C50B4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_002C50B4:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C50E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C50E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C50E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C50E0u) [[unlikely]] return; }
L_002C50E0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C50FCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C50FCu) [[unlikely]] return; }
L_002C50FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5120; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5120u) [[unlikely]] return; }
L_002C5120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5124:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C5130:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_002C51CC; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002C5180; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5180u) [[unlikely]] return; }
L_002C5180:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C519Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C519Cu) [[unlikely]] return; }
L_002C519C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C530C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C51C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C51C0u) [[unlikely]] return; }
L_002C51C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5308; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_002C51CC:
    c.f[13] = 0u;
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002C5264; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_002C51FC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C5214; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_002C51FC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_002C5214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002C5234; } }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C524C; } }
L_002C5234:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C5248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_002C524C; } }
L_002C5248:
    c.f[1] = 0u;
    c.budget -= 1;
L_002C524C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
L_002C5264:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C527C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C5290; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C527C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C528C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_002C5290; } }
L_002C528C:
    c.f[12] = 0u;
    c.budget -= 1;
L_002C5290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5298u);  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x002C5298u) [[unlikely]] return; }
L_002C5298:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C52C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C52C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C52C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C52C8u) [[unlikely]] return; }
L_002C52C8:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C52E4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C52E4u) [[unlikely]] return; }
L_002C52E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5308; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5308u) [[unlikely]] return; }
L_002C5308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C530C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C5320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5390; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C534C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002C534C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_002C5368; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 18344u);  if (t) { goto L_002C5378; } }
L_002C5368:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_002C5378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_002C5378; } }
L_002C5378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5380u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0068(c, 309u, depth + 1u); else { c.pc = 0x002C3610u; return; } if (c.pc != 0x002C5380u) [[unlikely]] return; }
L_002C5380:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_002C5420; } }
L_002C5390:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C53A0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002C53A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C53A8u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_0068(c, 244u, depth + 1u); else { c.pc = 0x002C2CC0u; return; } if (c.pc != 0x002C53A8u) [[unlikely]] return; }
L_002C53A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5424; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C53E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C53E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C53E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C53E0u) [[unlikely]] return; }
L_002C53E0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C53FCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C53FCu) [[unlikely]] return; }
L_002C53FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5420; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5420u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5420u) [[unlikely]] return; }
L_002C5420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5424:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_002C5454; } }
L_002C5450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C5454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C545Cu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_0068(c, 215u, depth + 1u); else { c.pc = 0x002C2780u; return; } if (c.pc != 0x002C545Cu) [[unlikely]] return; }
L_002C545C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C548C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C548C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C548Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C548Cu) [[unlikely]] return; }
L_002C548C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C54A8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C54A8u) [[unlikely]] return; }
L_002C54A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C54D0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C54CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C54CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C54CCu) [[unlikely]] return; }
L_002C54CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C54D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C54E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5554; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C5510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C5524; } }
L_002C5510:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C5524; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C5524:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C5534; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002C5534:
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C554Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002C554Cu) [[unlikely]] return; }
L_002C554C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C55CC; } }
L_002C5554:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C5568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002C557C; } }
L_002C5568:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002C557C; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_002C557C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5590; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C55A4; } }
L_002C5590:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C55A4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C55A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C55B4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002C55B4:
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55C8u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002C55C8u) [[unlikely]] return; }
L_002C55C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C55CC:
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C55F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C55F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C55F4u) [[unlikely]] return; }
L_002C55F4:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5610u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C5610u) [[unlikely]] return; }
L_002C5610:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5638; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5634u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5634u) [[unlikely]] return; }
L_002C5634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5638:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C5688; } }
L_002C5670:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C5688; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C5688:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C5698; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002C5698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56A0u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_0068(c, 258u, depth + 1u); else { c.pc = 0x002C2EB0u; return; } if (c.pc != 0x002C56A0u) [[unlikely]] return; }
L_002C56A0:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C56D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C56D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C56D0u) [[unlikely]] return; }
L_002C56D0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56ECu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C56ECu) [[unlikely]] return; }
L_002C56EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5714; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5710u) [[unlikely]] return; }
L_002C5710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5714:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_002C5744; } }
L_002C5740:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C5744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C574Cu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_0068(c, 262u, depth + 1u); else { c.pc = 0x002C2F30u; return; } if (c.pc != 0x002C574Cu) [[unlikely]] return; }
L_002C574C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C577C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C577C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C577Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C577Cu) [[unlikely]] return; }
L_002C577C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5798u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C5798u) [[unlikely]] return; }
L_002C5798:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C57C0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C57BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C57BCu) [[unlikely]] return; }
L_002C57BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C57C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C57D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5820; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C5804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002C5820; } }
L_002C5804:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002C5820; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5820; } }
L_002C5820:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (t) { goto L_002C5838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C5850; } }
L_002C5838:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C5850; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C5850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5860u);  if (depth < kMaxDepth) unit_0067(c, 299u, depth + 1u); else { c.pc = 0x002BEF10u; return; } if (c.pc != 0x002C5860u) [[unlikely]] return; }
L_002C5860:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C5890; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5890u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5890u) [[unlikely]] return; }
L_002C5890:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58ACu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C58ACu) [[unlikely]] return; }
L_002C58AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C58D4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C58D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C58D0u) [[unlikely]] return; }
L_002C58D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C58D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C58E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58FCu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 311u, depth + 1u); else { c.pc = 0x002BF240u; return; } if (c.pc != 0x002C58FCu) [[unlikely]] return; }
L_002C58FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5978; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C5934; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5934u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5934u) [[unlikely]] return; }
L_002C5934:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5950u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C5950u) [[unlikely]] return; }
L_002C5950:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5974; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5974u) [[unlikely]] return; }
L_002C5974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5978:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C59B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C59C8; } }
L_002C59B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C59C8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_002C59C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_002C5A14; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C59FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59F4u);  if (depth < kMaxDepth) unit_0067(c, 305u, depth + 1u); else { c.pc = 0x002BF130u; return; } if (c.pc != 0x002C59F4u) [[unlikely]] return; }
L_002C59F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C5A20; } }
L_002C59FC:
    c.f[12] = 0u;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 299u, depth + 1u); else { c.pc = 0x002BEF10u; return; } if (c.pc != 0x002C5A0Cu) [[unlikely]] return; }
L_002C5A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5A1C; } }
L_002C5A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A1Cu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 303u, depth + 1u); else { c.pc = 0x002BF100u; return; } if (c.pc != 0x002C5A1Cu) [[unlikely]] return; }
L_002C5A1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C5A20:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C5A4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5A4Cu) [[unlikely]] return; }
L_002C5A4C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A68u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C5A68u) [[unlikely]] return; }
L_002C5A68:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5A90; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5A8Cu) [[unlikely]] return; }
L_002C5A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5A90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5ABCu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x002C5ABCu) [[unlikely]] return; }
L_002C5ABC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AC8u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 305u, depth + 1u); else { c.pc = 0x002BF130u; return; } if (c.pc != 0x002C5AC8u) [[unlikely]] return; }
L_002C5AC8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C5AF8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5AF8u) [[unlikely]] return; }
L_002C5AF8:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B14u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C5B14u) [[unlikely]] return; }
L_002C5B14:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5B3C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5B38u) [[unlikely]] return; }
L_002C5B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5B3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B6Cu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 313u, depth + 1u); else { c.pc = 0x002BF290u; return; } if (c.pc != 0x002C5B6Cu) [[unlikely]] return; }
L_002C5B6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5BE8; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C5BA4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5BA4u) [[unlikely]] return; }
L_002C5BA4:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BC0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C5BC0u) [[unlikely]] return; }
L_002C5BC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5BE4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5BE4u) [[unlikely]] return; }
L_002C5BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5BE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002C5C38; } }
L_002C5C20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002C5C38; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_002C5C38:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5C4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_002C5C60; } }
L_002C5C4C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C5C60; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C5C60:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5C74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (t) { goto L_002C5C88; } }
L_002C5C74:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C5C88; }
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_002C5C88:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5C9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_002C5CB0; } }
L_002C5C9C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C5CB0; }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_002C5CB0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (t) { goto L_002C5CF4; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C5D0C; } }
L_002C5CF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C5D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_002C5D0C; } }
L_002C5D08:
    c.f[12] = 0u;
    c.budget -= 1;
L_002C5D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D14u);  if (depth < kMaxDepth) unit_0067(c, 308u, depth + 1u); else { c.pc = 0x002BF1C0u; return; } if (c.pc != 0x002C5D14u) [[unlikely]] return; }
L_002C5D14:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C5D44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5D44u) [[unlikely]] return; }
L_002C5D44:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D60u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C5D60u) [[unlikely]] return; }
L_002C5D60:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5D88; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5D84u) [[unlikely]] return; }
L_002C5D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5D88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002C5DC4; } }
L_002C5DC0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C5DC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5DD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C5DEC; } }
L_002C5DD8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C5DEC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C5DEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5E00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002C5E14; } }
L_002C5E00:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002C5E14; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_002C5E14:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5E28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_002C5E3C; } }
L_002C5E28:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_002C5E3C; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_002C5E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E44u);  if (depth < kMaxDepth) unit_0064(c, 252u, depth + 1u); else { c.pc = 0x002B1ED0u; return; } if (c.pc != 0x002C5E44u) [[unlikely]] return; }
L_002C5E44:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C5E74; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C5E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5E74u) [[unlikely]] return; }
L_002C5E74:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E90u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C5E90u) [[unlikely]] return; }
L_002C5E90:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C5EB8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C5EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5EB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C5EB4u) [[unlikely]] return; }
L_002C5EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C5EB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5F70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_002C5F0C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C5F24; } }
L_002C5F0C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_002C5F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002C5F44; } }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C5F5C; } }
L_002C5F44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C5F58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_002C5F5C; } }
L_002C5F58:
    c.f[1] = 0u;
    c.budget -= 1;
L_002C5F5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 5;
L_002C5F70:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5F88; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C5F9C; } }
L_002C5F88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C5F98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_002C5F9C; } }
L_002C5F98:
    c.f[12] = 0u;
    c.budget -= 1;
L_002C5F9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C5FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C5FC4; } }
L_002C5FB0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C5FC4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C5FC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C5FD4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002C5FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FDCu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_0068(c, 275u, depth + 1u); else { c.pc = 0x002C30B0u; return; } if (c.pc != 0x002C5FDCu) [[unlikely]] return; }
L_002C5FDC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C600C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C600C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C600Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C600Cu) [[unlikely]] return; }
L_002C600C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6028u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C6028u) [[unlikely]] return; }
L_002C6028:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C6050; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C604C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C604Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C604Cu) [[unlikely]] return; }
L_002C604C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C6050:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C6060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C60A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C6098; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C60A8; } }
L_002C6098:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C60A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_002C60A8; } }
L_002C60A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C60BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C60D0; } }
L_002C60BC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C60D0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C60D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C60E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C60E4u);  if (depth < kMaxDepth) unit_0071(c, 292u, depth + 1u); else { c.pc = 0x002E6720u; return; } if (c.pc != 0x002C60E4u) [[unlikely]] return; }
L_002C60E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C60E8:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C6114; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C6114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C6114u) [[unlikely]] return; }
L_002C6114:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6130u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C6130u) [[unlikely]] return; }
L_002C6130:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C6158; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C6154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C6154u) [[unlikely]] return; }
L_002C6154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C6158:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C6170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C6198; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6194u);  if (depth < kMaxDepth) unit_0071(c, 293u, depth + 1u); else { c.pc = 0x002E6740u; return; } if (c.pc != 0x002C6194u) [[unlikely]] return; }
L_002C6194:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C6198:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C61C4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C61C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C61C4u) [[unlikely]] return; }
L_002C61C4:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61E0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C61E0u) [[unlikely]] return; }
L_002C61E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C6208; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C6204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C6204u) [[unlikely]] return; }
L_002C6204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C6208:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C6220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C6240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002C6244; } }
L_002C6240:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C6244:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C6258; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C626C; } }
L_002C6258:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C626C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002C626C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C6280; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002C6294; } }
L_002C6280:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002C6294; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_002C6294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C629Cu);  if (depth < kMaxDepth) unit_0064(c, 255u, depth + 1u); else { c.pc = 0x002B1F80u; return; } if (c.pc != 0x002C629Cu) [[unlikely]] return; }
L_002C629C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002C62CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C62CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C62CCu) [[unlikely]] return; }
L_002C62CC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62E8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002C62E8u) [[unlikely]] return; }
L_002C62E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C6310; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C630C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C630Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C630Cu) [[unlikely]] return; }
L_002C630C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C6310:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C6320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 724u), 0u);  c.pc = t; return; }
L_002C6330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C641C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27248u);
    set32(c.r[2], c.r[2].w[0] + 27276u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 704u);
    st32((c.r[17].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C6370u) [[unlikely]] return; }
L_002C6370:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002C6408; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[17].w[0] + 688u);
    set32(c.r[3], c.r[3].w[0] + 16128u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002C63B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 668u);  goto L_002C63B4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C63B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C63B0u) [[unlikely]] return; }
L_002C63B0:
    set32(c.r[2], c.r[17].w[0] + 668u);
    c.budget -= 1;
L_002C63B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C63EC; } }
    set32(c.r[2], c.r[17].w[0] + 672u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C63EC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C63EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C63EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C63ECu) [[unlikely]] return; }
L_002C63EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6404u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x002C6404u) [[unlikely]] return; }
L_002C6404:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002C6408:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C6420; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C641Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002C641Cu) [[unlikely]] return; }
L_002C641C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C6420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C6440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C64AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27296u);
    set32(c.r[2], c.r[2].w[0] + 27316u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6480u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C6480u) [[unlikely]] return; }
L_002C6480:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002C6498; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_002C6498:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C64B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C64ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002C64ACu) [[unlikely]] return; }
L_002C64AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C64B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C64D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 24016u);  c.pc = t; return; }
L_002C64E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6440u | kUnwind; return; } goto L_002C6440; }
L_002C64F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 704u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6330u | kUnwind; return; } goto L_002C6330; }
L_002C6500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C651Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002C651Cu) [[unlikely]] return; }
L_002C651C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6528u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002C6528u) [[unlikely]] return; }
L_002C6528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 27344u);
    set32(c.r[3], c.r[3].w[0] + 27400u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E570000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19795ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6558u); st32((c.r[28].w[0] - 30272u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002C6558u) [[unlikely]] return; }
L_002C6558:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  goto L_002C6574; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6570u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x002C6570u) [[unlikely]] return; }
L_002C6570:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_002C6574:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[6], 0u + 24u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C659Cu); st32((c.r[16].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002C659Cu) [[unlikely]] return; }
L_002C659C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C65A8u); set32(c.r[4], c.r[4].w[0] + 24640u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C65A8u) [[unlikely]] return; }
L_002C65A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C65C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C6624; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27344u);
    set32(c.r[2], c.r[2].w[0] + 27400u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C6600u) [[unlikely]] return; }
L_002C6600:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C660Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C660Cu) [[unlikely]] return; }
L_002C660C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C6628; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6624u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C6624u) [[unlikely]] return; }
L_002C6624:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C6628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C6640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C665Cu); set32(c.r[4], c.r[4].w[0] + 24672u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C665Cu) [[unlikely]] return; }
L_002C665C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30272u), 0u);  goto L_002C6688; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_002C6684; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6680u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6680u) [[unlikely]] return; }
L_002C6680:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_002C6684:
    st32((c.r[28].w[0] - 30272u), 0u);
    c.budget -= 1;
L_002C6688:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C66B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C6A60; }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 4098u);  goto L_002C673C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 4098u);  goto L_002C6708; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002C678C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6788; } }
L_002C6708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6710u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002C6710u) [[unlikely]] return; }
L_002C6710:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[17].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = c.r[2].d[0] | 4098ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6730u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 411u, depth + 1u); else { c.pc = 0x001CFAF0u; return; } if (c.pc != 0x002C6730u) [[unlikely]] return; }
L_002C6730:
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4098u);
    c.budget -= 3;
L_002C673C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6744u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002C6744u) [[unlikely]] return; }
L_002C6744:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C6788; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C676Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x002C676Cu) [[unlikely]] return; }
L_002C676C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 7;
L_002C6788:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002C678C:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 4ull;  goto L_002C69CC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u - 3u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002C68B4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C67C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_002C6A20; } }
L_002C67C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C67D0u);  if (depth < kMaxDepth) unit_0042(c, 122u, depth + 1u); else { c.pc = 0x00228E90u; return; } if (c.pc != 0x002C67D0u) [[unlikely]] return; }
L_002C67D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_002C67EC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C67E4u); set32(c.r[4], c.r[4].w[0] + 24704u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C67E4u) [[unlikely]] return; }
L_002C67E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6A1C; } }
L_002C67EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C67F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x002C67F8u) [[unlikely]] return; }
L_002C67F8:
    set32(c.r[18], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6804u); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x002C6804u) [[unlikely]] return; }
L_002C6804:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002C688C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6818u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x00209970u; return; } if (c.pc != 0x002C6818u) [[unlikely]] return; }
L_002C6818:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C688C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6830u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 185u, depth + 1u); else { c.pc = 0x002099C0u; return; } if (c.pc != 0x002C6830u) [[unlikely]] return; }
L_002C6830:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C683Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x002C683Cu) [[unlikely]] return; }
L_002C683C:
    c.f[12] = ld32((c.r[17].w[0] + 108u));
    c.f[13] = 0u;
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[12]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002C68A8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[13] = ld32((c.r[4].w[0] + 80u));  goto L_002C6878; }
L_002C6878:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6884u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 317u, depth + 1u); else { c.pc = 0x0020FC80u; return; } if (c.pc != 0x002C6884u) [[unlikely]] return; }
L_002C6884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C68A4; } }
L_002C688C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C689Cu); set32(c.r[4], c.r[4].w[0] + 24736u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C689Cu) [[unlikely]] return; }
L_002C689C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6A1C; } }
L_002C68A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002C68A8:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C6A1C; } }
L_002C68B4:
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[18], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_002C69B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x00209970u; return; } if (c.pc != 0x002C68D4u) [[unlikely]] return; }
L_002C68D4:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C69B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68E8u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002C68E8u) [[unlikely]] return; }
L_002C68E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68F8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 185u, depth + 1u); else { c.pc = 0x002099C0u; return; } if (c.pc != 0x002C68F8u) [[unlikely]] return; }
L_002C68F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C691C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C691C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C691Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C691Cu) [[unlikely]] return; }
L_002C691C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 188u), 0u);  goto L_002C6974; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6938u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x002C6938u) [[unlikely]] return; }
L_002C6938:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C6964; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_002C6954; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6964; } }
L_002C6954:
    set32(c.r[4], c.r[16].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6964u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002C6964u) [[unlikely]] return; }
L_002C6964:
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 116u)));  if (t) { goto L_002C6978; } }
L_002C6970:
    st32((c.r[16].w[0] + 188u), 0u);
    c.budget -= 1;
L_002C6974:
    set32(c.r[9], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_002C6978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6994u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 411u, depth + 1u); else { c.pc = 0x001CFAF0u; return; } if (c.pc != 0x002C6994u) [[unlikely]] return; }
L_002C6994:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 65u, depth + 1u); else { c.pc = 0x001D0A90u; return; } if (c.pc != 0x002C69A4u) [[unlikely]] return; }
L_002C69A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C6A1C; } }
L_002C69B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69C4u); set32(c.r[4], c.r[4].w[0] + 24736u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C69C4u) [[unlikely]] return; }
L_002C69C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6A1C; } }
L_002C69CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6A1C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69F0u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002C69F0u) [[unlikely]] return; }
L_002C69F0:
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001D0AE0u; return; } if (c.pc != 0x002C69FCu) [[unlikely]] return; }
L_002C69FC:
    st32((c.r[17].w[0] + 92u), 0u);
    set32(c.r[4], 0u - 5u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_002C6A1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002C6A20:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A34u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002C6A34u) [[unlikely]] return; }
L_002C6A34:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 278u, depth + 1u); else { c.pc = 0x002C6D10u; return; } if (c.pc != 0x002C6A4Cu) [[unlikely]] return; }
L_002C6A4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002C6A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C6A60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C6A80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002C6B88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[4].d[0] & 1ull;  goto L_002C6AC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6B84; } }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 1;
L_002C6AC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6AD4u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002C6AD4u) [[unlikely]] return; }
L_002C6AD4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C6B84; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6AF8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x002C6AF8u) [[unlikely]] return; }
L_002C6AF8:
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 140u);  if (t) { goto L_002C6B3C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0])));  if (t) { goto L_002C6B58; } }
L_002C6B3C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
L_002C6B58:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B78u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x002C6B78u) [[unlikely]] return; }
L_002C6B78:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x002C6B84u) [[unlikely]] return; }
L_002C6B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C6B88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C6BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6BB8u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002C6BB8u) [[unlikely]] return; }
L_002C6BB8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_002C6BD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6BD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 278u, depth + 1u); else { c.pc = 0x002C6D10u; return; } if (c.pc != 0x002C6BD0u) [[unlikely]] return; }
L_002C6BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C6BF0; } }
L_002C6BD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 24784u);
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6BECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C6BECu) [[unlikely]] return; }
L_002C6BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C6BF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6C00:
    st32((c.r[4].w[0] + 104u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 108u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 11;
    { set32(c.r[4], c.r[4].w[0] + 24832u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0A20u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 118u, depth); }
L_002C6C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C4Cu); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002C6C4Cu) [[unlikely]] return; }
L_002C6C4C:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 277u, depth + 1u); else { c.pc = 0x002C6CB0u; return; } if (c.pc != 0x002C6C58u) [[unlikely]] return; }
L_002C6C58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002C6C70; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_002C6C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C94u); set32(c.r[4], c.r[4].w[0] + 24880u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C6C94u) [[unlikely]] return; }
L_002C6C94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6CB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { st32((c.r[4].w[0] + 76u), c.r[5].w[0]);  goto L_002C6CDC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C6CD8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C6D04; }
L_002C6CD8:
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    c.budget -= 1;
L_002C6CDC:
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
L_002C6D04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D28u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002C6D28u) [[unlikely]] return; }
L_002C6D28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D3Cu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002C6D3Cu) [[unlikely]] return; }
L_002C6D3C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 24944u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D6Cu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C6D6Cu) [[unlikely]] return; }
L_002C6D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C6D80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C65C0u | kUnwind; return; } goto L_002C65C0; }
L_002C6D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6DA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002C6DA4u) [[unlikely]] return; }
L_002C6DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 27424u);
    set32(c.r[3], c.r[3].w[0] + 27480u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41450000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21057ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6DF8u); st32((c.r[3].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002C6DF8u) [[unlikely]] return; }
L_002C6DF8:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E18u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002C6E18u) [[unlikely]] return; }
L_002C6E18:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002C6E38; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E34u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002C6E34u) [[unlikely]] return; }
L_002C6E34:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002C6E38:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002C6E54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E50u);  if (depth < kMaxDepth) unit_006A(c, 71u, depth + 1u); else { c.pc = 0x002C8B90u; return; } if (c.pc != 0x002C6E50u) [[unlikely]] return; }
L_002C6E50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C6E54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 293u, depth + 1u); else { c.pc = 0x002C6EC0u; return; } if (c.pc != 0x002C6E84u) [[unlikely]] return; }
L_002C6E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E8Cu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002C6E8Cu) [[unlikely]] return; }
L_002C6E8C:
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6EA8u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x002C6EA8u) [[unlikely]] return; }
L_002C6EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6EDCu); set32(c.r[5], 0u + 57u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C6EDCu) [[unlikely]] return; }
L_002C6EDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6EE8u); set32(c.r[5], 0u + 59u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C6EE8u) [[unlikely]] return; }
L_002C6EE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6EF4u); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C6EF4u) [[unlikely]] return; }
L_002C6EF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F00u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C6F00u) [[unlikely]] return; }
L_002C6F00:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F10u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 320u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x002C6F10u) [[unlikely]] return; }
L_002C6F10:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F20u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 326u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x002C6F20u) [[unlikely]] return; }
L_002C6F20:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_002C6F54; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_002C6F4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6F48u) [[unlikely]] return; }
L_002C6F48:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002C6F4C:
    st32((c.r[2].w[0] + 592u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_002C6F54:
    set32(c.r[4], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002C6F84; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_002C6F7C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6F78u) [[unlikely]] return; }
L_002C6F78:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002C6F7C:
    st32((c.r[2].w[0] + 604u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_002C6F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F8Cu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002C6F8Cu) [[unlikely]] return; }
L_002C6F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F94u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_006A(c, 77u, depth + 1u); else { c.pc = 0x002C8C40u; return; } if (c.pc != 0x002C6F94u) [[unlikely]] return; }
L_002C6F94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6FD4u); set32(c.r[5], 0u + 23u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6FD4u) [[unlikely]] return; }
L_002C6FD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6FE8u); set32(c.r[5], 0u + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6FE8u) [[unlikely]] return; }
L_002C6FE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_002C7098; }
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002C7018; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u - 33u);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 6;
L_002C7018:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_002C7058; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C703Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C703Cu) [[unlikely]] return; }
L_002C703C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7054; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7054u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x002C7054u) [[unlikely]] return; }
L_002C7054:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002C7058:
    st32((c.r[2].w[0] + 1144u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7094; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7094u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7094u) [[unlikely]] return; }
L_002C7094:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002C7098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70A0u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002C70A0u) [[unlikely]] return; }
L_002C70A0:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C70C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70BCu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002C70BCu) [[unlikely]] return; }
L_002C70BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C70C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C70D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x002C70E8u) [[unlikely]] return; }
L_002C70E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002C772C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7728; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 24976u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0069[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C7124:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C713Cu);  if (depth < kMaxDepth) unit_006A(c, 36u, depth + 1u); else { c.pc = 0x002C84D0u; return; } if (c.pc != 0x002C713Cu) [[unlikely]] return; }
L_002C713C:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[3].w[0] + 1144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1144u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7178; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7170u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x002C7170u) [[unlikely]] return; }
L_002C7170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7728; } }
L_002C7178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7180u);  if (depth < kMaxDepth) unit_006A(c, 80u, depth + 1u); else { c.pc = 0x002C8CB0u; return; } if (c.pc != 0x002C7180u) [[unlikely]] return; }
L_002C7180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7190u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 360u, depth + 1u); else { c.pc = 0x002C77A0u; return; } if (c.pc != 0x002C7190u) [[unlikely]] return; }
L_002C7190:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_002C71B0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C71B0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_002C71B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C71C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 383u, depth + 1u); else { c.pc = 0x002C7DA0u; return; } if (c.pc != 0x002C71C0u) [[unlikely]] return; }
L_002C71C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_002C71CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_002C7244; }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7240; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C7240; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C7208; }
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002C7208:
    c.f[1] = ld32((c.r[2].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C7240; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.f[13] = ld32((c.r[28].w[0] - 32148u));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7238u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_0069(c, 40u, depth + 1u); else { c.pc = 0x002C4590u; return; } if (c.pc != 0x002C7238u) [[unlikely]] return; }
L_002C7238:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_002C7240:
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002C7244:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C7274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7254u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002C7254u) [[unlikely]] return; }
L_002C7254:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_002C7268; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7274; } }
L_002C7268:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002C7274:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C7358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7284u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 4u, depth + 1u); else { c.pc = 0x002C8060u; return; } if (c.pc != 0x002C7284u) [[unlikely]] return; }
L_002C7284:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.f[13] = ld32((c.r[28].w[0] - 32148u));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7298u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_0069(c, 40u, depth + 1u); else { c.pc = 0x002C4590u; return; } if (c.pc != 0x002C7298u) [[unlikely]] return; }
L_002C7298:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_002C72C4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43110000u);
    c.f[0] = c.r[4].w[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C72BC; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002C72BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 100u), c.f[0]);  if (t) { goto L_002C72DC; } }
L_002C72C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[4].w[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C72D8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002C72D8:
    st32((c.r[3].w[0] + 100u), c.f[0]);
    c.budget -= 1;
L_002C72DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 128u)));  goto L_002C72FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C72F0u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002E98C0u; return; } if (c.pc != 0x002C72F0u) [[unlikely]] return; }
L_002C72F0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C72FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 100u)));  goto L_002C7310; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C7310:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_002C733C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11152u)));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7330u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x002C7330u) [[unlikely]] return; }
L_002C7330:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C733C:
    set32(c.r[4], ld32((c.r[2].w[0] + 11152u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C734Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x002C734Cu) [[unlikely]] return; }
L_002C734C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C7358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7360u); set32(c.r[5], ld32((c.r[17].w[0] + 108u)));  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002C7360u) [[unlikely]] return; }
L_002C7360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 4u, depth + 1u); else { c.pc = 0x002C8060u; return; } if (c.pc != 0x002C7370u) [[unlikely]] return; }
L_002C7370:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 128u)));  goto L_002C7390; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7384u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002E98C0u; return; } if (c.pc != 0x002C7384u) [[unlikely]] return; }
L_002C7384:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C7390:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_002C73A4; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C73A4:
    set32(c.r[4], ld32((c.r[2].w[0] + 11152u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C73B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x002C73B4u) [[unlikely]] return; }
L_002C73B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 6u);  goto L_002C73D0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C73D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C73D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C7450; }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_002C7424; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C7400; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002C7400:
    c.f[1] = ld32((c.r[3].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43110000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C744C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7728; } }
L_002C7424:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C7430; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002C7430:
    c.f[1] = ld32((c.r[3].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C7728; } }
L_002C744C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C7450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7458u);  if (depth < kMaxDepth) unit_006A(c, 8u, depth + 1u); else { c.pc = 0x002C80D0u; return; } if (c.pc != 0x002C7458u) [[unlikely]] return; }
L_002C7458:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_002C7464:
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C7498; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7478u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002C7478u) [[unlikely]] return; }
L_002C7478:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_002C748C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7498; } }
L_002C748C:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002C7498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C74B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 26u, depth + 1u); else { c.pc = 0x002C8360u; return; } if (c.pc != 0x002C74A8u) [[unlikely]] return; }
L_002C74A8:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C7728; } }
L_002C74B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74BCu); set32(c.r[5], ld32((c.r[17].w[0] + 116u)));  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002C74BCu) [[unlikely]] return; }
L_002C74BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 26u, depth + 1u); else { c.pc = 0x002C8360u; return; } if (c.pc != 0x002C74CCu) [[unlikely]] return; }
L_002C74CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_002C74D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002C74E8; }
    set32(c.r[16], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002C74E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002C7590; }
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C758C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[0] = ld32((c.r[3].w[0] + 1328u));
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1332u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1336u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1340u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1344u)));
    st32((c.r[3].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1348u)));
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1352u)));
    st32((c.r[3].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1356u)));
    st32((c.r[3].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7584u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x002C7584u) [[unlikely]] return; }
L_002C7584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C758Cu); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002C758Cu) [[unlikely]] return; }
L_002C758C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C7590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7598u);  if (depth < kMaxDepth) unit_005B(c, 313u, depth + 1u); else { c.pc = 0x0028F230u; return; } if (c.pc != 0x002C7598u) [[unlikely]] return; }
L_002C7598:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C75ACu); set32(c.r[5], 0u + 74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C75ACu) [[unlikely]] return; }
L_002C75AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C75CC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
L_002C75CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C75D4u); set32(c.r[5], ld32((c.r[17].w[0] + 108u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C75D4u) [[unlikely]] return; }
L_002C75D4:
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C75E0u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C75E0u) [[unlikely]] return; }
L_002C75E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7654; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[3].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C7628; }
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
L_002C7628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7630u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x00289C30u; return; } if (c.pc != 0x002C7630u) [[unlikely]] return; }
L_002C7630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7638u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 242u, depth + 1u); else { c.pc = 0x0028E560u; return; } if (c.pc != 0x002C7638u) [[unlikely]] return; }
L_002C7638:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C764Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 243u, depth + 1u); else { c.pc = 0x0028E5A0u; return; } if (c.pc != 0x002C764Cu) [[unlikely]] return; }
L_002C764C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C76CC; } }
L_002C7654:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 136u)));  goto L_002C7698; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7694; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C768Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x002C768Cu) [[unlikely]] return; }
L_002C768C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C76CC; } }
L_002C7694:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 1;
L_002C7698:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C76C4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76BCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x002C76BCu) [[unlikely]] return; }
L_002C76BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C76CC; } }
L_002C76C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76CCu);  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x002C76CCu) [[unlikely]] return; }
L_002C76CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7728; } }
L_002C76D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C76E4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002C76E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76ECu);  if (depth < kMaxDepth) unit_005B(c, 330u, depth + 1u); else { c.pc = 0x0028F550u; return; } if (c.pc != 0x002C76ECu) [[unlikely]] return; }
L_002C76EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7728; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7700u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002C7700u) [[unlikely]] return; }
L_002C7700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7728; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C7718; }
    set32(c.r[5], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002C7718:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002C7728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C772C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C7740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x002C7754u) [[unlikely]] return; }
L_002C7754:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C7770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x002C7784u) [[unlikely]] return; }
L_002C7784:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C77A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C77C4u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002C77C4u) [[unlikely]] return; }
L_002C77C4:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C7808; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C7808:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1408u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7820u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002C7820u) [[unlikely]] return; }
L_002C7820:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_002C7860; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002C7838u) [[unlikely]] return; }
L_002C7838:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7848u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002C7848u) [[unlikely]] return; }
L_002C7848:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7858u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x002C7858u) [[unlikely]] return; }
L_002C7858:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 2;
L_002C7860:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C786Cu); st32((c.r[2].w[0] + 592u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002C786Cu) [[unlikely]] return; }
L_002C786C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_002C7898; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7884u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002C7884u) [[unlikely]] return; }
L_002C7884:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7890u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002C7890u) [[unlikely]] return; }
L_002C7890:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 2;
L_002C7898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78A8u); st32((c.r[2].w[0] + 604u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002C78A8u) [[unlikely]] return; }
L_002C78A8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002C78BCu) [[unlikely]] return; }
L_002C78BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78D0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x002C78D0u) [[unlikely]] return; }
L_002C78D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78E4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x002C78E4u) [[unlikely]] return; }
L_002C78E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C7928; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 500u)));  goto L_002C790C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C790C:
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x002C7924u) [[unlikely]] return; }
L_002C7924:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002C7928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7930u);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002C7930u) [[unlikely]] return; }
L_002C7930:
    set32(c.r[3], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C794C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
L_002C794C:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C795Cu); set32(c.r[5], 0u + 73u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C795Cu) [[unlikely]] return; }
L_002C795C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7964u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002C7964u) [[unlikely]] return; }
L_002C7964:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1144u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[3], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_002C79C8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 4u);  goto L_002C79A8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002C79A4; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[17].w[0] + 112u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.r[5].w[0]);  if (t) { goto L_002C7B94; } }
L_002C79A4:
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_002C79A8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 76u)));  goto L_002C7B98; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7B94; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[5].w[0]);  if (t) { goto L_002C7B94; } }
L_002C79C8:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 18u);  goto L_002C7A0C; }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_002C79F4; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C79F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), 0u);  if (t) { goto L_002C7B94; } }
L_002C79F0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C79F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002C7B94; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), 0u);  if (t) { goto L_002C7B94; } }
L_002C7A0C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 24u);  goto L_002C7B00; }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_002C7A38; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7A34; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[5].w[0]);  if (t) { goto L_002C7AE8; } }
L_002C7A34:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C7A38:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 2u);  goto L_002C7A5C; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7A58; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[5].w[0]);  if (t) { goto L_002C7AE8; } }
L_002C7A58:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002C7A5C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[6], 0u + 2u);  goto L_002C7A84; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7A80; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[17].w[0] + 112u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.r[5].w[0]);  if (t) { goto L_002C7AE8; } }
L_002C7A80:
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_002C7A84:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[6].d[0]) { set32(c.r[5], 0u + 3u);  goto L_002C7AAC; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7AA8; } }
    st32((c.r[17].w[0] + 112u), c.r[6].w[0]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.r[5].w[0]);  if (t) { goto L_002C7AE8; } }
L_002C7AA8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002C7AAC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 3u);  goto L_002C7ACC; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7AC8; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[5].w[0]);  if (t) { goto L_002C7AE8; } }
L_002C7AC8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002C7ACC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 3u);  goto L_002C7AEC; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7AE8; } }
    set32(c.r[5], 0u - 1u);
    st32((c.r[17].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 2;
L_002C7AE8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002C7AEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7B94; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), c.r[5].w[0]);  if (t) { goto L_002C7B94; } }
L_002C7B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002C7B94; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_002C7B2C; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7B28; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.r[5].w[0]);  if (t) { goto L_002C7B94; } }
L_002C7B28:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C7B2C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 1u);  goto L_002C7B50; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7B4C; } }
    st32((c.r[17].w[0] + 112u), c.r[5].w[0]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.r[5].w[0]);  if (t) { goto L_002C7B94; } }
L_002C7B4C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C7B50:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 2u);  goto L_002C7B74; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7B70; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.r[5].w[0]);  if (t) { goto L_002C7B94; } }
L_002C7B70:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002C7B74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002C7B94; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7B94; } }
    st32((c.r[17].w[0] + 112u), c.r[5].w[0]);
    set32(c.r[5], 0u - 1u);
    st32((c.r[17].w[0] + 120u), c.r[5].w[0]);
    c.budget -= 3;
L_002C7B94:
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002C7B98:
    set32(c.r[5], ld32((c.r[5].w[0] + 172u)));
    c.r[5].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002C7D7C; }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002C7D78; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_002C7BCC; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C7BE0; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C7BCC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 1u);  goto L_002C7BFC; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7BF8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C7BE0:
    set32(c.r[5], 0u + 10008u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7BF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 29u, depth + 1u); else { c.pc = 0x002C83B0u; return; } if (c.pc != 0x002C7BF0u) [[unlikely]] return; }
L_002C7BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002C7D78; } }
L_002C7BF8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C7BFC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 5u);  goto L_002C7C14; }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C7C2C; }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002C7C14:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 2u);  goto L_002C7C48; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7C44; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C7C2C:
    set32(c.r[5], 0u + 10008u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 29u, depth + 1u); else { c.pc = 0x002C83B0u; return; } if (c.pc != 0x002C7C3Cu) [[unlikely]] return; }
L_002C7C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002C7D78; } }
L_002C7C44:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002C7C48:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 3u);  goto L_002C7C60; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C7C78; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002C7C60:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 3u);  goto L_002C7C94; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7C90; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C7C78:
    set32(c.r[5], 0u + 10008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C88u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 29u, depth + 1u); else { c.pc = 0x002C83B0u; return; } if (c.pc != 0x002C7C88u) [[unlikely]] return; }
L_002C7C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002C7D78; } }
L_002C7C90:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002C7C94:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 4u);  goto L_002C7CAC; }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C7CC4; }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_002C7CAC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));  goto L_002C7CE0; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C7CDC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C7CC4:
    set32(c.r[5], 0u + 10008u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7CD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 29u, depth + 1u); else { c.pc = 0x002C83B0u; return; } if (c.pc != 0x002C7CD4u) [[unlikely]] return; }
L_002C7CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002C7D78; } }
L_002C7CDC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_002C7CE0:
    set32(c.r[5], ld32((c.r[5].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002C7D78; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], 0u + 2u);  goto L_002C7D04; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C7D18; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002C7D04:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 1u);  goto L_002C7D34; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7D30; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C7D18:
    set32(c.r[5], 0u + 3004u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 29u, depth + 1u); else { c.pc = 0x002C83B0u; return; } if (c.pc != 0x002C7D28u) [[unlikely]] return; }
L_002C7D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002C7D78; } }
L_002C7D30:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C7D34:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 3u);  goto L_002C7D4C; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C7D64; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002C7D4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002C7D78; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002C7D78; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C7D64:
    set32(c.r[5], 0u + 3004u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 29u, depth + 1u); else { c.pc = 0x002C83B0u; return; } if (c.pc != 0x002C7D74u) [[unlikely]] return; }
L_002C7D74:
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_002C7D78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002C7D7C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C7DA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C7DDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11152u)));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x002C7DD4u) [[unlikely]] return; }
L_002C7DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_002C7FAC; } }
L_002C7DDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 100u)));  goto L_002C7E70; }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 1144u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1144u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    st32((c.r[4].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    st32((c.r[4].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[4].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 34;
L_002C7E70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 59u);  goto L_002C7E88; }
    set32(c.r[2], 0u + 57u);
    set32(c.r[6], 0u + 18u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_002C7E90; } }
L_002C7E88:
    set32(c.r[6], 0u + 20u);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 2;
L_002C7E90:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EACu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x002C7EACu) [[unlikely]] return; }
L_002C7EAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C7F30; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 5;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 9000u);  goto L_002C7EE4; }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EE0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7EE0u) [[unlikely]] return; }
L_002C7EE0:
    set32(c.r[2], 0u + 9000u);
    c.budget -= 1;
L_002C7EE4:
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002C7EF4u) [[unlikely]] return; }
L_002C7EF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], c.r[18].w[0] + 352u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1144u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F14u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002C7F14u) [[unlikely]] return; }
L_002C7F14:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F20u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002C7F20u) [[unlikely]] return; }
L_002C7F20:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
L_002C7F30:
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002C7F40u) [[unlikely]] return; }
L_002C7F40:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1144u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    if (c.r[6].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_002C7F64; }
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F60u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002C7F60u) [[unlikely]] return; }
L_002C7F60:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002C7F64:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_002C7F90; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F8Cu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7F8Cu) [[unlikely]] return; }
L_002C7F8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002C7F90:
    c.r[2].d[0] = c.r[2].d[0] & 257ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7FA8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FA8u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x002C7FA8u) [[unlikely]] return; }
L_002C7FA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002C7FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FB4u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002C7FB4u) [[unlikely]] return; }
L_002C7FB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  [[clang::musttail]] return unit_006A(c, 3u, depth); }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_006A(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 144u)));  if (t) { goto L_002C7FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002C7FEC; } }
L_002C7FE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C7FEC:
    set32(c.r[2], ld32((c.r[3].w[0] + 1144u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FFCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 320u, depth + 1u); else { c.pc = 0x0028F420u; return; } if (c.pc != 0x002C7FFCu) [[unlikely]] return; }
L_002C7FFC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_006A(c, 1u, depth);
}

}
