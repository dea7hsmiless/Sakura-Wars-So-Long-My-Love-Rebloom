#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0,
    35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0,
    0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0,
    195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0029C000;
    case 2u: goto L_0029C04C;
    case 3u: goto L_0029C07C;
    case 4u: goto L_0029C0C8;
    case 5u: goto L_0029C0E8;
    case 6u: goto L_0029C0F4;
    case 7u: goto L_0029C180;
    case 8u: goto L_0029C190;
    case 9u: goto L_0029C1A0;
    case 10u: goto L_0029C1BC;
    case 11u: goto L_0029C1E8;
    case 12u: goto L_0029C210;
    case 13u: goto L_0029C24C;
    case 14u: goto L_0029C270;
    case 15u: goto L_0029C2AC;
    case 16u: goto L_0029C2C4;
    case 17u: goto L_0029C2E0;
    case 18u: goto L_0029C304;
    case 19u: goto L_0029C30C;
    case 20u: goto L_0029C334;
    case 21u: goto L_0029C350;
    case 22u: goto L_0029C380;
    case 23u: goto L_0029C3F0;
    case 24u: goto L_0029C3F8;
    case 25u: goto L_0029C440;
    case 26u: goto L_0029C46C;
    case 27u: goto L_0029C484;
    case 28u: goto L_0029C4B0;
    case 29u: goto L_0029C4BC;
    case 30u: goto L_0029C4C8;
    case 31u: goto L_0029C4D4;
    case 32u: goto L_0029C4E0;
    case 33u: goto L_0029C4EC;
    case 34u: goto L_0029C4F4;
    case 35u: goto L_0029C500;
    case 36u: goto L_0029C50C;
    case 37u: goto L_0029C518;
    case 38u: goto L_0029C524;
    case 39u: goto L_0029C52C;
    case 40u: goto L_0029C538;
    case 41u: goto L_0029C544;
    case 42u: goto L_0029C550;
    case 43u: goto L_0029C558;
    case 44u: goto L_0029C564;
    case 45u: goto L_0029C570;
    case 46u: goto L_0029C578;
    case 47u: goto L_0029C584;
    case 48u: goto L_0029C58C;
    case 49u: goto L_0029C59C;
    case 50u: goto L_0029C5A4;
    case 51u: goto L_0029C5AC;
    case 52u: goto L_0029C5D4;
    case 53u: goto L_0029C5E0;
    case 54u: goto L_0029C620;
    case 55u: goto L_0029C65C;
    case 56u: goto L_0029C67C;
    case 57u: goto L_0029C684;
    case 58u: goto L_0029C698;
    case 59u: goto L_0029C6B0;
    case 60u: goto L_0029C6C4;
    case 61u: goto L_0029C6CC;
    case 62u: goto L_0029C6DC;
    case 63u: goto L_0029C700;
    case 64u: goto L_0029C740;
    case 65u: goto L_0029C750;
    case 66u: goto L_0029C7A0;
    case 67u: goto L_0029C7A8;
    case 68u: goto L_0029C7C0;
    case 69u: goto L_0029C7D8;
    case 70u: goto L_0029C7F0;
    case 71u: goto L_0029C820;
    case 72u: goto L_0029C868;
    case 73u: goto L_0029C880;
    case 74u: goto L_0029C898;
    case 75u: goto L_0029C8B0;
    case 76u: goto L_0029C8EC;
    case 77u: goto L_0029C8FC;
    case 78u: goto L_0029C90C;
    case 79u: goto L_0029C93C;
    case 80u: goto L_0029C978;
    case 81u: goto L_0029C9E8;
    case 82u: goto L_0029CAC0;
    case 83u: goto L_0029CB18;
    case 84u: goto L_0029CB68;
    case 85u: goto L_0029CBB4;
    case 86u: goto L_0029CBE4;
    case 87u: goto L_0029CC60;
    case 88u: goto L_0029CC7C;
    case 89u: goto L_0029CC90;
    case 90u: goto L_0029CC9C;
    case 91u: goto L_0029CCFC;
    case 92u: goto L_0029CD38;
    case 93u: goto L_0029CD78;
    case 94u: goto L_0029CD9C;
    case 95u: goto L_0029CDB4;
    case 96u: goto L_0029CDD0;
    case 97u: goto L_0029CE18;
    case 98u: goto L_0029CE64;
    case 99u: goto L_0029CEA0;
    case 100u: goto L_0029CEAC;
    case 101u: goto L_0029CEB4;
    case 102u: goto L_0029CED0;
    case 103u: goto L_0029CEE4;
    case 104u: goto L_0029CF1C;
    case 105u: goto L_0029CF38;
    case 106u: goto L_0029CFA4;
    case 107u: goto L_0029CFC8;
    case 108u: goto L_0029CFDC;
    case 109u: goto L_0029D008;
    case 110u: goto L_0029D040;
    case 111u: goto L_0029D084;
    case 112u: goto L_0029D090;
    case 113u: goto L_0029D0DC;
    case 114u: goto L_0029D0E8;
    case 115u: goto L_0029D13C;
    case 116u: goto L_0029D148;
    case 117u: goto L_0029D1A0;
    case 118u: goto L_0029D1C0;
    case 119u: goto L_0029D1CC;
    case 120u: goto L_0029D224;
    case 121u: goto L_0029D240;
    case 122u: goto L_0029D25C;
    case 123u: goto L_0029D278;
    case 124u: goto L_0029D294;
    case 125u: goto L_0029D2C8;
    case 126u: goto L_0029D2D4;
    case 127u: goto L_0029D32C;
    case 128u: goto L_0029D350;
    case 129u: goto L_0029D35C;
    case 130u: goto L_0029D3B4;
    case 131u: goto L_0029D3C0;
    case 132u: goto L_0029D3F0;
    case 133u: goto L_0029D410;
    case 134u: goto L_0029D434;
    case 135u: goto L_0029D454;
    case 136u: goto L_0029D4A0;
    case 137u: goto L_0029D4BC;
    case 138u: goto L_0029D508;
    case 139u: goto L_0029D558;
    case 140u: goto L_0029D598;
    case 141u: goto L_0029D5B0;
    case 142u: goto L_0029D5D0;
    case 143u: goto L_0029D5F8;
    case 144u: goto L_0029D630;
    case 145u: goto L_0029D67C;
    case 146u: goto L_0029D6BC;
    case 147u: goto L_0029D6FC;
    case 148u: goto L_0029D73C;
    case 149u: goto L_0029D760;
    case 150u: goto L_0029D774;
    case 151u: goto L_0029D798;
    case 152u: goto L_0029D7F0;
    case 153u: goto L_0029D800;
    case 154u: goto L_0029D82C;
    case 155u: goto L_0029D834;
    case 156u: goto L_0029D848;
    case 157u: goto L_0029D8A0;
    case 158u: goto L_0029D8C4;
    case 159u: goto L_0029D908;
    case 160u: goto L_0029D938;
    case 161u: goto L_0029D94C;
    case 162u: goto L_0029D9A4;
    case 163u: goto L_0029D9E8;
    case 164u: goto L_0029DA0C;
    case 165u: goto L_0029DA24;
    case 166u: goto L_0029DA44;
    case 167u: goto L_0029DA58;
    case 168u: goto L_0029DA94;
    case 169u: goto L_0029DAD0;
    case 170u: goto L_0029DADC;
    case 171u: goto L_0029DAFC;
    case 172u: goto L_0029DB20;
    case 173u: goto L_0029DB5C;
    case 174u: goto L_0029DB74;
    case 175u: goto L_0029DB90;
    case 176u: goto L_0029DBF4;
    case 177u: goto L_0029DC34;
    case 178u: goto L_0029DC54;
    case 179u: goto L_0029DC70;
    case 180u: goto L_0029DC80;
    case 181u: goto L_0029DC9C;
    case 182u: goto L_0029DCAC;
    case 183u: goto L_0029DD04;
    case 184u: goto L_0029DD48;
    case 185u: goto L_0029DD84;
    case 186u: goto L_0029DDCC;
    case 187u: goto L_0029DE00;
    case 188u: goto L_0029DE14;
    case 189u: goto L_0029DE54;
    case 190u: goto L_0029DE5C;
    case 191u: goto L_0029DE70;
    case 192u: goto L_0029DEE0;
    case 193u: goto L_0029DEF0;
    case 194u: goto L_0029DEF8;
    case 195u: goto L_0029DF00;
    case 196u: goto L_0029DF1C;
    case 197u: goto L_0029DF24;
    case 198u: goto L_0029DF94;
    case 199u: goto L_0029DFAC;
    case 200u: goto L_0029DFBC;
    case 201u: goto L_0029DFE4;
    case 202u: goto L_0029E048;
    case 203u: goto L_0029E094;
    case 204u: goto L_0029E0D0;
    case 205u: goto L_0029E0EC;
    case 206u: goto L_0029E128;
    case 207u: goto L_0029E130;
    case 208u: goto L_0029E138;
    case 209u: goto L_0029E14C;
    case 210u: goto L_0029E15C;
    case 211u: goto L_0029E194;
    case 212u: goto L_0029E1A0;
    case 213u: goto L_0029E1D0;
    case 214u: goto L_0029E218;
    case 215u: goto L_0029E224;
    case 216u: goto L_0029E240;
    case 217u: goto L_0029E250;
    case 218u: goto L_0029E260;
    case 219u: goto L_0029E360;
    case 220u: goto L_0029E390;
    case 221u: goto L_0029E3B0;
    case 222u: goto L_0029E418;
    case 223u: goto L_0029E42C;
    case 224u: goto L_0029E454;
    case 225u: goto L_0029E468;
    case 226u: goto L_0029E490;
    case 227u: goto L_0029E4A4;
    case 228u: goto L_0029E4CC;
    case 229u: goto L_0029E4E0;
    case 230u: goto L_0029E508;
    case 231u: goto L_0029E51C;
    case 232u: goto L_0029E540;
    case 233u: goto L_0029E564;
    case 234u: goto L_0029E588;
    case 235u: goto L_0029E5AC;
    case 236u: goto L_0029E5D0;
    case 237u: goto L_0029E5E0;
    case 238u: goto L_0029E610;
    case 239u: goto L_0029E640;
    case 240u: goto L_0029E65C;
    case 241u: goto L_0029E670;
    case 242u: goto L_0029E690;
    case 243u: goto L_0029E6B8;
    case 244u: goto L_0029E6E0;
    case 245u: goto L_0029E708;
    case 246u: goto L_0029E730;
    case 247u: goto L_0029E750;
    case 248u: goto L_0029E770;
    case 249u: goto L_0029E790;
    case 250u: goto L_0029E7B0;
    case 251u: goto L_0029E7D0;
    case 252u: goto L_0029E7F4;
    case 253u: goto L_0029E820;
    case 254u: goto L_0029E840;
    case 255u: goto L_0029E888;
    case 256u: goto L_0029E890;
    case 257u: goto L_0029E8A4;
    case 258u: goto L_0029E8D4;
    case 259u: goto L_0029E914;
    case 260u: goto L_0029E924;
    case 261u: goto L_0029E940;
    case 262u: goto L_0029E948;
    case 263u: goto L_0029E950;
    case 264u: goto L_0029E960;
    case 265u: goto L_0029E974;
    case 266u: goto L_0029E9A8;
    case 267u: goto L_0029E9F0;
    case 268u: goto L_0029EA0C;
    case 269u: goto L_0029EA18;
    case 270u: goto L_0029EA34;
    case 271u: goto L_0029EA3C;
    case 272u: goto L_0029EA98;
    case 273u: goto L_0029EAC0;
    case 274u: goto L_0029EAE4;
    case 275u: goto L_0029EAF4;
    case 276u: goto L_0029EAFC;
    case 277u: goto L_0029EB24;
    case 278u: goto L_0029EB44;
    case 279u: goto L_0029EB74;
    case 280u: goto L_0029EB80;
    case 281u: goto L_0029EB90;
    case 282u: goto L_0029EBA4;
    case 283u: goto L_0029EBF4;
    case 284u: goto L_0029EC10;
    case 285u: goto L_0029EC24;
    case 286u: goto L_0029EC74;
    case 287u: goto L_0029EC8C;
    case 288u: goto L_0029ECA0;
    case 289u: goto L_0029ECD4;
    case 290u: goto L_0029ED04;
    case 291u: goto L_0029ED50;
    case 292u: goto L_0029EDA4;
    case 293u: goto L_0029EDE8;
    case 294u: goto L_0029EE60;
    case 295u: goto L_0029EE88;
    case 296u: goto L_0029EEAC;
    case 297u: goto L_0029EEE0;
    case 298u: goto L_0029EEF8;
    case 299u: goto L_0029EF1C;
    case 300u: goto L_0029EF50;
    case 301u: goto L_0029EF6C;
    case 302u: goto L_0029EF90;
    case 303u: goto L_0029EFC4;
    case 304u: goto L_0029EFD4;
    case 305u: goto L_0029EFF4;
    case 306u: goto L_0029F030;
    case 307u: goto L_0029F094;
    case 308u: goto L_0029F0D8;
    case 309u: goto L_0029F10C;
    case 310u: goto L_0029F11C;
    case 311u: goto L_0029F134;
    case 312u: goto L_0029F180;
    case 313u: goto L_0029F1B4;
    case 314u: goto L_0029F1E8;
    case 315u: goto L_0029F1FC;
    case 316u: goto L_0029F248;
    case 317u: goto L_0029F2C8;
    case 318u: goto L_0029F368;
    case 319u: goto L_0029F374;
    case 320u: goto L_0029F37C;
    case 321u: goto L_0029F38C;
    case 322u: goto L_0029F3D8;
    case 323u: goto L_0029F3E0;
    case 324u: goto L_0029F3EC;
    case 325u: goto L_0029F404;
    case 326u: goto L_0029F41C;
    case 327u: goto L_0029F44C;
    case 328u: goto L_0029F460;
    case 329u: goto L_0029F470;
    case 330u: goto L_0029F4A8;
    case 331u: goto L_0029F4B4;
    case 332u: goto L_0029F4C8;
    case 333u: goto L_0029F538;
    case 334u: goto L_0029F548;
    case 335u: goto L_0029F558;
    case 336u: goto L_0029F564;
    case 337u: goto L_0029F598;
    case 338u: goto L_0029F5E4;
    case 339u: goto L_0029F5F0;
    case 340u: goto L_0029F644;
    case 341u: goto L_0029F6B0;
    case 342u: goto L_0029F6F0;
    case 343u: goto L_0029F748;
    case 344u: goto L_0029F770;
    case 345u: goto L_0029F798;
    case 346u: goto L_0029F814;
    case 347u: goto L_0029F83C;
    case 348u: goto L_0029F858;
    case 349u: goto L_0029F8E8;
    case 350u: goto L_0029F94C;
    case 351u: goto L_0029FA1C;
    case 352u: goto L_0029FA8C;
    case 353u: goto L_0029FAC0;
    case 354u: goto L_0029FAFC;
    case 355u: goto L_0029FB3C;
    case 356u: goto L_0029FBDC;
    case 357u: goto L_0029FC1C;
    case 358u: goto L_0029FC50;
    case 359u: goto L_0029FC70;
    case 360u: goto L_0029FC8C;
    case 361u: goto L_0029FCA4;
    case 362u: goto L_0029FCC0;
    case 363u: goto L_0029FD00;
    case 364u: goto L_0029FD20;
    case 365u: goto L_0029FD38;
    case 366u: goto L_0029FD44;
    case 367u: goto L_0029FD90;
    case 368u: goto L_0029FDA0;
    case 369u: goto L_0029FEB4;
    case 370u: goto L_0029FEF0;
    case 371u: goto L_0029FF08;
    case 372u: goto L_0029FF20;
    case 373u: goto L_0029FF50;
    case 374u: goto L_0029FF60;
    case 375u: goto L_0029FF84;
    case 376u: goto L_0029FF98;
    case 377u: goto L_0029FFA0;
    case 378u: goto L_0029FFBC;
    case 379u: goto L_0029FFD0;
    case 380u: goto L_0029FFE0;
    default: bad_entry(c, 0x0029C000u); return;
    }
