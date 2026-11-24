#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0035[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16,
    0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238,
    0, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0,
    0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 286, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0,
};

void unit_0035(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F4000;
    case 2u: goto L_001F4010;
    case 3u: goto L_001F4020;
    case 4u: goto L_001F4034;
    case 5u: goto L_001F403C;
    case 6u: goto L_001F4044;
    case 7u: goto L_001F4060;
    case 8u: goto L_001F4070;
    case 9u: goto L_001F40D8;
    case 10u: goto L_001F4110;
    case 11u: goto L_001F4118;
    case 12u: goto L_001F4150;
    case 13u: goto L_001F4170;
    case 14u: goto L_001F41E0;
    case 15u: goto L_001F41F4;
    case 16u: goto L_001F41FC;
    case 17u: goto L_001F4204;
    case 18u: goto L_001F420C;
    case 19u: goto L_001F4220;
    case 20u: goto L_001F42E0;
    case 21u: goto L_001F42E8;
    case 22u: goto L_001F42F0;
    case 23u: goto L_001F4328;
    case 24u: goto L_001F4334;
    case 25u: goto L_001F4344;
    case 26u: goto L_001F4354;
    case 27u: goto L_001F435C;
    case 28u: goto L_001F4364;
    case 29u: goto L_001F436C;
    case 30u: goto L_001F4380;
    case 31u: goto L_001F4398;
    case 32u: goto L_001F43AC;
    case 33u: goto L_001F43C0;
    case 34u: goto L_001F43D0;
    case 35u: goto L_001F442C;
    case 36u: goto L_001F4470;
    case 37u: goto L_001F449C;
    case 38u: goto L_001F44A8;
    case 39u: goto L_001F44B4;
    case 40u: goto L_001F44D8;
    case 41u: goto L_001F44F4;
    case 42u: goto L_001F4518;
    case 43u: goto L_001F4560;
    case 44u: goto L_001F45D0;
    case 45u: goto L_001F4608;
    case 46u: goto L_001F461C;
    case 47u: goto L_001F4658;
    case 48u: goto L_001F4680;
    case 49u: goto L_001F469C;
    case 50u: goto L_001F46CC;
    case 51u: goto L_001F4710;
    case 52u: goto L_001F4730;
    case 53u: goto L_001F475C;
    case 54u: goto L_001F4790;
    case 55u: goto L_001F47AC;
    case 56u: goto L_001F47D0;
    case 57u: goto L_001F4838;
    case 58u: goto L_001F4868;
    case 59u: goto L_001F48A0;
    case 60u: goto L_001F48D4;
    case 61u: goto L_001F4908;
    case 62u: goto L_001F4938;
    case 63u: goto L_001F4954;
    case 64u: goto L_001F4980;
    case 65u: goto L_001F499C;
    case 66u: goto L_001F49CC;
    case 67u: goto L_001F49DC;
    case 68u: goto L_001F4A0C;
    case 69u: goto L_001F4A30;
    case 70u: goto L_001F4A58;
    case 71u: goto L_001F4A64;
    case 72u: goto L_001F4ABC;
    case 73u: goto L_001F4AF4;
    case 74u: goto L_001F4B24;
    case 75u: goto L_001F4B50;
    case 76u: goto L_001F4B78;
    case 77u: goto L_001F4BD0;
    case 78u: goto L_001F4BDC;
    case 79u: goto L_001F4BF8;
    case 80u: goto L_001F4C0C;
    case 81u: goto L_001F4C28;
    case 82u: goto L_001F4C50;
    case 83u: goto L_001F4C88;
    case 84u: goto L_001F4CBC;
    case 85u: goto L_001F4CC4;
    case 86u: goto L_001F4CE0;
    case 87u: goto L_001F4CE8;
    case 88u: goto L_001F4D08;
    case 89u: goto L_001F4D30;
    case 90u: goto L_001F4DB0;
    case 91u: goto L_001F4E00;
    case 92u: goto L_001F4E30;
    case 93u: goto L_001F4E94;
    case 94u: goto L_001F4EB0;
    case 95u: goto L_001F4EE0;
    case 96u: goto L_001F4EEC;
    case 97u: goto L_001F4F00;
    case 98u: goto L_001F4F10;
    case 99u: goto L_001F4F2C;
    case 100u: goto L_001F4F60;
    case 101u: goto L_001F4F6C;
    case 102u: goto L_001F4F80;
    case 103u: goto L_001F4F90;
    case 104u: goto L_001F4FA4;
    case 105u: goto L_001F5018;
    case 106u: goto L_001F5034;
    case 107u: goto L_001F5060;
    case 108u: goto L_001F5098;
    case 109u: goto L_001F50A4;
    case 110u: goto L_001F50B8;
    case 111u: goto L_001F50E0;
    case 112u: goto L_001F50F0;
    case 113u: goto L_001F5130;
    case 114u: goto L_001F5150;
    case 115u: goto L_001F5188;
    case 116u: goto L_001F5194;
    case 117u: goto L_001F51C0;
    case 118u: goto L_001F51F4;
    case 119u: goto L_001F524C;
    case 120u: goto L_001F5258;
    case 121u: goto L_001F5298;
    case 122u: goto L_001F52A4;
    case 123u: goto L_001F52E0;
    case 124u: goto L_001F52E8;
    case 125u: goto L_001F5320;
    case 126u: goto L_001F5360;
    case 127u: goto L_001F5370;
    case 128u: goto L_001F538C;
    case 129u: goto L_001F53E0;
    case 130u: goto L_001F5460;
    case 131u: goto L_001F548C;
    case 132u: goto L_001F54A8;
    case 133u: goto L_001F54D0;
    case 134u: goto L_001F5504;
    case 135u: goto L_001F5560;
    case 136u: goto L_001F5598;
    case 137u: goto L_001F55DC;
    case 138u: goto L_001F5620;
    case 139u: goto L_001F568C;
    case 140u: goto L_001F56B0;
    case 141u: goto L_001F56C4;
    case 142u: goto L_001F56D8;
    case 143u: goto L_001F56F8;
    case 144u: goto L_001F5734;
    case 145u: goto L_001F5760;
    case 146u: goto L_001F5784;
    case 147u: goto L_001F57D8;
    case 148u: goto L_001F57FC;
    case 149u: goto L_001F5820;
    case 150u: goto L_001F5860;
    case 151u: goto L_001F58C4;
    case 152u: goto L_001F58E0;
    case 153u: goto L_001F58F4;
    case 154u: goto L_001F5908;
    case 155u: goto L_001F5940;
    case 156u: goto L_001F5998;
    case 157u: goto L_001F59B4;
    case 158u: goto L_001F59D8;
    case 159u: goto L_001F5A3C;
    case 160u: goto L_001F5A6C;
    case 161u: goto L_001F5A98;
    case 162u: goto L_001F5B14;
    case 163u: goto L_001F5B7C;
    case 164u: goto L_001F5B90;
    case 165u: goto L_001F5BD0;
    case 166u: goto L_001F5C20;
    case 167u: goto L_001F5C30;
    case 168u: goto L_001F5C40;
    case 169u: goto L_001F5C9C;
    case 170u: goto L_001F5CAC;
    case 171u: goto L_001F5D24;
    case 172u: goto L_001F5D38;
    case 173u: goto L_001F5D7C;
    case 174u: goto L_001F5DB8;
    case 175u: goto L_001F5DCC;
    case 176u: goto L_001F5DE0;
    case 177u: goto L_001F5DF8;
    case 178u: goto L_001F5E70;
    case 179u: goto L_001F5E84;
    case 180u: goto L_001F5ED8;
    case 181u: goto L_001F5F04;
    case 182u: goto L_001F5F40;
    case 183u: goto L_001F5F54;
    case 184u: goto L_001F5F8C;
    case 185u: goto L_001F5FC8;
    case 186u: goto L_001F5FDC;
    case 187u: goto L_001F6004;
    case 188u: goto L_001F6010;
    case 189u: goto L_001F6034;
    case 190u: goto L_001F6050;
    case 191u: goto L_001F6084;
    case 192u: goto L_001F60A4;
    case 193u: goto L_001F60CC;
    case 194u: goto L_001F60E4;
    case 195u: goto L_001F60F0;
    case 196u: goto L_001F6114;
    case 197u: goto L_001F6130;
    case 198u: goto L_001F615C;
    case 199u: goto L_001F6190;
    case 200u: goto L_001F61AC;
    case 201u: goto L_001F61DC;
    case 202u: goto L_001F6204;
    case 203u: goto L_001F622C;
    case 204u: goto L_001F6260;
    case 205u: goto L_001F628C;
    case 206u: goto L_001F62B0;
    case 207u: goto L_001F62D8;
    case 208u: goto L_001F62FC;
    case 209u: goto L_001F6324;
    case 210u: goto L_001F6348;
    case 211u: goto L_001F6370;
    case 212u: goto L_001F637C;
    case 213u: goto L_001F63B0;
    case 214u: goto L_001F63CC;
    case 215u: goto L_001F63FC;
    case 216u: goto L_001F6428;
    case 217u: goto L_001F6430;
    case 218u: goto L_001F6438;
    case 219u: goto L_001F6458;
    case 220u: goto L_001F647C;
    case 221u: goto L_001F64B4;
    case 222u: goto L_001F64BC;
    case 223u: goto L_001F64C8;
    case 224u: goto L_001F64E8;
    case 225u: goto L_001F6510;
    case 226u: goto L_001F651C;
    case 227u: goto L_001F6524;
    case 228u: goto L_001F652C;
    case 229u: goto L_001F6550;
    case 230u: goto L_001F657C;
    case 231u: goto L_001F6598;
    case 232u: goto L_001F65BC;
    case 233u: goto L_001F65D8;
    case 234u: goto L_001F6604;
    case 235u: goto L_001F6628;
    case 236u: goto L_001F6644;
    case 237u: goto L_001F6674;
    case 238u: goto L_001F667C;
    case 239u: goto L_001F6690;
    case 240u: goto L_001F6698;
    case 241u: goto L_001F66A4;
    case 242u: goto L_001F66B0;
    case 243u: goto L_001F66B8;
    case 244u: goto L_001F66C8;
    case 245u: goto L_001F66E4;
    case 246u: goto L_001F6708;
    case 247u: goto L_001F6720;
    case 248u: goto L_001F6728;
    case 249u: goto L_001F6730;
    case 250u: goto L_001F6750;
    case 251u: goto L_001F6784;
    case 252u: goto L_001F67B0;
    case 253u: goto L_001F67DC;
    case 254u: goto L_001F6818;
    case 255u: goto L_001F684C;
    case 256u: goto L_001F6868;
    case 257u: goto L_001F6890;
    case 258u: goto L_001F68B4;
    case 259u: goto L_001F690C;
    case 260u: goto L_001F6950;
    case 261u: goto L_001F69B0;
    case 262u: goto L_001F69DC;
    case 263u: goto L_001F69E4;
    case 264u: goto L_001F6A18;
    case 265u: goto L_001F6A30;
    case 266u: goto L_001F6A64;
    case 267u: goto L_001F6AF0;
    case 268u: goto L_001F6B40;
    case 269u: goto L_001F6BB8;
    case 270u: goto L_001F6BD4;
    case 271u: goto L_001F6C18;
    case 272u: goto L_001F6C74;
    case 273u: goto L_001F6C84;
    case 274u: goto L_001F6CB0;
    case 275u: goto L_001F6CE0;
    case 276u: goto L_001F6CF0;
    case 277u: goto L_001F6D20;
    case 278u: goto L_001F6D34;
    case 279u: goto L_001F6D4C;
    case 280u: goto L_001F6D70;
    case 281u: goto L_001F6DAC;
    case 282u: goto L_001F6DF4;
    case 283u: goto L_001F6E04;
    case 284u: goto L_001F6E24;
    case 285u: goto L_001F6E38;
    case 286u: goto L_001F6E84;
    case 287u: goto L_001F6E90;
    case 288u: goto L_001F6E98;
    case 289u: goto L_001F6EA4;
    case 290u: goto L_001F6EDC;
    case 291u: goto L_001F6EEC;
    case 292u: goto L_001F6F0C;
    case 293u: goto L_001F6F20;
    case 294u: goto L_001F6F30;
    case 295u: goto L_001F6F3C;
    case 296u: goto L_001F6F54;
    case 297u: goto L_001F6F7C;
    case 298u: goto L_001F6F94;
    case 299u: goto L_001F6FA0;
    case 300u: goto L_001F6FB8;
    case 301u: goto L_001F6FE0;
    case 302u: goto L_001F6FF0;
    case 303u: goto L_001F6FF8;
    case 304u: goto L_001F7004;
    case 305u: goto L_001F7068;
    case 306u: goto L_001F7094;
    case 307u: goto L_001F70BC;
    case 308u: goto L_001F7104;
    case 309u: goto L_001F7114;
    case 310u: goto L_001F7128;
    case 311u: goto L_001F7140;
    case 312u: goto L_001F7170;
    case 313u: goto L_001F7198;
    case 314u: goto L_001F71A8;
    case 315u: goto L_001F71B8;
    case 316u: goto L_001F71D0;
    case 317u: goto L_001F71FC;
    case 318u: goto L_001F7220;
    case 319u: goto L_001F7230;
    case 320u: goto L_001F725C;
    case 321u: goto L_001F7280;
    case 322u: goto L_001F7290;
    case 323u: goto L_001F72BC;
    case 324u: goto L_001F72E0;
    case 325u: goto L_001F72F0;
    case 326u: goto L_001F730C;
    case 327u: goto L_001F7330;
    case 328u: goto L_001F7354;
    case 329u: goto L_001F7370;
    case 330u: goto L_001F738C;
    case 331u: goto L_001F73BC;
    case 332u: goto L_001F73E0;
    case 333u: goto L_001F73F0;
    case 334u: goto L_001F740C;
    case 335u: goto L_001F7424;
    case 336u: goto L_001F743C;
    case 337u: goto L_001F7460;
    case 338u: goto L_001F7470;
    case 339u: goto L_001F748C;
    case 340u: goto L_001F74A0;
    case 341u: goto L_001F74B8;
    case 342u: goto L_001F74DC;
    case 343u: goto L_001F74F0;
    case 344u: goto L_001F750C;
    case 345u: goto L_001F7520;
    case 346u: goto L_001F7538;
    case 347u: goto L_001F755C;
    case 348u: goto L_001F7570;
    case 349u: goto L_001F75A0;
    case 350u: goto L_001F75C4;
    case 351u: goto L_001F75D0;
    case 352u: goto L_001F75F8;
    case 353u: goto L_001F7610;
    case 354u: goto L_001F7634;
    case 355u: goto L_001F7650;
    case 356u: goto L_001F7674;
    case 357u: goto L_001F768C;
    case 358u: goto L_001F76B0;
    case 359u: goto L_001F76C0;
    case 360u: goto L_001F76E4;
    case 361u: goto L_001F76FC;
    case 362u: goto L_001F7720;
    case 363u: goto L_001F7730;
    case 364u: goto L_001F7754;
    case 365u: goto L_001F776C;
    case 366u: goto L_001F7790;
    case 367u: goto L_001F77A0;
    case 368u: goto L_001F77C4;
    case 369u: goto L_001F77DC;
    case 370u: goto L_001F7800;
    case 371u: goto L_001F7810;
    case 372u: goto L_001F7834;
    case 373u: goto L_001F784C;
    case 374u: goto L_001F7870;
    case 375u: goto L_001F7880;
    case 376u: goto L_001F78C8;
    case 377u: goto L_001F78E0;
    case 378u: goto L_001F7904;
    case 379u: goto L_001F7920;
    case 380u: goto L_001F7968;
    case 381u: goto L_001F7980;
    case 382u: goto L_001F79A4;
    case 383u: goto L_001F79C0;
    case 384u: goto L_001F7A08;
    case 385u: goto L_001F7A20;
    case 386u: goto L_001F7A44;
    case 387u: goto L_001F7A60;
    case 388u: goto L_001F7AA8;
    case 389u: goto L_001F7AC0;
    case 390u: goto L_001F7AE4;
    case 391u: goto L_001F7B00;
    case 392u: goto L_001F7B48;
    case 393u: goto L_001F7B60;
    case 394u: goto L_001F7B84;
    case 395u: goto L_001F7BA0;
    case 396u: goto L_001F7BE8;
    case 397u: goto L_001F7C00;
    case 398u: goto L_001F7C24;
    case 399u: goto L_001F7C40;
    case 400u: goto L_001F7C88;
    case 401u: goto L_001F7CA0;
    case 402u: goto L_001F7CC4;
    case 403u: goto L_001F7CE0;
    case 404u: goto L_001F7D28;
    case 405u: goto L_001F7D40;
    case 406u: goto L_001F7D50;
    case 407u: goto L_001F7D98;
    case 408u: goto L_001F7DB0;
    case 409u: goto L_001F7DC0;
    case 410u: goto L_001F7E08;
    case 411u: goto L_001F7E20;
    case 412u: goto L_001F7E30;
    case 413u: goto L_001F7E78;
    case 414u: goto L_001F7E90;
    case 415u: goto L_001F7EA0;
    case 416u: goto L_001F7EE8;
    case 417u: goto L_001F7F00;
    case 418u: goto L_001F7F10;
    case 419u: goto L_001F7F58;
    case 420u: goto L_001F7F70;
    case 421u: goto L_001F7F80;
    case 422u: goto L_001F7FC8;
    case 423u: goto L_001F7FE0;
    case 424u: goto L_001F7FF0;
    default: bad_entry(c, 0x001F4000u); return;
    }
