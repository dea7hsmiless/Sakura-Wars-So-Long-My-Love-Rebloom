#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0078[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28,
    29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 33, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0,
    0, 40, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0,
    80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    212, 0, 0, 213, 0, 0, 0, 0, 214, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0,
    265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 288, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346,
    0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 386, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0078(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00300000;
    case 2u: goto L_00300010;
    case 3u: goto L_00300020;
    case 4u: goto L_00300024;
    case 5u: goto L_0030002C;
    case 6u: goto L_00300038;
    case 7u: goto L_00300040;
    case 8u: goto L_003000A0;
    case 9u: goto L_003000C0;
    case 10u: goto L_00300100;
    case 11u: goto L_00300120;
    case 12u: goto L_00300130;
    case 13u: goto L_0030013C;
    case 14u: goto L_0030014C;
    case 15u: goto L_00300164;
    case 16u: goto L_00300170;
    case 17u: goto L_00300178;
    case 18u: goto L_00300198;
    case 19u: goto L_003001BC;
    case 20u: goto L_00300204;
    case 21u: goto L_00300220;
    case 22u: goto L_00300234;
    case 23u: goto L_0030023C;
    case 24u: goto L_00300248;
    case 25u: goto L_00300254;
    case 26u: goto L_00300274;
    case 27u: goto L_003002E0;
    case 28u: goto L_003002FC;
    case 29u: goto L_00300300;
    case 30u: goto L_0030030C;
    case 31u: goto L_00300320;
    case 32u: goto L_0030032C;
    case 33u: goto L_00300330;
    case 34u: goto L_00300334;
    case 35u: goto L_00300354;
    case 36u: goto L_003003C0;
    case 37u: goto L_003003DC;
    case 38u: goto L_003003F0;
    case 39u: goto L_003003F8;
    case 40u: goto L_00300404;
    case 41u: goto L_00300408;
    case 42u: goto L_00300414;
    case 43u: goto L_00300434;
    case 44u: goto L_003004A0;
    case 45u: goto L_003004BC;
    case 46u: goto L_003004D4;
    case 47u: goto L_00300540;
    case 48u: goto L_00300544;
    case 49u: goto L_00300554;
    case 50u: goto L_00300584;
    case 51u: goto L_00300590;
    case 52u: goto L_003005CC;
    case 53u: goto L_00300650;
    case 54u: goto L_00300678;
    case 55u: goto L_003006C0;
    case 56u: goto L_003006E4;
    case 57u: goto L_0030075C;
    case 58u: goto L_00300784;
    case 59u: goto L_003007F8;
    case 60u: goto L_00300814;
    case 61u: goto L_00300838;
    case 62u: goto L_00300854;
    case 63u: goto L_0030085C;
    case 64u: goto L_0030086C;
    case 65u: goto L_00300874;
    case 66u: goto L_003008BC;
    case 67u: goto L_0030093C;
    case 68u: goto L_0030094C;
    case 69u: goto L_0030096C;
    case 70u: goto L_00300990;
    case 71u: goto L_00300A08;
    case 72u: goto L_00300A30;
    case 73u: goto L_00300AA4;
    case 74u: goto L_00300AC0;
    case 75u: goto L_00300AE4;
    case 76u: goto L_00300B08;
    case 77u: goto L_00300B30;
    case 78u: goto L_00300B5C;
    case 79u: goto L_00300B6C;
    case 80u: goto L_00300B80;
    case 81u: goto L_00300B8C;
    case 82u: goto L_00300B94;
    case 83u: goto L_00300BA0;
    case 84u: goto L_00300BAC;
    case 85u: goto L_00300BB8;
    case 86u: goto L_00300BC4;
    case 87u: goto L_00300BD8;
    case 88u: goto L_00300BEC;
    case 89u: goto L_00300C24;
    case 90u: goto L_00300C30;
    case 91u: goto L_00300C70;
    case 92u: goto L_00300CF4;
    case 93u: goto L_00300D18;
    case 94u: goto L_00300D38;
    case 95u: goto L_00300D5C;
    case 96u: goto L_00300DD0;
    case 97u: goto L_00300DF8;
    case 98u: goto L_00300E6C;
    case 99u: goto L_00300E90;
    case 100u: goto L_00300ECC;
    case 101u: goto L_00300F40;
    case 102u: goto L_00300F7C;
    case 103u: goto L_00300F8C;
    case 104u: goto L_00300FA0;
    case 105u: goto L_00300FC0;
    case 106u: goto L_00300FD8;
    case 107u: goto L_00301000;
    case 108u: goto L_00301020;
    case 109u: goto L_00301030;
    case 110u: goto L_00301064;
    case 111u: goto L_00301074;
    case 112u: goto L_00301084;
    case 113u: goto L_0030109C;
    case 114u: goto L_003010AC;
    case 115u: goto L_003010D0;
    case 116u: goto L_00301100;
    case 117u: goto L_00301128;
    case 118u: goto L_00301130;
    case 119u: goto L_00301140;
    case 120u: goto L_00301168;
    case 121u: goto L_00301178;
    case 122u: goto L_00301180;
    case 123u: goto L_00301190;
    case 124u: goto L_003011F0;
    case 125u: goto L_00301220;
    case 126u: goto L_00301230;
    case 127u: goto L_003012B0;
    case 128u: goto L_003012C0;
    case 129u: goto L_003012D4;
    case 130u: goto L_00301320;
    case 131u: goto L_00301334;
    case 132u: goto L_00301344;
    case 133u: goto L_00301358;
    case 134u: goto L_00301370;
    case 135u: goto L_00301384;
    case 136u: goto L_003013B0;
    case 137u: goto L_003013C0;
    case 138u: goto L_0030142C;
    case 139u: goto L_003014B4;
    case 140u: goto L_003014C8;
    case 141u: goto L_003014EC;
    case 142u: goto L_003014F8;
    case 143u: goto L_00301548;
    case 144u: goto L_003015B8;
    case 145u: goto L_003015E8;
    case 146u: goto L_0030161C;
    case 147u: goto L_0030164C;
    case 148u: goto L_00301678;
    case 149u: goto L_003016A4;
    case 150u: goto L_003016AC;
    case 151u: goto L_003016FC;
    case 152u: goto L_0030170C;
    case 153u: goto L_00301718;
    case 154u: goto L_00301770;
    case 155u: goto L_00301784;
    case 156u: goto L_00301800;
    case 157u: goto L_00301814;
    case 158u: goto L_00301828;
    case 159u: goto L_0030183C;
    case 160u: goto L_00301850;
    case 161u: goto L_00301860;
    case 162u: goto L_00301874;
    case 163u: goto L_003018A0;
    case 164u: goto L_003018B0;
    case 165u: goto L_003018FC;
    case 166u: goto L_00301910;
    case 167u: goto L_0030194C;
    case 168u: goto L_00301990;
    case 169u: goto L_003019AC;
    case 170u: goto L_003019E0;
    case 171u: goto L_00301A58;
    case 172u: goto L_00301A64;
    case 173u: goto L_00301A7C;
    case 174u: goto L_00301AA0;
    case 175u: goto L_00301B18;
    case 176u: goto L_00301B24;
    case 177u: goto L_00301B3C;
    case 178u: goto L_00301B60;
    case 179u: goto L_00301BD8;
    case 180u: goto L_00301BE4;
    case 181u: goto L_00301BFC;
    case 182u: goto L_00301C20;
    case 183u: goto L_00301C98;
    case 184u: goto L_00301CA4;
    case 185u: goto L_00301CBC;
    case 186u: goto L_00301CE0;
    case 187u: goto L_00301D3C;
    case 188u: goto L_00301D48;
    case 189u: goto L_00301D54;
    case 190u: goto L_00301D6C;
    case 191u: goto L_00301D90;
    case 192u: goto L_00301DA0;
    case 193u: goto L_00301DB0;
    case 194u: goto L_00301DC0;
    case 195u: goto L_00301DD0;
    case 196u: goto L_00301DE0;
    case 197u: goto L_00301DF0;
    case 198u: goto L_00301E00;
    case 199u: goto L_00301E10;
    case 200u: goto L_00301E40;
    case 201u: goto L_00301E60;
    case 202u: goto L_00301E80;
    case 203u: goto L_00301E94;
    case 204u: goto L_00301EC0;
    case 205u: goto L_00301EEC;
    case 206u: goto L_00301F4C;
    case 207u: goto L_00301F60;
    case 208u: goto L_00301FA4;
    case 209u: goto L_00301FC4;
    case 210u: goto L_00301FD8;
    case 211u: goto L_00301FF8;
    case 212u: goto L_00302000;
    case 213u: goto L_0030200C;
    case 214u: goto L_00302020;
    case 215u: goto L_00302024;
    case 216u: goto L_00302030;
    case 217u: goto L_00302044;
    case 218u: goto L_00302058;
    case 219u: goto L_00302078;
    case 220u: goto L_0030208C;
    case 221u: goto L_003020AC;
    case 222u: goto L_003020E0;
    case 223u: goto L_003020F0;
    case 224u: goto L_00302104;
    case 225u: goto L_00302130;
    case 226u: goto L_00302144;
    case 227u: goto L_00302190;
    case 228u: goto L_003021A4;
    case 229u: goto L_003021D0;
    case 230u: goto L_003021E4;
    case 231u: goto L_003021EC;
    case 232u: goto L_00302220;
    case 233u: goto L_00302234;
    case 234u: goto L_00302270;
    case 235u: goto L_00302294;
    case 236u: goto L_0030229C;
    case 237u: goto L_003022B0;
    case 238u: goto L_0030233C;
    case 239u: goto L_00302398;
    case 240u: goto L_003023D0;
    case 241u: goto L_003023F4;
    case 242u: goto L_00302424;
    case 243u: goto L_00302484;
    case 244u: goto L_003024F8;
    case 245u: goto L_00302528;
    case 246u: goto L_00302550;
    case 247u: goto L_0030256C;
    case 248u: goto L_0030258C;
    case 249u: goto L_003025C4;
    case 250u: goto L_003025F4;
    case 251u: goto L_00302600;
    case 252u: goto L_0030261C;
    case 253u: goto L_00302670;
    case 254u: goto L_00302680;
    case 255u: goto L_003026B4;
    case 256u: goto L_003026C0;
    case 257u: goto L_003026D4;
    case 258u: goto L_003026FC;
    case 259u: goto L_00302720;
    case 260u: goto L_00302744;
    case 261u: goto L_00302750;
    case 262u: goto L_0030275C;
    case 263u: goto L_00302768;
    case 264u: goto L_00302774;
    case 265u: goto L_00302780;
    case 266u: goto L_00302788;
    case 267u: goto L_003027A8;
    case 268u: goto L_003027C4;
    case 269u: goto L_003027E0;
    case 270u: goto L_00302804;
    case 271u: goto L_0030280C;
    case 272u: goto L_00302820;
    case 273u: goto L_00302840;
    case 274u: goto L_0030287C;
    case 275u: goto L_003028DC;
    case 276u: goto L_003028E8;
    case 277u: goto L_00302900;
    case 278u: goto L_0030293C;
    case 279u: goto L_0030296C;
    case 280u: goto L_00302998;
    case 281u: goto L_003029F8;
    case 282u: goto L_00302A14;
    case 283u: goto L_00302A34;
    case 284u: goto L_00302AA0;
    case 285u: goto L_00302AC0;
    case 286u: goto L_00302ADC;
    case 287u: goto L_00302AF8;
    case 288u: goto L_00302B04;
    case 289u: goto L_00302B0C;
    case 290u: goto L_00302B18;
    case 291u: goto L_00302B50;
    case 292u: goto L_00302B64;
    case 293u: goto L_00302B6C;
    case 294u: goto L_00302B8C;
    case 295u: goto L_00302B98;
    case 296u: goto L_00302BB8;
    case 297u: goto L_00302C24;
    case 298u: goto L_00302C40;
    case 299u: goto L_00302C60;
    case 300u: goto L_00302CCC;
    case 301u: goto L_00302CEC;
    case 302u: goto L_00302D14;
    case 303u: goto L_00302D28;
    case 304u: goto L_00302D34;
    case 305u: goto L_00302D3C;
    case 306u: goto L_00302D48;
    case 307u: goto L_00302D80;
    case 308u: goto L_00302D94;
    case 309u: goto L_00302D9C;
    case 310u: goto L_00302DC8;
    case 311u: goto L_00302DD4;
    case 312u: goto L_00302DE0;
    case 313u: goto L_00302DEC;
    case 314u: goto L_00302E0C;
    case 315u: goto L_00302E78;
    case 316u: goto L_00302E94;
    case 317u: goto L_00302EA8;
    case 318u: goto L_00302EB4;
    case 319u: goto L_00302EF0;
    case 320u: goto L_00302F24;
    case 321u: goto L_00302FB4;
    case 322u: goto L_00303000;
    case 323u: goto L_00303030;
    case 324u: goto L_0030304C;
    case 325u: goto L_003030E0;
    case 326u: goto L_00303100;
    case 327u: goto L_00303180;
    case 328u: goto L_003031A4;
    case 329u: goto L_003031C4;
    case 330u: goto L_003031DC;
    case 331u: goto L_00303218;
    case 332u: goto L_00303298;
    case 333u: goto L_00303338;
    case 334u: goto L_00303364;
    case 335u: goto L_003033EC;
    case 336u: goto L_00303404;
    case 337u: goto L_00303434;
    case 338u: goto L_00303468;
    case 339u: goto L_003034E8;
    case 340u: goto L_00303514;
    case 341u: goto L_00303524;
    case 342u: goto L_00303538;
    case 343u: goto L_00303544;
    case 344u: goto L_0030354C;
    case 345u: goto L_00303570;
    case 346u: goto L_0030357C;
    case 347u: goto L_00303588;
    case 348u: goto L_00303594;
    case 349u: goto L_003035A8;
    case 350u: goto L_003035BC;
    case 351u: goto L_0030360C;
    case 352u: goto L_0030364C;
    case 353u: goto L_003036E0;
    case 354u: goto L_0030377C;
    case 355u: goto L_003037A8;
    case 356u: goto L_00303828;
    case 357u: goto L_0030384C;
    case 358u: goto L_00303868;
    case 359u: goto L_003038BC;
    case 360u: goto L_0030394C;
    case 361u: goto L_0030395C;
    case 362u: goto L_00303970;
    case 363u: goto L_00303990;
    case 364u: goto L_003039A8;
    case 365u: goto L_00303A50;
    case 366u: goto L_00303A60;
    case 367u: goto L_00303A70;
    case 368u: goto L_00303A88;
    case 369u: goto L_00303AC0;
    case 370u: goto L_00303AF0;
    case 371u: goto L_00303B18;
    case 372u: goto L_00303B20;
    case 373u: goto L_00303B30;
    case 374u: goto L_00303B58;
    case 375u: goto L_00303B68;
    case 376u: goto L_00303B70;
    case 377u: goto L_00303B80;
    case 378u: goto L_00303BE0;
    case 379u: goto L_00303C18;
    case 380u: goto L_00303C28;
    case 381u: goto L_00303CD0;
    case 382u: goto L_00303CE8;
    case 383u: goto L_00303CFC;
    case 384u: goto L_00303D34;
    case 385u: goto L_00303D70;
    case 386u: goto L_00303D74;
    case 387u: goto L_00303D78;
    case 388u: goto L_00303DB4;
    case 389u: goto L_00303DBC;
    case 390u: goto L_00303DF8;
    case 391u: goto L_00303E00;
    case 392u: goto L_00303E3C;
    case 393u: goto L_00303E48;
    case 394u: goto L_00303E70;
    case 395u: goto L_00303E80;
    case 396u: goto L_00303E94;
    case 397u: goto L_00303EB4;
    case 398u: goto L_00303F20;
    case 399u: goto L_00303F38;
    case 400u: goto L_00303F5C;
    case 401u: goto L_00303F68;
    case 402u: goto L_00303F80;
    case 403u: goto L_00303FA8;
    case 404u: goto L_00303FD0;
    case 405u: goto L_00303FE0;
    default: bad_entry(c, 0x00300000u); return;
    }