L_0029C000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 17104u));
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[8], c.r[29].w[0] + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 80u), c.r[6].d[0]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 17112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 88u), c.r[4].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 17120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 17128u));
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C04Cu); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003C(c, 173u, depth + 1u); else { c.pc = 0x00211C50u; return; } if (c.pc != 0x0029C04Cu) [[unlikely]] return; }
L_0029C04C:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C07Cu); st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0073(c, 42u, depth + 1u); else { c.pc = 0x002EC890u; return; } if (c.pc != 0x0029C07Cu) [[unlikely]] return; }
L_0029C07C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 17136u));
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[8], c.r[29].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 17144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 56u), c.r[4].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 17152u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 64u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 17160u));
    st64((c.r[29].w[0] + 72u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C0C8u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003C(c, 173u, depth + 1u); else { c.pc = 0x00211C50u; return; } if (c.pc != 0x0029C0C8u) [[unlikely]] return; }
L_0029C0C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C0E8u); st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 349u, depth + 1u); else { c.pc = 0x002BFC80u; return; } if (c.pc != 0x0029C0E8u) [[unlikely]] return; }
L_0029C0E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 16864u);
    c.budget -= 3;
L_0029C0F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 20u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C0F4u | kUnwind; return; } goto L_0029C0F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029C140; }
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 1;
L_0029C140:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 128u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[3].w[0] + 148u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0029C180:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B730u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 312u, depth); }
L_0029C190:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  [[clang::musttail]] return unit_0073(c, 120u, depth); }
L_0029C1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C1BCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x0029C1BCu) [[unlikely]] return; }
L_0029C1BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 24544u);
    set32(c.r[3], c.r[3].w[0] + 24600u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 11;
L_0029C1E8:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 480u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 512u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C1E8u | kUnwind; return; } goto L_0029C1E8; } }
    st32((c.r[17].w[0] + 508u), c.r[16].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 540u), 0u);
    c.budget -= 3;
L_0029C210:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 544u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C210u | kUnwind; return; } goto L_0029C210; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 8768u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C24Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029C24Cu) [[unlikely]] return; }
L_0029C24C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029C270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029C2C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 24544u);
    set32(c.r[2], c.r[2].w[0] + 24600u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C2ACu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x0029C2ACu) [[unlikely]] return; }