L_001F4000:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x001F4034u) [[unlikely]] return; }
L_001F4034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F403Cu); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x001F403Cu) [[unlikely]] return; }
L_001F403C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4044u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 103u, depth + 1u); else { c.pc = 0x00164C50u; return; } if (c.pc != 0x001F4044u) [[unlikely]] return; }
L_001F4044:
    st32((c.r[16].w[0] + 572u), 0u);
    st32((c.r[16].w[0] + 576u), 0u);
    st32((c.r[16].w[0] + 580u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4060:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00164D10u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 113u, depth); }
L_001F4070:
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 320u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 328u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 336u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 344u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 352u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 360u), c.r[11].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F40B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F40BC; } }
L_001F40B0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_001F40BC:
    c.r[6].d[0] = c.r[5].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 368u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F40D8u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_000A(c, 326u, depth + 1u); else { c.pc = 0x0014BE60u; return; } if (c.pc != 0x001F40D8u) [[unlikely]] return; }
L_001F40D8:
    st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], ld32((c.r[16].w[0] + 572u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 576u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[2], ld32((c.r[16].w[0] + 564u)));
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4110u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001F4110u) [[unlikely]] return; }
L_001F4110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4118u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F4118u) [[unlikely]] return; }
L_001F4118:
    set32(c.r[3], ld32((c.r[16].w[0] + 572u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 572u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F413C; }
    st32((c.r[16].w[0] + 580u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001F413C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_001F4150:
    st32((c.r[4].w[0] + 572u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 576u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 576u), c.r[3].w[0]);  c.pc = t; return; }
L_001F4170:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);  goto L_001F41C8; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);  goto L_001F41C0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);  goto L_001F41B8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFC00000u);  goto L_001F41B0; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], 0u - 1u);  goto L_001F41CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F41CC; } }
L_001F41B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 49344ull;  if (t) { goto L_001F41CC; } }
L_001F41B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 33023ull;  if (t) { goto L_001F41CC; } }
L_001F41C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 33023ull;  if (t) { goto L_001F41CC; } }
L_001F41C8:
    c.r[4].d[0] = c.r[2].d[0] | 207ull;
    c.budget -= 1;
L_001F41CC:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00164C50u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 103u, depth); }
L_001F41E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x001F41F4u) [[unlikely]] return; }
L_001F41F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41FCu);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x001F41FCu) [[unlikely]] return; }
L_001F41FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4204u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x001F4204u) [[unlikely]] return; }
L_001F4204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F420Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x001F420Cu) [[unlikely]] return; }
L_001F420C:
    c.f[0] = ld32((c.r[16].w[0] + 568u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4220u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x001F4220u) [[unlikely]] return; }