L_00300000:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.budget -= 4;
L_00300010:
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.budget -= 4;
L_00300020:
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00300024:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 2;
L_0030002C:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
L_00300038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300040u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 84u, depth + 1u); else { c.pc = 0x0028CF30u; return; } if (c.pc != 0x00300040u) [[unlikely]] return; }
L_00300040:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { set32(c.r[22], 0u + 69u);  goto L_00300054; }
    set32(c.r[22], 0u + 67u);
    c.budget -= 1;
L_00300054:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[30], 0u + 70u);  goto L_00300060; }
    set32(c.r[30], 0u + 68u);
    c.budget -= 1;
L_00300060:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[17].w[0] - 44u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 3024u)));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[5].w[0] + 2916u);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);  if (t) { goto L_0030109C; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 29024u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0078[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003000A0:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003000B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00300110; } }
L_003000B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000C0u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003000C0u) [[unlikely]] return; }
L_003000C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003000E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003000F0; } }
L_003000E0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003000F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00300110; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00300108; }
    goto L_00300104;
L_00300100:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00300104:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00300108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300110; } }
L_00300110:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300120u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00300120u) [[unlikely]] return; }
L_00300120:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00300140; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 2;
L_00300130:
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030013Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030013Cu) [[unlikely]] return; }
L_0030013C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00300140:
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030014Cu); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0030014Cu) [[unlikely]] return; }
L_0030014C:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00300168; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300164u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 124u, depth + 1u); else { c.pc = 0x003011F0u; return; } if (c.pc != 0x00300164u) [[unlikely]] return; }
L_00300164:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00300168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300170u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x00300170u) [[unlikely]] return; }
L_00300170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_003010A0; } }
L_00300178:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00300190; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003001F4; } }
L_00300190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300198u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300198u) [[unlikely]] return; }
L_00300198:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003001B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003001C8; } }
L_003001B8:
    set32(c.r[4], c.r[2].w[0] << 1);
    c.budget -= 1;