L_0029C2AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0029C2C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C2C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0029C2C4u) [[unlikely]] return; }
L_0029C2C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029C2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029C2E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C304u); set32(c.r[4], c.r[4].w[0] + 8816u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029C304u) [[unlikely]] return; }
L_0029C304:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0029C30C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 544u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 544u);  if (t) { goto L_0029C338; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0029C338; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C334u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029C334u) [[unlikely]] return; }
L_0029C334:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0029C338:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C30Cu | kUnwind; return; } goto L_0029C30C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C350u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 141u, depth + 1u); else { c.pc = 0x0029D5B0u; return; } if (c.pc != 0x0029C350u) [[unlikely]] return; }
L_0029C350:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029C380:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029C6DC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  goto L_0029C3CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0029C6E0; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0029C3CC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029C6DC; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 8944u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0029C000u < 16384u) { entry = entries_005F[(t - 0x0029C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0029C3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C3F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x0029C3F8u) [[unlikely]] return; }
L_0029C3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029C6DC; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 512u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], 0u + 7u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C440u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0060(c, 416u, depth + 1u); else { c.pc = 0x002A3FE0u; return; } if (c.pc != 0x0029C440u) [[unlikely]] return; }
L_0029C440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 540u), c.r[2].w[0]);  if (t) { goto L_0029C464; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[19].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0029C6DC; } }
L_0029C464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C46Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x0029C46Cu) [[unlikely]] return; }
L_0029C46C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C484u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x0029C484u) [[unlikely]] return; }
L_0029C484:
    set32(c.r[6], ld32((c.r[19].w[0] + 540u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029C58C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 8912u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0029C000u < 16384u) { entry = entries_005F[(t - 0x0029C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0029C4B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C4BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C4BCu) [[unlikely]] return; }
L_0029C4BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C4C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C4C8u) [[unlikely]] return; }
L_0029C4C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C4D4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C4D4u) [[unlikely]] return; }
L_0029C4D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C4E0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C4E0u) [[unlikely]] return; }
L_0029C4E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C4ECu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C4ECu) [[unlikely]] return; }
L_0029C4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0029C5A8; } }
L_0029C4F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C500u) [[unlikely]] return; }
L_0029C500:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C50Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C50Cu) [[unlikely]] return; }
L_0029C50C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C518u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C518u) [[unlikely]] return; }
L_0029C518:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C524u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C524u) [[unlikely]] return; }
L_0029C524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C5A4; } }
L_0029C52C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C538u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C538u) [[unlikely]] return; }
L_0029C538:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C544u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C544u) [[unlikely]] return; }
L_0029C544:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C550u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C550u) [[unlikely]] return; }
L_0029C550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C5A4; } }
L_0029C558:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C564u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C564u) [[unlikely]] return; }
L_0029C564:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C570u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C570u) [[unlikely]] return; }
L_0029C570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C5A4; } }
L_0029C578:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C584u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005F(c, 144u, depth + 1u); else { c.pc = 0x0029D630u; return; } if (c.pc != 0x0029C584u) [[unlikely]] return; }
L_0029C584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C5A4; } }
L_0029C58C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C59Cu); set32(c.r[5], c.r[5].w[0] + 8864u);  if (depth < kMaxDepth) unit_005D(c, 16u, depth + 1u); else { c.pc = 0x002941A0u; return; } if (c.pc != 0x0029C59Cu) [[unlikely]] return; }
L_0029C59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C6DC; } }
L_0029C5A4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029C5A8:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0029C5AC:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 544u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 544u);  if (t) { goto L_0029C5D8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_0029C5D8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C5D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029C5D4u) [[unlikely]] return; }
L_0029C5D4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0029C5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C5E0u); set32(c.r[4], 0u + 592u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0029C5E0u) [[unlikely]] return; }
L_0029C5E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0029C624; }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0029C614; }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 12u)));  goto L_0029C614; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C614; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0029C614:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C620u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_005E(c, 136u, depth + 1u); else { c.pc = 0x00299410u; return; } if (c.pc != 0x0029C620u) [[unlikely]] return; }
L_0029C620:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0029C624:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0029C648; }
    set32(c.r[3], 0u + 94u);
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
L_0029C648:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C5ACu | kUnwind; return; } goto L_0029C5AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C65Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0029C8B0u; return; } if (c.pc != 0x0029C65Cu) [[unlikely]] return; }
L_0029C65C:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 84u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
L_0029C67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C684u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x0029C684u) [[unlikely]] return; }
L_0029C684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029C6DC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0029C6DC; } }
L_0029C698:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_0029C6B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C6B0u);  if (depth < kMaxDepth) unit_005F(c, 136u, depth + 1u); else { c.pc = 0x0029D4A0u; return; } if (c.pc != 0x0029C6B0u) [[unlikely]] return; }
L_0029C6B0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_0029C6B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[19].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0029C6DC; } }
L_0029C6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C6CCu);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x0029C6CCu) [[unlikely]] return; }
L_0029C6CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029C6DC; } }
    set32(c.r[3], 0u + 5u);
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_0029C6DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0029C6E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0029C700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0029C744; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029C738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C740; } }
L_0029C738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C740u);  if (depth < kMaxDepth) unit_005C(c, 387u, depth + 1u); else { c.pc = 0x002936F0u; return; } if (c.pc != 0x0029C740u) [[unlikely]] return; }
L_0029C740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0029C744:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029C750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029C800; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0029C804; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0029C798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C800; } }
L_0029C798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C7A0u);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x0029C7A0u) [[unlikely]] return; }
L_0029C7A0:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0029C7A8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 544u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0029C7C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C7C0u);  if (depth < kMaxDepth) unit_005E(c, 171u, depth + 1u); else { c.pc = 0x00299D20u; return; } if (c.pc != 0x0029C7C0u) [[unlikely]] return; }
L_0029C7C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029C7C4:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C7A8u | kUnwind; return; } goto L_0029C7A8; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0029C7D8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 480u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0029C7F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C7F0u);  if (depth < kMaxDepth) unit_005E(c, 171u, depth + 1u); else { c.pc = 0x00299D20u; return; } if (c.pc != 0x0029C7F0u) [[unlikely]] return; }
L_0029C7F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029C7F4:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C7D8u | kUnwind; return; } goto L_0029C7D8; }
L_0029C800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0029C804:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029C820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0029C86C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029C868; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0029C860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029C868; } }
L_0029C860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C868u);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x0029C868u) [[unlikely]] return; }
L_0029C868:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0029C86C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029C880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 508u), c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C898u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0029C8B0u; return; } if (c.pc != 0x0029C898u) [[unlikely]] return; }
L_0029C898:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029C8B0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 508u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C8ECu); c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 13u, depth + 1u); else { c.pc = 0x00294110u; return; } if (c.pc != 0x0029C8ECu) [[unlikely]] return; }
L_0029C8EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C8FCu); set32(c.r[5], c.r[5].w[0] + 7968u);  if (depth < kMaxDepth) unit_005C(c, 414u, depth + 1u); else { c.pc = 0x00293B60u; return; } if (c.pc != 0x0029C8FCu) [[unlikely]] return; }
L_0029C8FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 4;
L_0029C90C:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 544u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0029C92C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_0029C92C:
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C90Cu | kUnwind; return; } goto L_0029C90C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029C93C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 368u), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 336u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C93Cu | kUnwind; return; } goto L_0029C93C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 80u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 188u)));
    c.r[23].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] ^ 1ull;  if (t) { goto L_0029C9C0; } }
L_0029C978:
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 512u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 144u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0029C9C0; }
    set32(c.r[4], c.r[22].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[4], c.r[6].w[0] + 368u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 116u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 190u)));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    st32((c.r[6].w[0] + 336u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
L_0029C9C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 540u)));
    c.r[4].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C978u | kUnwind; return; } goto L_0029C978; }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 21u);
    set32(c.r[7], 0u + 60u);
    set32(c.r[5], 0u + 70u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 50u);  if (t) { goto L_0029CA80; } }
L_0029C9E8:
    set32(c.r[9], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0029CA80; }
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[7].d[0] + 0ull;  goto L_0029CA48; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[8].d[0]) { c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;  goto L_0029CA1C; }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029CA48; } }
L_0029CA1C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;  goto L_0029CA2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0029CA48; } }
L_0029CA2C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] + 0ull;  goto L_0029CA48; }
    set32(c.r[3], c.r[2].w[0] - 22u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = c.r[7].d[0] + 0ull;  goto L_0029CA48; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0029CA48:
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
L_0029CA80:
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C9E8u | kUnwind; return; } goto L_0029C9E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[3] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC4480000u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 12;
L_0029CAC0:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);  goto L_0029CAFC; }
    st32((c.r[3].w[0] + 208u), c.r[5].w[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 212u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 10;
L_0029CAFC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029CAC0u | kUnwind; return; } goto L_0029CAC0; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 5u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0029CB18:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[21], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0029CBEC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 368u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CB68u); set32(c.r[5], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x0029CB68u) [[unlikely]] return; }
L_0029CB68:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0029CB78; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0029CB78:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;  goto L_0029CB88; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 2;
L_0029CB88:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  goto L_0029CBBC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], c.r[19].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CBB4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x0029CBB4u) [[unlikely]] return; }
L_0029CBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0029CBE8; } }
L_0029CBBC:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CBE4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x0029CBE4u) [[unlikely]] return; }
L_0029CBE4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029CBE8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0029CBEC:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029CB18u | kUnwind; return; } goto L_0029CB18; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC4480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    st32((c.r[3].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    st32((c.r[3].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = c.r[23].d[0] != 0ull; st32((c.r[3].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_0029CC90; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 564u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 564u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CC60u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x0029CC60u) [[unlikely]] return; }
L_0029CC60:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CC7Cu); c.r[5].d[0] = c.r[2].d[0] | 19528ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029CC7Cu) [[unlikely]] return; }
L_0029CC7C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CC90u); set32(c.r[5], ld32((c.r[20].w[0] + 564u)));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x0029CC90u) [[unlikely]] return; }
L_0029CC90:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0029CC9C:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0029CDBC; }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[3].w[0] + 208u));  goto L_0029CD04; }
    c.f[0] = ld32((c.r[3].w[0] + 208u));
    set32(c.r[4], c.r[3].w[0] + 440u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 324u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CCFCu); st32((c.r[29].w[0] + 316u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029CCFCu) [[unlikely]] return; }
L_0029CCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0029CDB8; } }
L_0029CD04:
    set32(c.r[4], c.r[3].w[0] + 440u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    st32((c.r[29].w[0] + 272u), c.r[6].w[0]);
    set32(c.r[6], 0u + 24u);
    st32((c.r[29].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 276u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CD38u); st32((c.r[29].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029CD38u) [[unlikely]] return; }
L_0029CD38:
    set32(c.r[21], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 544u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029CDB4; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.f[12] = 0u;
    set32(c.r[30], c.r[4].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 544u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CD78u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x0029CD78u) [[unlikely]] return; }
L_0029CD78:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 19522ull;
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CD9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029CD9Cu) [[unlikely]] return; }
L_0029CD9C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CDB4u); set32(c.r[5], ld32((c.r[30].w[0])));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x0029CDB4u) [[unlikely]] return; }
L_0029CDB4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0029CDB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029CDBC:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029CC9Cu | kUnwind; return; } goto L_0029CC9C; } }
    set32(c.r[16], 0u + 5u);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 2;
L_0029CDD0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0029CE1C; }
    c.f[0] = ld32((c.r[2].w[0] + 208u));
    set32(c.r[4], c.r[2].w[0] + 440u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[6], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 244u), 0u);
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CE18u); st32((c.r[29].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029CE18u) [[unlikely]] return; }
L_0029CE18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0029CE1C:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029CDD0u | kUnwind; return; } goto L_0029CDD0; }
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    set32(c.r[4], c.r[4].w[0] + 440u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CE64u); st32((c.r[29].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029CE64u) [[unlikely]] return; }
L_0029CE64:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    set32(c.r[4], c.r[4].w[0] + 440u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CEA0u); st32((c.r[29].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029CEA0u) [[unlikely]] return; }
L_0029CEA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CEACu); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 141u, depth + 1u); else { c.pc = 0x0029D5B0u; return; } if (c.pc != 0x0029CEACu) [[unlikely]] return; }
L_0029CEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0029CF80; } }
L_0029CEB4:
    set32(c.r[5], 0u + 61u);
    set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[30], c.r[3].w[0] + 368u);
    set32(c.r[4], ld32((c.r[30].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CED0u); set32(c.r[21], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0061(c, 147u, depth + 1u); else { c.pc = 0x002A5930u; return; } if (c.pc != 0x0029CED0u) [[unlikely]] return; }
L_0029CED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_0029CF7C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CEE4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 149u, depth + 1u); else { c.pc = 0x0029D760u; return; } if (c.pc != 0x0029CEE4u) [[unlikely]] return; }
L_0029CEE4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0029CF7C; }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 19521ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CF1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029CF1Cu) [[unlikely]] return; }
L_0029CF1C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CF38u); set32(c.r[5], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x0029CF38u) [[unlikely]] return; }
L_0029CF38:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_0029CF70; }
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1296u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029CF6C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029CF78; } }
L_0029CF6C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_0029CF70:
    set32(c.r[3], ld32((c.r[28].w[0] - 31660u)));
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 2;
L_0029CF78:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0029CF7C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029CF80:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029CEB4u | kUnwind; return; } goto L_0029CEB4; }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], 0u + 61u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CFA4u); set32(c.r[16], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0061(c, 147u, depth + 1u); else { c.pc = 0x002A5930u; return; } if (c.pc != 0x0029CFA4u) [[unlikely]] return; }
L_0029CFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0029CFF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CFC8u); c.r[5].d[0] = c.r[2].d[0] | 19527ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029CFC8u) [[unlikely]] return; }
L_0029CFC8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029CFDCu); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x0029CFDCu) [[unlikely]] return; }
L_0029CFDC:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0029CFF4; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 31656u)));
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 3;
L_0029CFF0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0029CFF4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D008u); set32(c.r[8], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_005F(c, 110u, depth + 1u); else { c.pc = 0x0029D040u; return; } if (c.pc != 0x0029D008u) [[unlikely]] return; }
L_0029D008:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0029D040:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D084u); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_005C(c, 445u, depth + 1u); else { c.pc = 0x00293FF0u; return; } if (c.pc != 0x0029D084u) [[unlikely]] return; }
L_0029D084:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D090u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 7u, depth + 1u); else { c.pc = 0x00294080u; return; } if (c.pc != 0x0029D090u) [[unlikely]] return; }
L_0029D090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 17168u));
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[8], c.r[29].w[0] + 184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 17176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 168u), c.r[4].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 17184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 176u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 17192u));
    st64((c.r[29].w[0] + 184u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D0DCu); set32(c.r[6], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_003C(c, 173u, depth + 1u); else { c.pc = 0x00211C50u; return; } if (c.pc != 0x0029D0DCu) [[unlikely]] return; }
L_0029D0DC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0029D45C; } }
L_0029D0E8:
    set32(c.r[17], c.r[19].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0029D29C; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[16].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 110u)));  goto L_0029D134; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 104u)));  if (t) { goto L_0029D18C; } }