L_001F4220:
    set32(c.r[7], ld32((c.r[16].w[0] + 564u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 576u)));
    set32(c.r[8], c.r[2].w[0] << 24);
    set32(c.r[6], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[2], c.r[7].w[0] - 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[8].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[6].w[0] - 4u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 60u), c.r[8].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42E0u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001F42E0u) [[unlikely]] return; }
L_001F42E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001F42E8u) [[unlikely]] return; }
L_001F42E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42F0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001F42F0u) [[unlikely]] return; }
L_001F42F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 2688u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2692u));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 2700u));
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4328u); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x001F4328u) [[unlikely]] return; }
L_001F4328:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001F4334u) [[unlikely]] return; }
L_001F4334:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4344u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001F4344u) [[unlikely]] return; }
L_001F4344:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4354u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x001F4354u) [[unlikely]] return; }
L_001F4354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F435Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x001F435Cu) [[unlikely]] return; }
L_001F435C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4364u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x001F4364u) [[unlikely]] return; }
L_001F4364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F436Cu);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x001F436Cu) [[unlikely]] return; }
L_001F436C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F4380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4398u); set32(c.r[4], 0u + 584u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001F4398u) [[unlikely]] return; }
L_001F4398:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F43B0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F43ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 151u, depth + 1u); else { c.pc = 0x001F1560u; return; } if (c.pc != 0x001F43ACu) [[unlikely]] return; }
L_001F43AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F43B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F43C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30504u)));  c.pc = t; return; }
L_001F43D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F445C; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001F4458; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001F4430; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F442C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F442Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F442Cu) [[unlikely]] return; }
L_001F442C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001F4430:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  goto L_001F4448; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001F4448:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
L_001F4458:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F445C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4470:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F449Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 420u, depth + 1u); else { c.pc = 0x001FF5A0u; return; } if (c.pc != 0x001F449Cu) [[unlikely]] return; }
L_001F449C:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 421u, depth + 1u); else { c.pc = 0x001FF5B0u; return; } if (c.pc != 0x001F44A8u) [[unlikely]] return; }
L_001F44A8:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 422u, depth + 1u); else { c.pc = 0x001FF5C0u; return; } if (c.pc != 0x001F44B4u) [[unlikely]] return; }
L_001F44B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F44D8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F44D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F44D8u) [[unlikely]] return; }
L_001F44D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), 0u);  goto L_001F4528; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F44F4u) [[unlikely]] return; }
L_001F44F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F4504; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001F450C; }
L_001F4504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F451C; } }
L_001F450C:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4518u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F4518u) [[unlikely]] return; }
L_001F4518:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F451C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001F4528; } }
L_001F4524:
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 1;
L_001F4528:
    set32(c.r[3], 0u + 2u);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F4560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F4624; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F45D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F459C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F4660; } }
L_001F459C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F45AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_001F45C0; } }
L_001F45AC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F45C0; }
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F45C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45D0u); set32(c.r[5], c.r[5].w[0] + 26192u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001F45D0u) [[unlikely]] return; }
L_001F45D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_001F46D4; } }
L_001F45D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F45EC; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F4600; } }
L_001F45EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F45FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[5].w[0]));  if (t) { goto L_001F4600; } }
L_001F45FC:
    c.f[12] = 0u;
    c.budget -= 1;
L_001F4600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4608u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001F4608u) [[unlikely]] return; }
L_001F4608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F461Cu); set32(c.r[5], c.r[5].w[0] + 26195u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001F461Cu) [[unlikely]] return; }
L_001F461C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F46D0; } }
L_001F4624:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  goto L_001F4638; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 18344u);  if (t) { goto L_001F4648; } }
L_001F4638:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001F4648; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_001F4648; } }
L_001F4648:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4658u); set32(c.r[5], c.r[5].w[0] + 26198u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001F4658u) [[unlikely]] return; }
L_001F4658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F46D0; } }
L_001F4660:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F4680; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F4680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4680u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4680u) [[unlikely]] return; }
L_001F4680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26203u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 44u), 0u);  goto L_001F46D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F469Cu); set32(c.r[4], c.r[4].w[0] + 26203u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F469Cu) [[unlikely]] return; }
L_001F469C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 26203u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F46CC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[29].w[0] + 44u);  goto L_001F46C0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F46CC; } }
L_001F46C0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F46CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F46CCu) [[unlikely]] return; }
L_001F46CC:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_001F46D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_001F46D4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_001F46EC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001F46EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F4714; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F4710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4710u) [[unlikely]] return; }
L_001F4710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F4714:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4730:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F475Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001F475Cu) [[unlikely]] return; }
L_001F475C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F4790; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F4790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4790u) [[unlikely]] return; }
L_001F4790:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), 0u);  goto L_001F47E0; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F47DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F47ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F47ACu) [[unlikely]] return; }
L_001F47AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F47BC; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001F47C4; }
L_001F47BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F47D4; } }
L_001F47C4:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F47D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F47D0u) [[unlikely]] return; }
L_001F47D0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F47D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F47E0; } }
L_001F47DC:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_001F47E0:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F48DC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F4870; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F480C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001F4A14; } }
L_001F480C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F481C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0])));  if (t) { goto L_001F4830; } }
L_001F481C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_001F4830; }
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_001F4830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4838u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001F4838u) [[unlikely]] return; }
L_001F4838:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F4868; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F4868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4868u) [[unlikely]] return; }
L_001F4868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_001F4A10; } }
L_001F4870:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F4884; } }
    c.f[0] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F4898; } }
L_001F4884:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F4894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[19].w[0]));  if (t) { goto L_001F4898; } }
L_001F4894:
    c.f[20] = 0u;
    c.budget -= 1;
L_001F4898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F48A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001F48A0u) [[unlikely]] return; }
L_001F48A0:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F48D4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F48D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F48D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F48D4u) [[unlikely]] return; }
L_001F48D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_001F4A10; } }
L_001F48DC:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_001F48F0; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 18344u);  if (t) { goto L_001F4900; } }
L_001F48F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_001F4900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 12u);  if (t) { goto L_001F4900; } }
L_001F4900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4908u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001F4908u) [[unlikely]] return; }
L_001F4908:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F4938; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F4938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4938u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4938u) [[unlikely]] return; }
L_001F4938:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001F4990; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F498C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4954u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F4954u) [[unlikely]] return; }
L_001F4954:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F4980; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001F4970; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4980; } }
L_001F4970:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4980u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F4980u) [[unlikely]] return; }
L_001F4980:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_001F4994; } }
L_001F498C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001F4990:
    set32(c.r[17], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_001F4994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F499Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001F499Cu) [[unlikely]] return; }
L_001F499C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F49CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F49CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F49CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F49CCu) [[unlikely]] return; }
L_001F49CC:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F49DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001F49DCu) [[unlikely]] return; }
L_001F49DC:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F4A0C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F4A0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4A0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4A0Cu) [[unlikely]] return; }
L_001F4A0C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001F4A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001F4A14:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F4A30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 48u), c.r[5].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4A58u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001F4A58u) [[unlikely]] return; }
L_001F4A58:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4A64u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001F4A64u) [[unlikely]] return; }
L_001F4A64:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 92u)));  goto L_001F4B00; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 92u));  goto L_001F4AC8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 92u)));  goto L_001F4A90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001F4C34; } }
L_001F4A90:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001F4C30; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F4ABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4ABCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4ABCu) [[unlikely]] return; }
L_001F4ABC:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4C30; } }
L_001F4AC8:
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001F4C30; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F4AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4AF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4AF4u) [[unlikely]] return; }
L_001F4AF4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4C30; } }
L_001F4B00:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4B14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001F4B14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F4B50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F4B24u) [[unlikely]] return; }
L_001F4B24:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F4B50; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001F4B40; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4B50; } }
L_001F4B40:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F4B50u) [[unlikely]] return; }
L_001F4B50:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_001F4B7C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F4B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4B78u) [[unlikely]] return; }
L_001F4B78:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_001F4B7C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_001F4B94; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
L_001F4B94:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_001F4BD4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F4BD0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4BD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4BD0u) [[unlikely]] return; }
L_001F4BD0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001F4BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4BDCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001F4BDCu) [[unlikely]] return; }
L_001F4BDC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4BF8u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001F4BF8u) [[unlikely]] return; }
L_001F4BF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C0Cu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001F4C0Cu) [[unlikely]] return; }
L_001F4C0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C28u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001F4C28u) [[unlikely]] return; }
L_001F4C28:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_001F4C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001F4C34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F4C50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C88u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 111u, depth + 1u); else { c.pc = 0x001F50E0u; return; } if (c.pc != 0x001F4C88u) [[unlikely]] return; }
L_001F4C88:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001F4CFC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001F4CD4; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001F4CB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_001F4E0C; } }
L_001F4CB0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CBCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 348u, depth + 1u); else { c.pc = 0x00203720u; return; } if (c.pc != 0x001F4CBCu) [[unlikely]] return; }
L_001F4CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 306u, depth + 1u); else { c.pc = 0x00203130u; return; } if (c.pc != 0x001F4CC4u) [[unlikely]] return; }
L_001F4CC4:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_001F4E14; } }
L_001F4CD4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CE0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 348u, depth + 1u); else { c.pc = 0x00203720u; return; } if (c.pc != 0x001F4CE0u) [[unlikely]] return; }
L_001F4CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 308u, depth + 1u); else { c.pc = 0x002031A0u; return; } if (c.pc != 0x001F4CE8u) [[unlikely]] return; }
L_001F4CE8:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001F4E14; } }
L_001F4CFC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D08u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 123u, depth + 1u); else { c.pc = 0x001F52E0u; return; } if (c.pc != 0x001F4D08u) [[unlikely]] return; }
L_001F4D08:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_001F4D30; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F4D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4D30u) [[unlikely]] return; }
L_001F4D30:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  goto L_001F4D4C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 4;
L_001F4D4C:
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 88u), 0u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[29].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_001F4DDC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001F4DDC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 84u)));  goto L_001F4DB4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F4DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4DB0u) [[unlikely]] return; }
L_001F4DB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 1;
L_001F4DB4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  goto L_001F4DCC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001F4DCC:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
L_001F4DDC:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F4E14; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F4E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F4E00u) [[unlikely]] return; }
L_001F4E00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4E14; } }
L_001F4E0C:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 2;
L_001F4E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F4E30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 16;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F4F88; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001F4F08; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001F4E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001F50BC; } }
L_001F4E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E94u);  if (depth < kMaxDepth) unit_0035(c, 111u, depth + 1u); else { c.pc = 0x001F50E0u; return; } if (c.pc != 0x001F4E94u) [[unlikely]] return; }
L_001F4E94:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  goto L_001F4EB4; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EB0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 117u, depth + 1u); else { c.pc = 0x001F51C0u; return; } if (c.pc != 0x001F4EB0u) [[unlikely]] return; }
L_001F4EB0:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001F4EB4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F4EC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_001F4ED8; } }
L_001F4EC4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001F4ED8; }
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001F4ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EE0u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0038(c, 291u, depth + 1u); else { c.pc = 0x00202EE0u; return; } if (c.pc != 0x001F4EE0u) [[unlikely]] return; }
L_001F4EE0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EECu); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0038(c, 300u, depth + 1u); else { c.pc = 0x00203090u; return; } if (c.pc != 0x001F4EECu) [[unlikely]] return; }
L_001F4EEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F00u); set32(c.r[7], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0038(c, 353u, depth + 1u); else { c.pc = 0x002037B0u; return; } if (c.pc != 0x001F4F00u) [[unlikely]] return; }
L_001F4F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F50B8; } }
L_001F4F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F10u);  if (depth < kMaxDepth) unit_0035(c, 111u, depth + 1u); else { c.pc = 0x001F50E0u; return; } if (c.pc != 0x001F4F10u) [[unlikely]] return; }
L_001F4F10:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  goto L_001F4F30; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F2Cu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 117u, depth + 1u); else { c.pc = 0x001F51C0u; return; } if (c.pc != 0x001F4F2Cu) [[unlikely]] return; }
L_001F4F2C:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001F4F30:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F4F44; }
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F4F58; } }
L_001F4F44:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4F54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[18].w[0]));  if (t) { goto L_001F4F58; } }
L_001F4F54:
    c.f[20] = 0u;
    c.budget -= 1;