L_003001BC:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003001C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003001F4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003001E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003001EC; } }
L_003001E8:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003001EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003001F4; } }
L_003001F4:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10010u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300204u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00300204u) [[unlikely]] return; }
L_00300204:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00300224; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300220u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00300220u) [[unlikely]] return; }
L_00300220:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00300224:
    set32(c.r[5], 0u + 10010u);
    set32(c.r[6], 0u + 410u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300234u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00300234u) [[unlikely]] return; }
L_00300234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030109C; } }
L_0030023C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300248u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00300248u) [[unlikely]] return; }
L_00300248:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300254u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00300254u) [[unlikely]] return; }
L_00300254:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030026C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003002D0; } }
L_0030026C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300274u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300274u) [[unlikely]] return; }
L_00300274:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003002A4; } }
L_00300294:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003002A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003002D0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003002C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003002C8; } }
L_003002C4:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_003002C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003002D0; } }
L_003002D0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10020u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003002E0u) [[unlikely]] return; }
L_003002E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00300300; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002FCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003002FCu) [[unlikely]] return; }
L_003002FC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00300300:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030030Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x0030030Cu) [[unlikely]] return; }
L_0030030C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300320u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00300320u) [[unlikely]] return; }
L_00300320:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030032Cu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x0030032Cu) [[unlikely]] return; }
L_0030032C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030109C; } }
    goto L_00300334;
L_00300330:
    c.budget -= 1;
L_00300334:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030034C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003003B0; } }
L_0030034C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300354u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300354u) [[unlikely]] return; }
L_00300354:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300374; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300384; } }
L_00300374:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00300384:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003003B0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003003A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003003A8; } }
L_003003A4:
    set32(c.r[5], c.r[2].w[0] + 36u);
    c.budget -= 1;
L_003003A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003003B0; } }
L_003003B0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10030u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003003C0u) [[unlikely]] return; }
L_003003C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_003003E0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003DCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003003DCu) [[unlikely]] return; }
L_003003DC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_003003E0:
    set32(c.r[5], 0u + 10030u);
    set32(c.r[6], 0u + 430u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003F0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x003003F0u) [[unlikely]] return; }
L_003003F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030109C; } }
L_003003F8:
    st32((c.r[20].w[0] + 216u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300408u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00300408u) [[unlikely]] return; }
    goto L_00300408;
L_00300404:
    set32(c.r[5], 0u + 10020u);
    c.budget -= 1;
L_00300408:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300414u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00300414u) [[unlikely]] return; }
L_00300414:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0030042C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00300490; } }
L_0030042C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300434u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300434u) [[unlikely]] return; }
L_00300434:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300464; } }
L_00300454:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00300464:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00300490; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00300484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00300488; } }
L_00300484:
    set32(c.r[5], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_00300488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300490; } }
L_00300490:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003004A0u) [[unlikely]] return; }
L_003004A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_003004C0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004BCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003004BCu) [[unlikely]] return; }
L_003004BC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_003004C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003004D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004D4u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003004D4u) [[unlikely]] return; }
L_003004D4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 76u)));  goto L_00300560; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 1004u);
    set32(c.r[3], ld32((c.r[3].w[0] + 3028u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_0030052C; }
    set32(c.r[2], 0u + 1003u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_00300520; }
    set32(c.r[2], 0u + 1002u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_00300514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00300538; } }
L_00300514:
    set32(c.r[3], 0u - 7281u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 244u), c.r[3].w[0]);  if (t) { goto L_0030055C; } }
L_00300520:
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 244u), c.r[3].w[0]);  if (t) { goto L_0030055C; } }
L_0030052C:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 244u), c.r[3].w[0]);  if (t) { goto L_0030055C; } }
L_00300538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300540u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0078(c, 115u, depth + 1u); else { c.pc = 0x003010D0u; return; } if (c.pc != 0x00300540u) [[unlikely]] return; }
L_00300540:
    c.f[1] = ld32((c.r[29].w[0] + 368u));
    c.budget -= 1;
L_00300544:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.f[12] = c.f[1] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300554u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00300554u) [[unlikely]] return; }
L_00300554:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_0030055C:
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00300560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300584u); st32((c.r[5].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00300584u) [[unlikely]] return; }
L_00300584:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 3;
L_00300590:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], ld32((c.r[2].w[0])));  if (t) { goto L_003005C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300628; } }
L_003005C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003005CCu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003005CCu) [[unlikely]] return; }
L_003005CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003005EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003005FC; } }
L_003005EC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003005FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00300628; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0030061C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300620; } }
L_0030061C:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_00300620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300628; } }
L_00300628:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[30].d[0]; st32((c.r[29].w[0] + 388u), c.r[2].w[0]);  if (t) { goto L_00300640; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[20];  if (t) { goto L_00300670; } }
L_00300640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300650u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00300650u) [[unlikely]] return; }
L_00300650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 8;
L_00300670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300678u); st32((c.r[29].w[0] + 392u), c.f[12]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00300678u) [[unlikely]] return; }
L_00300678:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 196u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    set32(c.r[2], c.r[18].w[0] << 1);
    st32((c.r[29].w[0] + 400u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[29].w[0] + 404u), c.r[3].w[0]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 396u), 0u);
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    st32((c.r[29].w[0] + 408u), 0u);
    c.r[23].d[0] = c.hi.d[0];
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 18;
L_003006C0:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003006DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030074C; } }
L_003006DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006E4u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003006E4u) [[unlikely]] return; }
L_003006E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300714; } }
L_00300704:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00300714:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));  goto L_00300724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030074C; } }
L_00300724:
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0030073C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030074C; } }
L_0030073C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0030074C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[29].w[0] + 384u), c.r[2].w[0]);  if (t) { goto L_0030080C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030075Cu); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030075Cu) [[unlikely]] return; }
L_0030075C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003007FC; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030077C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003007E0; } }
L_0030077C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300784u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300784u) [[unlikely]] return; }
L_00300784:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003007A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003007B4; } }
L_003007A4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003007B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_003007E0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003007D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003007D8; } }
L_003007D4:
    set32(c.r[8], c.r[2].w[0] + 96u);
    c.budget -= 1;
L_003007D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003007E0; } }
L_003007E0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[19].w[0] + 20000u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007F8u); c.r[9].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x003007F8u) [[unlikely]] return; }
L_003007F8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003007FC:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 136u), c.r[21].w[0]);  if (t) { goto L_00300844; } }
L_0030080C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300814u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00300814u) [[unlikely]] return; }
L_00300814:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] << 2);  goto L_0030083C; }
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[7], c.r[19].w[0] + 20000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300838u); c.r[9].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x00300838u) [[unlikely]] return; }
L_00300838:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.budget -= 1;
L_0030083C:
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 2;
L_00300844:
    set32(c.r[2], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[16], c.r[2].w[0] + 136u);
    c.budget -= 4;
L_00300854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030085Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x0030085Cu) [[unlikely]] return; }
L_0030085C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = 0ull | 50000ull;
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    c.f[12] = ld32((c.r[22].w[0] + 720u));
    c.budget -= 4;
L_0030086C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300874u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x00300874u) [[unlikely]] return; }
L_00300874:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003006C0u | kUnwind; return; } goto L_003006C0; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300590u | kUnwind; return; } goto L_00300590; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003008B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300918; } }
L_003008B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008BCu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003008BCu) [[unlikely]] return; }
L_003008BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003008DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003008EC; } }
L_003008DC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003008EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00300918; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0030090C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300910; } }
L_0030090C:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_00300910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300918; } }
L_00300918:
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[30].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_00300930; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[20];  if (t) { goto L_00300944; } }
L_00300930:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030093Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0030093Cu) [[unlikely]] return; }
L_0030093C:
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 2;
L_00300944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030094Cu); st32((c.r[29].w[0] + 392u), c.f[20]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0030094Cu) [[unlikely]] return; }
L_0030094C:
    st32((c.r[20].w[0] + 212u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 396u), 0u);
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[29].w[0] + 408u), 0u);
    st32((c.r[29].w[0] + 404u), c.r[2].w[0]);
    c.budget -= 8;
L_0030096C:
    set32(c.r[19], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 12u);  if (t) { goto L_00300984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003009F8; } }
L_00300984:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300990u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300990u) [[unlikely]] return; }
L_00300990:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003009B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003009C0; } }
L_003009B0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003009C0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));  goto L_003009D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003009F8; } }
L_003009D0:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_003009E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003009F8; } }
L_003009E8:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003009F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[29].w[0] + 384u), c.r[2].w[0]);  if (t) { goto L_00300AB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A08u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00300A08u) [[unlikely]] return; }
L_00300A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00300AA8; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00300A28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00300A8C; } }
L_00300A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A30u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300A30u) [[unlikely]] return; }
L_00300A30:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300A50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300A60; } }
L_00300A50:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00300A60:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_00300A8C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00300A80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00300A84; } }
L_00300A80:
    set32(c.r[8], c.r[2].w[0] + 96u);
    c.budget -= 1;
L_00300A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300A8C; } }
L_00300A8C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 20000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AA4u); set32(c.r[9], 0u + 4u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x00300AA4u) [[unlikely]] return; }
L_00300AA4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00300AA8:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 136u), c.r[21].w[0]);  if (t) { goto L_00300AF0; } }
L_00300AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AC0u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00300AC0u) [[unlikely]] return; }
L_00300AC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] << 2);  goto L_00300AE8; }
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[7], c.r[16].w[0] + 20000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AE4u); set32(c.r[9], 0u + 4u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x00300AE4u) [[unlikely]] return; }
L_00300AE4:
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00300AE8:
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 2;
L_00300AF0:
    set32(c.r[2], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[16], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B08u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x00300B08u) [[unlikely]] return; }