L_0029D134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D13Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029D13Cu) [[unlikely]] return; }
L_0029D13C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D148u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029D148u) [[unlikely]] return; }
L_0029D148:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029D170; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0029D170:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029D188; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0029D188:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 1;
L_0029D18C:
    set32(c.r[5], 0u + 62u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D1A0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 372u, depth + 1u); else { c.pc = 0x002BFFD0u; return; } if (c.pc != 0x0029D1A0u) [[unlikely]] return; }
L_0029D1A0:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[16].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 116u)));  goto L_0029D1B8; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 104u)));  if (t) { goto L_0029D210; } }
L_0029D1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D1C0u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029D1C0u) [[unlikely]] return; }
L_0029D1C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D1CCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029D1CCu) [[unlikely]] return; }
L_0029D1CC:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029D1F4; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0029D1F4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029D20C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0029D20C:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 1;
L_0029D210:
    set32(c.r[5], 0u + 62u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D224u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 14u, depth + 1u); else { c.pc = 0x002C02C0u; return; } if (c.pc != 0x0029D224u) [[unlikely]] return; }
L_0029D224:
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D240u); c.r[5].d[0] = c.r[2].d[0] | 19528ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D240u) [[unlikely]] return; }
L_0029D240:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D25Cu); set32(c.r[4], ld32((c.r[3].w[0] + 84u)));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x0029D25Cu) [[unlikely]] return; }
L_0029D25C:
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D278u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D278u) [[unlikely]] return; }
L_0029D278:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D294u); set32(c.r[4], ld32((c.r[3].w[0] + 84u)));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x0029D294u) [[unlikely]] return; }
L_0029D294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { goto L_0029D45C; } }
L_0029D29C:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    if (c.r[22].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_0029D2C0; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 104u)));  if (t) { goto L_0029D318; } }
L_0029D2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D2C8u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029D2C8u) [[unlikely]] return; }
L_0029D2C8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D2D4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029D2D4u) [[unlikely]] return; }
L_0029D2D4:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029D2FC; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0029D2FC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029D314; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0029D314:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 1;
L_0029D318:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D32Cu); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_0067(c, 372u, depth + 1u); else { c.pc = 0x002BFFD0u; return; } if (c.pc != 0x0029D32Cu) [[unlikely]] return; }
L_0029D32C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    c.budget -= 4;
    if (c.r[22].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));  goto L_0029D348; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 104u)));  if (t) { goto L_0029D3A0; } }
L_0029D348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D350u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029D350u) [[unlikely]] return; }
L_0029D350:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D35Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029D35Cu) [[unlikely]] return; }
L_0029D35C:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029D384; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0029D384:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029D39C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0029D39C:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 1;
L_0029D3A0:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D3B4u); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_0068(c, 14u, depth + 1u); else { c.pc = 0x002C02C0u; return; } if (c.pc != 0x0029D3B4u) [[unlikely]] return; }
L_0029D3B4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D3C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 149u, depth + 1u); else { c.pc = 0x0029D760u; return; } if (c.pc != 0x0029D3C0u) [[unlikely]] return; }
L_0029D3C0:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0029D458; }
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 19522ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D3F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D3F0u) [[unlikely]] return; }
L_0029D3F0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D410u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x0029D410u) [[unlikely]] return; }
L_0029D410:
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 19525ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D434u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D434u) [[unlikely]] return; }
L_0029D434:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D454u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x0029D454u) [[unlikely]] return; }
L_0029D454:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0029D458:
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 1;
L_0029D45C:
    set32(c.r[3], ld32((c.r[21].w[0] + 108u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029D0E8u | kUnwind; return; } goto L_0029D0E8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0029D4A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 7;
L_0029D4BC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0029D50C; }
    c.f[0] = ld32((c.r[2].w[0] + 208u));
    set32(c.r[4], c.r[2].w[0] + 440u);
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4480000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 112u), c.r[6].w[0]);
    set32(c.r[6], 0u + 24u);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D508u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029D508u) [[unlikely]] return; }
L_0029D508:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0029D50C:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029D4BCu | kUnwind; return; } goto L_0029D4BC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    set32(c.r[4], c.r[4].w[0] + 440u);
    st32((c.r[29].w[0] + 80u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D558u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029D558u) [[unlikely]] return; }
L_0029D558:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    set32(c.r[4], c.r[4].w[0] + 440u);
    st32((c.r[29].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D598u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029D598u) [[unlikely]] return; }
L_0029D598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0029D5B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 8;
L_0029D5D0:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 480u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 480u);  if (t) { goto L_0029D5FC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_0029D5FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D5F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D5F8u) [[unlikely]] return; }
L_0029D5F8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0029D5FC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029D5D0u | kUnwind; return; } goto L_0029D5D0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029D630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 13;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0029D68C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0029D680; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D67Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D67Cu) [[unlikely]] return; }
L_0029D67C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0029D680:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
L_0029D68C:
    set32(c.r[4], c.r[16].w[0] + 5u);
    set32(c.r[18], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0029D6CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0029D6C0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D6BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D6BCu) [[unlikely]] return; }
L_0029D6BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0029D6C0:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
L_0029D6CC:
    set32(c.r[4], c.r[16].w[0] + 10u);
    set32(c.r[18], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0029D70C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0029D700; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D6FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D6FCu) [[unlikely]] return; }
L_0029D6FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0029D700:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
L_0029D70C:
    set32(c.r[4], c.r[16].w[0] + 15u);
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0029D74C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0029D740; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D73Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029D73Cu) [[unlikely]] return; }
L_0029D73C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0029D740:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0029D74C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029D760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[7], c.r[7].w[0] + 17200u);
    set32(c.r[6], c.r[29].w[0]);
    set32(c.r[3], 0u + 5u);
    c.budget -= 5;
L_0029D774:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029D774u | kUnwind; return; } goto L_0029D774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0029D7D0; } }
L_0029D798:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0029D7D0; }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0029D7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 32u);  if (t) { goto L_0029D7E4; } }
L_0029D7CC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0029D7D0:
    c.r[2].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029D798u | kUnwind; return; } goto L_0029D798; }
    set32(c.r[2], 0u - 1u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0029D7E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029D7F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C270u | kUnwind; return; } goto L_0029C270; }
L_0029D800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029D86C; } }
L_0029D82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D834u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0029D834u) [[unlikely]] return; }
L_0029D834:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0029D86C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D848u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0029D848u) [[unlikely]] return; }
L_0029D848:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[19].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 9;
L_0029D86C:
    c.r[1].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029D82Cu | kUnwind; return; } goto L_0029D82C; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029D8A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D8C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x0029D8C4u) [[unlikely]] return; }
L_0029D8C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 24624u);
    set32(c.r[3], c.r[3].w[0] + 24680u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 484u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54530000u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 16u);
    st32((c.r[20].w[0] + 588u), 0u);
    st32((c.r[20].w[0] + 500u), 0u);
    st32((c.r[20].w[0] + 508u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D908u); st32((c.r[20].w[0] + 512u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0029D908u) [[unlikely]] return; }
L_0029D908:
    st32((c.r[20].w[0] + 516u), 0u);
    set32(c.r[4], c.r[20].w[0] + 544u);
    st32((c.r[20].w[0] + 520u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 524u), 0u);
    set32(c.r[6], 0u + 40u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 532u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 536u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D938u); st32((c.r[20].w[0] + 528u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0029D938u) [[unlikely]] return; }
L_0029D938:
    st32((c.r[20].w[0] + 584u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 560u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0029DA10; } }
L_0029D94C:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_0029D968; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0029D970; } }
L_0029D968:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0029D970:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0029DA10; }
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 148u)));  goto L_0029D99C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029DA0C; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 1;
L_0029D99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D9A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0029D9A4u) [[unlikely]] return; }
L_0029D9A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0029D9E0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029D9DC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029D9DC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029D9DC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029DA0C; } }
L_0029D9DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029D9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029D9E8u);  if (depth < kMaxDepth) unit_0061(c, 10u, depth + 1u); else { c.pc = 0x002A4240u; return; } if (c.pc != 0x0029D9E8u) [[unlikely]] return; }
L_0029D9E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0029DA04; }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[18].w[0] + 528u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 496u));
    st32((c.r[18].w[0] + 524u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_0029DA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DA0Cu);  if (depth < kMaxDepth) unit_006C(c, 362u, depth + 1u); else { c.pc = 0x002D3D30u; return; } if (c.pc != 0x0029DA0Cu) [[unlikely]] return; }
L_0029DA0C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0029DA10:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029D94Cu | kUnwind; return; } goto L_0029D94C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DA24u); set32(c.r[4], 0u + 496u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029DA24u) [[unlikely]] return; }
L_0029DA24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 584u), c.r[2].w[0]);  goto L_0029DA48; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0029DA38; } }
    set32(c.r[6], c.r[20].w[0] + 52u);
    c.budget -= 1;
L_0029DA38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DA44u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 21u, depth + 1u); else { c.pc = 0x002C04C0u; return; } if (c.pc != 0x0029DA44u) [[unlikely]] return; }
L_0029DA44:
    st32((c.r[20].w[0] + 584u), c.r[2].w[0]);
    c.budget -= 1;
L_0029DA48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_0029DAE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DA58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 443u, depth + 1u); else { c.pc = 0x00293FB0u; return; } if (c.pc != 0x0029DA58u) [[unlikely]] return; }
L_0029DA58:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029DA68; }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_0029DA68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_0029DA98; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029DA80; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 2;
L_0029DA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DA94u);  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0029DA94u) [[unlikely]] return; }
L_0029DA94:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0029DA98:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029DAA4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_0029DAA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029DAD0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029DABC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 2;
L_0029DABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DAD0u);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0029DAD0u) [[unlikely]] return; }
L_0029DAD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DADCu); set32(c.r[4], c.r[4].w[0] + 8976u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029DADCu) [[unlikely]] return; }
L_0029DADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0029DB00; } }
L_0029DAE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 9024u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DAFCu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0029DAFCu) [[unlikely]] return; }
L_0029DAFC:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0029DB00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0029DB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029DB74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 24624u);
    set32(c.r[2], c.r[2].w[0] + 24680u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DB5Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x0029DB5Cu) [[unlikely]] return; }