L_001F4F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F60u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0038(c, 291u, depth + 1u); else { c.pc = 0x00202EE0u; return; } if (c.pc != 0x001F4F60u) [[unlikely]] return; }
L_001F4F60:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F6Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0038(c, 302u, depth + 1u); else { c.pc = 0x002030C0u; return; } if (c.pc != 0x001F4F6Cu) [[unlikely]] return; }
L_001F4F6C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F80u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0038(c, 353u, depth + 1u); else { c.pc = 0x002037B0u; return; } if (c.pc != 0x001F4F80u) [[unlikely]] return; }
L_001F4F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F50B8; } }
L_001F4F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F90u);  if (depth < kMaxDepth) unit_0035(c, 123u, depth + 1u); else { c.pc = 0x001F52E0u; return; } if (c.pc != 0x001F4F90u) [[unlikely]] return; }
L_001F4F90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  goto L_001F4FCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FA4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001F4FA4u) [[unlikely]] return; }
L_001F4FA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[2].w[0]), c.r[19].w[0]);  goto L_001F4FB4; }
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 2;
L_001F4FB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 6;
L_001F4FCC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_001F4FE4; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 18344u);  if (t) { goto L_001F4FF4; } }
L_001F4FE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));  goto L_001F4FF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 12u);  if (t) { goto L_001F4FF4; } }
L_001F4FF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F5018; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F5018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F5018u) [[unlikely]] return; }
L_001F5018:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_001F5070; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F506C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F5034u) [[unlikely]] return; }
L_001F5034:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F5060; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001F5050; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5060; } }
L_001F5050:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5060u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F5060u) [[unlikely]] return; }
L_001F5060:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_001F5074; } }
L_001F506C:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_001F5070:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_001F5074:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));  goto L_001F5090; }
    set32(c.r[16], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001F5090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5098u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0038(c, 291u, depth + 1u); else { c.pc = 0x00202EE0u; return; } if (c.pc != 0x001F5098u) [[unlikely]] return; }
L_001F5098:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50A4u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0038(c, 304u, depth + 1u); else { c.pc = 0x00203100u; return; } if (c.pc != 0x001F50A4u) [[unlikely]] return; }
L_001F50A4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50B8u); set32(c.r[7], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0038(c, 353u, depth + 1u); else { c.pc = 0x002037B0u; return; } if (c.pc != 0x001F50B8u) [[unlikely]] return; }
L_001F50B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001F50BC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F50E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50F0u);  if (depth < kMaxDepth) unit_0038(c, 357u, depth + 1u); else { c.pc = 0x00203870u; return; } if (c.pc != 0x001F50F0u) [[unlikely]] return; }
L_001F50F0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 23023u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001F511C; }
    c.r[2].d[0] = 0ull | 61416ull;
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001F511C; }
    c.r[2].d[0] = 0ull | 59085ull;
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F511C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001F511C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F5130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F5198; } }
L_001F5150:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001F5194; } }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F518C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F5188; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F5188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5188u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F5188u) [[unlikely]] return; }
L_001F5188:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F518C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5194u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F5194u) [[unlikely]] return; }
L_001F5194:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F5198:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5150u | kUnwind; return; } goto L_001F5150; } }
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F51C0:
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
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F52B4; } }
L_001F51F4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[19].d[0]) { c.r[17].d[0] = c.r[16].d[0] + 0ull;  goto L_001F52B0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_001F52AC; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_001F5260; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001F5258; } }
    set32(c.r[2], c.r[16].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001F5250; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F524C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F524C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F524Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F524Cu) [[unlikely]] return; }
L_001F524C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F5250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5258u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F5258u) [[unlikely]] return; }
L_001F5258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_001F52B4; } }
L_001F5260:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001F52A4; } }
    set32(c.r[2], c.r[16].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001F529C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F5298; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F5298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F5298u) [[unlikely]] return; }
L_001F5298:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F529C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52A4u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F52A4u) [[unlikely]] return; }
L_001F52A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001F52B4; } }
L_001F52AC:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F52B0:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_001F52B4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F51F4u | kUnwind; return; } goto L_001F51F4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F52E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_001F5308; } }
L_001F52E8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  goto L_001F5308; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001F5304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5314; } }
L_001F5304:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_001F5308:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F52E8u | kUnwind; return; } goto L_001F52E8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5314:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F5320:
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
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] + 32u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001F5378; } }
L_001F5360:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5370u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 369u, depth + 1u); else { c.pc = 0x00203A10u; return; } if (c.pc != 0x001F5370u) [[unlikely]] return; }
L_001F5370:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001F5378:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5360u | kUnwind; return; } goto L_001F5360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_001F53AC; } }
L_001F538C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 16u);  if (t) { goto L_001F539C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_001F53A0; } }
L_001F539C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F53A0:
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001F53AC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F538Cu | kUnwind; return; } goto L_001F538C; }
    set32(c.r[3], c.r[16].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F53E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x474C0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 18003ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], 0u + 16u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[20].w[0] + 16u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[23], c.r[17].w[0] + 16u);
    st32((c.r[7].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[23].w[0] - c.r[17].w[0]);
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[22].w[0] << 4);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[19], c.r[23].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[8].w[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 20u), c.r[22].w[0]);  if (t) { goto L_001F54B0; } }
L_001F5460:
    set32(c.r[2], c.r[19].w[0] - c.r[17].w[0]);
    set32(c.r[21], c.r[23].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0])));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[30].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F548Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x00203990u; return; } if (c.pc != 0x001F548Cu) [[unlikely]] return; }
L_001F548C:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[21].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[30].w[0])));
    set32(c.r[7], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54A8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 375u, depth + 1u); else { c.pc = 0x00203A80u; return; } if (c.pc != 0x001F54A8u) [[unlikely]] return; }
L_001F54A8:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001F54B0:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5460u | kUnwind; return; } goto L_001F5460; }
    set32(c.r[2], c.r[19].w[0] - c.r[17].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_001F54E0; } }
L_001F54D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
L_001F54E0:
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F54D0u | kUnwind; return; } goto L_001F54D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001F556C; } }
L_001F5504:
    set32(c.r[2], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F5540; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_001F5540:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] + 1u);  if (t) { goto L_001F5550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 12u);  if (t) { goto L_001F5554; } }
L_001F5550:
    set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001F5554:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5560u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001F5560u) [[unlikely]] return; }
L_001F5560:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
L_001F556C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5504u | kUnwind; return; } goto L_001F5504; }
    set32(c.r[5], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[5].w[0] + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_001F55A4; } }