L_00300B08:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull | 50000ull;
    set32(c.r[2], 0u + 19u);
    c.f[12] = 0u;
    st32((c.r[3].w[0] + 280u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 288u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 296u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B30u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x00300B30u) [[unlikely]] return; }
L_00300B30:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030096Cu | kUnwind; return; } goto L_0030096C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B5Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00300B5Cu) [[unlikely]] return; }
L_00300B5C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B6Cu); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00300B6Cu) [[unlikely]] return; }
L_00300B6C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B80u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00300B80u) [[unlikely]] return; }
L_00300B80:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B8Cu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x00300B8Cu) [[unlikely]] return; }
L_00300B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030109C; } }
L_00300B94:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BA0u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00300BA0u) [[unlikely]] return; }
L_00300BA0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BACu); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00300BACu) [[unlikely]] return; }
L_00300BAC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BB8u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00300BB8u) [[unlikely]] return; }
L_00300BB8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BC4u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00300BC4u) [[unlikely]] return; }
L_00300BC4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00300BF8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BD8u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0078(c, 115u, depth + 1u); else { c.pc = 0x003010D0u; return; } if (c.pc != 0x00300BD8u) [[unlikely]] return; }
L_00300BD8:
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    c.f[12] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BECu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00300BECu) [[unlikely]] return; }
L_00300BEC:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_00300BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[23], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C24u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00300C24u) [[unlikely]] return; }
L_00300C24:
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00300F54; } }
L_00300C30:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_00300C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300CCC; } }
L_00300C64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C70u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300C70u) [[unlikely]] return; }
L_00300C70:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300C90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300CA0; } }
L_00300C90:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00300CA0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00300CCC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00300CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300CC4; } }
L_00300CC0:
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 1;
L_00300CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300CCC; } }
L_00300CCC:
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_00300CE8; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00300CF8; } }
L_00300CE8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CF4u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00300CF4u) [[unlikely]] return; }
L_00300CF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00300CF8:
    st32((c.r[29].w[0] + 396u), 0u);
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 392u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[29].w[0] + 408u), 0u);
    c.f[12] = c.f[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D18u); st32((c.r[29].w[0] + 404u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00300D18u) [[unlikely]] return; }
L_00300D18:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 1);
    st32((c.r[4].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 8;
L_00300D38:
    set32(c.r[18], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[21], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00300D54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300DC4; } }
L_00300D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D5Cu); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300D5Cu) [[unlikely]] return; }
L_00300D5C:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300D7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300D8C; } }
L_00300D7C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00300D8C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));  goto L_00300D9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300DC4; } }
L_00300D9C:
    c.r[4].d[0] = c.r[21].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00300DB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300DC4; } }
L_00300DB4:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00300DC4:
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DD0u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00300DD0u) [[unlikely]] return; }
L_00300DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00300E70; } }
    set32(c.r[18], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00300DF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00300E54; } }
L_00300DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DF8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300DF8u) [[unlikely]] return; }
L_00300DF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300E28; } }
L_00300E18:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00300E28:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_00300E54; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00300E48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00300E4C; } }
L_00300E48:
    set32(c.r[8], c.r[2].w[0] + 84u);
    c.budget -= 1;
L_00300E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300E54; } }
L_00300E54:
    set32(c.r[6], ld32((c.r[29].w[0] + 256u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[20].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E6Cu); set32(c.r[7], c.r[21].w[0] + 20000u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x00300E6Cu) [[unlikely]] return; }
L_00300E6C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00300E70:
    set32(c.r[2], c.r[21].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 384u);
    st32((c.r[2].w[0] + 136u), c.r[19].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E90u); set32(c.r[19], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x00300E90u) [[unlikely]] return; }
L_00300E90:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[4].d[0] = 0ull | 50000ull;
    set32(c.r[2], 0u + 15u);
    st32((c.r[3].w[0] + 280u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0] + 288u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 296u), 0u);
    set32(c.r[18], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00300EC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300F28; } }
L_00300EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300ECCu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00300ECCu) [[unlikely]] return; }
L_00300ECC:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00300EEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300EFC; } }
L_00300EEC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00300EFC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00300F28; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00300F1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00300F20; } }
L_00300F1C:
    set32(c.r[3], c.r[2].w[0] + 108u);
    c.budget -= 1;
L_00300F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300F28; } }
L_00300F28:
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.f[12] = ld32((c.r[2].w[0] + 720u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F40u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x00300F40u) [[unlikely]] return; }
L_00300F40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300D38u | kUnwind; return; } goto L_00300D38; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00300F54:
    c.r[2].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300C30u | kUnwind; return; } goto L_00300C30; }
    set32(c.r[2], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[3], c.r[23].w[0] + 9u);
    set32(c.r[5], 0u + 22u);
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F7Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00300F7Cu) [[unlikely]] return; }
L_00300F7C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F8Cu); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00300F8Cu) [[unlikely]] return; }
L_00300F8C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 450u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300FA0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00300FA0u) [[unlikely]] return; }
L_00300FA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00300FB4; }
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00300FB4:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300FC0u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00300FC0u) [[unlikely]] return; }
L_00300FC0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00301090; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00301094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300FD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00300FD8u) [[unlikely]] return; }
L_00300FD8:
    c.f[1] = ld32((c.r[17].w[0] + 736u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 272u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 744u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 748u));
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.budget -= 10;
L_00301000:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 192u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    c.budget -= 8;
L_00301020:
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 4;
L_00301030:
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 240u), 0u);
    st32((c.r[3].w[0] + 244u), 0u);
    st32((c.r[3].w[0] + 248u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301064u); st32((c.r[3].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x00301064u) [[unlikely]] return; }
L_00301064:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301074u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00301074u) [[unlikely]] return; }
L_00301074:
    set32(c.r[4], c.r[16].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301084u); st32((c.r[16].w[0] + 416u), 0u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00301084u) [[unlikely]] return; }
L_00301084:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 3;
L_00301090:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00301094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030109Cu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x0030109Cu) [[unlikely]] return; }
L_0030109C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_003010A0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.budget -= 3;
L_003010AC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_003010D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 3028u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003011B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301100u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00301100u) [[unlikely]] return; }
L_00301100:
    c.f[0] = ld32((c.r[17].w[0] + 688u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 692u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 696u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 700u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301128u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00301128u) [[unlikely]] return; }
L_00301128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301130u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00301130u) [[unlikely]] return; }
L_00301130:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301140u); set32(c.r[6], c.r[17].w[0] + 688u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00301140u) [[unlikely]] return; }
L_00301140:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301168u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00301168u) [[unlikely]] return; }
L_00301168:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301178u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x00301178u) [[unlikely]] return; }
L_00301178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301180u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00301180u) [[unlikely]] return; }
L_00301180:
    set32(c.r[6], c.r[18].w[0] + 736u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301190u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00301190u) [[unlikely]] return; }
L_00301190:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_003011CC; } }
L_003011B4:
    st32((c.r[16].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_003011CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003011F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 2916u);  if (t) { goto L_00301280; } }
L_00301220:
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301230u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00301230u) [[unlikely]] return; }
L_00301230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00301280; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030127C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 196u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 14;
L_0030127C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00301280:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301220u | kUnwind; return; } goto L_00301220; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003012B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003012C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003012D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x003012D4u) [[unlikely]] return; }
L_003012D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30112u);
    set32(c.r[2], c.r[2].w[0] - 30056u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 3024u)));
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[4].w[0] + 3028u);
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 154u, depth + 1u); else { c.pc = 0x0026D8E0u; return; } if (c.pc != 0x00301334u) [[unlikely]] return; }
L_00301334:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = 0ull | 50010ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301344u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00301344u) [[unlikely]] return; }
L_00301344:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0030135C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301358u);  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x00301358u) [[unlikely]] return; }
L_00301358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0030135C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301384u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00301384u) [[unlikely]] return; }
L_00301384:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003013B4; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_003013B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003013B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013B0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x003013B0u) [[unlikely]] return; }
L_003013B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003013B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003013C0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], 0u + 53u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00301740; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00301408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_00301408; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00301408:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00301424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030148C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00301424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030142Cu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030142Cu) [[unlikely]] return; }
L_0030142C:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00301450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00301460; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00301450:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00301460:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0030148C; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[17], ld32((c.r[4].w[0] + 4u)));  goto L_00301480; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00301480; } }
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00301480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030148C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030148C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00301744; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_00301728; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301740; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301728; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_003014B4:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003014C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003014C8u) [[unlikely]] return; }
L_003014C8:
    c.f[1] = ld32((c.r[20].w[0] + 720u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 50010ull;
    c.f[20] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003014ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003014ECu) [[unlikely]] return; }