L_0029DB5C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0029DB78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DB74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0029DB74u) [[unlikely]] return; }
L_0029DB74:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029DB78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029DB90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029DBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 124u)));  if (t) { goto L_0029DBC4; } }
L_0029DBC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029DBC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_0029DBF8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029DBDC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 2;
L_0029DBDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DBF4u);  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0029DBF4u) [[unlikely]] return; }
L_0029DBF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0029DBF8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029DC04; }
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_0029DC04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  goto L_0029DC38; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029DC1C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 2;
L_0029DC1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DC34u);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0029DC34u) [[unlikely]] return; }
L_0029DC34:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0029DC38:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 584u)));  goto L_0029DC58; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DC54u);  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x0029DC54u) [[unlikely]] return; }
L_0029DC54:
    set32(c.r[4], ld32((c.r[20].w[0] + 584u)));
    c.budget -= 1;
L_0029DC58:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0029DC78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DC70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029DC70u) [[unlikely]] return; }
L_0029DC70:
    st32((c.r[20].w[0] + 584u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0029DC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DC80u);  if (depth < kMaxDepth) unit_005F(c, 294u, depth + 1u); else { c.pc = 0x0029EE60u; return; } if (c.pc != 0x0029DC80u) [[unlikely]] return; }
L_0029DC80:
    set32(c.r[5], ld32((c.r[20].w[0] + 536u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 532u)));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0029DCA0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DC9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0029DC9Cu) [[unlikely]] return; }
L_0029DC9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0029DCA0:
    set32(c.r[16], ld32((c.r[2].w[0] + 560u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0029DDB4; } }
L_0029DCAC:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_0029DCC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0029DCD0; } }
L_0029DCC8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0029DCD0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0029DDB4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 148u)));  goto L_0029DCFC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029DDB0; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 1;
L_0029DCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DD04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0029DD04u) [[unlikely]] return; }
L_0029DD04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0029DD40; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029DD3C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029DD3C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029DD3C; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 20001u);  goto L_0029DD88; }
L_0029DD3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029DD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DD48u);  if (depth < kMaxDepth) unit_0061(c, 10u, depth + 1u); else { c.pc = 0x002A4240u; return; } if (c.pc != 0x0029DD48u) [[unlikely]] return; }
L_0029DD48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 180u)));  goto L_0029DD70; }
    c.f[0] = ld32((c.r[18].w[0] + 524u));
    st32((c.r[18].w[0] + 496u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[18].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 528u)));
    st32((c.r[18].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 8;
L_0029DD70:
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DD84u); st32((c.r[18].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002D3DA0u; return; } if (c.pc != 0x0029DD84u) [[unlikely]] return; }
L_0029DD84:
    set32(c.r[2], 0u + 20001u);
    c.budget -= 1;
L_0029DD88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0029DDB0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029DDB0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 4;
L_0029DDB0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0029DDB4:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029DCACu | kUnwind; return; } goto L_0029DCAC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DDCCu); set32(c.r[4], c.r[4].w[0] + 9088u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029DDCCu) [[unlikely]] return; }
L_0029DDCC:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0029DE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DE14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x0029DE14u) [[unlikely]] return; }
L_0029DE14:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0029E1BC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029E1B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0029C000u < 16384u) { entry = entries_005F[(t - 0x0029C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0029DE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DE5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x0029DE5Cu) [[unlikely]] return; }
L_0029DE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029E1B8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DE70u); st32((c.r[16].w[0] + 588u), 0u);  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x0029DE70u) [[unlikely]] return; }
L_0029DE70:
    st32((c.r[16].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0029DEA4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0029DEA8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029DEA4:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_0029DEA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0029DEC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_0029DEC0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029DEC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029DED8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 120u)));  if (t) { goto L_0029DED8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029DED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DEE0u);  if (depth < kMaxDepth) unit_005C(c, 162u, depth + 1u); else { c.pc = 0x00291670u; return; } if (c.pc != 0x0029DEE0u) [[unlikely]] return; }
L_0029DEE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DEF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 199u, depth + 1u); else { c.pc = 0x002B1700u; return; } if (c.pc != 0x0029DEF0u) [[unlikely]] return; }
L_0029DEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029E1A0; } }
L_0029DEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DF00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 254u, depth + 1u); else { c.pc = 0x0029E840u; return; } if (c.pc != 0x0029DF00u) [[unlikely]] return; }
L_0029DF00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0029E1AC; }
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DF1Cu); set32(c.r[5], 0u + 87u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029DF1Cu) [[unlikely]] return; }
L_0029DF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DF24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 220u, depth + 1u); else { c.pc = 0x0029E390u; return; } if (c.pc != 0x0029DF24u) [[unlikely]] return; }
L_0029DF24:
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0029DF50; }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_0029DF50; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029DF50; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_0029DF50:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  goto L_0029DF88; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 112u);  if (t) { goto L_0029DF74; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0029DF80; }
L_0029DF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029DF80; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_0029DF80:
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 2;
L_0029DF88:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DF94u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x0029DF94u) [[unlikely]] return; }
L_0029DF94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029DFACu); set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x0029DFACu) [[unlikely]] return; }
L_0029DFAC:
    st32((c.r[16].w[0] + 588u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
L_0029DFBC:
    c.f[1] = ld32((c.r[16].w[0] + 588u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029E1B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0029DFE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0029E028; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029E00C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_0029E00C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029E00C:
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029E024; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0029E024:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0029E028:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0029E084; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029E06C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E048u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0029E048u) [[unlikely]] return; }
L_0029E048:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0029E060; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029E06C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0029E060:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 48ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0029E06C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029E080; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0029E1A0; } }
L_0029E080:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0029E084:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029E0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E094u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0029E094u) [[unlikely]] return; }
L_0029E094:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0029E0AC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029E0B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0029E0AC:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0029E0B8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0029E0DC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E0D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 341u, depth + 1u); else { c.pc = 0x0029F6B0u; return; } if (c.pc != 0x0029E0D0u) [[unlikely]] return; }
L_0029E0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029E1A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0029E0DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029E110; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E0ECu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0029E0ECu) [[unlikely]] return; }
L_0029E0EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0029E104; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029E110; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0029E104:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0029E110:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029E1B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E128u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 341u, depth + 1u); else { c.pc = 0x0029F6B0u; return; } if (c.pc != 0x0029E128u) [[unlikely]] return; }
L_0029E128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029E1A0; } }
L_0029E130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 238u, depth + 1u); else { c.pc = 0x0029E610u; return; } if (c.pc != 0x0029E138u) [[unlikely]] return; }
L_0029E138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E14Cu); set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x0029E14Cu) [[unlikely]] return; }
L_0029E14C:
    st32((c.r[16].w[0] + 588u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
L_0029E15C:
    c.f[1] = ld32((c.r[16].w[0] + 588u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029E1B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 160u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E194u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E194u) [[unlikely]] return; }
L_0029E194:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0029E1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029E1B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0029E1AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0029E1B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0029E1BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029E1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029E20C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0029E210; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0029E20C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0029E21C; } }
L_0029E20C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0029E210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E218u);  if (depth < kMaxDepth) unit_005F(c, 306u, depth + 1u); else { c.pc = 0x0029F030u; return; } if (c.pc != 0x0029E218u) [[unlikely]] return; }
L_0029E218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0029E21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E224u);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0029E224u) [[unlikely]] return; }
L_0029E224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029E240:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00293800u | kUnwind; return; } [[clang::musttail]] return unit_005C(c, 390u, depth); }
L_0029E250:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002939B0u | kUnwind; return; } [[clang::musttail]] return unit_005C(c, 402u, depth); }
L_0029E260:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0029E288; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0029E288:
    c.f[0] = ld32((c.r[4].w[0] + 588u));
    c.f[3] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 588u), c.f[0]);
    c.f[4] = ld32((c.r[4].w[0] + 524u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029E300; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[5].w[0] + 80u));  goto L_0029E2CC; }
L_0029E2CC:
    c.f[2] = ld32((c.r[4].w[0] + 520u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 520u), c.f[2]);  if (t) { goto L_0029E358; } }
    st32((c.r[4].w[0] + 520u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 524u), c.f[1]);  if (t) { goto L_0029E358; } }
L_0029E300:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029E358; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[5].w[0] + 80u));  goto L_0029E330; }
L_0029E330:
    c.f[1] = ld32((c.r[4].w[0] + 520u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 520u), c.f[1]);  if (t) { goto L_0029E358; } }
    st32((c.r[4].w[0] + 520u), c.f[0]);
    st32((c.r[4].w[0] + 524u), c.f[0]);
    c.budget -= 2;
L_0029E358:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A62C0u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 181u, depth); }
L_0029E360:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_0029E37C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0029E380; } }
L_0029E37C:
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_0029E380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029E390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E3B0u); set32(c.r[4], ld32((c.r[4].w[0] + 584u)));  if (depth < kMaxDepth) unit_0068(c, 43u, depth + 1u); else { c.pc = 0x002C07E0u; return; } if (c.pc != 0x0029E3B0u) [[unlikely]] return; }
L_0029E3B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 484u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[5].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 484u)));
    st32((c.r[2].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 488u)));
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 544u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0029E430; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E418u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E418u) [[unlikely]] return; }
L_0029E418:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E42Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E42Cu) [[unlikely]] return; }
L_0029E42C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029E430:
    set32(c.r[2], ld32((c.r[18].w[0] + 548u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 552u)));  goto L_0029E470; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E454u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E454u) [[unlikely]] return; }
L_0029E454:
    set32(c.r[7], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E468u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E468u) [[unlikely]] return; }
L_0029E468:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 552u)));
    c.budget -= 2;
L_0029E470:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 556u)));  goto L_0029E4AC; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E490u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E490u) [[unlikely]] return; }
L_0029E490:
    set32(c.r[7], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E4A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E4A4u) [[unlikely]] return; }
L_0029E4A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 556u)));
    c.budget -= 2;
L_0029E4AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 560u)));  goto L_0029E4E8; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E4CCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E4CCu) [[unlikely]] return; }
L_0029E4CC:
    set32(c.r[7], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E4E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E4E0u) [[unlikely]] return; }
L_0029E4E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 560u)));
    c.budget -= 2;
L_0029E4E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 564u)));  goto L_0029E520; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E508u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E508u) [[unlikely]] return; }
L_0029E508:
    set32(c.r[7], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E51Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E51Cu) [[unlikely]] return; }
L_0029E51C:
    set32(c.r[2], ld32((c.r[18].w[0] + 564u)));
    c.budget -= 1;
L_0029E520:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 568u)));  goto L_0029E544; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E540u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E540u) [[unlikely]] return; }
L_0029E540:
    set32(c.r[2], ld32((c.r[18].w[0] + 568u)));
    c.budget -= 1;