L_001F5598:
    set32(c.r[2], c.r[18].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_001F55A4:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5598u | kUnwind; return; } goto L_001F5598; } }
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_001F55E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55DCu); set32(c.r[4], c.r[4].w[0] + 26211u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F55DCu) [[unlikely]] return; }
L_001F55DC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_001F55E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001F5620:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[2].d[0] | 19527ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 24;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  goto L_001F5694; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F568Cu); set32(c.r[4], c.r[4].w[0] + 26225u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F568Cu) [[unlikely]] return; }
L_001F568C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F5838; } }
L_001F5694:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_001F56E0; } }
L_001F56B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56C4u); set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 382u, depth + 1u); else { c.pc = 0x00203B90u; return; } if (c.pc != 0x001F56C4u) [[unlikely]] return; }
L_001F56C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001F56E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56D8u); set32(c.r[4], c.r[4].w[0] + 26225u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F56D8u) [[unlikely]] return; }
L_001F56D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F5838; } }
L_001F56E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F56B0u | kUnwind; return; } goto L_001F56B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001F5824; } }
L_001F56F8:
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[21], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5724; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001F5724:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F5760; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5734u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F5734u) [[unlikely]] return; }
L_001F5734:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F5760; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[21].d[0] + 0ull;  goto L_001F5750; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5760; } }
L_001F5750:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5760u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F5760u) [[unlikely]] return; }
L_001F5760:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_001F5784; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F5784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F5784u) [[unlikely]] return; }
L_001F5784:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_001F57A0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
L_001F57A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_001F57D8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F57D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F57D8u) [[unlikely]] return; }
L_001F57D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57FCu); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001F57FCu) [[unlikely]] return; }
L_001F57FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001F5824; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F5820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5820u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F5820u) [[unlikely]] return; }
L_001F5820:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F5824:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F56F8u | kUnwind; return; } goto L_001F56F8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F5838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F5860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].d[0] | 19527ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 22;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  goto L_001F58CC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58C4u); set32(c.r[4], c.r[4].w[0] + 26225u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F58C4u) [[unlikely]] return; }
L_001F58C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F5924; } }
L_001F58CC:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_001F5910; } }
L_001F58E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58F4u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 395u, depth + 1u); else { c.pc = 0x00203D20u; return; } if (c.pc != 0x001F58F4u) [[unlikely]] return; }
L_001F58F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001F5910; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5908u); set32(c.r[4], c.r[4].w[0] + 26225u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F5908u) [[unlikely]] return; }
L_001F5908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F5924; } }
L_001F5910:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F58E0u | kUnwind; return; } goto L_001F58E0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F5924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F5940:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 688u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001F5998; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F5998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5998u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F5998u) [[unlikely]] return; }
L_001F5998:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 688u), 0u);  goto L_001F59E8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F59E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F59B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F59B4u) [[unlikely]] return; }
L_001F59B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F59C4; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001F59CC; }
L_001F59C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F59DC; } }
L_001F59CC:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F59D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F59D8u) [[unlikely]] return; }
L_001F59D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F59DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 688u), c.r[3].w[0]);  if (t) { goto L_001F59E8; } }
L_001F59E4:
    st32((c.r[16].w[0] + 688u), 0u);
    c.budget -= 1;
L_001F59E8:
    c.f[2] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = ld32((c.r[21].w[0] + 12u));
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0]));
    st16((c.r[16].w[0] + 692u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 668u), 0u);
    st32((c.r[16].w[0] + 684u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 672u)));
    c.budget -= 15;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 672u), 0u);  goto L_001F5A40; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F5A3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F5A3Cu) [[unlikely]] return; }
L_001F5A3C:
    st32((c.r[16].w[0] + 672u), 0u);
    c.budget -= 1;
L_001F5A40:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 660u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 664u), 0u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001F5BDC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 700u));  goto L_001F5AF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A6Cu); set32(c.r[4], ld32((c.r[16].w[0] + 660u)));  if (depth < kMaxDepth) unit_0037(c, 263u, depth + 1u); else { c.pc = 0x001FE0C0u; return; } if (c.pc != 0x001F5A6Cu) [[unlikely]] return; }
L_001F5A6C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x77820000u);
    c.r[3].d[0] = c.r[3].d[0] | 12017ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5AEC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001F5AA4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A98u); set32(c.r[4], c.r[4].w[0] + 26288u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F5A98u) [[unlikely]] return; }
L_001F5A98:
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_001F5AA8; } }
L_001F5AA4:
    st32((c.r[20].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_001F5AA8:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 36u);  if (t) { goto L_001F5AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0])));  if (t) { goto L_001F5AE8; } }
L_001F5AD0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001F5AE8; }
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001F5AE8:
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 1;
L_001F5AEC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 700u));
    c.budget -= 1;
L_001F5AF0:
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_001F5B6C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001F5B20; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B14u); set32(c.r[4], c.r[4].w[0] + 26288u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F5B14u) [[unlikely]] return; }
L_001F5B14:
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_001F5B24; } }
L_001F5B20:
    st32((c.r[20].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_001F5B24:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 36u);  if (t) { goto L_001F5B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0])));  if (t) { goto L_001F5B64; } }
L_001F5B4C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001F5B64; }
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001F5B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001F5B70; } }
L_001F5B6C:
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_001F5B70:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] - 1u);  if (t) { goto L_001F5BD4; } }
L_001F5B7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_001F5B9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B90u); set32(c.r[4], c.r[4].w[0] + 26288u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F5B90u) [[unlikely]] return; }
L_001F5B90:
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_001F5BA0; } }
L_001F5B9C:
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_001F5BA0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5BD0u); set32(c.r[5], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F5BD0u) [[unlikely]] return; }
L_001F5BD0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_001F5BD4:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5B7Cu | kUnwind; return; } goto L_001F5B7C; }
L_001F5BDC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001F5BF4; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 4;
L_001F5BF4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F5C20:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[5].w[0] + 660u)));  [[clang::musttail]] return unit_0037(c, 201u, depth); }
L_001F5C30:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 660u)));  [[clang::musttail]] return unit_0037(c, 215u, depth); }
L_001F5C40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 688u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F5C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001F5C74; } }
L_001F5C70:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5C74:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001F6038; }
    st32((c.r[29].w[0] + 76u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 660u)));
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C9Cu); set32(c.r[5], c.r[5].w[0] + 26320u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001F5C9Cu) [[unlikely]] return; }
L_001F5C9C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CACu); set32(c.r[6], 0u + 35u);  if (depth < kMaxDepth) unit_0021(c, 333u, depth + 1u); else { c.pc = 0x001A7B00u; return; } if (c.pc != 0x001F5CACu) [[unlikely]] return; }
L_001F5CAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 688u);  if (t) { goto L_001F5D44; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_001F5D48; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001F5CDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_001F5CDC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001F5CDC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F5CF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001F5CF0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5CF0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  goto L_001F5D60; }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_001F5D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5D38; } }
L_001F5D08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_001F5D30; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F5D24u) [[unlikely]] return; }
L_001F5D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5D38; } }
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_001F5D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001F5D38u) [[unlikely]] return; }
L_001F5D38:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5D60; } }
L_001F5D44:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_001F5D48:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  goto L_001F5D60; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
L_001F5D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26324u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_001F5F64; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D7Cu); set32(c.r[4], c.r[4].w[0] + 26324u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F5D7Cu) [[unlikely]] return; }
L_001F5D7C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 26324u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001F5DD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F5D9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_001F5DD4; } }
L_001F5D9C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_001F5DC4; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DB8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F5DB8u) [[unlikely]] return; }
L_001F5DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F5DD0; } }
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_001F5DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DCCu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001F5DCCu) [[unlikely]] return; }
L_001F5DCC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F5DD0:
    st32((c.r[29].w[0] + 76u), c.r[5].w[0]);
    c.budget -= 1;
L_001F5DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5F60; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_001F5DE0:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DF8u); set32(c.r[5], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001F4560u; return; } if (c.pc != 0x001F5DF8u) [[unlikely]] return; }
L_001F5DF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 72u)));  goto L_001F5E94; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001F5E90; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001F5E28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_001F5E28; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001F5E28:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F5E3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001F5E3C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5E3C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  goto L_001F5EB0; }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_001F5E54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5E84; } }
L_001F5E54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_001F5E7C; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F5E70u) [[unlikely]] return; }
L_001F5E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5E84; } }
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_001F5E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E84u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001F5E84u) [[unlikely]] return; }
L_001F5E84:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5EB0; } }
L_001F5E90:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_001F5E94:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  goto L_001F5EAC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 4;
L_001F5EAC:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_001F5EB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_001F5EDC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F5ED8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F5ED8u) [[unlikely]] return; }
L_001F5ED8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001F5EDC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001F5F60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26326u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5F5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F04u); set32(c.r[4], c.r[4].w[0] + 26326u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F5F04u) [[unlikely]] return; }
L_001F5F04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 26326u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001F5F58; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F5F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_001F5F5C; } }
L_001F5F24:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_001F5F4C; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F5F40u) [[unlikely]] return; }
L_001F5F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F5F58; } }
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_001F5F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F54u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001F5F54u) [[unlikely]] return; }
L_001F5F54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F5F58:
    st32((c.r[29].w[0] + 76u), c.r[5].w[0]);
    c.budget -= 1;
L_001F5F5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F5F60:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001F5F64:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5DE0u | kUnwind; return; } goto L_001F5DE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26328u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_001F5FE8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F8Cu); set32(c.r[4], c.r[4].w[0] + 26328u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F5F8Cu) [[unlikely]] return; }
L_001F5F8C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 26328u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001F5FE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F5FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_001F5FE4; } }
L_001F5FAC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_001F5FD4; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5FC8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F5FC8u) [[unlikely]] return; }
L_001F5FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F5FE0; } }
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_001F5FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5FDCu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001F5FDCu) [[unlikely]] return; }
L_001F5FDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F5FE0:
    st32((c.r[29].w[0] + 76u), c.r[5].w[0]);
    c.budget -= 1;
L_001F5FE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_001F5FE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));  goto L_001F5FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 12u);  if (t) { goto L_001F5FFC; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001F5FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6004u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001F6004u) [[unlikely]] return; }
L_001F6004:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6010u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 33u, depth + 1u); else { c.pc = 0x001FC440u; return; } if (c.pc != 0x001F6010u) [[unlikely]] return; }
L_001F6010:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F6034; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F6034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6034u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6034u) [[unlikely]] return; }
L_001F6034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F6038:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F6050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 688u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001F606C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_001F606C:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F6118; }
    set32(c.r[5], c.r[4].w[0] + 668u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6084u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001F4560u; return; } if (c.pc != 0x001F6084u) [[unlikely]] return; }
L_001F6084:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001F6094; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001F6094:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60A4u); set32(c.r[5], c.r[5].w[0] + 26330u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001F60A4u) [[unlikely]] return; }
L_001F60A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_001F60D0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F60CC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F60CCu) [[unlikely]] return; }
L_001F60CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_001F60D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));  goto L_001F60DC; }
    set32(c.r[16], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001F60DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60E4u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001F60E4u) [[unlikely]] return; }