L_003014EC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003014F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003014F8u) [[unlikely]] return; }
L_003014F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[3] = c.r[2].w[0];
    set32(c.r[8], 0u + 1u);
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[21].w[0] + 328u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301548u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00301548u) [[unlikely]] return; }
L_00301548:
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[2], 0u + 20052u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 144u)));  goto L_0030166C; }
    set32(c.r[2], 0u + 20047u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00301668; } }
    set32(c.r[2], 0u + 10008u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00301668; } }
    set32(c.r[2], 0u + 8000u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 144u)));  goto L_00301640; }
    set32(c.r[2], 0u + 3002u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));  goto L_0030160C; }
    set32(c.r[2], 0u + 3003u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));  goto L_003015D8; }
    set32(c.r[2], 0u + 3001u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 144u)));  goto L_003015AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 144u)));  if (t) { goto L_00301698; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 1;
L_003015AC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003015B8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003015B8u) [[unlikely]] return; }
L_003015B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_003016F4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 1;
L_003015D8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003015E8u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003015E8u) [[unlikely]] return; }
L_003015E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_003016F4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 1;
L_0030160C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030161Cu); set32(c.r[6], 0u + 67u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030161Cu) [[unlikely]] return; }
L_0030161C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_003016F4; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 1;
L_00301640:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030164Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030164Cu) [[unlikely]] return; }
L_0030164C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_003016F4; } }
L_00301668:
    set32(c.r[5], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 1;
L_0030166C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301678u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00301678u) [[unlikely]] return; }
L_00301678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_003016F4; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 1;
L_00301698:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003016A4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003016A4u) [[unlikely]] return; }
L_003016A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003016ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003016ACu) [[unlikely]] return; }
L_003016AC:
    c.f[1] = ld32((c.r[20].w[0] + 740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003016E4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.f[20]);  if (t) { goto L_003016F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003016E4:
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 200u), c.f[20]);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 4;
L_003016F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003016FCu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x003016FCu) [[unlikely]] return; }
L_003016FC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030170Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030170Cu) [[unlikely]] return; }
L_0030170C:
    set32(c.r[4], c.r[21].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301718u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00301718u) [[unlikely]] return; }
L_00301718:
    set32(c.r[3], ld32((c.r[21].w[0] + 308u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[21].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 4;
L_00301728:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003014B4u | kUnwind; return; } goto L_003014B4; }
    set32(c.r[3], 0u + 75u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 2;
L_00301740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00301744:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00301770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x00301784u) [[unlikely]] return; }
L_00301784:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30256u);
    set32(c.r[2], c.r[2].w[0] - 30200u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31472u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31280u);
    set32(c.r[2], 0u + 45u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29072u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301814u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 154u, depth + 1u); else { c.pc = 0x0026D8E0u; return; } if (c.pc != 0x00301814u) [[unlikely]] return; }
L_00301814:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301828u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301828u) [[unlikely]] return; }
L_00301828:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030183Cu); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030183Cu) [[unlikely]] return; }
L_0030183C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00301854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301850u);  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x00301850u) [[unlikely]] return; }
L_00301850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00301854:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00301874u) [[unlikely]] return; }
L_00301874:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003018A4; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_003018A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003018A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018A0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x003018A0u) [[unlikely]] return; }
L_003018A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003018A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003018B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003018E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_003018E8; } }
L_003018E4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003018E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 3028u)));  if (t) { goto L_0030195C; } }
L_003018FC:
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301910u); set32(c.r[17], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00301910u) [[unlikely]] return; }
L_00301910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    set32(c.r[8], 0u + 1u);
    c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030194Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0030194Cu) [[unlikely]] return; }
L_0030194C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 4;
L_0030195C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003018FCu | kUnwind; return; } goto L_003018FC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301990u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301990u) [[unlikely]] return; }
L_00301990:
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003019ACu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003019ACu) [[unlikely]] return; }
L_003019AC:
    set32(c.r[3], 0u + 140u);
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003019E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00301A7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30256u);
    set32(c.r[2], c.r[2].w[0] - 30200u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301A64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301A64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301A58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00301A58u) [[unlikely]] return; }
L_00301A58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301A64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00301A64u) [[unlikely]] return; }
L_00301A64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00301A80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301A7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00301A7Cu) [[unlikely]] return; }
L_00301A7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00301A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00301AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00301B3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30112u);
    set32(c.r[2], c.r[2].w[0] - 30056u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301B24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301B24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301B18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00301B18u) [[unlikely]] return; }
L_00301B18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301B24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00301B24u) [[unlikely]] return; }
L_00301B24:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00301B40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301B3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00301B3Cu) [[unlikely]] return; }
L_00301B3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00301B40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00301B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00301BFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 29968u);
    set32(c.r[2], c.r[2].w[0] - 29912u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301BE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301BE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00301BD8u) [[unlikely]] return; }
L_00301BD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00301BE4u) [[unlikely]] return; }
L_00301BE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00301C00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00301BFCu) [[unlikely]] return; }
L_00301BFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00301C00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00301C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00301CBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 29872u);
    set32(c.r[2], c.r[2].w[0] - 29816u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301CA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301CA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00301C98u) [[unlikely]] return; }
L_00301C98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301CA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00301CA4u) [[unlikely]] return; }
L_00301CA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00301CC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301CBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00301CBCu) [[unlikely]] return; }
L_00301CBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00301CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00301CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00301D6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 29776u);
    set32(c.r[2], c.r[2].w[0] - 29720u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00301D54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x00301D3Cu) [[unlikely]] return; }
L_00301D3C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00301D48u) [[unlikely]] return; }
L_00301D48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00301D54u) [[unlikely]] return; }
L_00301D54:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00301D70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00301D6Cu) [[unlikely]] return; }
L_00301D6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00301D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00301D90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301CE0u | kUnwind; return; } goto L_00301CE0; }
L_00301DA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301C20u | kUnwind; return; } goto L_00301C20; }
L_00301DB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF4B0u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 342u, depth); }
L_00301DC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301B60u | kUnwind; return; } goto L_00301B60; }
L_00301DD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300000u | kUnwind; return; } goto L_00300000; }
L_00301DE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301AA0u | kUnwind; return; } goto L_00301AA0; }
L_00301DF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003013C0u | kUnwind; return; } goto L_003013C0; }
L_00301E00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003019E0u | kUnwind; return; } goto L_003019E0; }
L_00301E10:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E40u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00301E40u) [[unlikely]] return; }
L_00301E40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00301E64; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 202u, depth + 1u); else { c.pc = 0x00301E80u; return; } if (c.pc != 0x00301E60u) [[unlikely]] return; }
L_00301E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00301E64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00301E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00301E94u) [[unlikely]] return; }
L_00301E94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 29008u);
    set32(c.r[3], c.r[3].w[0] - 28952u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301EECu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00301EECu) [[unlikely]] return; }
L_00301EEC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 15u);  goto L_00301F64; }
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301F60; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00301F44; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00301F40; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00301F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00301F58; } }
L_00301F40:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00301F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F4Cu); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 64u, depth + 1u); else { c.pc = 0x002A87C0u; return; } if (c.pc != 0x00301F4Cu) [[unlikely]] return; }
L_00301F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301F60; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00301F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F60u); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x002A8800u; return; } if (c.pc != 0x00301F60u) [[unlikely]] return; }
L_00301F60:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_00301F64:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 164u);  goto L_00302084; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00302004; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 112u);  goto L_00301FD0; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 100u);  goto L_00301F9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003020B8; } }
    set32(c.r[4], 0u + 100u);
    c.budget -= 1;
L_00301F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FA4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00301FA4u) [[unlikely]] return; }
L_00301FA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003020BC; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 223u, depth + 1u); else { c.pc = 0x003020F0u; return; } if (c.pc != 0x00301FC4u) [[unlikely]] return; }
L_00301FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020B8; } }
    set32(c.r[4], 0u + 112u);
    c.budget -= 1;
L_00301FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FD8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00301FD8u) [[unlikely]] return; }
L_00301FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003020B8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 227u, depth + 1u); else { c.pc = 0x00302190u; return; } if (c.pc != 0x00301FF8u) [[unlikely]] return; }
L_00301FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020B8; } }
L_00302000:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00302004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030200Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0030200Cu) [[unlikely]] return; }
L_0030200C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 160u);  goto L_00302050; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302024u); set32(c.r[4], 0u + 140u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00302024u) [[unlikely]] return; }
    goto L_00302024;
L_00302020:
    set32(c.r[4], 0u + 140u);
    c.budget -= 1;
L_00302024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003020B8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00302030:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302044u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 232u, depth + 1u); else { c.pc = 0x00302220u; return; } if (c.pc != 0x00302044u) [[unlikely]] return; }
L_00302044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020B8; } }
    set32(c.r[4], 0u + 160u);
    c.budget -= 1;
L_00302050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302058u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00302058u) [[unlikely]] return; }
L_00302058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003020B8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302078u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 256u, depth + 1u); else { c.pc = 0x003026C0u; return; } if (c.pc != 0x00302078u) [[unlikely]] return; }
L_00302078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020B8; } }
    set32(c.r[4], 0u + 164u);
    c.budget -= 1;