L_0029E544:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 572u)));  goto L_0029E568; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E564u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E564u) [[unlikely]] return; }
L_0029E564:
    set32(c.r[2], ld32((c.r[18].w[0] + 572u)));
    c.budget -= 1;
L_0029E568:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 576u)));  goto L_0029E58C; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E588u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E588u) [[unlikely]] return; }
L_0029E588:
    set32(c.r[2], ld32((c.r[18].w[0] + 576u)));
    c.budget -= 1;
L_0029E58C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 580u)));  goto L_0029E5B0; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E5ACu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E5ACu) [[unlikely]] return; }
L_0029E5AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 1;
L_0029E5B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0029E5D4; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E5D0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029E5D0u) [[unlikely]] return; }
L_0029E5D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0029E5D4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E5E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005F(c, 341u, depth + 1u); else { c.pc = 0x0029F6B0u; return; } if (c.pc != 0x0029E5E0u) [[unlikely]] return; }
L_0029E5E0:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    st32((c.r[18].w[0] + 524u), c.f[0]);
    st32((c.r[18].w[0] + 520u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029E610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 484u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E640u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E640u) [[unlikely]] return; }
L_0029E640:
    set32(c.r[2], ld32((c.r[18].w[0] + 488u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E65Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E65Cu) [[unlikely]] return; }
L_0029E65C:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E670u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E670u) [[unlikely]] return; }
L_0029E670:
    set32(c.r[2], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0029E694; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E690u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E690u) [[unlikely]] return; }
L_0029E690:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029E694:
    set32(c.r[2], ld32((c.r[18].w[0] + 548u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 552u)));  goto L_0029E6C0; }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E6B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E6B8u) [[unlikely]] return; }
L_0029E6B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 552u)));
    c.budget -= 2;
L_0029E6C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 556u)));  goto L_0029E6E8; }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E6E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E6E0u) [[unlikely]] return; }
L_0029E6E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 556u)));
    c.budget -= 2;
L_0029E6E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 560u)));  goto L_0029E710; }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E708u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E708u) [[unlikely]] return; }
L_0029E708:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 560u)));
    c.budget -= 2;
L_0029E710:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 564u)));  goto L_0029E734; }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E730u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E730u) [[unlikely]] return; }
L_0029E730:
    set32(c.r[2], ld32((c.r[18].w[0] + 564u)));
    c.budget -= 1;
L_0029E734:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 568u)));  goto L_0029E754; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E750u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E750u) [[unlikely]] return; }
L_0029E750:
    set32(c.r[2], ld32((c.r[18].w[0] + 568u)));
    c.budget -= 1;
L_0029E754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 572u)));  goto L_0029E774; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E770u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E770u) [[unlikely]] return; }
L_0029E770:
    set32(c.r[2], ld32((c.r[18].w[0] + 572u)));
    c.budget -= 1;
L_0029E774:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 576u)));  goto L_0029E794; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E790u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E790u) [[unlikely]] return; }
L_0029E790:
    set32(c.r[2], ld32((c.r[18].w[0] + 576u)));
    c.budget -= 1;
L_0029E794:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 580u)));  goto L_0029E7B4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E7B0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E7B0u) [[unlikely]] return; }
L_0029E7B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 1;
L_0029E7B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32072u));  goto L_0029E7D4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E7D0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029E7D0u) [[unlikely]] return; }
L_0029E7D0:
    c.f[1] = ld32((c.r[28].w[0] - 32072u));
    c.budget -= 1;
L_0029E7D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 524u), c.f[1]);
    st32((c.r[18].w[0] + 520u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E7F4u); set32(c.r[4], ld32((c.r[18].w[0] + 584u)));  if (depth < kMaxDepth) unit_0068(c, 51u, depth + 1u); else { c.pc = 0x002C08A0u; return; } if (c.pc != 0x0029E7F4u) [[unlikely]] return; }
L_0029E7F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029E804; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0029E804:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E820u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0029E820u) [[unlikely]] return; }
L_0029E820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029E840:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029E87C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  goto L_0029E880; }
L_0029E87C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029E880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029E8D8; } }
L_0029E888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E890u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029E890u) [[unlikely]] return; }
L_0029E890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] << 2);  goto L_0029E8A8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E8A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x0029E8A4u) [[unlikely]] return; }
L_0029E8A4:
    set32(c.r[5], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0029E8A8:
    set32(c.r[3], c.r[20].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 484u), c.r[2].w[0]);  if (t) { goto L_0029EE2C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 9152u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E8D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x0029E8D4u) [[unlikely]] return; }
L_0029E8D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0029E8D8:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029E888u | kUnwind; return; } goto L_0029E888; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0029E908; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[3].w[0] + 4u)));  goto L_0029E908; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029E908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E914u);  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x0029E914u) [[unlikely]] return; }
L_0029E914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 504u), c.r[2].w[0]);  if (t) { goto L_0029E9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E924u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0029E924u) [[unlikely]] return; }
L_0029E924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 500u), c.r[2].w[0]);  if (t) { goto L_0029EE2C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 504u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E940u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0029E940u) [[unlikely]] return; }
L_0029E940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0029E9AC; } }
L_0029E948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E950u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 96u, depth + 1u); else { c.pc = 0x003C4EF0u; return; } if (c.pc != 0x0029E950u) [[unlikely]] return; }
L_0029E950:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0029E9AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E960u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029E960u) [[unlikely]] return; }
L_0029E960:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 500u)));  goto L_0029E978; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E974u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x0029E974u) [[unlikely]] return; }
L_0029E974:
    set32(c.r[3], ld32((c.r[20].w[0] + 500u)));
    c.budget -= 1;
L_0029E978:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 500u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029EE30; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E9A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x0029E9A8u) [[unlikely]] return; }
L_0029E9A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029E9AC:
    set32(c.r[2], ld32((c.r[20].w[0] + 504u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029E948u | kUnwind; return; } goto L_0029E948; }
L_0029E9BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_0029E9DC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], ld32((c.r[3].w[0])));  goto L_0029E9DC; }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029E9DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    st32((c.r[20].w[0] + 516u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029E9F0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0029E9F0u) [[unlikely]] return; }
L_0029E9F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 508u), c.r[2].w[0]);  if (t) { goto L_0029EE2C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 516u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EA0Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0029EA0Cu) [[unlikely]] return; }
L_0029EA0C:
    set32(c.r[2], ld32((c.r[20].w[0] + 516u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EA18u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0029EA18u) [[unlikely]] return; }
L_0029EA18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_0029EE2C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 516u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EA34u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0029EA34u) [[unlikely]] return; }
L_0029EA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0029ECD8; } }
L_0029EA3C:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_0029EA58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029EA60; } }
L_0029EA58:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0029EA60:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0029ECD8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 148u)));  goto L_0029EA8C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029ECD4; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_0029EA8C:
    set32(c.r[18], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EA98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0029EA98u) [[unlikely]] return; }
L_0029EA98:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0029EB78; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 9168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0029C000u < 16384u) { entry = entries_005F[(t - 0x0029C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0029EAC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029EB74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 544u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + 2u);  if (t) { goto L_0029EB74; } }
L_0029EAE4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 548u), c.r[2].w[0]);  if (t) { goto L_0029EB74; } }
L_0029EAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EAFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0029EAFCu) [[unlikely]] return; }
L_0029EAFC:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0029EB18; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 548u), c.r[2].w[0]);  if (t) { goto L_0029EB74; } }
L_0029EB18:
    set32(c.r[18], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 556u), c.r[2].w[0]);  if (t) { goto L_0029EB74; } }
L_0029EB24:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 10025u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0029EB74; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], 0u + 12u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_0029EB74; } }
L_0029EB44:
    set32(c.r[2], 0u + 20044u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 20003u);  goto L_0029EB58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 12u);  if (t) { goto L_0029EB74; } }
L_0029EB58:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 13u);  goto L_0029EB74; }
    set32(c.r[2], c.r[17].w[0] - 20032u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029EB74; } }
    set32(c.r[18], 0u + 13u);
    c.budget -= 1;
L_0029EB74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029EB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EB80u);  if (depth < kMaxDepth) unit_0061(c, 13u, depth + 1u); else { c.pc = 0x002A43A0u; return; } if (c.pc != 0x0029EB80u) [[unlikely]] return; }
L_0029EB80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 20003u);  goto L_0029EC00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EB90u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029EB90u) [[unlikely]] return; }
L_0029EB90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 512u)));  goto L_0029EBA8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EBA4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x0029EBA4u) [[unlikely]] return; }
L_0029EBA4:
    set32(c.r[3], ld32((c.r[20].w[0] + 512u)));
    c.budget -= 1;
L_0029EBA8:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0029EBF8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0029EBE8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_0029EBE8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029EBE8:
    set32(c.r[6], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EBF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x0029EBF4u) [[unlikely]] return; }
L_0029EBF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029EBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 564u), c.r[2].w[0]);  if (t) { goto L_0029EC7C; } }
L_0029EC00:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0029EC7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EC10u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029EC10u) [[unlikely]] return; }
L_0029EC10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 512u)));  goto L_0029EC28; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EC24u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x0029EC24u) [[unlikely]] return; }
L_0029EC24:
    set32(c.r[3], ld32((c.r[20].w[0] + 512u)));
    c.budget -= 1;
L_0029EC28:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0029EC78; }
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0029EC68; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_0029EC68; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029EC68:
    set32(c.r[6], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EC74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x0029EC74u) [[unlikely]] return; }
L_0029EC74:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029EC78:
    st32((c.r[20].w[0] + 568u), c.r[2].w[0]);
    c.budget -= 1;
L_0029EC7C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_0029ECD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EC8Cu); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029EC8Cu) [[unlikely]] return; }
L_0029EC8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 508u)));  goto L_0029ECA4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ECA0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x0029ECA0u) [[unlikely]] return; }
L_0029ECA0:
    set32(c.r[3], ld32((c.r[20].w[0] + 508u)));
    c.budget -= 1;
L_0029ECA4:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029ECD4; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ECD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x0029ECD4u) [[unlikely]] return; }
L_0029ECD4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0029ECD8:
    set32(c.r[2], ld32((c.r[20].w[0] + 516u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029EA3Cu | kUnwind; return; } goto L_0029EA3C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 3168u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0029ED20; } }
L_0029ED04:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0029ED20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029ED30; } }
L_0029ED20:
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029ED04u | kUnwind; return; } goto L_0029ED04; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029ED30:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0029ED3C; }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0029ED3C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0029ED8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ED50u); set32(c.r[4], c.r[20].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0029ED50u) [[unlikely]] return; }
L_0029ED50:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0029ED70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029ED70; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029ED70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029ED88; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 576u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 580u), c.r[2].w[0]);
    c.budget -= 4;
L_0029ED88:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0029ED8C:
    set32(c.r[7], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 3168u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0029EDC0; } }
L_0029EDA4:
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0029EDC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029EDD0; } }
L_0029EDC0:
    c.r[2].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029EDA4u | kUnwind; return; } goto L_0029EDA4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029EDD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0029EDDC; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0029EDDC:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 528u), 0u);  if (t) { goto L_0029EE04; } }