L_001F60E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 33u, depth + 1u); else { c.pc = 0x001FC440u; return; } if (c.pc != 0x001F60F0u) [[unlikely]] return; }
L_001F60F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F6114; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F6114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6114u) [[unlikely]] return; }
L_001F6114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F6118:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6130:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F615Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001F615Cu) [[unlikely]] return; }
L_001F615C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F6190; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F6190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6190u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6190u) [[unlikely]] return; }
L_001F6190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26337u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001F61E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61ACu); set32(c.r[4], c.r[4].w[0] + 26337u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F61ACu) [[unlikely]] return; }
L_001F61AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 26337u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F61DC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[16].w[0] + 8u);  goto L_001F61D0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F61DC; } }
L_001F61D0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F61DCu) [[unlikely]] return; }
L_001F61DC:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001F61E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 664u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26345u);
    set32(c.r[6], c.r[30].w[0] + 176u);
    st32((c.r[30].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 176u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6204u); st32((c.r[30].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001F6204u) [[unlikely]] return; }
L_001F6204:
    set32(c.r[3], ld32((c.r[30].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 688u)));  goto L_001F6230; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F622C; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F622Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F622Cu) [[unlikely]] return; }
L_001F622C:
    set32(c.r[2], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 1;
L_001F6230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 31912u)));  goto L_001F623C; }
    set32(c.r[18], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001F623C:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[30].w[0] + 160u);  if (t) { goto L_001F6250; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001F6250:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F628C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6260u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F6260u) [[unlikely]] return; }
L_001F6260:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F628C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001F627C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F628C; } }
L_001F627C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F628Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F628Cu) [[unlikely]] return; }
L_001F628C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26350u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F62B0u); set32(c.r[6], c.r[30].w[0] + 160u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001F62B0u) [[unlikely]] return; }
L_001F62B0:
    set32(c.r[3], ld32((c.r[30].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 692u));  goto L_001F62DC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F62D8; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F62D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F62D8u) [[unlikely]] return; }
L_001F62D8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 692u));
    c.budget -= 1;
L_001F62DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26355u);
    set32(c.r[6], c.r[30].w[0] + 144u);
    st32((c.r[30].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 144u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F62FCu); st32((c.r[30].w[0] + 152u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001F62FCu) [[unlikely]] return; }
L_001F62FC:
    set32(c.r[3], ld32((c.r[30].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001F6328; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F6324; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6324u) [[unlikely]] return; }
L_001F6324:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001F6328:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26360u);
    set32(c.r[6], c.r[30].w[0] + 128u);
    st32((c.r[30].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 128u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6348u); st32((c.r[30].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001F6348u) [[unlikely]] return; }
L_001F6348:
    set32(c.r[3], ld32((c.r[30].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001F6374; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F6370; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6370u) [[unlikely]] return; }
L_001F6370:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F6374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F637Cu);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001F637Cu) [[unlikely]] return; }
L_001F637C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F63B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F63B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F63B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F63B0u) [[unlikely]] return; }
L_001F63B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26365u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), 0u);  goto L_001F6400; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F63CCu); set32(c.r[4], c.r[4].w[0] + 26365u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F63CCu) [[unlikely]] return; }
L_001F63CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 26365u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F63FC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[18].w[0] + 8u);  goto L_001F63F0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F63FC; } }
L_001F63F0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F63FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F63FCu) [[unlikely]] return; }
L_001F63FC:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001F6400:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[30].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 26256u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] + 96u), 0u);
    st32((c.r[30].w[0] + 104u), 0u);
    st32((c.r[30].w[0] + 100u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6428u); st32((c.r[30].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0038(c, 331u, depth + 1u); else { c.pc = 0x002034E0u; return; } if (c.pc != 0x001F6428u) [[unlikely]] return; }
L_001F6428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6430u); set32(c.r[4], c.r[30].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001F6430u) [[unlikely]] return; }
L_001F6430:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_001F6438:
    set32(c.r[4], c.r[30].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6458u); set32(c.r[7], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001F6458u) [[unlikely]] return; }
L_001F6458:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6438u | kUnwind; return; } goto L_001F6438; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[30].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 26264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F647Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 125u, depth + 1u); else { c.pc = 0x001F5320u; return; } if (c.pc != 0x001F647Cu) [[unlikely]] return; }
L_001F647C:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[30].w[0] + 96u);
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26264u);
    set32(c.r[17], c.r[29].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F64B4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 129u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001F64B4u) [[unlikely]] return; }
L_001F64B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F64BCu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001F64BCu) [[unlikely]] return; }
L_001F64BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F64C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 98u, depth + 1u); else { c.pc = 0x001FCBC0u; return; } if (c.pc != 0x001F64C8u) [[unlikely]] return; }
L_001F64C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[30].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26370u);
    set32(c.r[6], c.r[30].w[0] + 112u);
    st32((c.r[30].w[0] + 112u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F64E8u); st32((c.r[30].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001F64E8u) [[unlikely]] return; }
L_001F64E8:
    set32(c.r[3], ld32((c.r[30].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[30].w[0] + 96u);  goto L_001F6514; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F6510; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6510u) [[unlikely]] return; }
L_001F6510:
    set32(c.r[4], c.r[30].w[0] + 96u);
    c.budget -= 1;
L_001F6514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F651Cu);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001F651Cu) [[unlikely]] return; }
L_001F651C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6524u); set32(c.r[4], c.r[30].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001F6524u) [[unlikely]] return; }
L_001F6524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F652Cu); set32(c.r[4], c.r[30].w[0] + 96u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001F652Cu) [[unlikely]] return; }
L_001F652C:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001F6550:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 26345u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F657Cu); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001F657Cu) [[unlikely]] return; }
L_001F657C:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[6], c.r[6].w[0] + 26350u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6598u); st32((c.r[17].w[0] + 664u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001F6598u) [[unlikely]] return; }
L_001F6598:
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 148u)));  if (t) { goto L_001F65BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F65BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F65BCu) [[unlikely]] return; }
L_001F65BC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 688u), 0u);  goto L_001F6614; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F65D8u) [[unlikely]] return; }
L_001F65D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F6604; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001F65F4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6604; } }
L_001F65F4:
    set32(c.r[4], c.r[17].w[0] + 688u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6604u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F6604u) [[unlikely]] return; }
L_001F6604:
    st32((c.r[17].w[0] + 688u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6614; } }
L_001F6610:
    st32((c.r[17].w[0] + 688u), 0u);
    c.budget -= 1;
L_001F6614:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6628u); set32(c.r[6], c.r[6].w[0] + 26355u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001F6628u) [[unlikely]] return; }
L_001F6628:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[6], c.r[6].w[0] + 26360u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6644u); st16((c.r[17].w[0] + 692u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001F6644u) [[unlikely]] return; }
L_001F6644:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 26272u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6674u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0038(c, 331u, depth + 1u); else { c.pc = 0x002034E0u; return; } if (c.pc != 0x001F6674u) [[unlikely]] return; }
L_001F6674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F667Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001F667Cu) [[unlikely]] return; }
L_001F667C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6690u); set32(c.r[6], c.r[6].w[0] + 26370u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001F6690u) [[unlikely]] return; }
L_001F6690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6698u); set32(c.r[16], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001F6698u) [[unlikely]] return; }
L_001F6698:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 100u, depth + 1u); else { c.pc = 0x001FCC50u; return; } if (c.pc != 0x001F66A4u) [[unlikely]] return; }
L_001F66A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66B0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 138u, depth + 1u); else { c.pc = 0x001F5620u; return; } if (c.pc != 0x001F66B0u) [[unlikely]] return; }
L_001F66B0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_001F66B8:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66C8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 82u, depth + 1u); else { c.pc = 0x001F4C50u; return; } if (c.pc != 0x001F66C8u) [[unlikely]] return; }
L_001F66C8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66E4u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F66E4u) [[unlikely]] return; }
L_001F66E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001F670C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F6708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6708u) [[unlikely]] return; }
L_001F6708:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F670C:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F66B8u | kUnwind; return; } goto L_001F66B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6720u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001F6720u) [[unlikely]] return; }
L_001F6720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6728u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001F6728u) [[unlikely]] return; }
L_001F6728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6730u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001F6730u) [[unlikely]] return; }
L_001F6730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F6750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6784u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001F6784u) [[unlikely]] return; }
L_001F6784:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F67B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001F6868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F6828; } }
L_001F67DC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001F6828; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_001F681C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6818u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6818u) [[unlikely]] return; }
L_001F6818:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001F681C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 80u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_001F6828:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F67DCu | kUnwind; return; } goto L_001F67DC; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001F6854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F684Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001F684Cu) [[unlikely]] return; }
L_001F684C:
    st32((c.r[19].w[0]), 0u);
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 2;
L_001F6854:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_001F686C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6868u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F6868u) [[unlikely]] return; }
L_001F6868:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F686C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F6890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F6924; } }
    set32(c.r[4], c.r[8].w[0] << 3);
    c.budget -= 1;
L_001F68B4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[4].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001F6924; }
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001F6934; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_001F6910; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F690Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F690Cu) [[unlikely]] return; }
L_001F690C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001F6910:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 80u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6930; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001F6924:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[8].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F68B4u | kUnwind; return; } goto L_001F68B4; }
L_001F6930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001F6934:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6950:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001F69E8; } }
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69B0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001F69B0u) [[unlikely]] return; }
L_001F69B0:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F69E4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69DCu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001F69DCu) [[unlikely]] return; }
L_001F69DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69E4u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001F69E4u) [[unlikely]] return; }
L_001F69E4:
    st32((c.r[20].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_001F69E8:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A18u); set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6A18u) [[unlikely]] return; }
L_001F6A18:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_001F6A30:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[3].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6A30u | kUnwind; return; } goto L_001F6A30; } }
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], 0u + 32767u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[2].w[0]));  goto L_001F6A90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_001F6A8C; } }
L_001F6A64:
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 10;
L_001F6A8C:
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 1;
L_001F6A90:
    set32(c.r[4], 0u + 32767u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6A64u | kUnwind; return; } goto L_001F6A64; }
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));  goto L_001F6AB0; }
    c.r[17].d[0] = ld16((c.r[2].w[0] - 28u));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 2;