L_00302084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030208Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030208Cu) [[unlikely]] return; }
L_0030208C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003020B8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003020ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 395u, depth + 1u); else { c.pc = 0x00303E80u; return; } if (c.pc != 0x003020ACu) [[unlikely]] return; }
L_003020AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003020B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003020BC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003020E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDC50u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 134u, depth); }
L_003020F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302104u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 284u, depth + 1u); else { c.pc = 0x00276A70u; return; } if (c.pc != 0x00302104u) [[unlikely]] return; }
L_00302104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 29104u);
    set32(c.r[3], c.r[3].w[0] - 29048u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 381u, depth + 1u); else { c.pc = 0x00277740u; return; } if (c.pc != 0x00302144u) [[unlikely]] return; }
L_00302144:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], ld32((c.r[5].w[0] + 476u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00302178; }
    set32(c.r[3], ld32((c.r[5].w[0] + 608u)));
    c.f[0] = ld32((c.r[5].w[0] + 492u));
    c.f[2] = ld32((c.r[3].w[0] + 788u));
    c.f[1] = ld32((c.r[3].w[0] + 784u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 492u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
L_00302178:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 148u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x003021A4u) [[unlikely]] return; }
L_003021A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 29200u);
    set32(c.r[3], c.r[3].w[0] - 29144u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003021D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 166u, depth + 1u); else { c.pc = 0x002756A0u; return; } if (c.pc != 0x003021E4u) [[unlikely]] return; }
L_003021E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021ECu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x003021ECu) [[unlikely]] return; }
L_003021EC:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00302214; }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_00302214:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302234u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x00302234u) [[unlikely]] return; }
L_00302234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 29296u);
    set32(c.r[3], c.r[3].w[0] - 29240u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302294u); set32(c.r[5], 0u + 19u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302294u) [[unlikely]] return; }
L_00302294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030229Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x0030229Cu) [[unlikely]] return; }
L_0030229C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003022B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[22], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[23], c.r[4].w[0] + 2916u);  if (t) { goto L_00302308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_0030230C; } }
L_00302308:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030230C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00302630; }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 27u);
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00302334; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030238C; } }
L_00302334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030233Cu);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030233Cu) [[unlikely]] return; }
L_0030233C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030235C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030236C; } }
L_0030235C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030236C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0030238C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[18], ld32((c.r[3].w[0] + 4u)));  goto L_00302384; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00302384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030238C; } }
L_0030238C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x00302398u) [[unlikely]] return; }
L_00302398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[21].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[3].w[0] - 26056u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[2] = ld32((c.r[3].w[0] - 26072u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[3].w[0] - 26040u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00302620; } }
L_003023D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_0030243C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023F4u); set32(c.r[4], c.r[4].w[0] - 26096u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x003023F4u) [[unlikely]] return; }
L_003023F4:
    set32(c.r[6], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 26160u);
    set32(c.r[4], c.r[17].w[0] + 192u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[22] = ld32((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302424u); set32(c.r[5], c.r[5].w[0] - 26096u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00302424u) [[unlikely]] return; }
L_00302424:
    c.f[2] = ld32((c.r[28].w[0] - 32304u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[22]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[22] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (t) { goto L_0030250C; } }
L_0030243C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30240u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30236u)));  goto L_00302458; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[28].w[0] - 30240u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] - 26032u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30236u)));
    c.budget -= 4;
L_00302458:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_00302474; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 26024u), c.f[20]);
    st8((c.r[28].w[0] - 30236u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 5;
L_00302474:
    c.f[22] = ld32((c.r[17].w[0] + 656u));
    set32(c.r[5], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302484u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00302484u) [[unlikely]] return; }
L_00302484:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[2].w[0] - 26032u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003024A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003024B8; } }
L_003024A4:
    c.f[0] = ld32((c.r[2].w[0] - 26024u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 2u);  goto L_003024B8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003024B8:
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] - 26080u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - 26160u);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[22] = ld32((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003024F8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x003024F8u) [[unlikely]] return; }
L_003024F8:
    c.f[2] = ld32((c.r[28].w[0] - 32152u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[22]);
    c.f[22] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 5;
L_0030250C:
    set32(c.r[8], ld32((c.r[20].w[0] + 96u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302528u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x00302528u) [[unlikely]] return; }
L_00302528:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[13] = c.f[0];
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.f[14] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.f[12] = c.f[22];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302550u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00302550u) [[unlikely]] return; }
L_00302550:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030256C; } }
    set32(c.r[5], c.r[3].w[0] + 10099u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030256Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0062(c, 82u, depth + 1u); else { c.pc = 0x002A8A70u; return; } if (c.pc != 0x0030256Cu) [[unlikely]] return; }
L_0030256C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_00302620; }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030258Cu); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030258Cu) [[unlikely]] return; }
L_0030258C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030261C; } }
    st32((c.r[16].w[0] + 328u), c.f[22]);
    set32(c.r[2], 0u + 2000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_003025BC; }
    set32(c.r[2], 0u + 2001u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 144u)));  goto L_00302610; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_003025BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003025C4u);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x003025C4u) [[unlikely]] return; }
L_003025C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[0] = ld32((c.r[2].w[0] + 20220u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003025F4u); st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003025F4u) [[unlikely]] return; }
L_003025F4:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302600u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00302600u) [[unlikely]] return; }
L_00302600:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_0030261C; } }
L_00302610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030261Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030261Cu) [[unlikely]] return; }
L_0030261C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00302620:
    c.r[3].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003023D0u | kUnwind; return; } goto L_003023D0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00302630:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00302670:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CAC0u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 77u, depth); }
L_00302680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00302698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003026B8; } }
L_00302698:
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003026B4u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003026B4u) [[unlikely]] return; }
L_003026B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003026B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003026C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x003026D4u) [[unlikely]] return; }
L_003026D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 29392u);
    set32(c.r[2], c.r[2].w[0] - 29336u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026FCu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x003026FCu) [[unlikely]] return; }
L_003026FC:
    st32((c.r[16].w[0] + 156u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302744u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302744u) [[unlikely]] return; }
L_00302744:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302750u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302750u) [[unlikely]] return; }
L_00302750:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030275Cu); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030275Cu) [[unlikely]] return; }
L_0030275C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302768u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302768u) [[unlikely]] return; }
L_00302768:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302774u); set32(c.r[5], 0u + 10040u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302774u) [[unlikely]] return; }
L_00302774:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302780u); c.r[5].d[0] = 0ull | 50000ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302780u) [[unlikely]] return; }
L_00302780:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00302788:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 136u);  if (t) { goto L_003027AC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003027A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003027A8u) [[unlikely]] return; }
L_003027A8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003027AC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00302788u | kUnwind; return; } goto L_00302788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003027C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x003027C4u) [[unlikely]] return; }
L_003027C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003027E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302804u); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302804u) [[unlikely]] return; }
L_00302804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030280Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 67u, depth + 1u); else { c.pc = 0x0026C980u; return; } if (c.pc != 0x0030280Cu) [[unlikely]] return; }
L_0030280C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 8;
L_00302840:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 136u);  if (t) { goto L_00302880; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00302884; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00302880; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030287Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030287Cu) [[unlikely]] return; }
L_0030287C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00302880:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00302884:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00302840u | kUnwind; return; } goto L_00302840; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003028E0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003028DC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003028DC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[2], 0u + 49u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_003028DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 381u, depth + 1u); else { c.pc = 0x00303CD0u; return; } if (c.pc != 0x003028DCu) [[unlikely]] return; }
L_003028DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003028E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028E8u);  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0026CAC0u; return; } if (c.pc != 0x003028E8u) [[unlikely]] return; }
L_003028E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00302900:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030293Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 84u, depth + 1u); else { c.pc = 0x0028CF30u; return; } if (c.pc != 0x0030293Cu) [[unlikely]] return; }
L_0030293C:
    set32(c.r[3], c.r[16].w[0] - 44u);
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00303A88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 26000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0078[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030296C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], 0u + 69u);  goto L_00302978; }
    set32(c.r[16], 0u + 67u);
    c.budget -= 1;
L_00302978:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00302990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003029E8; } }
L_00302990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302998u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00302998u) [[unlikely]] return; }
L_00302998:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003029B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003029C8; } }
L_003029B8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003029C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003029E8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_003029E0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003029E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003029E8; } }
L_003029E8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003029F8u) [[unlikely]] return; }
L_003029F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 76u)));  goto L_00302A18; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A14u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00302A14u) [[unlikely]] return; }
L_00302A14:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00302A18:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302A2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302A90; } }
L_00302A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00302A34u) [[unlikely]] return; }
L_00302A34:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00302A54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00302A64; } }
L_00302A54:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00302A64:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00302A90; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00302A84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302A88; } }
L_00302A84:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00302A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302A90; } }
L_00302A90:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10010u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00302AA0u) [[unlikely]] return; }
L_00302AA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00302AD0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AC0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00302AC0u) [[unlikely]] return; }
L_00302AC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_00302AD0:
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302ADCu); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00302ADCu) [[unlikely]] return; }
L_00302ADC:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00302AFC; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AF8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 378u, depth + 1u); else { c.pc = 0x00303BE0u; return; } if (c.pc != 0x00302AF8u) [[unlikely]] return; }
L_00302AF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00302AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B04u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x00302B04u) [[unlikely]] return; }
L_00302B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00303A8C; } }
L_00302B0C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B18u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00302B18u) [[unlikely]] return; }
L_00302B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00303A88; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 308u)));
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_00302B50; } }
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] - 26016u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B50u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x00302B50u) [[unlikely]] return; }
L_00302B50:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 10010u);
    set32(c.r[6], 0u + 410u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B64u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00302B64u) [[unlikely]] return; }