L_0029EDE8:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0029EE18; }
    set32(c.r[2], ld32((c.r[20].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 528u), c.r[2].w[0]);
    c.budget -= 3;
L_0029EE04:
    set32(c.r[3], ld32((c.r[20].w[0] + 528u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029EDE8u | kUnwind; return; } goto L_0029EDE8; }
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_0029EE18:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 532u), c.r[3].w[0]);  if (t) { goto L_0029EE30; } }
L_0029EE2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029EE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0029EE60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 508u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029EEE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029EEBC; } }
L_0029EE88:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0029EEBC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EEACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029EEACu) [[unlikely]] return; }
L_0029EEAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_0029EEBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 516u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 508u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029EE88u | kUnwind; return; } goto L_0029EE88; }
    set32(c.r[4], ld32((c.r[17].w[0] + 508u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 512u)));  goto L_0029EEE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EEE0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0029EEE0u) [[unlikely]] return; }
L_0029EEE0:
    st32((c.r[17].w[0] + 508u), 0u);
    c.budget -= 1;
L_0029EEE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 512u)));
    c.budget -= 1;
L_0029EEE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 516u), 0u);  goto L_0029EF58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029EF2C; } }
L_0029EEF8:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0029EF2C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EF1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029EF1Cu) [[unlikely]] return; }
L_0029EF1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_0029EF2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 516u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 512u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029EEF8u | kUnwind; return; } goto L_0029EEF8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029EF54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EF50u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0029EF50u) [[unlikely]] return; }
L_0029EF50:
    st32((c.r[17].w[0] + 512u), 0u);
    c.budget -= 1;
L_0029EF54:
    st32((c.r[17].w[0] + 516u), 0u);
    c.budget -= 1;
L_0029EF58:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 504u), 0u);  goto L_0029EFCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029EFA0; } }
L_0029EF6C:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0029EFA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EF90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029EF90u) [[unlikely]] return; }
L_0029EF90:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_0029EFA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 500u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029EF6Cu | kUnwind; return; } goto L_0029EF6C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029EFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EFC4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0029EFC4u) [[unlikely]] return; }
L_0029EFC4:
    st32((c.r[17].w[0] + 500u), 0u);
    c.budget -= 1;
L_0029EFC8:
    st32((c.r[17].w[0] + 504u), 0u);
    c.budget -= 1;
L_0029EFCC:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0029EFD4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 484u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 484u);  if (t) { goto L_0029EFF8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029EFF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029EFF4u) [[unlikely]] return; }
L_0029EFF4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0029EFF8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029EFD4u | kUnwind; return; } goto L_0029EFD4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029F030:
    set32(c.r[29], c.r[29].w[0] - 608u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[1] = ld32((c.r[28].w[0] - 32664u));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[2] = ld32((c.r[28].w[0] - 32076u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[5], c.r[5].w[0] + 11120u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[6].w[0] + 11104u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[12] = ld32((c.r[4].w[0] + 520u));
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F094u); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[2]);  if (depth < kMaxDepth) unit_001D(c, 238u, depth + 1u); else { c.pc = 0x00196700u; return; } if (c.pc != 0x0029F094u) [[unlikely]] return; }
L_0029F094:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 532u)));  if (t) { goto L_0029F0C4; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0029F0C8; } }
L_0029F0C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029F0C8:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[2].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F0D8u); set32(c.r[6], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0029F0D8u) [[unlikely]] return; }
L_0029F0D8:
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[5], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 320u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F10Cu); st32((c.r[29].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0029F10Cu) [[unlikely]] return; }
L_0029F10C:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F11Cu); st128((c.r[29].w[0] + 576u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0029F11Cu) [[unlikely]] return; }
L_0029F11C:
    set32(c.r[2], ld32((c.r[20].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029F134; } }
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F134u); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0029F134u) [[unlikely]] return; }
L_0029F134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 17232u));
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.f[2] = ld32((c.r[2].w[0] + 17236u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 17240u));
    c.f[0] = ld32((c.r[2].w[0] + 17244u));
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    st32((c.r[29].w[0] + 260u), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F180u); st32((c.r[29].w[0] + 264u), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x0029F180u) [[unlikely]] return; }
L_0029F180:
    set32(c.r[3], ld32((c.r[20].w[0] + 500u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_0029F1E0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029F1DC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F1B4u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0029F1B4u) [[unlikely]] return; }
L_0029F1B4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 600u));
    c.f[2] = ld32((c.r[29].w[0] + 596u));
    c.f[1] = ld32((c.r[29].w[0] + 592u));
    c.f[0] = ld32((c.r[29].w[0] + 604u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    st32((c.r[16].w[0] + 192u), c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[2]);
    st32((c.r[16].w[0] + 200u), c.f[3]);
    c.budget -= 10;
L_0029F1DC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0029F1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F1E8u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0029F1E8u) [[unlikely]] return; }
L_0029F1E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[23], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[30], ld32((c.r[3].w[0] + 560u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0029F670; } }
L_0029F1FC:
    set32(c.r[16], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_0029F670; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 560u)));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);  goto L_0029F230; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0029F234; } }
L_0029F230:
    set32(c.r[19], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 1;
L_0029F234:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0029F66C; } }
    set32(c.r[22], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F248u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0029F248u) [[unlikely]] return; }
L_0029F248:
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029F268; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029F66C; } }
L_0029F268:
    set32(c.r[4], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 1296u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 508u)));  goto L_0029F294; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0029F290; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0029F66C; } }
L_0029F290:
    set32(c.r[3], ld32((c.r[20].w[0] + 508u)));
    c.budget -= 1;
L_0029F294:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[17], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0029F66C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0029F2C0; }
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 1;
L_0029F2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F2C8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 10u, depth + 1u); else { c.pc = 0x002A4240u; return; } if (c.pc != 0x0029F2C8u) [[unlikely]] return; }
L_0029F2C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  goto L_0029F3E4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0029F30C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0029F308; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0029F308; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0029F308; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0029F3E0; } }
L_0029F308:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029F30C:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 164u)));  goto L_0029F348; }
    set32(c.r[3], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029F344; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0029F3E0; } }
L_0029F344:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 1;
L_0029F348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F368u); st32((c.r[19].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0029F368u) [[unlikely]] return; }
L_0029F368:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F374u); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0029F374u) [[unlikely]] return; }
L_0029F374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F37Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0029F37Cu) [[unlikely]] return; }
L_0029F37C:
    set32(c.r[4], c.r[19].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F38Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0029F38Cu) [[unlikely]] return; }
L_0029F38C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[19].w[0] + 352u);
    c.f[0] = ld32((c.r[2].w[0] + 17232u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 17236u));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 17240u));
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 244u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 17244u));
    st32((c.r[29].w[0] + 248u), c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F3D8u); st32((c.r[29].w[0] + 252u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x0029F3D8u) [[unlikely]] return; }
L_0029F3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F3E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 107u, depth + 1u); else { c.pc = 0x002D1210u; return; } if (c.pc != 0x0029F3E0u) [[unlikely]] return; }
L_0029F3E0:
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 1;
L_0029F3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F3ECu);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0029F3ECu) [[unlikely]] return; }
L_0029F3EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 448u);  goto L_0029F4C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F404u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0029F404u) [[unlikely]] return; }
L_0029F404:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029F4BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F41Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0029F41Cu) [[unlikely]] return; }
L_0029F41C:
    c.f[0] = ld32((c.r[19].w[0] + 736u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[23].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 748u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F44Cu); st32((c.r[29].w[0] + 380u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0029F44Cu) [[unlikely]] return; }
L_0029F44C:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F460u); st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0029F460u) [[unlikely]] return; }
L_0029F460:
    c.f[12] = ld32((c.r[19].w[0] + 656u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F470u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0029F470u) [[unlikely]] return; }
L_0029F470:
    c.f[1] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[3] = ld32((c.r[29].w[0] + 372u));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 376u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 368u), c.f[4]);
    st32((c.r[29].w[0] + 372u), c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F4A8u); st32((c.r[29].w[0] + 376u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0029F4A8u) [[unlikely]] return; }
L_0029F4A8:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F4B4u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0029F4B4u) [[unlikely]] return; }
L_0029F4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_0029F55C; } }
L_0029F4BC:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 1;
L_0029F4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F4C8u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0029F4C8u) [[unlikely]] return; }
L_0029F4C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 540u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0029F540; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[5] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.f[3] = ld32((c.r[2].w[0] + 17264u));
    c.f[6] = ld32((c.r[19].w[0] + 196u));
    c.f[7] = ld32((c.r[19].w[0] + 200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 17268u));
    c.f[4] = ld32((c.r[19].w[0] + 192u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 17272u));
    st32((c.r[29].w[0] + 208u), c.f[3]);
    st32((c.r[29].w[0] + 212u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 17276u));
    st32((c.r[29].w[0] + 216u), c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[4]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    st32((c.r[29].w[0] + 212u), c.f[5]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F538u); st32((c.r[29].w[0] + 216u), c.f[7]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0029F538u) [[unlikely]] return; }
L_0029F538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029F558; } }
L_0029F540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F548u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0029F548u) [[unlikely]] return; }
L_0029F548:
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[6], c.r[19].w[0] + 1392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F558u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0029F558u) [[unlikely]] return; }
L_0029F558:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_0029F55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F564u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0029F564u) [[unlikely]] return; }
L_0029F564:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 600u));
    c.f[2] = ld32((c.r[29].w[0] + 596u));
    c.f[1] = ld32((c.r[29].w[0] + 592u));
    c.f[0] = ld32((c.r[29].w[0] + 604u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    st32((c.r[17].w[0] + 192u), c.f[1]);
    st32((c.r[17].w[0] + 196u), c.f[2]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 200u), c.f[3]);  if (t) { goto L_0029F618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F598u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0029F598u) [[unlikely]] return; }
L_0029F598:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_0029F5E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 17248u));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[1] = ld32((c.r[3].w[0] + 17256u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 17260u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F5E4u); st32((c.r[29].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0029F5E4u) [[unlikely]] return; }
L_0029F5E4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_0029F5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F5F0u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0029F5F0u) [[unlikely]] return; }
L_0029F5F0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 600u));
    c.f[2] = ld32((c.r[29].w[0] + 596u));
    c.f[1] = ld32((c.r[29].w[0] + 592u));
    c.f[0] = ld32((c.r[29].w[0] + 604u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    st32((c.r[16].w[0] + 192u), c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[2]);
    st32((c.r[16].w[0] + 200u), c.f[3]);
    c.budget -= 10;
L_0029F618:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_0029F66C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 496u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029F66C; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F644u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0029F644u) [[unlikely]] return; }
L_0029F644:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 600u));
    c.f[2] = ld32((c.r[29].w[0] + 596u));
    c.f[1] = ld32((c.r[29].w[0] + 592u));
    c.f[0] = ld32((c.r[29].w[0] + 604u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    st32((c.r[16].w[0] + 192u), c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[2]);
    st32((c.r[16].w[0] + 200u), c.f[3]);
    c.budget -= 10;
L_0029F66C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0029F670:
    c.r[3].d[0] = c.r[21].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 508u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029F1FCu | kUnwind; return; } goto L_0029F1FC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_0029F6B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 528u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F6F0u); set32(c.r[4], c.r[20].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0029F6F0u) [[unlikely]] return; }