L_001F6AB0:
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[21].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[21].w[0] + 80u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F6AF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u + 17u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::div(c, 0, c.r[7].w[0], c.r[2].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] << 2);  if (t) { goto L_001F6C98; } }
L_001F6B40:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[9], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001F6C98; }
    c.r[7].d[0] = ld16((c.r[16].w[0]));
    c.r[9].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001F6B84; } }
    c.r[7].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[9].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].d[0] ^ 1ull;
    c.budget -= 3;
L_001F6B84:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001F6B98; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001F6C94; } }
L_001F6B98:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], c.r[16].w[0] + c.r[8].w[0]);  goto L_001F6BB0; }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001F6C94; } }
    set32(c.r[7], c.r[16].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_001F6BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[7].w[0] + 12u)));  if (t) { goto L_001F6C8C; } }
L_001F6BB8:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[19].w[0] + 24u)));  goto L_001F6C8C; }
    set32(c.r[5], ld32((c.r[21].w[0] + 1700u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F6BF0; } }
L_001F6BD4:
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1636u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001F6BF0; }
    set32(c.r[18], ld32((c.r[4].w[0] + 1640u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001F6BFC; } }
L_001F6BF0:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6BD4u | kUnwind; return; } goto L_001F6BD4; }
L_001F6BFC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001F6C60; }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6C18u) [[unlikely]] return; }
L_001F6C18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 1700u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F6C5C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[2].w[0] + 1636u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 1700u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0] + 1640u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 1700u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 1700u), c.r[2].w[0]);
    c.budget -= 12;
L_001F6C5C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F6C60:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 155u, depth + 1u); else { c.pc = 0x001F5940u; return; } if (c.pc != 0x001F6C74u) [[unlikely]] return; }
L_001F6C74:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6C84u) [[unlikely]] return; }
L_001F6C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F6CB4; } }
L_001F6C8C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[7].d[0] = ld16((c.r[19].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6BB8u | kUnwind; return; } goto L_001F6BB8; }
L_001F6C94:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001F6C98:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6B40u | kUnwind; return; } goto L_001F6B40; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CB0u); set32(c.r[4], c.r[4].w[0] + 26377u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F6CB0u) [[unlikely]] return; }
L_001F6CB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F6CB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F6CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[5].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D20u); set32(c.r[6], c.r[6].w[0] + 26355u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001F6D20u) [[unlikely]] return; }
L_001F6D20:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 60u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D34u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 267u, depth + 1u); else { c.pc = 0x001F6AF0u; return; } if (c.pc != 0x001F6D34u) [[unlikely]] return; }
L_001F6D34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001F6D50; }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 229u, depth + 1u); else { c.pc = 0x001F6550u; return; } if (c.pc != 0x001F6D4Cu) [[unlikely]] return; }
L_001F6D4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F6D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F6D70:
    set32(c.r[29], c.r[29].w[0] - 2128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 688u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F6D9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001F6DA0; } }
L_001F6D9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001F6DA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DACu); set32(c.r[5], c.r[5].w[0] + 26480u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001F6DACu) [[unlikely]] return; }
L_001F6DAC:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001F712C; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 8192ull;  goto L_001F6EAC; }
    st8((c.r[29].w[0] + 1599u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[29].w[0] + 2111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 1600u);
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[5], 0u + 511u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DF4u); set32(c.r[6], c.r[6].w[0] + 26481u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F6DF4u) [[unlikely]] return; }
L_001F6DF4:
    set32(c.r[4], c.r[29].w[0] + 1088u);
    set32(c.r[5], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E04u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001F6E04u) [[unlikely]] return; }
L_001F6E04:
    c.r[1].d[0] = c.r[16].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001F6E2C; }
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1600u);
    st8((c.r[2].w[0] + 1088u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E24u); set32(c.r[5], c.r[29].w[0] + 1088u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6E24u) [[unlikely]] return; }
L_001F6E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 688u)));  if (t) { goto L_001F6E3C; } }
L_001F6E2C:
    set32(c.r[4], c.r[29].w[0] + 1600u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E38u); set32(c.r[5], c.r[5].w[0] + 26485u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6E38u) [[unlikely]] return; }
L_001F6E38:
    set32(c.r[2], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 1;
L_001F6E3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_001F6E48; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001F6E48:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F6E5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_001F6E70; } }
L_001F6E5C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001F6E70; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_001F6E70:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 1088u);
    set32(c.r[5], 0u + 511u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E84u); set32(c.r[6], c.r[6].w[0] + 26487u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F6E84u) [[unlikely]] return; }
L_001F6E84:
    set32(c.r[4], c.r[29].w[0] + 1600u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E90u); set32(c.r[5], c.r[29].w[0] + 1088u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6E90u) [[unlikely]] return; }
L_001F6E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E98u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001F6E98u) [[unlikely]] return; }
L_001F6E98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6EA4u); set32(c.r[5], c.r[29].w[0] + 1600u);  if (depth < kMaxDepth) unit_0037(c, 33u, depth + 1u); else { c.pc = 0x001FC440u; return; } if (c.pc != 0x001F6EA4u) [[unlikely]] return; }
L_001F6EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7128; } }
L_001F6EAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 692u));  goto L_001F700C; }
    st8((c.r[29].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[29].w[0] + 1087u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[5], 0u + 511u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6EDCu); set32(c.r[6], c.r[6].w[0] + 26481u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F6EDCu) [[unlikely]] return; }
L_001F6EDC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6EECu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001F6EECu) [[unlikely]] return; }
L_001F6EEC:
    c.r[1].d[0] = c.r[16].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001F6F14; }
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 576u);
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F0Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6F0Cu) [[unlikely]] return; }
L_001F6F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6F20; } }
L_001F6F14:
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F20u); set32(c.r[5], c.r[5].w[0] + 26485u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6F20u) [[unlikely]] return; }
L_001F6F20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F30u); set32(c.r[5], c.r[5].w[0] + 26494u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6F30u) [[unlikely]] return; }
L_001F6F30:
    set32(c.r[4], c.r[29].w[0] + 2124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F3Cu); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001F4560u; return; } if (c.pc != 0x001F6F3Cu) [[unlikely]] return; }
L_001F6F3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 2124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001F6F4C; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001F6F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F54u); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6F54u) [[unlikely]] return; }
L_001F6F54:
    set32(c.r[3], ld32((c.r[29].w[0] + 2124u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 688u)));  goto L_001F6F80; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F6F7C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 2124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6F7Cu) [[unlikely]] return; }
L_001F6F7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 1;
L_001F6F80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001F6F8C; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001F6F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F94u); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6F94u) [[unlikely]] return; }
L_001F6F94:
    set32(c.r[5], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6FA0u); set32(c.r[4], c.r[29].w[0] + 2120u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001F4560u; return; } if (c.pc != 0x001F6FA0u) [[unlikely]] return; }
L_001F6FA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 2120u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001F6FB0; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001F6FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6FB8u); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6FB8u) [[unlikely]] return; }
L_001F6FB8:
    set32(c.r[3], ld32((c.r[29].w[0] + 2120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6FE0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F6FE0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 2120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6FE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F6FE0u) [[unlikely]] return; }
L_001F6FE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6FF0u); set32(c.r[5], c.r[5].w[0] + 26496u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001F6FF0u) [[unlikely]] return; }
L_001F6FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6FF8u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001F6FF8u) [[unlikely]] return; }
L_001F6FF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7004u); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0037(c, 33u, depth + 1u); else { c.pc = 0x001FC440u; return; } if (c.pc != 0x001F7004u) [[unlikely]] return; }
L_001F7004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7128; } }
L_001F700C:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F711C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_001F7034; }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 18344u);  if (t) { goto L_001F7044; } }
L_001F7034:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 31912u)));  goto L_001F7044; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 12u);  if (t) { goto L_001F7044; } }
L_001F7044:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7058; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001F7058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F7094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7068u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F7068u) [[unlikely]] return; }
L_001F7068:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F7094; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001F7084; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7094; } }
L_001F7084:
    set32(c.r[4], c.r[29].w[0] + 2116u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7094u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F7094u) [[unlikely]] return; }
L_001F7094:
    st32((c.r[29].w[0] + 2116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 2116u)));  goto L_001F70C0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F70BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F70BCu) [[unlikely]] return; }
L_001F70BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 2116u)));
    c.budget -= 1;
L_001F70C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 2116u)));  goto L_001F70D8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 2116u)));
    c.budget -= 4;
L_001F70D8:
    st32((c.r[17].w[0] + 688u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 2116u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F7108; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F7104; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 2116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7104u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7104u) [[unlikely]] return; }