L_00302B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303A88; } }
L_00302B6C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], 0u + 69u);  goto L_00302B78; }
    set32(c.r[16], 0u + 67u);
    c.budget -= 1;
L_00302B78:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 76u)));  goto L_00302B9C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B8Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302B8Cu) [[unlikely]] return; }
L_00302B8C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B98u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302B98u) [[unlikely]] return; }
L_00302B98:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00302B9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00302BB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302C14; } }
L_00302BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302BB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00302BB8u) [[unlikely]] return; }
L_00302BB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00302BD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00302BE8; } }
L_00302BD8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00302BE8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00302C14; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00302C08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302C0C; } }
L_00302C08:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_00302C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302C14; } }
L_00302C14:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10020u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00302C24u) [[unlikely]] return; }
L_00302C24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 76u)));  goto L_00302C44; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C40u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00302C40u) [[unlikely]] return; }
L_00302C40:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00302C44:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302C58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302CBC; } }
L_00302C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00302C60u) [[unlikely]] return; }
L_00302C60:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00302C80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00302C90; } }
L_00302C80:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00302C90:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00302CBC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00302CB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302CB4; } }
L_00302CB0:
    set32(c.r[5], c.r[2].w[0] + 36u);
    c.budget -= 1;
L_00302CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302CBC; } }
L_00302CBC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10030u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CCCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00302CCCu) [[unlikely]] return; }
L_00302CCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00302CF8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CECu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00302CECu) [[unlikely]] return; }
L_00302CEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 3;
L_00302CF8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], 0u + 61u);  goto L_00302D04; }
    set32(c.r[16], 0u + 22u);
    c.budget -= 1;
L_00302D04:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D14u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00302D14u) [[unlikely]] return; }
L_00302D14:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D28u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00302D28u) [[unlikely]] return; }
L_00302D28:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D34u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x00302D34u) [[unlikely]] return; }
L_00302D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303A88; } }
L_00302D3C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D48u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00302D48u) [[unlikely]] return; }
L_00302D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00303A88; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 308u)));
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_00302D80; } }
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] - 26008u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D80u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x00302D80u) [[unlikely]] return; }
L_00302D80:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 10030u);
    set32(c.r[6], 0u + 430u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D94u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00302D94u) [[unlikely]] return; }
L_00302D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303A88; } }
L_00302D9C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0] + 156u), 0u);  if (t) { goto L_00302DAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 67u);  if (t) { goto L_00302DB0; } }
L_00302DAC:
    set32(c.r[18], 0u + 69u);
    c.budget -= 1;
L_00302DB0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], 0u + 70u);  goto L_00302DBC; }
    set32(c.r[17], 0u + 68u);
    c.budget -= 1;
L_00302DBC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DC8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302DC8u) [[unlikely]] return; }
L_00302DC8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DD4u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302DD4u) [[unlikely]] return; }
L_00302DD4:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DE0u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302DE0u) [[unlikely]] return; }
L_00302DE0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DECu); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00302DECu) [[unlikely]] return; }
L_00302DEC:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00302E04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302E68; } }
L_00302E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E0Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00302E0Cu) [[unlikely]] return; }
L_00302E0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00302E2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00302E3C; } }
L_00302E2C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00302E3C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00302E68; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00302E5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302E60; } }
L_00302E5C:
    set32(c.r[5], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_00302E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302E68; } }
L_00302E68:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E78u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00302E78u) [[unlikely]] return; }
L_00302E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302E94; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E94u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00302E94u) [[unlikely]] return; }
L_00302E94:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00302EC0; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302EA8u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0078(c, 369u, depth + 1u); else { c.pc = 0x00303AC0u; return; } if (c.pc != 0x00302EA8u) [[unlikely]] return; }
L_00302EA8:
    c.f[13] = ld32((c.r[29].w[0] + 408u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302EB4u); c.f[12] = ld32((c.r[29].w[0] + 400u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00302EB4u) [[unlikely]] return; }
L_00302EB4:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_00302EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[22], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[23], c.r[2].w[0] + 2916u);
    c.budget -= 12;
L_00302EF0:
    mmi::divu(c, 0, c.r[16].w[0], c.r[22].w[0]);
    set32(c.r[21], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], ld32((c.r[3].w[0])));  if (t) { goto L_00302F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00302F90; } }
L_00302F18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00302F24u) [[unlikely]] return; }
L_00302F24:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00302F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00302F54; } }
L_00302F44:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00302F54:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));  goto L_00302F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00302F90; } }
L_00302F64:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_00302F80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00302F90; } }
L_00302F80:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00302F90:
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00302FAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00303010; } }
L_00302FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FB4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00302FB4u) [[unlikely]] return; }
L_00302FB4:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00302FD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00302FE4; } }
L_00302FD4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00302FE4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00303010; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00303004; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00303008; } }
    goto L_00303004;
L_00303000:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00303004:
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 1;
L_00303008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303010; } }
L_00303010:
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[29].w[0] + 344u), 0u);
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 348u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    set32(c.r[21], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 8;
L_00303030:
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00303044; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003030BC; } }
L_00303044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030304Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030304Cu) [[unlikely]] return; }
L_0030304C:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030306C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030307C; } }
L_0030306C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030307C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  goto L_0030308C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003030BC; } }
L_0030308C:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_003030AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003030BC; } }
L_003030AC:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003030BC:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_003030D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030313C; } }
L_003030D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003030E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003030E0u) [[unlikely]] return; }
L_003030E0:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00303100; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00303110; } }
L_00303100:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00303110:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030313C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00303130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00303134; } }
L_00303130:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_00303134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030313C; } }
L_0030313C:
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 376u), 0u);
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 380u), c.r[2].w[0]);  if (t) { goto L_00303168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 384u), c.f[0]);  if (t) { goto L_00303174; } }
L_00303168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.budget -= 3;
L_00303174:
    set32(c.r[4], 0u + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303180u); st32((c.r[29].w[0] + 388u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00303180u) [[unlikely]] return; }
L_00303180:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  goto L_003031A8; }
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[7], c.r[16].w[0] + 20000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031A4u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x003031A4u) [[unlikely]] return; }
L_003031A4:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_003031A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 336u);
    st32((c.r[3].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[21], c.r[3].w[0] + 136u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031C4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x003031C4u) [[unlikely]] return; }
L_003031C4:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[3].d[0] = 0ull | 50000ull;
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031DCu); c.f[12] = ld32((c.r[30].w[0] + 720u));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x003031DCu) [[unlikely]] return; }
L_003031DC:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302EF0u | kUnwind; return; } goto L_00302EF0; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00303210; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00303274; } }
L_00303210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303218u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00303218u) [[unlikely]] return; }
L_00303218:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00303238; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00303248; } }
L_00303238:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00303248:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00303274; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00303268; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030326C; } }
L_00303268:
    set32(c.r[2], c.r[2].w[0] + 360u);
    c.budget -= 1;
L_0030326C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303274; } }
L_00303274:
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00303290; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003032F4; } }
L_00303290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303298u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00303298u) [[unlikely]] return; }
L_00303298:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003032B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003032C8; } }
L_003032B8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003032C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003032F4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003032E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003032EC; } }
L_003032E8:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_003032EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003032F4; } }
L_003032F4:
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[29].w[0] + 348u), 0u);
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 352u), c.r[2].w[0]);  if (t) { goto L_00303320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 356u), c.f[0]);  if (t) { goto L_0030332C; } }
L_00303320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.budget -= 3;
L_0030332C:
    set32(c.r[4], 0u + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303338u); st32((c.r[29].w[0] + 360u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00303338u) [[unlikely]] return; }
L_00303338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003033F0; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_00303358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003033C0; } }
L_00303358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303364u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00303364u) [[unlikely]] return; }
L_00303364:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00303384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00303394; } }
L_00303384:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00303394:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_003033C0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003033B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003033B8; } }
L_003033B4:
    set32(c.r[8], c.r[2].w[0] + 96u);
    c.budget -= 1;
L_003033B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003033C0; } }
L_003033C0:
    set32(c.r[9], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::divu(c, 0, c.r[9].w[0], c.r[22].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003033ECu); set32(c.r[7], 0u + 20004u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x003033ECu) [[unlikely]] return; }
L_003033EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003033F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303404u); st32((c.r[20].w[0] + 152u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x00303404u) [[unlikely]] return; }
L_00303404:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[20].w[0] + 152u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[4].d[0] = 0ull | 50000ull;
    st32((c.r[3].w[0] + 280u), c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[12] = ld32((c.r[2].w[0] + 720u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303434u); set32(c.r[4], ld32((c.r[20].w[0] + 152u)));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x00303434u) [[unlikely]] return; }
L_00303434:
    set32(c.r[4], ld32((c.r[20].w[0] + 152u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00303460; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003034C4; } }
L_00303460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303468u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00303468u) [[unlikely]] return; }
L_00303468:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00303488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00303498; } }
L_00303488:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00303498:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_003034C4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003034B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003034BC; } }
L_003034B8:
    set32(c.r[3], c.r[2].w[0] + 108u);
    c.budget -= 1;