L_0029F6F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 488u)));  goto L_0029F718; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029F714; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029F714:
    set32(c.r[3], ld32((c.r[20].w[0] + 488u)));
    c.budget -= 1;
L_0029F718:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[18], ld32((c.r[3].w[0] + 52u)));  if (t) { goto L_0029F7E4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0029F748; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 572u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029F748; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F748u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029F748u) [[unlikely]] return; }
L_0029F748:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 528u)));  goto L_0029F774; }
    set32(c.r[3], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029F770; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F770u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029F770u) [[unlikely]] return; }
L_0029F770:
    set32(c.r[3], ld32((c.r[20].w[0] + 528u)));
    c.budget -= 1;
L_0029F774:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0029F7DC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 3168u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0029F7B4; } }
L_0029F798:
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0029F7B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029F7C4; } }
L_0029F7B4:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029F798u | kUnwind; return; } goto L_0029F798; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029F7C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029F7D0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0029F7D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 528u), c.r[3].w[0]);  if (t) { goto L_0029F8B8; } }
L_0029F7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 528u), c.r[3].w[0]);  if (t) { goto L_0029F8B8; } }
L_0029F7E4:
    c.budget -= 2;
    if (c.r[19].sd[0] <= 0) { set32(c.r[7], ld32((c.r[20].w[0] + 528u)));  goto L_0029F8BC; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0029F814; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029F814; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F814u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029F814u) [[unlikely]] return; }
L_0029F814:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0029F840; }
    set32(c.r[3], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029F83C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F83Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029F83Cu) [[unlikely]] return; }
L_0029F83C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0029F840:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 3168u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0029F874; } }
L_0029F858:
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.budget -= 5;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0029F874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 528u)));  if (t) { goto L_0029F888; } }
L_0029F874:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029F858u | kUnwind; return; } goto L_0029F858; }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 528u)));
    c.budget -= 2;
L_0029F888:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 1u);  if (t) { goto L_0029F898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[9].w[0] + 4u)));  if (t) { goto L_0029F89C; } }
L_0029F898:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029F89C:
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 528u)));  goto L_0029F8B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 528u), 0u);  if (t) { goto L_0029F8B8; } }
L_0029F8B0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 528u), c.r[3].w[0]);
    c.budget -= 2;
L_0029F8B8:
    set32(c.r[7], ld32((c.r[20].w[0] + 528u)));
    c.budget -= 1;
L_0029F8BC:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[7].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0029F8D0; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0029FF24; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0029F8D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 3168u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0029F904; } }
L_0029F8E8:
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0029F904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029F914; } }
L_0029F904:
    c.r[2].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029F8E8u | kUnwind; return; } goto L_0029F8E8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029F914:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029F920; }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0029F920:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 532u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0029F950; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029F94Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0029F94Cu) [[unlikely]] return; }
L_0029F94C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0029F950:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 532u)));  if (t) { goto L_0029F97C; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0029F980; } }
L_0029F97C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029F980:
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 540u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 500u)));  goto L_0029F9C0; }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029F9BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_0029F9BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 500u)));
    c.budget -= 1;
L_0029F9C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 496u)));  goto L_0029FB10; }
    set32(c.r[2], ld32((c.r[20].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029FB0C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 528u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 500u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 13;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 540u)));  goto L_0029FA20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FA1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 189u, depth + 1u); else { c.pc = 0x003C22E0u; return; } if (c.pc != 0x0029FA1Cu) [[unlikely]] return; }
L_0029FA1C:
    set32(c.r[2], ld32((c.r[20].w[0] + 540u)));
    c.budget -= 1;
L_0029FA20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 528u)));  goto L_0029FA48; }
    set32(c.r[3], ld32((c.r[20].w[0] + 528u)));
    set32(c.r[4], 0u + 3000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 500u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 72u), c.r[4].w[0]);  if (t) { goto L_0029FA60; } }
L_0029FA48:
    set32(c.r[4], 0u + 7000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 500u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 72u), c.r[4].w[0]);
    c.budget -= 6;
L_0029FA60:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0029FB0C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029FB0C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 560u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0029FB00; } }
L_0029FA8C:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_0029FAA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029FAB0; } }
L_0029FAA8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0029FAB0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0029FB00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FAC0u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0029FAC0u) [[unlikely]] return; }
L_0029FAC0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029FAFC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029FAFC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FAFCu); set32(c.r[5], c.r[2].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029FAFCu) [[unlikely]] return; }
L_0029FAFC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0029FB00:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029FA8Cu | kUnwind; return; } goto L_0029FA8C; }
L_0029FB0C:
    set32(c.r[4], ld32((c.r[20].w[0] + 496u)));
    c.budget -= 1;
L_0029FB10:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0029FB30; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 6;
L_0029FB30:
    set32(c.r[23], ld32((c.r[2].w[0] + 560u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0029FE9C; } }
L_0029FB3C:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_0029FB58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0029FB60; } }
L_0029FB58:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0029FB60:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0029FE9C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029FE98; } }
    set32(c.r[22], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[21], ld32((c.r[17].w[0] + 148u)));  if (t) { goto L_0029FE98; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0029FBA4; }
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 1;
L_0029FBA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 532u)));  goto L_0029FBC8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 508u)));  goto L_0029FE4C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 532u)));
    c.budget -= 1;
L_0029FBC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1296u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 508u)));  goto L_0029FBF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FBDCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0029FBDCu) [[unlikely]] return; }
L_0029FBDC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029FBF4; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029FE48; } }
L_0029FBF4:
    set32(c.r[3], ld32((c.r[20].w[0] + 508u)));
    c.budget -= 1;
L_0029FBF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FC1Cu); st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 189u, depth + 1u); else { c.pc = 0x003C22E0u; return; } if (c.pc != 0x0029FC1Cu) [[unlikely]] return; }
L_0029FC1C:
    set32(c.r[2], ld32((c.r[20].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 540u)));  goto L_0029FC54; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0029FC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FC50u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 189u, depth + 1u); else { c.pc = 0x003C22E0u; return; } if (c.pc != 0x0029FC50u) [[unlikely]] return; }
L_0029FC50:
    set32(c.r[2], ld32((c.r[20].w[0] + 540u)));
    c.budget -= 1;
L_0029FC54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_0029FC94; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FC70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029FC70u) [[unlikely]] return; }
L_0029FC70:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0029FCC4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FC8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029FC8Cu) [[unlikely]] return; }
L_0029FC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029FCC0; } }
L_0029FC94:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FCA4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029FCA4u) [[unlikely]] return; }
L_0029FCA4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0029FCC0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FCC0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029FCC0u) [[unlikely]] return; }
L_0029FCC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0029FCC4:
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0029FD3C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 496u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0029FD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FD00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 189u, depth + 1u); else { c.pc = 0x003C22E0u; return; } if (c.pc != 0x0029FD00u) [[unlikely]] return; }
L_0029FD00:
    set32(c.r[2], ld32((c.r[20].w[0] + 540u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0029FD28; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FD20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029FD20u) [[unlikely]] return; }
L_0029FD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029FD38; } }
L_0029FD28:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FD38u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0029FD38u) [[unlikely]] return; }
L_0029FD38:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0029FD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FD44u);  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0029FD44u) [[unlikely]] return; }
L_0029FD44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 180u)));  goto L_0029FD80; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029FD7C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029FD7C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0029FD7C; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 20001u);  goto L_0029FDB4; }
L_0029FD7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_0029FD80:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FD90u); st32((c.r[17].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 10u, depth + 1u); else { c.pc = 0x002A4240u; return; } if (c.pc != 0x0029FD90u) [[unlikely]] return; }
L_0029FD90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029FDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FDA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 338u, depth + 1u); else { c.pc = 0x0028B760u; return; } if (c.pc != 0x0029FDA0u) [[unlikely]] return; }
L_0029FDA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
L_0029FDB0:
    set32(c.r[2], 0u + 20001u);
    c.budget -= 1;
L_0029FDB4:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 172u)));  goto L_0029FDDC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029FDD8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
L_0029FDD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 1;
L_0029FDDC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 508u)));  goto L_0029FE08; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029FE98; } }
    set32(c.r[2], 0u + 20003u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0029FE98; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 508u)));
    c.budget -= 1;
L_0029FE08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[4].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029FE98; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0029FE98; } }
L_0029FE48:
    set32(c.r[3], ld32((c.r[20].w[0] + 508u)));
    c.budget -= 1;
L_0029FE4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[4].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 180u)));  goto L_0029FE8C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 4;
L_0029FE8C:
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
L_0029FE98:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0029FE9C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029FB3Cu | kUnwind; return; } goto L_0029FB3C; }
    set32(c.r[5], ld32((c.r[20].w[0] + 532u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FEB4u); set32(c.r[4], ld32((c.r[20].w[0] + 584u)));  if (depth < kMaxDepth) unit_0068(c, 50u, depth + 1u); else { c.pc = 0x002C0890u; return; } if (c.pc != 0x0029FEB4u) [[unlikely]] return; }
L_0029FEB4:
    set32(c.r[4], ld32((c.r[20].w[0] + 540u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  goto L_0029FF10; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  goto L_0029FEF8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  goto L_0029FEE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029FF20; } }
L_0029FEE0:
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FEF0u); set32(c.r[5], 0u + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029FEF0u) [[unlikely]] return; }
L_0029FEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029FF20; } }
L_0029FEF8:
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FF08u); set32(c.r[5], 0u + 89u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029FF08u) [[unlikely]] return; }
L_0029FF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029FF20; } }
L_0029FF10:
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FF20u); set32(c.r[5], 0u + 90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029FF20u) [[unlikely]] return; }
L_0029FF20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0029FF24:
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
L_0029FF50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029DB20u | kUnwind; return; } goto L_0029DB20; }
L_0029FF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FF84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0029FF84u) [[unlikely]] return; }
L_0029FF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 24704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FF98u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x002A00A0u; return; } if (c.pc != 0x0029FF98u) [[unlikely]] return; }
L_0029FF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FFA0u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029FFA0u) [[unlikely]] return; }
L_0029FFA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  goto L_0029FFC0; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FFBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0029FFBCu) [[unlikely]] return; }
L_0029FFBC:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_0029FFC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0029FFE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FFD0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0029FFD0u) [[unlikely]] return; }
L_0029FFD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029FFE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0029FFE0u) [[unlikely]] return; }
L_0029FFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0029FFF8; } }
L_0029FFE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0029FFF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 2;
    [[clang::musttail]] return unit_0060(c, 1u, depth);
}

}