L_001F7104:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F7108:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7114u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 168u, depth + 1u); else { c.pc = 0x001F5C40u; return; } if (c.pc != 0x001F7114u) [[unlikely]] return; }
L_001F7114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7128; } }
L_001F711C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7128u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 168u, depth + 1u); else { c.pc = 0x001F5C40u; return; } if (c.pc != 0x001F7128u) [[unlikely]] return; }
L_001F7128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F712C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2128u);  c.pc = t; return; }
L_001F7140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 688u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001F7164; } }
L_001F7160:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001F7164:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7170u); set32(c.r[5], c.r[5].w[0] + 26480u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001F7170u) [[unlikely]] return; }
L_001F7170:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F71BC; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001F71B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7198u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001F7198u) [[unlikely]] return; }
L_001F7198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71A8u); set32(c.r[5], c.r[5].w[0] + 26498u);  if (depth < kMaxDepth) unit_0037(c, 33u, depth + 1u); else { c.pc = 0x001FC440u; return; } if (c.pc != 0x001F71A8u) [[unlikely]] return; }
L_001F71A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F71B8; } }
L_001F71B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71B8u);  if (depth < kMaxDepth) unit_0035(c, 190u, depth + 1u); else { c.pc = 0x001F6050u; return; } if (c.pc != 0x001F71B8u) [[unlikely]] return; }
L_001F71B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F71BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F71D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[4].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71FCu); set32(c.r[4], c.r[4].w[0] + 668u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F71FCu) [[unlikely]] return; }
L_001F71FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001F7224; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7220u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7220u) [[unlikely]] return; }
L_001F7220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F7224:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[4].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F725Cu); set32(c.r[4], c.r[4].w[0] + 668u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F725Cu) [[unlikely]] return; }
L_001F725C:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001F7284; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7280u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7280u) [[unlikely]] return; }
L_001F7280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F7284:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[4].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F72BCu); set32(c.r[4], c.r[4].w[0] + 668u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F72BCu) [[unlikely]] return; }
L_001F72BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001F72E4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F72E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F72E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F72E0u) [[unlikely]] return; }
L_001F72E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F72E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F72F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 660u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F730Cu); set32(c.r[4], c.r[2].w[0] + 1576u);  if (depth < kMaxDepth) unit_0037(c, 414u, depth + 1u); else { c.pc = 0x001FF490u; return; } if (c.pc != 0x001F730Cu) [[unlikely]] return; }
L_001F730C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7330u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7330u) [[unlikely]] return; }
L_001F7330:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7358; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7354u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7354u) [[unlikely]] return; }
L_001F7354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7358:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 660u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F738Cu); set32(c.r[4], c.r[2].w[0] + 1576u);  if (depth < kMaxDepth) unit_0037(c, 414u, depth + 1u); else { c.pc = 0x001FF490u; return; } if (c.pc != 0x001F738Cu) [[unlikely]] return; }
L_001F738C:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73BCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F73BCu) [[unlikely]] return; }
L_001F73BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F73E4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F73E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F73E0u) [[unlikely]] return; }
L_001F73E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F73E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F73F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 660u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F740Cu); set32(c.r[4], c.r[2].w[0] + 1576u);  if (depth < kMaxDepth) unit_0037(c, 414u, depth + 1u); else { c.pc = 0x001FF490u; return; } if (c.pc != 0x001F740Cu) [[unlikely]] return; }
L_001F740C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[16].w[0] + 660u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7424u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0035(c, 36u, depth + 1u); else { c.pc = 0x001F4470u; return; } if (c.pc != 0x001F7424u) [[unlikely]] return; }
L_001F7424:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F743Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F743Cu) [[unlikely]] return; }
L_001F743C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7464; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7460u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7460u) [[unlikely]] return; }
L_001F7460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7464:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 660u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F748Cu); set32(c.r[4], c.r[2].w[0] + 1576u);  if (depth < kMaxDepth) unit_0037(c, 414u, depth + 1u); else { c.pc = 0x001FF490u; return; } if (c.pc != 0x001F748Cu) [[unlikely]] return; }
L_001F748C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74A0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F74A0u) [[unlikely]] return; }
L_001F74A0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74B8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F74B8u) [[unlikely]] return; }
L_001F74B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F74E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F74DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F74DCu) [[unlikely]] return; }
L_001F74DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F74E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F74F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 660u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F750Cu); set32(c.r[4], c.r[2].w[0] + 1576u);  if (depth < kMaxDepth) unit_0037(c, 414u, depth + 1u); else { c.pc = 0x001FF490u; return; } if (c.pc != 0x001F750Cu) [[unlikely]] return; }
L_001F750C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7520u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7520u) [[unlikely]] return; }
L_001F7520:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7538u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7538u) [[unlikely]] return; }
L_001F7538:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7560; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F755C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F755Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F755Cu) [[unlikely]] return; }
L_001F755C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7560:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[4].w[0] + 664u)));
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[4].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75A0u); set32(c.r[4], c.r[4].w[0] + 668u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F75A0u) [[unlikely]] return; }
L_001F75A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001F75C8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F75C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F75C4u) [[unlikely]] return; }
L_001F75C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F75C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F75D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 660u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 664u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75F8u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0035(c, 36u, depth + 1u); else { c.pc = 0x001F4470u; return; } if (c.pc != 0x001F75F8u) [[unlikely]] return; }
L_001F75F8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7610u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7610u) [[unlikely]] return; }
L_001F7610:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7638; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7634u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7634u) [[unlikely]] return; }
L_001F7634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7638:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 664u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7674u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7674u) [[unlikely]] return; }
L_001F7674:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F768Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F768Cu) [[unlikely]] return; }
L_001F768C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F76B4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F76B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F76B0u) [[unlikely]] return; }
L_001F76B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F76B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F76C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 664u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F76E4u) [[unlikely]] return; }
L_001F76E4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76FCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F76FCu) [[unlikely]] return; }
L_001F76FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7724; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7720u) [[unlikely]] return; }
L_001F7720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7724:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 664u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7754u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7754u) [[unlikely]] return; }
L_001F7754:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F776Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F776Cu) [[unlikely]] return; }
L_001F776C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7794; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7790u) [[unlikely]] return; }
L_001F7790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7794:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F77A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 664u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F77C4u) [[unlikely]] return; }
L_001F77C4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77DCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F77DCu) [[unlikely]] return; }
L_001F77DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7804; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7800u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7800u) [[unlikely]] return; }
L_001F7800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7804:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 664u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7834u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7834u) [[unlikely]] return; }
L_001F7834:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F784Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F784Cu) [[unlikely]] return; }
L_001F784C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7874; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7870u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7870u) [[unlikely]] return; }
L_001F7870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7874:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F78A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001F78B8; } }
L_001F78A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F78B8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F78B8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F78C8u) [[unlikely]] return; }
L_001F78C8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78E0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F78E0u) [[unlikely]] return; }
L_001F78E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7908; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7904u) [[unlikely]] return; }
L_001F7904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7908:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001F7958; } }
L_001F7940:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F7958; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F7958:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7968u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7968u) [[unlikely]] return; }
L_001F7968:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7980u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7980u) [[unlikely]] return; }
L_001F7980:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F79A8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F79A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F79A4u) [[unlikely]] return; }
L_001F79A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F79A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F79C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F79E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001F79F8; } }
L_001F79E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F79F8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F79F8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A08u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7A08u) [[unlikely]] return; }
L_001F7A08:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A20u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7A20u) [[unlikely]] return; }
L_001F7A20:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7A48; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7A44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7A44u) [[unlikely]] return; }
L_001F7A44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7A48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001F7A98; } }
L_001F7A80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F7A98; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F7A98:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AA8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7AA8u) [[unlikely]] return; }
L_001F7AA8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AC0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7AC0u) [[unlikely]] return; }
L_001F7AC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7AE8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7AE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7AE4u) [[unlikely]] return; }
L_001F7AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7AE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7B00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001F7B38; } }
L_001F7B20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F7B38; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F7B38:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B48u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7B48u) [[unlikely]] return; }
L_001F7B48:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B60u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7B60u) [[unlikely]] return; }
L_001F7B60:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7B88; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7B84u) [[unlikely]] return; }
L_001F7B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7B88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001F7BD8; } }
L_001F7BC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F7BD8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F7BD8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BE8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7BE8u) [[unlikely]] return; }
L_001F7BE8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C00u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7C00u) [[unlikely]] return; }
L_001F7C00:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7C28; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7C24u) [[unlikely]] return; }
L_001F7C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7C28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001F7C78; } }
L_001F7C60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F7C78; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F7C78:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C88u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0035(c, 166u, depth + 1u); else { c.pc = 0x001F5C20u; return; } if (c.pc != 0x001F7C88u) [[unlikely]] return; }
L_001F7C88:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CA0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7CA0u) [[unlikely]] return; }
L_001F7CA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F7CC8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F7CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F7CC4u) [[unlikely]] return; }
L_001F7CC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7CC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001F7D18; } }
L_001F7D00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F7D18; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F7D18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D28u); set32(c.r[7], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 167u, depth + 1u); else { c.pc = 0x001F5C30u; return; } if (c.pc != 0x001F7D28u) [[unlikely]] return; }
L_001F7D28:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D40u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7D40u) [[unlikely]] return; }
L_001F7D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001F7D88; } }
L_001F7D70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F7D88; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F7D88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D98u); set32(c.r[7], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 167u, depth + 1u); else { c.pc = 0x001F5C30u; return; } if (c.pc != 0x001F7D98u) [[unlikely]] return; }
L_001F7D98:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DB0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7DB0u) [[unlikely]] return; }
L_001F7DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001F7DF8; } }
L_001F7DE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F7DF8; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F7DF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E08u); set32(c.r[7], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 167u, depth + 1u); else { c.pc = 0x001F5C30u; return; } if (c.pc != 0x001F7E08u) [[unlikely]] return; }
L_001F7E08:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E20u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7E20u) [[unlikely]] return; }
L_001F7E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001F7E68; } }
L_001F7E50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F7E68; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F7E68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E78u); set32(c.r[7], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 167u, depth + 1u); else { c.pc = 0x001F5C30u; return; } if (c.pc != 0x001F7E78u) [[unlikely]] return; }
L_001F7E78:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E90u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7E90u) [[unlikely]] return; }
L_001F7E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001F7ED8; } }
L_001F7EC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F7ED8; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F7ED8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7EE8u); set32(c.r[7], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 167u, depth + 1u); else { c.pc = 0x001F5C30u; return; } if (c.pc != 0x001F7EE8u) [[unlikely]] return; }
L_001F7EE8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F00u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7F00u) [[unlikely]] return; }
L_001F7F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001F7F48; } }
L_001F7F30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F7F48; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F7F48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F58u); set32(c.r[7], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 167u, depth + 1u); else { c.pc = 0x001F5C30u; return; } if (c.pc != 0x001F7F58u) [[unlikely]] return; }
L_001F7F58:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F70u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7F70u) [[unlikely]] return; }
L_001F7F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001F7FB8; } }
L_001F7FA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F7FB8; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F7FB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FC8u); set32(c.r[7], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0035(c, 167u, depth + 1u); else { c.pc = 0x001F5C30u; return; } if (c.pc != 0x001F7FC8u) [[unlikely]] return; }
L_001F7FC8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FE0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F7FE0u) [[unlikely]] return; }
L_001F7FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7FF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    [[clang::musttail]] return unit_0036(c, 1u, depth);
}

}