L_003034BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003034C4; } }
L_003034C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 152u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003034E8u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003034E8u) [[unlikely]] return; }
L_003034E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 152u)));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_00303500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 22u);  if (t) { goto L_00303504; } }
L_00303500:
    set32(c.r[16], 0u + 61u);
    c.budget -= 1;
L_00303504:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303514u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00303514u) [[unlikely]] return; }
L_00303514:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303524u); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00303524u) [[unlikely]] return; }
L_00303524:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303538u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00303538u) [[unlikely]] return; }
L_00303538:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303544u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x00303544u) [[unlikely]] return; }
L_00303544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303A88; } }
L_0030354C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], 0u + 69u);  goto L_00303558; }
    set32(c.r[18], 0u + 67u);
    c.budget -= 1;
L_00303558:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[23], 0u + 70u);  goto L_00303564; }
    set32(c.r[23], 0u + 68u);
    c.budget -= 1;
L_00303564:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303570u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00303570u) [[unlikely]] return; }
L_00303570:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030357Cu); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030357Cu) [[unlikely]] return; }
L_0030357C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303588u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00303588u) [[unlikely]] return; }
L_00303588:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303594u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00303594u) [[unlikely]] return; }
L_00303594:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_003035C8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035A8u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0078(c, 369u, depth + 1u); else { c.pc = 0x00303AC0u; return; } if (c.pc != 0x003035A8u) [[unlikely]] return; }
L_003035A8:
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[12] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035BCu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x003035BCu) [[unlikely]] return; }
L_003035BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_003035C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[30], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3024u)));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + 2916u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_0030387C; } }
L_0030360C:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[22], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_00303640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003036BC; } }
L_00303640:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030364Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030364Cu) [[unlikely]] return; }
L_0030364C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030366C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030367C; } }
L_0030366C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030367C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  goto L_0030368C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003036BC; } }
L_0030368C:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_003036AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003036BC; } }
L_003036AC:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003036BC:
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003036D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030373C; } }
L_003036D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003036E0u) [[unlikely]] return; }
L_003036E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00303700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00303710; } }
L_00303700:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00303710:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030373C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00303730; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00303734; } }
L_00303730:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_00303734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030373C; } }
L_0030373C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_00303750; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030375C; } }
L_00303750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0030375C:
    set32(c.r[4], 0u + 336u);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[29].w[0] + 300u), 0u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030377Cu); st32((c.r[29].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030377Cu) [[unlikely]] return; }
L_0030377C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030382C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[21], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_0030380C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_003037A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00303804; } }
L_003037A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003037A8u) [[unlikely]] return; }
L_003037A8:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003037C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003037D8; } }
L_003037C8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003037D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_00303804; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003037F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003037FC; } }
L_003037F8:
    set32(c.r[8], c.r[2].w[0] + 84u);
    c.budget -= 1;
L_003037FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303804; } }
L_00303804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[22].w[0])));  if (t) { goto L_00303814; } }
L_0030380C:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_00303814:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[20].w[0] + 96u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303828u); set32(c.r[7], c.r[17].w[0] + 20000u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x00303828u) [[unlikely]] return; }
L_00303828:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0030382C:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 288u);
    st32((c.r[2].w[0] + 136u), c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030384Cu); set32(c.r[16], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x0030384Cu) [[unlikely]] return; }
L_0030384C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = 0ull | 50000ull;
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.f[12] = ld32((c.r[2].w[0] + 720u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303868u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x00303868u) [[unlikely]] return; }
L_00303868:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 5;
L_0030387C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030360Cu | kUnwind; return; } goto L_0030360C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[3], 0u + 25u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003038B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00303918; } }
L_003038B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003038BCu) [[unlikely]] return; }
L_003038BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003038DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003038EC; } }
L_003038DC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003038EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00303918; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0030390C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00303910; } }
L_0030390C:
    set32(c.r[4], c.r[2].w[0] + 108u);
    c.budget -= 1;
L_00303910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303918; } }
L_00303918:
    set32(c.r[2], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[3], c.r[30].w[0] + 9u);
    st32((c.r[2].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 136u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_00303938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 22u);  if (t) { goto L_0030393C; } }
L_00303938:
    set32(c.r[16], 0u + 61u);
    c.budget -= 1;
L_0030393C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030394Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x0030394Cu) [[unlikely]] return; }
L_0030394C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030395Cu); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x0030395Cu) [[unlikely]] return; }
L_0030395C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 450u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303970u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00303970u) [[unlikely]] return; }
L_00303970:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00303984; }
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00303984:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303990u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00303990u) [[unlikely]] return; }
L_00303990:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00303A7C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00303A80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003039A8u) [[unlikely]] return; }
L_003039A8:
    c.f[0] = ld32((c.r[17].w[0] + 736u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[29].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 744u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 748u));
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 220u), c.f[0]);  if (t) { goto L_003039E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431F0000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.budget -= 5;
L_003039E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 240u), 0u);
    st32((c.r[3].w[0] + 244u), 0u);
    st32((c.r[3].w[0] + 248u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A50u); st32((c.r[3].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x00303A50u) [[unlikely]] return; }
L_00303A50:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A60u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00303A60u) [[unlikely]] return; }
L_00303A60:
    set32(c.r[4], c.r[16].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A70u); st32((c.r[16].w[0] + 416u), 0u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00303A70u) [[unlikely]] return; }
L_00303A70:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 3;
L_00303A7C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00303A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A88u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x00303A88u) [[unlikely]] return; }
L_00303A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00303A8C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00303AC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 3028u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00303AF0u) [[unlikely]] return; }
L_00303AF0:
    c.f[0] = ld32((c.r[17].w[0] + 688u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 692u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 696u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 700u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B18u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00303B18u) [[unlikely]] return; }
L_00303B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00303B20u) [[unlikely]] return; }
L_00303B20:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B30u); set32(c.r[6], c.r[17].w[0] + 688u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00303B30u) [[unlikely]] return; }
L_00303B30:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B58u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00303B58u) [[unlikely]] return; }
L_00303B58:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B68u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x00303B68u) [[unlikely]] return; }
L_00303B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00303B70u) [[unlikely]] return; }
L_00303B70:
    set32(c.r[6], c.r[18].w[0] + 736u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00303B80u) [[unlikely]] return; }
L_00303B80:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_00303BBC; } }
L_00303BA4:
    st32((c.r[16].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_00303BBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00303BE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 2916u);  if (t) { goto L_00303CA0; } }
L_00303C18:
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C28u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00303C28u) [[unlikely]] return; }
L_00303C28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00303CA0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00303C9C; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_00303C68; }
    set32(c.r[3], 0u + 530u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 196u), c.f[0]);  if (t) { goto L_00303C7C; } }
L_00303C68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.budget -= 5;
L_00303C7C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 8;
L_00303C9C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00303CA0:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303C18u | kUnwind; return; } goto L_00303C18; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00303CD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303CE8u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00303CE8u) [[unlikely]] return; }
L_00303CE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00303E58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303CFCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00303CFCu) [[unlikely]] return; }
L_00303CFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] - 2000u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00303E00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 25968u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0078[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00303D34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20176u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[3].w[0] + 20180u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3340000u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D70u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00303D70u) [[unlikely]] return; }
L_00303D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 352u);  if (t) { goto L_00303E40; } }
    goto L_00303D78;
L_00303D74:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_00303D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20176u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[3].w[0] + 20180u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC38C0000u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DB4u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00303DB4u) [[unlikely]] return; }
L_00303DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303E3C; } }
L_00303DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20176u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[3].w[0] + 20180u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3BE0000u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DF8u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00303DF8u) [[unlikely]] return; }
L_00303DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303E3C; } }
L_00303E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20192u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[3].w[0] + 20200u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20204u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E3Cu); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00303E3Cu) [[unlikely]] return; }
L_00303E3C:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_00303E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E48u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00303E48u) [[unlikely]] return; }
L_00303E48:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_00303E58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00303E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x00303E94u) [[unlikely]] return; }
L_00303E94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 29536u);
    set32(c.r[2], c.r[2].w[0] - 29480u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EB4u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00303EB4u) [[unlikely]] return; }
L_00303EB4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00303F08; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] - 28992u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28752u);
    set32(c.r[2], 0u + 52u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 26208u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
L_00303F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00303F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F38u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00303F38u) [[unlikely]] return; }
L_00303F38:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00303F60; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F5Cu); set32(c.r[5], 0u + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303F5Cu) [[unlikely]] return; }
L_00303F5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F68u);  if (depth < kMaxDepth) unit_0053(c, 159u, depth + 1u); else { c.pc = 0x0026D950u; return; } if (c.pc != 0x00303F68u) [[unlikely]] return; }
L_00303F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00303F80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303FA8u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00303FA8u) [[unlikely]] return; }
L_00303FA8:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  [[clang::musttail]] return unit_0079(c, 2u, depth); }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 2916u);  if (t) { [[clang::musttail]] return unit_0079(c, 1u, depth); } }
L_00303FD0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303FE0u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00303FE0u) [[unlikely]] return; }
L_00303FE0:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  [[clang::musttail]] return unit_0079(c, 1u, depth); }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
    [[clang::musttail]] return unit_0079(c, 1u, depth);
}

}
