#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002D[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107,
    0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292,
    0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D4000;
    case 2u: goto L_001D400C;
    case 3u: goto L_001D4040;
    case 4u: goto L_001D405C;
    case 5u: goto L_001D4088;
    case 6u: goto L_001D40D0;
    case 7u: goto L_001D40E0;
    case 8u: goto L_001D4130;
    case 9u: goto L_001D4160;
    case 10u: goto L_001D4198;
    case 11u: goto L_001D41B4;
    case 12u: goto L_001D4200;
    case 13u: goto L_001D4230;
    case 14u: goto L_001D4250;
    case 15u: goto L_001D42A4;
    case 16u: goto L_001D42C4;
    case 17u: goto L_001D42CC;
    case 18u: goto L_001D42E0;
    case 19u: goto L_001D4318;
    case 20u: goto L_001D4358;
    case 21u: goto L_001D439C;
    case 22u: goto L_001D43F0;
    case 23u: goto L_001D445C;
    case 24u: goto L_001D446C;
    case 25u: goto L_001D447C;
    case 26u: goto L_001D4488;
    case 27u: goto L_001D44AC;
    case 28u: goto L_001D44C0;
    case 29u: goto L_001D4500;
    case 30u: goto L_001D4520;
    case 31u: goto L_001D4548;
    case 32u: goto L_001D4550;
    case 33u: goto L_001D4564;
    case 34u: goto L_001D4570;
    case 35u: goto L_001D4588;
    case 36u: goto L_001D45C0;
    case 37u: goto L_001D45EC;
    case 38u: goto L_001D4600;
    case 39u: goto L_001D4610;
    case 40u: goto L_001D4628;
    case 41u: goto L_001D4640;
    case 42u: goto L_001D4660;
    case 43u: goto L_001D4684;
    case 44u: goto L_001D469C;
    case 45u: goto L_001D46BC;
    case 46u: goto L_001D46D8;
    case 47u: goto L_001D46F0;
    case 48u: goto L_001D4710;
    case 49u: goto L_001D4738;
    case 50u: goto L_001D4758;
    case 51u: goto L_001D4770;
    case 52u: goto L_001D47A0;
    case 53u: goto L_001D47D4;
    case 54u: goto L_001D47F0;
    case 55u: goto L_001D481C;
    case 56u: goto L_001D483C;
    case 57u: goto L_001D486C;
    case 58u: goto L_001D4880;
    case 59u: goto L_001D48B0;
    case 60u: goto L_001D48C4;
    case 61u: goto L_001D48F4;
    case 62u: goto L_001D4908;
    case 63u: goto L_001D4938;
    case 64u: goto L_001D4960;
    case 65u: goto L_001D4988;
    case 66u: goto L_001D49B0;
    case 67u: goto L_001D49E0;
    case 68u: goto L_001D4A28;
    case 69u: goto L_001D4A4C;
    case 70u: goto L_001D4A94;
    case 71u: goto L_001D4AB0;
    case 72u: goto L_001D4AC0;
    case 73u: goto L_001D4AD0;
    case 74u: goto L_001D4AE4;
    case 75u: goto L_001D4AEC;
    case 76u: goto L_001D4AF8;
    case 77u: goto L_001D4B10;
    case 78u: goto L_001D4B50;
    case 79u: goto L_001D4B54;
    case 80u: goto L_001D4B60;
    case 81u: goto L_001D4B68;
    case 82u: goto L_001D4BA8;
    case 83u: goto L_001D4BCC;
    case 84u: goto L_001D4BD8;
    case 85u: goto L_001D4BE4;
    case 86u: goto L_001D4C2C;
    case 87u: goto L_001D4C50;
    case 88u: goto L_001D4C68;
    case 89u: goto L_001D4CB4;
    case 90u: goto L_001D4CE8;
    case 91u: goto L_001D4CF4;
    case 92u: goto L_001D4D40;
    case 93u: goto L_001D4D6C;
    case 94u: goto L_001D4DA8;
    case 95u: goto L_001D4E1C;
    case 96u: goto L_001D4E34;
    case 97u: goto L_001D4E4C;
    case 98u: goto L_001D4E98;
    case 99u: goto L_001D4EA8;
    case 100u: goto L_001D4EC4;
    case 101u: goto L_001D4F2C;
    case 102u: goto L_001D4F40;
    case 103u: goto L_001D4F7C;
    case 104u: goto L_001D4FAC;
    case 105u: goto L_001D4FB8;
    case 106u: goto L_001D4FF0;
    case 107u: goto L_001D4FFC;
    case 108u: goto L_001D5010;
    case 109u: goto L_001D5020;
    case 110u: goto L_001D5054;
    case 111u: goto L_001D5064;
    case 112u: goto L_001D5070;
    case 113u: goto L_001D5084;
    case 114u: goto L_001D509C;
    case 115u: goto L_001D50AC;
    case 116u: goto L_001D50DC;
    case 117u: goto L_001D50EC;
    case 118u: goto L_001D5110;
    case 119u: goto L_001D5168;
    case 120u: goto L_001D5174;
    case 121u: goto L_001D5184;
    case 122u: goto L_001D51A0;
    case 123u: goto L_001D51B0;
    case 124u: goto L_001D51CC;
    case 125u: goto L_001D51DC;
    case 126u: goto L_001D51F8;
    case 127u: goto L_001D5218;
    case 128u: goto L_001D5228;
    case 129u: goto L_001D5238;
    case 130u: goto L_001D5250;
    case 131u: goto L_001D5270;
    case 132u: goto L_001D52F4;
    case 133u: goto L_001D5388;
    case 134u: goto L_001D53DC;
    case 135u: goto L_001D53F0;
    case 136u: goto L_001D5408;
    case 137u: goto L_001D5420;
    case 138u: goto L_001D5470;
    case 139u: goto L_001D54A0;
    case 140u: goto L_001D54B8;
    case 141u: goto L_001D54D0;
    case 142u: goto L_001D5514;
    case 143u: goto L_001D5520;
    case 144u: goto L_001D5538;
    case 145u: goto L_001D5550;
    case 146u: goto L_001D5578;
    case 147u: goto L_001D55A0;
    case 148u: goto L_001D5614;
    case 149u: goto L_001D5640;
    case 150u: goto L_001D5664;
    case 151u: goto L_001D5684;
    case 152u: goto L_001D569C;
    case 153u: goto L_001D56C0;
    case 154u: goto L_001D5704;
    case 155u: goto L_001D5714;
    case 156u: goto L_001D572C;
    case 157u: goto L_001D5750;
    case 158u: goto L_001D5760;
    case 159u: goto L_001D5810;
    case 160u: goto L_001D5820;
    case 161u: goto L_001D5860;
    case 162u: goto L_001D58B8;
    case 163u: goto L_001D58D0;
    case 164u: goto L_001D5908;
    case 165u: goto L_001D5934;
    case 166u: goto L_001D593C;
    case 167u: goto L_001D5954;
    case 168u: goto L_001D5980;
    case 169u: goto L_001D5A2C;
    case 170u: goto L_001D5A38;
    case 171u: goto L_001D5A40;
    case 172u: goto L_001D5A74;
    case 173u: goto L_001D5A7C;
    case 174u: goto L_001D5AD8;
    case 175u: goto L_001D5AE8;
    case 176u: goto L_001D5B10;
    case 177u: goto L_001D5B78;
    case 178u: goto L_001D5B88;
    case 179u: goto L_001D5B90;
    case 180u: goto L_001D5B9C;
    case 181u: goto L_001D5CAC;
    case 182u: goto L_001D5D64;
    case 183u: goto L_001D5D70;
    case 184u: goto L_001D5E84;
    case 185u: goto L_001D5F40;
    case 186u: goto L_001D5F4C;
    case 187u: goto L_001D60B4;
    case 188u: goto L_001D62B0;
    case 189u: goto L_001D62B8;
    case 190u: goto L_001D6350;
    case 191u: goto L_001D6374;
    case 192u: goto L_001D63A8;
    case 193u: goto L_001D63C4;
    case 194u: goto L_001D63F4;
    case 195u: goto L_001D6400;
    case 196u: goto L_001D6444;
    case 197u: goto L_001D6484;
    case 198u: goto L_001D6488;
    case 199u: goto L_001D6490;
    case 200u: goto L_001D64E0;
    case 201u: goto L_001D6520;
    case 202u: goto L_001D6550;
    case 203u: goto L_001D6578;
    case 204u: goto L_001D6584;
    case 205u: goto L_001D6590;
    case 206u: goto L_001D659C;
    case 207u: goto L_001D65B8;
    case 208u: goto L_001D65E0;
    case 209u: goto L_001D6600;
    case 210u: goto L_001D662C;
    case 211u: goto L_001D6640;
    case 212u: goto L_001D6654;
    case 213u: goto L_001D66B0;
    case 214u: goto L_001D66F0;
    case 215u: goto L_001D6700;
    case 216u: goto L_001D6718;
    case 217u: goto L_001D6730;
    case 218u: goto L_001D6778;
    case 219u: goto L_001D6790;
    case 220u: goto L_001D67B0;
    case 221u: goto L_001D67FC;
    case 222u: goto L_001D6818;
    case 223u: goto L_001D6838;
    case 224u: goto L_001D6880;
    case 225u: goto L_001D6890;
    case 226u: goto L_001D68EC;
    case 227u: goto L_001D6990;
    case 228u: goto L_001D69D4;
    case 229u: goto L_001D69DC;
    case 230u: goto L_001D69E4;
    case 231u: goto L_001D69F4;
    case 232u: goto L_001D6A18;
    case 233u: goto L_001D6A48;
    case 234u: goto L_001D6A50;
    case 235u: goto L_001D6A68;
    case 236u: goto L_001D6A70;
    case 237u: goto L_001D6A78;
    case 238u: goto L_001D6B00;
    case 239u: goto L_001D6B50;
    case 240u: goto L_001D6B5C;
    case 241u: goto L_001D6B80;
    case 242u: goto L_001D6B98;
    case 243u: goto L_001D6BB8;
    case 244u: goto L_001D6BD0;
    case 245u: goto L_001D6BF0;
    case 246u: goto L_001D6BFC;
    case 247u: goto L_001D6C10;
    case 248u: goto L_001D6C30;
    case 249u: goto L_001D6C50;
    case 250u: goto L_001D6C7C;
    case 251u: goto L_001D6C94;
    case 252u: goto L_001D6CA4;
    case 253u: goto L_001D6CB8;
    case 254u: goto L_001D6CC4;
    case 255u: goto L_001D6CDC;
    case 256u: goto L_001D6D00;
    case 257u: goto L_001D6D58;
    case 258u: goto L_001D6D70;
    case 259u: goto L_001D6D88;
    case 260u: goto L_001D6DB4;
    case 261u: goto L_001D6E28;
    case 262u: goto L_001D6E60;
    case 263u: goto L_001D6E74;
    case 264u: goto L_001D6EB8;
    case 265u: goto L_001D6EE4;
    case 266u: goto L_001D6F58;
    case 267u: goto L_001D6F90;
    case 268u: goto L_001D6FA4;
    case 269u: goto L_001D6FE8;
    case 270u: goto L_001D7014;
    case 271u: goto L_001D702C;
    case 272u: goto L_001D7050;
    case 273u: goto L_001D7070;
    case 274u: goto L_001D7090;
    case 275u: goto L_001D70A4;
    case 276u: goto L_001D70CC;
    case 277u: goto L_001D70F0;
    case 278u: goto L_001D712C;
    case 279u: goto L_001D7174;
    case 280u: goto L_001D71A0;
    case 281u: goto L_001D71CC;
    case 282u: goto L_001D71D8;
    case 283u: goto L_001D71F0;
    case 284u: goto L_001D7210;
    case 285u: goto L_001D7244;
    case 286u: goto L_001D7264;
    case 287u: goto L_001D7284;
    case 288u: goto L_001D72A4;
    case 289u: goto L_001D72BC;
    case 290u: goto L_001D72D4;
    case 291u: goto L_001D72EC;
    case 292u: goto L_001D72FC;
    case 293u: goto L_001D7308;
    case 294u: goto L_001D7318;
    case 295u: goto L_001D7330;
    case 296u: goto L_001D7348;
    case 297u: goto L_001D7390;
    case 298u: goto L_001D73B8;
    case 299u: goto L_001D73D0;
    case 300u: goto L_001D73D8;
    case 301u: goto L_001D7420;
    case 302u: goto L_001D744C;
    case 303u: goto L_001D7488;
    case 304u: goto L_001D7498;
    case 305u: goto L_001D74B0;
    case 306u: goto L_001D74C0;
    case 307u: goto L_001D74F0;
    case 308u: goto L_001D7500;
    case 309u: goto L_001D7510;
    case 310u: goto L_001D7524;
    case 311u: goto L_001D752C;
    case 312u: goto L_001D7538;
    case 313u: goto L_001D7550;
    case 314u: goto L_001D761C;
    case 315u: goto L_001D762C;
    case 316u: goto L_001D7634;
    case 317u: goto L_001D7640;
    case 318u: goto L_001D765C;
    case 319u: goto L_001D766C;
    case 320u: goto L_001D7674;
    case 321u: goto L_001D7698;
    case 322u: goto L_001D76F4;
    case 323u: goto L_001D771C;
    case 324u: goto L_001D772C;
    case 325u: goto L_001D77D4;
    case 326u: goto L_001D7814;
    case 327u: goto L_001D7830;
    case 328u: goto L_001D78A8;
    case 329u: goto L_001D7910;
    case 330u: goto L_001D7928;
    case 331u: goto L_001D795C;
    case 332u: goto L_001D7988;
    case 333u: goto L_001D79CC;
    case 334u: goto L_001D79D8;
    case 335u: goto L_001D79F4;
    case 336u: goto L_001D7A0C;
    case 337u: goto L_001D7A48;
    case 338u: goto L_001D7A8C;
    case 339u: goto L_001D7AC8;
    case 340u: goto L_001D7B08;
    case 341u: goto L_001D7B14;
    case 342u: goto L_001D7B28;
    case 343u: goto L_001D7B40;
    case 344u: goto L_001D7B74;
    case 345u: goto L_001D7BE0;
    case 346u: goto L_001D7BFC;
    case 347u: goto L_001D7C0C;
    case 348u: goto L_001D7C48;
    case 349u: goto L_001D7C6C;
    case 350u: goto L_001D7C7C;
    case 351u: goto L_001D7CD8;
    case 352u: goto L_001D7D04;
    case 353u: goto L_001D7D24;
    case 354u: goto L_001D7D3C;
    case 355u: goto L_001D7D50;
    case 356u: goto L_001D7DAC;
    case 357u: goto L_001D7E0C;
    case 358u: goto L_001D7E40;
    case 359u: goto L_001D7E58;
    case 360u: goto L_001D7E98;
    case 361u: goto L_001D7ECC;
    case 362u: goto L_001D7EE4;
    case 363u: goto L_001D7F64;
    case 364u: goto L_001D7F80;
    case 365u: goto L_001D7FB0;
    default: bad_entry(c, 0x001D4000u); return;
    }
L_001D4000:
    set32(c.r[2], ld32((c.r[21].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[21].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 3;
L_001D400C:
    set32(c.r[3], ld32((c.r[21].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D4040; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D4040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4040u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D4040u) [[unlikely]] return; }
L_001D4040:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_001D4098; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D405Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001D405Cu) [[unlikely]] return; }
L_001D405C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4088; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4078; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4088; } }
L_001D4078:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4088u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001D4088u) [[unlikely]] return; }
L_001D4088:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 168u)));  if (t) { goto L_001D409C; } }
L_001D4094:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001D4098:
    set32(c.r[3], ld32((c.r[21].w[0] + 168u)));
    c.budget -= 1;
L_001D409C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 168u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D40D0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001D40E0:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4120; }
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 164u)));  goto L_001D4104; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4120; } }
L_001D4104:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31912u)));  goto L_001D4120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 12u);  if (t) { goto L_001D4120; } }
L_001D4120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D4130:
    set32(c.r[5], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 152u)));  goto L_001D414C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);  if (t) { goto L_001D4154; } }
L_001D414C:
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001D4154:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D4160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D4188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D41E0; } }
L_001D4188:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001D41A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4198u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001D4130u; return; } if (c.pc != 0x001D4198u) [[unlikely]] return; }
L_001D4198:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_001D41BC; }
L_001D41A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D41B4u); set32(c.r[5], c.r[5].w[0] + 17716u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D41B4u) [[unlikely]] return; }
L_001D41B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D41E0; } }
L_001D41BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 148u)));  goto L_001D41D8; }
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 2;
L_001D41D8:
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001D41E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D4200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 160u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 172u), 0u);  goto L_001D4238; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4230u); set32(c.r[5], c.r[5].w[0] + 32672u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001D4230u) [[unlikely]] return; }
L_001D4230:
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 2;
L_001D4238:
    st32((c.r[16].w[0] + 168u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D4250:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 19533ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[2], 0u + 16u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42A4u); set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001D4130u; return; } if (c.pc != 0x001D42A4u) [[unlikely]] return; }
L_001D42A4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[21], 0u + 16u);
    set32(c.r[2], ld32((c.r[20].w[0] + 168u)));
    set32(c.r[18], c.r[16].w[0] + 16u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[21].w[0]);  if (t) { goto L_001D42E4; } }
L_001D42C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 9u, depth + 1u); else { c.pc = 0x001D4160u; return; } if (c.pc != 0x001D42CCu) [[unlikely]] return; }
L_001D42CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42E0u); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D42E0u) [[unlikely]] return; }
L_001D42E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001D42E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D42C4u | kUnwind; return; } goto L_001D42C4; }
    set32(c.r[2], c.r[3].w[0] << 4);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[22], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001D437C; } }
L_001D4318:
    set32(c.r[2], c.r[22].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D4338; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001D4338:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + c.r[18].w[0]);  if (t) { goto L_001D434C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_001D4350; } }
L_001D434C:
    set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001D4350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4358u); set32(c.r[6], c.r[3].w[0] + 1u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D4358u) [[unlikely]] return; }
L_001D4358:
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4370; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001D4370:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001D437C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4318u | kUnwind; return; } goto L_001D4318; }
    set32(c.r[3], c.r[18].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_001D43A8; } }
L_001D439C:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_001D43A8:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D439Cu | kUnwind; return; } goto L_001D439C; } }
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D43F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001D444C; } }
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20295ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  goto L_001D4464; }
L_001D444C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D445Cu); set32(c.r[5], c.r[5].w[0] + 17726u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D445Cu) [[unlikely]] return; }
L_001D445C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D44D8; } }
L_001D4464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D446Cu); set32(c.r[18], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 12u, depth + 1u); else { c.pc = 0x001D4200u; return; } if (c.pc != 0x001D446Cu) [[unlikely]] return; }
L_001D446C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_001D448C; } }
L_001D447C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4488u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 458u, depth + 1u); else { c.pc = 0x001D3E90u; return; } if (c.pc != 0x001D4488u) [[unlikely]] return; }
L_001D4488:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001D448C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D447Cu | kUnwind; return; } goto L_001D447C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_001D44C4; } }
L_001D44AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44C0u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 460u, depth + 1u); else { c.pc = 0x001D3F10u; return; } if (c.pc != 0x001D44C0u) [[unlikely]] return; }
L_001D44C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001D44C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D44ACu | kUnwind; return; } goto L_001D44AC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D44D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D4500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4520u); set32(c.r[6], 0u + 265u);  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001D4520u) [[unlikely]] return; }
L_001D4520:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52430000u);
    set32(c.r[3], c.r[3].w[0] + 13984u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17997ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4548u); set32(c.r[5], c.r[5].w[0] + 17760u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001D4548u) [[unlikely]] return; }
L_001D4548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4550u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 41u, depth + 1u); else { c.pc = 0x001D4640u; return; } if (c.pc != 0x001D4550u) [[unlikely]] return; }
L_001D4550:
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 152u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4564u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001D4564u) [[unlikely]] return; }
L_001D4564:
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D458C; } }
L_001D4570:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4588u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002D(c, 47u, depth + 1u); else { c.pc = 0x001D46F0u; return; } if (c.pc != 0x001D4588u) [[unlikely]] return; }
L_001D4588:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D458C:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4570u | kUnwind; return; } goto L_001D4570; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D45C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D4628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D45ECu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 42u, depth + 1u); else { c.pc = 0x001D4660u; return; } if (c.pc != 0x001D45ECu) [[unlikely]] return; }
L_001D45EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D4608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4600u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001D4600u) [[unlikely]] return; }
L_001D4600:
    st32((c.r[17].w[0] + 148u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001D4608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4610u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001D4610u) [[unlikely]] return; }
L_001D4610:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D462C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4628u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D4628u) [[unlikely]] return; }
L_001D4628:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D462C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D4640:
    st32((c.r[4].w[0] + 148u), 0u);
    set32(c.r[5], c.r[4].w[0] + 156u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 180u), 0u);
    c.budget -= 7;
    { st32((c.r[4].w[0] + 184u), 0u);  goto L_001D46F0; }
L_001D4660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D46B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D46A0; } }
L_001D4684:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D469Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002D(c, 48u, depth + 1u); else { c.pc = 0x001D4710u; return; } if (c.pc != 0x001D469Cu) [[unlikely]] return; }
L_001D469C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D46A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4684u | kUnwind; return; } goto L_001D4684; }
L_001D46B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D46BCu); set32(c.r[5], c.r[17].w[0] + 156u);  if (depth < kMaxDepth) unit_002D(c, 48u, depth + 1u); else { c.pc = 0x001D4710u; return; } if (c.pc != 0x001D46BCu) [[unlikely]] return; }
L_001D46BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001D46E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D46D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D46D8u) [[unlikely]] return; }
L_001D46D8:
    st32((c.r[17].w[0] + 184u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_001D46E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D46F0:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_001D4710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D473C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4738u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D4738u) [[unlikely]] return; }
L_001D4738:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001D473C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001D4760; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4758u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D4758u) [[unlikely]] return; }
L_001D4758:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001D4760:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D4770:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001D493C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47A0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D47A0u) [[unlikely]] return; }
L_001D47A0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D47D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D47D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D47D4u) [[unlikely]] return; }
L_001D47D4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001D482C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001D47F0u) [[unlikely]] return; }
L_001D47F0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D481C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001D480C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D481C; } }
L_001D480C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D481Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001D481Cu) [[unlikely]] return; }
L_001D481C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 176u)));  if (t) { goto L_001D4830; } }
L_001D4828:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001D482C:
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 1;
L_001D4830:
    c.r[19].d[0] = ld16((c.r[2].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D483Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D483Cu) [[unlikely]] return; }
L_001D483C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D486C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D486C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D486Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D486Cu) [[unlikely]] return; }
L_001D486C:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[19].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D4880u) [[unlikely]] return; }
L_001D4880:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D48B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D48B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D48B0u) [[unlikely]] return; }
L_001D48B0:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[19].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D48C4u) [[unlikely]] return; }
L_001D48C4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D48F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D48F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D48F4u) [[unlikely]] return; }
L_001D48F4:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 14u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D4908u) [[unlikely]] return; }
L_001D4908:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D4938; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D4938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4938u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D4938u) [[unlikely]] return; }
L_001D4938:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001D493C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D4960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 18037u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D49BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4988u); set32(c.r[4], c.r[4].w[0] + 18037u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001D4988u) [[unlikely]] return; }
L_001D4988:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 18037u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D49A0; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001D49A8; }
L_001D49A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001D49B4; } }
L_001D49A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001D49B0u) [[unlikely]] return; }
L_001D49B0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D49B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001D49C4; } }
L_001D49BC:
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001D49C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D49E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D4A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D4A98; } }
L_001D4A00:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4A98; }
    c.r[6].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[3].w[0] + 10u));
    c.r[8].d[0] = ld16((c.r[3].w[0] + 12u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A28u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_002D(c, 64u, depth + 1u); else { c.pc = 0x001D4960u; return; } if (c.pc != 0x001D4A28u) [[unlikely]] return; }
L_001D4A28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 44u)));  goto L_001D4A50; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D4A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D4A4Cu) [[unlikely]] return; }
L_001D4A4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_001D4A50:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_001D4A68; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 4;
L_001D4A68:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D4A98; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D4A94; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D4A94u) [[unlikely]] return; }
L_001D4A94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D4A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D4AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D4AC0u) [[unlikely]] return; }
L_001D4AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D4AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 42u, depth + 1u); else { c.pc = 0x001D4660u; return; } if (c.pc != 0x001D4AE4u) [[unlikely]] return; }
L_001D4AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 41u, depth + 1u); else { c.pc = 0x001D4640u; return; } if (c.pc != 0x001D4AECu) [[unlikely]] return; }
L_001D4AEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D4AF8u) [[unlikely]] return; }
L_001D4AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D4B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D4F2C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 17904u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001D4000u < 16384u) { entry = entries_002D[(t - 0x001D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D4B50:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_001D4B54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B60u); st32((c.r[16].w[0] + 88u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D4B60u) [[unlikely]] return; }
L_001D4B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001D4F30; } }
L_001D4B68:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_001D4B80; }
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_001D4B80:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001D4B98; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_001D4BB0; }
L_001D4B98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BA8u); set32(c.r[5], c.r[5].w[0] + 18038u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D4BA8u) [[unlikely]] return; }
L_001D4BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4B54u | kUnwind; return; } goto L_001D4B54; } }
L_001D4BB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BCCu); st32((c.r[16].w[0] + 180u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002D(c, 48u, depth + 1u); else { c.pc = 0x001D4710u; return; } if (c.pc != 0x001D4BCCu) [[unlikely]] return; }
L_001D4BCC:
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 47u, depth + 1u); else { c.pc = 0x001D46F0u; return; } if (c.pc != 0x001D4BD8u) [[unlikely]] return; }
L_001D4BD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_001D4BE4:
    set32(c.r[5], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_001D4C24; }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D4C20; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D4C20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), 0u);  if (t) { goto L_001D4C5C; } }
L_001D4C20:
    set32(c.r[4], 0u + 88u);
    c.budget -= 1;
L_001D4C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C2Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D4C2Cu) [[unlikely]] return; }
L_001D4C2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 180u)));  goto L_001D4C58; }
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[8], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C50u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0029(c, 365u, depth + 1u); else { c.pc = 0x001C63E0u; return; } if (c.pc != 0x001D4C50u) [[unlikely]] return; }
L_001D4C50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 2;
L_001D4C58:
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 1;
L_001D4C5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_001D4C68:
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D4F2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D4CA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].d[0] & 128ull;  goto L_001D4CBC; }
L_001D4CA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CB4u); set32(c.r[5], c.r[5].w[0] + 18061u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D4CB4u) [[unlikely]] return; }
L_001D4CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4B50u | kUnwind; return; } goto L_001D4B50; } }
L_001D4CBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[5].w[0] + 16u));  goto L_001D4CD4; }
    c.r[2].d[0] = ld16((c.r[5].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001D4CDC; } }
L_001D4CD4:
    c.r[2].d[0] = c.r[2].d[0] & 61439ull;
    st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D4CDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001D4CE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CF4u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0029(c, 425u, depth + 1u); else { c.pc = 0x001C7020u; return; } if (c.pc != 0x001D4CF4u) [[unlikely]] return; }
L_001D4CF4:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41460000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17221ull;
    set32(c.r[5], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[5], c.r[8].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 15;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  goto L_001D4D48; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D40u); set32(c.r[5], c.r[5].w[0] + 18076u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D4D40u) [[unlikely]] return; }
L_001D4D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4B50u | kUnwind; return; } goto L_001D4B50; } }
L_001D4D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[10].d[0] = c.r[3].d[0] | 17752ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D4DE8; } }
L_001D4D6C:
    set32(c.r[7], c.r[11].w[0] << 8);
    set32(c.r[9], c.r[11].w[0] << 24);
    c.r[8].d[0] = c.r[7].d[0] & c.r[4].d[0];
    set32(c.r[7], c.r[11].w[0] >> 8);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 65280ull;
    c.r[8].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[11].w[0] >> 24);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.budget -= 11;
    if (c.r[7].d[0] == c.r[10].d[0]) { set32(c.r[8], c.r[6].w[0] << 2);  goto L_001D4DB0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DA8u); set32(c.r[5], c.r[5].w[0] + 18076u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D4DA8u) [[unlikely]] return; }
L_001D4DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4B50u | kUnwind; return; } goto L_001D4B50; } }
L_001D4DB0:
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[9], c.r[3].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 18u)));
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[7].d[0]) { set32(c.r[8], ld32((c.r[17].w[0] + 8u)));  goto L_001D4DD8; }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_001D4DF4; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_001D4DD8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[8], c.r[17].w[0] + c.r[8].w[0]);
    set32(c.r[17], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 4;
L_001D4DE8:
    c.r[7].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[11], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4D6Cu | kUnwind; return; } goto L_001D4D6C; }
L_001D4DF4:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 72u);  goto L_001D4E14; }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 72u);
    c.budget -= 6;
L_001D4E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E1Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D4E1Cu) [[unlikely]] return; }
L_001D4E1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 180u)));  goto L_001D4E3C; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 118u, depth + 1u); else { c.pc = 0x002113E0u; return; } if (c.pc != 0x001D4E34u) [[unlikely]] return; }
L_001D4E34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 2;
L_001D4E3C:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
L_001D4E4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D4F2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D4E88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_001D4EA0; }
L_001D4E88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E98u); set32(c.r[5], c.r[5].w[0] + 18090u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D4E98u) [[unlikely]] return; }
L_001D4E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4B50u | kUnwind; return; } goto L_001D4B50; } }
L_001D4EA0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4EA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 180u)));  goto L_001D4ECC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4EC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D4EC4u) [[unlikely]] return; }
L_001D4EC4:
    st32((c.r[16].w[0] + 184u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 2;
L_001D4ECC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F2Cu); st32((c.r[16].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D4F2Cu) [[unlikely]] return; }
L_001D4F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D4F30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D4F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D4F5C; } }
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_001D4F5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D4F84; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F7Cu); st32((c.r[16].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D4F7Cu) [[unlikely]] return; }
L_001D4F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001D5014; } }
L_001D4F84:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001D4F9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_001D4FC0; }
L_001D4F9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FACu); set32(c.r[5], c.r[5].w[0] + 18109u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D4FACu) [[unlikely]] return; }
L_001D4FAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D4FB8u) [[unlikely]] return; }
L_001D4FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5010; } }
L_001D4FC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 176u), c.r[3].w[0]);  goto L_001D5004; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FF0u); set32(c.r[5], c.r[5].w[0] + 18130u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D4FF0u) [[unlikely]] return; }
L_001D4FF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D4FFCu) [[unlikely]] return; }
L_001D4FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5010; } }
L_001D5004:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5010u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D5010u) [[unlikely]] return; }
L_001D5010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D5014:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D5020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D5078; } }
    set32(c.r[5], c.r[17].w[0] + 156u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D50B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5054u);  if (depth < kMaxDepth) unit_002D(c, 48u, depth + 1u); else { c.pc = 0x001D4710u; return; } if (c.pc != 0x001D5054u) [[unlikely]] return; }
L_001D5054:
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[4], c.r[17].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5064u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D5064u) [[unlikely]] return; }
L_001D5064:
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 47u, depth + 1u); else { c.pc = 0x001D46F0u; return; } if (c.pc != 0x001D5070u) [[unlikely]] return; }
L_001D5070:
    set32(c.r[2], c.r[17].w[0] + 156u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 2;
L_001D5078:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D50B0; } }
L_001D5084:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D509Cu); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 48u, depth + 1u); else { c.pc = 0x001D4710u; return; } if (c.pc != 0x001D509Cu) [[unlikely]] return; }
L_001D509C:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50ACu); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 47u, depth + 1u); else { c.pc = 0x001D46F0u; return; } if (c.pc != 0x001D50ACu) [[unlikely]] return; }
L_001D50AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D50B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5084u | kUnwind; return; } goto L_001D5084; }
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D50E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D50DCu) [[unlikely]] return; }
L_001D50DC:
    st32((c.r[17].w[0] + 184u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001D50E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D50ECu) [[unlikely]] return; }
L_001D50EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D5110:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D5248; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  goto L_001D5148; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001D5254; } }
L_001D5148:
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5168u); st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001D5168u) [[unlikely]] return; }
L_001D5168:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5174u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001D5174u) [[unlikely]] return; }
L_001D5174:
    set32(c.r[17], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5184u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001D5184u) [[unlikely]] return; }
L_001D5184:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51A0u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001D51A0u) [[unlikely]] return; }
L_001D51A0:
    set32(c.r[16], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51B0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001D51B0u) [[unlikely]] return; }
L_001D51B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51CCu); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001D51CCu) [[unlikely]] return; }
L_001D51CC:
    set32(c.r[19], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51DCu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001D51DCu) [[unlikely]] return; }
L_001D51DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51F8u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001D51F8u) [[unlikely]] return; }
L_001D51F8:
    set32(c.r[9], ld32((c.r[29].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5218u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 51u, depth + 1u); else { c.pc = 0x001D0820u; return; } if (c.pc != 0x001D5218u) [[unlikely]] return; }
L_001D5218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5228u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001D0600u; return; } if (c.pc != 0x001D5228u) [[unlikely]] return; }
L_001D5228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5238u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001D0600u; return; } if (c.pc != 0x001D5238u) [[unlikely]] return; }
L_001D5238:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001D5250; } }
L_001D5248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5250u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D5250u) [[unlikely]] return; }
L_001D5250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001D5254:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001D5270:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001D53E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D52DC; }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D52BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_001D52C8; }
L_001D52BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D52DC; } }
L_001D52C8:
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D52DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[5].w[0] + 60u)));  if (t) { goto L_001D52DC; } }
L_001D52DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D53DC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x001615D0u; return; } if (c.pc != 0x001D52F4u) [[unlikely]] return; }
L_001D52F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D530C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 132u));
    c.budget -= 3;
L_001D530C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001D5320; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D5338; } }
L_001D5320:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001D5338:
    c.budget -= 2;
    if (c.r[4].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D534C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 134u));
    c.budget -= 3;
L_001D534C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001D5360; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D5378; } }
L_001D5360:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001D5378:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[6].w[0] + 80u);
    set32(c.r[4], 0u + 12u);
    c.budget -= 4;
L_001D5388:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5388u | kUnwind; return; } goto L_001D5388; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D53DCu); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0015AE70u; return; } if (c.pc != 0x001D53DCu) [[unlikely]] return; }
L_001D53DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D53E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001D53F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5408u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 298u, depth + 1u); else { c.pc = 0x001EE850u; return; } if (c.pc != 0x001D5408u) [[unlikely]] return; }
L_001D5408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 13936u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5420u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001D5420u) [[unlikely]] return; }
L_001D5420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45430000u);
    set32(c.r[3], c.r[3].w[0] + 13952u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 17997ull;
    st32((c.r[17].w[0] + 336u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54490000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17997ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 17936u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D5470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D54B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D54A0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 398u, depth + 1u); else { c.pc = 0x0020BDB0u; return; } if (c.pc != 0x001D54A0u) [[unlikely]] return; }
L_001D54A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D54BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D54B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D54B8u) [[unlikely]] return; }
L_001D54B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D54BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D54D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D5538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 13936u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001D5514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5514u); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 398u, depth + 1u); else { c.pc = 0x0020BDB0u; return; } if (c.pc != 0x001D5514u) [[unlikely]] return; }
L_001D5514:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5520u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 299u, depth + 1u); else { c.pc = 0x001EE8A0u; return; } if (c.pc != 0x001D5520u) [[unlikely]] return; }
L_001D5520:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D553C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5538u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D5538u) [[unlikely]] return; }
L_001D5538:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D553C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D5550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D5580; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5578u); set32(c.r[4], c.r[4].w[0] + 18158u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D5578u) [[unlikely]] return; }
L_001D5578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001D558C; } }
L_001D5580:
    st32((c.r[5].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001D558C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D55A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 324u)));  goto L_001D55F8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 324u)));  goto L_001D55EC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D55E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D55E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001D560C; } }
L_001D55E8:
    set32(c.r[3], ld32((c.r[5].w[0] + 324u)));
    c.budget -= 1;
L_001D55EC:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 324u), c.r[3].w[0]);  if (t) { goto L_001D561C; } }
L_001D55F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 324u), c.r[3].w[0]);  if (t) { goto L_001D561C; } }
L_001D560C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5614u); set32(c.r[4], c.r[4].w[0] + 18178u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D5614u) [[unlikely]] return; }
L_001D5614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001D5624; } }
L_001D561C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001D5624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5664u); set32(c.r[6], c.r[6].w[0] + 18037u);  if (depth < kMaxDepth) unit_0033(c, 383u, depth + 1u); else { c.pc = 0x001EF510u; return; } if (c.pc != 0x001D5664u) [[unlikely]] return; }
L_001D5664:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43520000u);
    set32(c.r[3], c.r[3].w[0] + 13872u);
    c.r[2].d[0] = c.r[2].d[0] | 17997ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 188u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5684u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D5684u) [[unlikely]] return; }
L_001D5684:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  goto L_001D56A0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D569Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 29u, depth + 1u); else { c.pc = 0x001D4500u; return; } if (c.pc != 0x001D569Cu) [[unlikely]] return; }
L_001D569C:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_001D56A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D56C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D572C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13872u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D570C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5704u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D5704u) [[unlikely]] return; }
L_001D5704:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001D570C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 387u, depth + 1u); else { c.pc = 0x001EF5A0u; return; } if (c.pc != 0x001D5714u) [[unlikely]] return; }
L_001D5714:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D5730; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D572Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D572Cu) [[unlikely]] return; }
L_001D572C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D5730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D5750:
    c.r[2].d[0] = c.r[5].d[0] ^ 257ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001D5760:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_001D5788; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001D5794; } }
L_001D5788:
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_001D5794:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_001D57BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001D57CC; } }
L_001D57BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001D57CC:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_001D57F4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001D5804; } }
L_001D57F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001D5804:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D5810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_001D5820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 14048u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_001D5860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001D58BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14048u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001D58A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_001D58A0:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001D58B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D58B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D58B8u) [[unlikely]] return; }
L_001D58B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D58BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D58D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5908u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D5908u) [[unlikely]] return; }
L_001D5908:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001D5AEC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001D4000u < 16384u) { entry = entries_002D[(t - 0x001D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D5934:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 2;
L_001D593C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    c.f[21] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[2], c.r[19].w[0] << 8);
    c.f[20] = ld32((c.r[3].w[0] + 16u));
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001D5954:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[13] = c.f[21];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5980u);  if (depth < kMaxDepth) unit_0005(c, 138u, depth + 1u); else { c.pc = 0x001372D8u; return; } if (c.pc != 0x001D5980u) [[unlikely]] return; }
L_001D5980:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D59A4; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_001D59A4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);  goto L_001D59C0; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 2;
L_001D59C0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001D59E4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001D59FC; } }
L_001D59E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_001D59FC:
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0] + 52u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5954u | kUnwind; return; } goto L_001D5954; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D593Cu | kUnwind; return; } goto L_001D593C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5AE8; } }
L_001D5A2C:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], c.r[8].w[0] << 8);
    c.budget -= 3;
L_001D5A38:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001D5A40:
    set32(c.r[4], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 52u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5A40u | kUnwind; return; } goto L_001D5A40; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 8);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5A38u | kUnwind; return; } goto L_001D5A38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5AE8; } }
L_001D5A74:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_001D5A7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001D5AAC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001D5AC4; } }
L_001D5AAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_001D5AC4:
    set32(c.r[2], c.r[17].w[0] << 8);
    set32(c.r[6], 0u + 256u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5AD8u); set32(c.r[4], c.r[2].w[0] + 52u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001D5AD8u) [[unlikely]] return; }
L_001D5AD8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5A7Cu | kUnwind; return; } goto L_001D5A7C; }
L_001D5AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001D5AEC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001D5B10:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001D5B6C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 18256u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001D4000u < 16384u) { entry = entries_002D[(t - 0x001D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D5B6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B78u); set32(c.r[4], c.r[4].w[0] + 18310u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D5B78u) [[unlikely]] return; }
L_001D5B78:
    set32(c.r[6], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D5B88u) [[unlikely]] return; }
L_001D5B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_001D6328; } }
L_001D5B90:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_001D5BB8; } }
L_001D5B9C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5B9Cu | kUnwind; return; } goto L_001D5B9C; } }
L_001D5BB8:
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001D5BE4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 28u));  if (t) { goto L_001D5BFC; } }
L_001D5BE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.budget -= 6;
L_001D5BFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 176u), c.r[5].w[0]);  if (t) { goto L_001D5C24; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 32u));  if (t) { goto L_001D5C40; } }
L_001D5C24:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 7;
L_001D5C40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 180u), c.r[5].w[0]);  if (t) { goto L_001D5C68; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5C80; } }
L_001D5C68:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_001D5C80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 18244u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 18248u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 18240u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 184u), c.r[8].w[0]);  if (t) { goto L_001D5D50; } }
L_001D5CAC:
    set32(c.r[4], c.r[17].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[10], c.r[18].w[0] + c.r[10].w[0]);
    c.r[12].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[4], c.r[19].w[0] >> 8);
    mmi::mult(c, 0, c.r[5].w[0], c.r[12].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    mmi::mult(c, 1, c.r[7].w[0], c.r[4].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[13], c.r[12].w[0] + 255u);
    set32(c.r[4], c.r[19].w[0] >> 16);
    c.r[12].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[14], c.r[13].w[0] >> 8);
    set32(c.r[4], c.r[19].w[0] >> 24);
    set32(c.r[13], c.r[15].w[0] + 255u);
    set32(c.r[15], c.r[13].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[13], c.r[4].w[0] << 24);
    set32(c.r[14], c.r[15].w[0] + c.r[14].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[12].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 255u);
    set32(c.r[4], c.r[4].w[0] >> 8);
    set32(c.r[4], c.r[4].w[0] + c.r[14].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[8].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + 255u);
    set32(c.r[12], c.r[12].w[0] >> 8);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[12], c.r[12].w[0] << 16);
    c.r[13].d[0] = c.r[13].d[0] | c.r[12].d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[11].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + 255u);
    set32(c.r[12], c.r[12].w[0] >> 8);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[12], c.r[12].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] + 255u);
    c.r[12].d[0] = c.r[13].d[0] | c.r[12].d[0];
    set32(c.r[4], c.r[4].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[12].d[0];
    st32((c.r[10].w[0]), c.r[4].w[0]);
    c.budget -= 41;
L_001D5D50:
    c.r[4].d[0] = c.r[9].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[10], c.r[9].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5CACu | kUnwind; return; } goto L_001D5CAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6324; } }
L_001D5D64:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_001D5D8C; } }
L_001D5D70:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5D70u | kUnwind; return; } goto L_001D5D70; } }
L_001D5D8C:
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001D5DB8; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 28u));  if (t) { goto L_001D5DD0; } }
L_001D5DB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.budget -= 6;
L_001D5DD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 160u), c.r[5].w[0]);  if (t) { goto L_001D5DF8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 32u));  if (t) { goto L_001D5E14; } }
L_001D5DF8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 7;
L_001D5E14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 164u), c.r[5].w[0]);  if (t) { goto L_001D5E3C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5E54; } }
L_001D5E3C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_001D5E54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[3].w[0] + 18244u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 18248u)));
    set32(c.r[5], 0u + 255u);
    set32(c.r[12], ld32((c.r[29].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 18240u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[9].w[0]);  if (t) { goto L_001D5F2C; } }
L_001D5E84:
    set32(c.r[4], c.r[17].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[20], ld32((c.r[4].w[0])));
    set32(c.r[11], c.r[18].w[0] + c.r[11].w[0]);
    c.r[13].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[4], c.r[20].w[0] >> 8);
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    mmi::mult(c, 1, c.r[8].w[0], c.r[4].w[0]);
    c.r[13].d[0] = c.lo.d[1];
    set32(c.r[14], c.r[13].w[0] + 255u);
    set32(c.r[4], c.r[20].w[0] >> 16);
    c.r[13].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[15], c.r[14].w[0] >> 8);
    set32(c.r[4], c.r[20].w[0] >> 24);
    set32(c.r[14], c.r[19].w[0] + 255u);
    set32(c.r[19], c.r[14].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[14], c.r[4].w[0] << 24);
    set32(c.r[15], c.r[19].w[0] + c.r[15].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 255u);
    set32(c.r[4], c.r[4].w[0] >> 8);
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    set32(c.r[13], c.r[13].w[0] + 255u);
    set32(c.r[13], c.r[13].w[0] >> 8);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[13], c.r[13].w[0] << 16);
    c.r[14].d[0] = c.r[14].d[0] | c.r[13].d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[12].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[13], c.r[13].w[0] + 255u);
    set32(c.r[13], c.r[13].w[0] >> 8);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[13], c.r[13].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] + 255u);
    c.r[13].d[0] = c.r[14].d[0] | c.r[13].d[0];
    set32(c.r[4], c.r[4].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[13].d[0];
    st32((c.r[11].w[0]), c.r[4].w[0]);
    c.budget -= 42;
L_001D5F2C:
    c.r[4].d[0] = c.r[10].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[11], c.r[10].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5E84u | kUnwind; return; } goto L_001D5E84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6324; } }
L_001D5F40:
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_001D5F68; } }
L_001D5F4C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5F4Cu | kUnwind; return; } goto L_001D5F4C; } }
L_001D5F68:
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001D5F94; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 28u));  if (t) { goto L_001D5FAC; } }
L_001D5F94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.budget -= 6;
L_001D5FAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 144u), c.r[5].w[0]);  if (t) { goto L_001D5FD4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 32u));  if (t) { goto L_001D5FF0; } }
L_001D5FD4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 7;
L_001D5FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 148u), c.r[5].w[0]);  if (t) { goto L_001D6018; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 36u));  if (t) { goto L_001D6034; } }
L_001D6018:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.budget -= 7;
L_001D6034:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 152u), c.r[5].w[0]);  if (t) { goto L_001D605C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[19], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6074; } }
L_001D605C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.r[19].d[0] = c.r[19].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_001D6074:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[14], 0u + 255u);
    set32(c.r[25], ld32((c.r[3].w[0] + 18244u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[21], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[13], c.r[14].w[0] - c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[24], ld32((c.r[3].w[0] + 18248u)));
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[15], ld32((c.r[3].w[0] + 18240u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_001D629C; } }
L_001D60B4:
    set32(c.r[5], c.r[17].w[0] + c.r[12].w[0]);
    set32(c.r[11], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[5], c.r[11].w[0] >> 8);
    c.r[9].d[0] = c.r[11].d[0] & 255ull;
    c.r[22].d[0] = c.r[5].d[0] & 255ull;
    mmi::mult(c, 0, c.r[15].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[11].w[0] >> 16);
    c.r[10].d[0] = c.r[5].d[0] & 255ull;
    mmi::mult(c, 1, c.r[25].w[0], c.r[22].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    set32(c.r[7], c.r[5].w[0] + 255u);
    mmi::mult(c, 1, c.r[10].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[8].w[0] + 255u);
    mmi::mult(c, 1, c.r[22].w[0], c.r[13].w[0]);
    c.r[22].d[0] = c.lo.d[1];
    set32(c.r[7], c.r[7].w[0] >> 8);
    set32(c.r[8], c.r[8].w[0] >> 8);
    set32(c.r[5], c.r[5].w[0] + 255u);
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[22], c.r[22].w[0] + 255u);
    mmi::mult(c, 1, c.r[9].w[0], c.r[13].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    set32(c.r[5], c.r[5].w[0] >> 8);
    mmi::mult(c, 0, c.r[24].w[0], c.r[10].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] + 255u);
    set32(c.r[7], c.r[7].w[0] >> 8);
    set32(c.r[22], c.r[22].w[0] >> 8);
    set32(c.r[9], c.r[9].w[0] + 255u);
    set32(c.r[9], c.r[9].w[0] >> 8);
    set32(c.r[10], c.r[9].w[0] + c.r[8].w[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[6].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 255u);
    set32(c.r[8], c.r[8].w[0] >> 8);
    mmi::mult(c, 0, c.r[8].w[0], c.r[19].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 255u);
    set32(c.r[9], c.r[8].w[0] >> 8);
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 255u);
    set32(c.r[8], c.r[8].w[0] >> 8);
    mmi::mult(c, 0, c.r[8].w[0], c.r[19].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[21].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 255u);
    set32(c.r[8], c.r[8].w[0] >> 8);
    set32(c.r[10], c.r[10].w[0] + 255u);
    set32(c.r[10], c.r[10].w[0] >> 8);
    mmi::mult(c, 0, c.r[10].w[0], c.r[19].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[10].w[0] + 255u);
    set32(c.r[10], c.r[10].w[0] >> 8);
    c.budget -= 49;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[10], c.r[10].w[0] + c.r[7].w[0]);  if (t) { goto L_001D6188; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[7].w[0] + c.r[10].w[0]);  if (t) { goto L_001D61A0; } }
L_001D6188:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[23].d[0];
    set32(c.r[10], c.r[7].w[0] + c.r[10].w[0]);
    c.budget -= 6;
L_001D61A0:
    c.r[1].d[0] = c.r[10].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D61B0; } }
    c.r[10].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 1;
L_001D61B0:
    c.budget -= 2;
    if (c.r[10].sd[0] >= 0) { c.f[0] = ld32((c.r[4].w[0] + 48u));  goto L_001D61C0; }
    c.r[10].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 2;
L_001D61C0:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_001D61DC; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);  if (t) { goto L_001D61F0; } }
L_001D61DC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[23].d[0];
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    c.budget -= 5;
L_001D61F0:
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D6204; } }
    c.r[5].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 1;
L_001D6204:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.f[0] = ld32((c.r[4].w[0] + 44u));  goto L_001D6214; }
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.budget -= 2;
L_001D6214:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_001D6230; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[22].w[0]);  if (t) { goto L_001D6244; } }
L_001D6230:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[23].d[0];
    set32(c.r[8], c.r[8].w[0] + c.r[22].w[0]);
    c.budget -= 5;
L_001D6244:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D6258; } }
    c.r[7].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 1;
L_001D6258:
    c.budget -= 2;
    if (c.r[7].sd[0] >= 0) { set32(c.r[8], c.r[11].w[0] >> 24);  goto L_001D6268; }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[11].w[0] >> 24);
    c.budget -= 2;
L_001D6268:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[9].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[8], c.r[5].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 24);
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[7].d[0] = c.r[9].d[0] | c.r[8].d[0];
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[7].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.r[5].d[0] = c.r[10].d[0] & 255ull;
    c.r[7].d[0] = c.r[5].d[0] | c.r[7].d[0];
    set32(c.r[5], c.r[18].w[0] + c.r[12].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 13;
L_001D629C:
    c.r[5].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[12], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D60B4u | kUnwind; return; } goto L_001D60B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6324; } }
L_001D62B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001D6318; } }
L_001D62B8:
    set32(c.r[6], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[10].w[0] >> 16);
    set32(c.r[6], c.r[10].w[0] >> 24);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[6].w[0] << 24);
    c.r[9].d[0] = ld8((c.r[7].w[0] + 564u));
    set32(c.r[6], c.r[10].w[0] >> 8);
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = c.r[10].d[0] & 255ull;
    c.r[7].d[0] = ld8((c.r[7].w[0] + 308u));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 52u));
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 24;
L_001D6318:
    c.r[5].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D62B8u | kUnwind; return; } goto L_001D62B8; }
L_001D6324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001D6328:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001D6350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6374u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D6374u) [[unlikely]] return; }
L_001D6374:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D63A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D63A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D63A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D63A8u) [[unlikely]] return; }
L_001D63A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 18335u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), 0u);  goto L_001D63F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D63C4u); set32(c.r[4], c.r[4].w[0] + 18335u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001D63C4u) [[unlikely]] return; }
L_001D63C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 18335u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D63F4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[18].w[0] + 8u);  goto L_001D63E8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D63F4; } }
L_001D63E8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D63F4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001D63F4u) [[unlikely]] return; }
L_001D63F4:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001D63F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6400u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D6400u) [[unlikely]] return; }
L_001D6400:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_001D6444; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D6444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D6444u) [[unlikely]] return; }
L_001D6444:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  goto L_001D6460; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 4;
L_001D6460:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D6484; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D6484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6484u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D6484u) [[unlikely]] return; }
L_001D6484:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D6488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6490u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D6490u) [[unlikely]] return; }
L_001D6490:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D64E0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D64E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D64E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D64E0u) [[unlikely]] return; }
L_001D64E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  goto L_001D64FC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 4;
L_001D64FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D6520; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D6520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6520u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D6520u) [[unlikely]] return; }
L_001D6520:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6488u | kUnwind; return; } goto L_001D6488; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001D6550:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6578u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001D6578u) [[unlikely]] return; }
L_001D6578:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6584u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001D6584u) [[unlikely]] return; }
L_001D6584:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
L_001D6590:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D659Cu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001D659Cu) [[unlikely]] return; }
L_001D659C:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D65B8u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001D65B8u) [[unlikely]] return; }
L_001D65B8:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 68u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6590u | kUnwind; return; } goto L_001D6590; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D65E0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002D(c, 163u, depth + 1u); else { c.pc = 0x001D58D0u; return; } if (c.pc != 0x001D65E0u) [[unlikely]] return; }
L_001D65E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D6600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30516u)));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001D662C; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D662Cu); c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 256u, depth + 1u); else { c.pc = 0x001D6D00u; return; } if (c.pc != 0x001D662Cu) [[unlikely]] return; }
L_001D662C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D6640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001D6654u) [[unlikely]] return; }
L_001D6654:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474C0000u);
    set32(c.r[3], c.r[3].w[0] + 14128u);
    c.r[2].d[0] = c.r[2].d[0] | 17485ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 12u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D66B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D6718; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14128u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D66F8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D66F0u); set32(c.r[5], c.r[5].w[0] + 26416u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001D66F0u) [[unlikely]] return; }
L_001D66F0:
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001D66F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001D6700u) [[unlikely]] return; }
L_001D6700:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D671C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6718u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D6718u) [[unlikely]] return; }
L_001D6718:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D671C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D6730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D6790; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001D677C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6778; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D6778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D6778u) [[unlikely]] return; }
L_001D6778:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001D677C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D6794; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D6790u) [[unlikely]] return; }
L_001D6790:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D6794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D67B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_001D6800; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D67FCu); set32(c.r[5], c.r[5].w[0] + 26416u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001D67FCu) [[unlikely]] return; }
L_001D67FC:
    st32((c.r[21].w[0] + 52u), 0u);
    c.budget -= 1;
L_001D6800:
    c.budget -= 2;
    if (c.r[20].sd[0] > 0) { set32(c.r[2], c.r[20].w[0] << 3);  goto L_001D6810; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 56u), 0u);  if (t) { goto L_001D6840; } }
L_001D6810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6818u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001D6818u) [[unlikely]] return; }
L_001D6818:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26752u);
    set32(c.r[6], c.r[6].w[0] + 26416u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6838u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x001D6838u) [[unlikely]] return; }
L_001D6838:
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 56u), c.r[20].w[0]);
    c.budget -= 2;
L_001D6840:
    st32((c.r[21].w[0] + 60u), 0u);
    st32((c.r[21].w[0] + 64u), 0u);
    st32((c.r[21].w[0] + 68u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 72u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 76u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 80u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001D6880:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001D6890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001D6968; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_001D68F0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D68EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D68ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D68ECu) [[unlikely]] return; }
L_001D68EC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001D68F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[4].w[0]);  goto L_001D6908; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_001D6908:
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 64u)));  goto L_001D6940; }
    st32((c.r[19].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 2;
L_001D6940:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001D696C; }
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D6968; } }
    st32((c.r[19].w[0] + 60u), 0u);
    c.budget -= 1;
L_001D6968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001D696C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D6990:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D6B5C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001D6B60; }
    set32(c.r[18], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69D4u); set32(c.r[19], ld32((c.r[20].w[0] + 68u)));  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x001D69D4u) [[unlikely]] return; }
L_001D69D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69DCu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x001D69DCu) [[unlikely]] return; }
L_001D69DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 60u)));  if (t) { goto L_001D6A34; } }
L_001D69E4:
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69F4u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0011(c, 103u, depth + 1u); else { c.pc = 0x00164C50u; return; } if (c.pc != 0x001D69F4u) [[unlikely]] return; }
L_001D69F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001D6A0C; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001D6A0C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A18u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D6A18u) [[unlikely]] return; }
L_001D6A18:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6A34; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D6A34:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D69E4u | kUnwind; return; } goto L_001D69E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A48u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x001D6A48u) [[unlikely]] return; }
L_001D6A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A50u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001D6A50u) [[unlikely]] return; }
L_001D6A50:
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A68u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x001D6A68u) [[unlikely]] return; }
L_001D6A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A70u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001D6A70u) [[unlikely]] return; }
L_001D6A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001D6A78u) [[unlikely]] return; }
L_001D6A78:
    set32(c.r[9], ld32((c.r[20].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = c.r[9].w[0];
    set32(c.r[8], ld32((c.r[20].w[0] + 68u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[6], c.r[6].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 8u);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 34;
L_001D6B00:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6B00u | kUnwind; return; } goto L_001D6B00; } }
    st32((c.r[29].w[0] + 96u), c.f[4]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[4]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B50u); st32((c.r[29].w[0] + 144u), c.f[3]);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x001D6B50u) [[unlikely]] return; }
L_001D6B50:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x001D6B5Cu) [[unlikely]] return; }
L_001D6B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001D6B60:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001D6B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 291u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B98u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001D6B98u) [[unlikely]] return; }
L_001D6B98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474C0000u);
    set32(c.r[3], c.r[3].w[0] + 14064u);
    c.r[2].d[0] = c.r[2].d[0] | 17997ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6BB8u); st32((c.r[28].w[0] - 30516u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001D6BB8u) [[unlikely]] return; }
L_001D6BB8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x001D0000u);  goto L_001D6BD8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6BD0u); set32(c.r[5], c.r[5].w[0] + 18352u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D6BD0u) [[unlikely]] return; }
L_001D6BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 84u);  if (t) { goto L_001D6BF4; } }
L_001D6BD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 26112u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6BF0u); set32(c.r[5], c.r[5].w[0] + 18377u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x001D6BF0u) [[unlikely]] return; }
L_001D6BF0:
    set32(c.r[4], 0u + 84u);
    c.budget -= 1;
L_001D6BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6BFCu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D6BFCu) [[unlikely]] return; }
L_001D6BFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  goto L_001D6C14; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 211u, depth + 1u); else { c.pc = 0x001D6640u; return; } if (c.pc != 0x001D6C10u) [[unlikely]] return; }
L_001D6C10:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_001D6C14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 320u);
    set32(c.r[7], 0u + 60u);
    set32(c.r[8], 0u + 14u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C30u); set32(c.r[9], 0u + 23u);  if (depth < kMaxDepth) unit_002D(c, 220u, depth + 1u); else { c.pc = 0x001D67B0u; return; } if (c.pc != 0x001D6C30u) [[unlikely]] return; }
L_001D6C30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D6C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D6CDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14064u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C7Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001D6C7Cu) [[unlikely]] return; }
L_001D6C7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 30516u), 0u);  if (t) { goto L_001D6C9C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C94u); set32(c.r[5], c.r[5].w[0] + 18352u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D6C94u) [[unlikely]] return; }
L_001D6C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D6CBC; } }
L_001D6C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CA4u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001D6CA4u) [[unlikely]] return; }
L_001D6CA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 68u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CB8u); set32(c.r[5], c.r[5].w[0] + 18407u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x001D6CB8u) [[unlikely]] return; }
L_001D6CB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D6CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001D6CC4u) [[unlikely]] return; }
L_001D6CC4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D6CE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D6CDCu) [[unlikely]] return; }
L_001D6CDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D6CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D6D00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 76u), 0u);  if (t) { goto L_001D6D78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D6D60; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D6D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D6D94; } }
L_001D6D48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D58u); set32(c.r[5], c.r[5].w[0] + 18434u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001D6D58u) [[unlikely]] return; }
L_001D6D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_001D6DC0; } }
L_001D6D60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D70u); set32(c.r[5], c.r[5].w[0] + 18441u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001D6D70u) [[unlikely]] return; }
L_001D6D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6DBC; } }
L_001D6D78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D88u); set32(c.r[5], c.r[5].w[0] + 18448u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001D6D88u) [[unlikely]] return; }
L_001D6D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6DBC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D6D94:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D7054; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D7050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6DB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D6DB4u) [[unlikely]] return; }
L_001D6DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7050; } }
L_001D6DBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001D6DC0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D6E7C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D6E30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001D6EC4; } }
L_001D6DE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D6DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0])));  if (t) { goto L_001D6E18; } }
L_001D6DF8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001D6E18; }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6E18; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D6E18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E28u); set32(c.r[5], c.r[5].w[0] + 18455u);  if (depth < kMaxDepth) unit_0022(c, 23u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x001D6E28u) [[unlikely]] return; }
L_001D6E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_001D6EF0; } }
L_001D6E30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D6E44; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D6E58; } }
L_001D6E44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D6E54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[17].w[0]));  if (t) { goto L_001D6E58; } }
L_001D6E54:
    c.f[12] = 0u;
    c.budget -= 1;
L_001D6E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E60u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001D6E60u) [[unlikely]] return; }
L_001D6E60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[5].w[0] + 18460u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E74u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 23u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x001D6E74u) [[unlikely]] return; }
L_001D6E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6EEC; } }
L_001D6E7C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_001D6E94; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 18344u);  if (t) { goto L_001D6EA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_001D6E94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001D6EA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_001D6EA8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001D6EA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EB8u); set32(c.r[5], c.r[5].w[0] + 18465u);  if (depth < kMaxDepth) unit_0022(c, 23u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x001D6EB8u) [[unlikely]] return; }
L_001D6EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6EEC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_001D6EC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D7050; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D7050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D6EE4u) [[unlikely]] return; }
L_001D6EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7050; } }
L_001D6EEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001D6EF0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D6FAC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D6F60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001D6FF4; } }
L_001D6F18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D6F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0])));  if (t) { goto L_001D6F48; } }
L_001D6F28:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001D6F48; }
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6F48; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D6F48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F58u); set32(c.r[5], c.r[5].w[0] + 18472u);  if (depth < kMaxDepth) unit_0022(c, 23u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x001D6F58u) [[unlikely]] return; }
L_001D6F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_001D7020; } }
L_001D6F60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D6F74; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D6F88; } }
L_001D6F74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D6F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0]));  if (t) { goto L_001D6F88; } }
L_001D6F84:
    c.f[12] = 0u;
    c.budget -= 1;
L_001D6F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F90u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001D6F90u) [[unlikely]] return; }
L_001D6F90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FA4u); set32(c.r[5], c.r[5].w[0] + 18475u);  if (depth < kMaxDepth) unit_0022(c, 23u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x001D6FA4u) [[unlikely]] return; }
L_001D6FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D701C; } }
L_001D6FAC:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001D6FC4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 18344u);  if (t) { goto L_001D6FD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001D6FC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001D6FD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_001D6FD8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001D6FD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FE8u); set32(c.r[5], c.r[5].w[0] + 18478u);  if (depth < kMaxDepth) unit_0022(c, 23u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x001D6FE8u) [[unlikely]] return; }
L_001D6FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D701C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_001D6FF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D7050; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D7050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D7014u) [[unlikely]] return; }
L_001D7014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7050; } }
L_001D701C:
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 1;
L_001D7020:
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D702Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002D(c, 225u, depth + 1u); else { c.pc = 0x001D6890u; return; } if (c.pc != 0x001D702Cu) [[unlikely]] return; }
L_001D702C:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D7050; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D7050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7050u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D7050u) [[unlikely]] return; }
L_001D7050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D7054:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D7070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7090u); set32(c.r[6], 0u + 263u);  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001D7090u) [[unlikely]] return; }
L_001D7090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D70A4u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 277u, depth + 1u); else { c.pc = 0x001D70F0u; return; } if (c.pc != 0x001D70A4u) [[unlikely]] return; }
L_001D70A4:
    st32((c.r[17].w[0] + 1348u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53520000u);
    st32((c.r[17].w[0] + 1352u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = c.r[2].d[0] | 20557ull;
    st32((c.r[17].w[0] + 1356u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D70CCu); set32(c.r[5], c.r[5].w[0] + 18496u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001D70CCu) [[unlikely]] return; }
L_001D70CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D70F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 208u), 0u);
    st32((c.r[4].w[0] + 212u), 0u);
    st32((c.r[4].w[0] + 216u), 0u);
    st32((c.r[4].w[0] + 220u), 0u);
    st32((c.r[4].w[0] + 1332u), 0u);
    st32((c.r[4].w[0] + 224u), 0u);
    st32((c.r[4].w[0] + 228u), 0u);
    c.budget -= 15;
L_001D712C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 232u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D712Cu | kUnwind; return; } goto L_001D712C; } }
    st32((c.r[16].w[0] + 1320u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1324u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 160u);
    st32((c.r[16].w[0] + 1328u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 1336u), 0u);
    set32(c.r[6], 0u + 48u);
    st32((c.r[16].w[0] + 1344u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7174u); st32((c.r[16].w[0] + 1340u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001D7174u) [[unlikely]] return; }
L_001D7174:
    set32(c.r[3], 0u + 640u);
    set32(c.r[4], 0u + 480u);
    st16((c.r[16].w[0] + 172u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 174u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D71A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D71F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71CCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 284u, depth + 1u); else { c.pc = 0x001D7210u; return; } if (c.pc != 0x001D71CCu) [[unlikely]] return; }
L_001D71CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001D71D8u) [[unlikely]] return; }
L_001D71D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D71F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D71F0u) [[unlikely]] return; }
L_001D71F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D71F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D7210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1336u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1340u)));  goto L_001D724C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7244u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D7244u) [[unlikely]] return; }
L_001D7244:
    st32((c.r[16].w[0] + 1336u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1340u)));
    c.budget -= 2;
L_001D724C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  goto L_001D726C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7264u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D7264u) [[unlikely]] return; }
L_001D7264:
    st32((c.r[16].w[0] + 1340u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 2;
L_001D726C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  goto L_001D728C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D7284u) [[unlikely]] return; }
L_001D7284:
    st32((c.r[16].w[0] + 208u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 2;
L_001D728C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 220u)));  goto L_001D72AC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D72A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D72A4u) [[unlikely]] return; }
L_001D72A4:
    st32((c.r[16].w[0] + 216u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 2;
L_001D72AC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1332u)));  goto L_001D72C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D72BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001D72BCu) [[unlikely]] return; }
L_001D72BC:
    st32((c.r[16].w[0] + 220u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1332u)));
    c.budget -= 2;
L_001D72C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  goto L_001D72DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D72D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001D72D4u) [[unlikely]] return; }
L_001D72D4:
    st32((c.r[16].w[0] + 1332u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 2;
L_001D72DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 212u)));  goto L_001D731C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D72ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001D72ECu) [[unlikely]] return; }
L_001D72EC:
    st32((c.r[16].w[0] + 224u), 0u);
    set32(c.r[18], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D731C; } }
L_001D72FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7308u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 297u, depth + 1u); else { c.pc = 0x001D7390u; return; } if (c.pc != 0x001D7308u) [[unlikely]] return; }
L_001D7308:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = c.r[17].d[0] + 0ull;  goto L_001D731C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7318u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D7318u) [[unlikely]] return; }
L_001D7318:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D731C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D72FCu | kUnwind; return; } goto L_001D72FC; }
    st32((c.r[16].w[0] + 212u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 3;
L_001D7330:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 232u);  if (t) { goto L_001D734C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7348u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001D7348u) [[unlikely]] return; }
L_001D7348:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001D734C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7330u | kUnwind; return; } goto L_001D7330; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16383ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D7390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D73BC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D73B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D73B8u) [[unlikely]] return; }
L_001D73B8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001D73BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D73D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 212u)));  if (t) { goto L_001D740C; } }
L_001D73D8:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_001D73EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_001D7418; } }
L_001D73EC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 16u)));  goto L_001D740C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001D7408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_001D7418; } }
L_001D7408:
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_001D740C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D73D8u | kUnwind; return; } goto L_001D73D8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D7418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D7420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001D74DC; }
    set32(c.r[16], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001D74D0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001D744C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[7].d[0] = c.r[16].d[0] + 0ull;  goto L_001D74CC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001D74C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001D74D8; } }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_001D74A4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7488u); st32((c.r[4].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 297u, depth + 1u); else { c.pc = 0x001D7390u; return; } if (c.pc != 0x001D7488u) [[unlikely]] return; }
L_001D7488:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D74D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7498u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D7498u) [[unlikely]] return; }
L_001D7498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D74C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001D74A4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74B0u); st32((c.r[7].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 297u, depth + 1u); else { c.pc = 0x001D7390u; return; } if (c.pc != 0x001D74B0u) [[unlikely]] return; }
L_001D74B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D74D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D74C0u) [[unlikely]] return; }
L_001D74C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D74D8; } }
L_001D74C8:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D74CC:
    set32(c.r[16], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001D74D0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D744Cu | kUnwind; return; } goto L_001D744C; }
L_001D74D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D74DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D74F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D7500u) [[unlikely]] return; }
L_001D7500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D7510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7524u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 284u, depth + 1u); else { c.pc = 0x001D7210u; return; } if (c.pc != 0x001D7524u) [[unlikely]] return; }
L_001D7524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D752Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 277u, depth + 1u); else { c.pc = 0x001D70F0u; return; } if (c.pc != 0x001D752Cu) [[unlikely]] return; }
L_001D752C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7538u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D7538u) [[unlikely]] return; }
L_001D7538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D7550:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[5], 0u + 100u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D7F40; } }
    set32(c.r[5], 0u + 60u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 60u);  goto L_001D7F04; }
    set32(c.r[5], 0u + 50u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 50u);  goto L_001D7E78; }
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 40u);  goto L_001D7DEC; }
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));  goto L_001D7DD0; }
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], ld32((c.r[21].w[0] + 216u)));  goto L_001D7D68; }
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_001D7CB8; }
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], ld32((c.r[21].w[0] + 208u)));  goto L_001D7BA8; }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 20u);  goto L_001D77F4; }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 10u);  goto L_001D7730; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 1336u)));  goto L_001D76B0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_001D7648; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u - 1u);  goto L_001D7620; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_001D7F84; } }
L_001D761C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001D7620:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D762Cu); st32((c.r[21].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 284u, depth + 1u); else { c.pc = 0x001D7210u; return; } if (c.pc != 0x001D762Cu) [[unlikely]] return; }
L_001D762C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7634u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 277u, depth + 1u); else { c.pc = 0x001D70F0u; return; } if (c.pc != 0x001D7634u) [[unlikely]] return; }
L_001D7634:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7640u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D7640u) [[unlikely]] return; }
L_001D7640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7F80; } }
L_001D7648:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D765Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D765Cu) [[unlikely]] return; }
L_001D765C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7F80; } }
L_001D7664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D766Cu);  if (depth < kMaxDepth) unit_002D(c, 284u, depth + 1u); else { c.pc = 0x001D7210u; return; } if (c.pc != 0x001D766Cu) [[unlikely]] return; }
L_001D766C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7674u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D7674u) [[unlikely]] return; }
L_001D7674:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 1336u), c.r[4].w[0]);  goto L_001D76A0; }
    set32(c.r[8], ld32((c.r[21].w[0] + 156u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 152u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7698u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0029(c, 365u, depth + 1u); else { c.pc = 0x001C63E0u; return; } if (c.pc != 0x001D7698u) [[unlikely]] return; }
L_001D7698:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[21].w[0] + 1336u), c.r[4].w[0]);
    c.budget -= 2;
L_001D76A0:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 1336u)));
    c.budget -= 4;
L_001D76B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D7F80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D76E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] & 128ull;  goto L_001D76FC; }
L_001D76E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76F4u); set32(c.r[5], c.r[5].w[0] + 18630u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D76F4u) [[unlikely]] return; }
L_001D76F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D761Cu | kUnwind; return; } goto L_001D761C; } }
L_001D76FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 1336u)));  goto L_001D7714; }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 1336u)));
    c.budget -= 4;
L_001D7714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D771Cu);  if (depth < kMaxDepth) unit_0029(c, 425u, depth + 1u); else { c.pc = 0x001C7020u; return; } if (c.pc != 0x001D771Cu) [[unlikely]] return; }
L_001D771C:
    st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_001D772C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_001D7730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17987ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 17;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 100u);  goto L_001D7F44; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D530000u);
    c.r[2].d[0] = c.r[2].d[0] | 20035ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D7F00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D500000u);
    c.r[2].d[0] = c.r[3].d[0] | 16716ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D7E74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.r[2].d[0] = c.r[2].d[0] | 17225ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D7DE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D450000u);
    c.r[2].d[0] = c.r[2].d[0] | 17990ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D7CB4; } }
    c.r[2].d[0] = c.r[3].d[0] | 19534ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D77F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D77D4u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D77D4u) [[unlikely]] return; }
L_001D77D4:
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D77F0:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_001D77F4:
    set32(c.r[4], c.r[21].w[0] + 160u);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[6], 0u + 48u);
    set32(c.r[3], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7814u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D7814u) [[unlikely]] return; }
L_001D7814:
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001D788C; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[21].w[0] + 296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7830u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D7830u) [[unlikely]] return; }
L_001D7830:
    st32((c.r[21].w[0] + 1320u), 0u);
    set32(c.r[3], 0u + 2304u);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[4].d[0] & 3840ull;
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 256u);  goto L_001D7884; }
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D7880; } }
    set32(c.r[3], 0u + 2048u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 16u);  goto L_001D7878; }
    set32(c.r[3], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D7874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7888; } }
L_001D7874:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_001D7878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1320u), c.r[3].w[0]);  if (t) { goto L_001D7888; } }
L_001D7880:
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_001D7884:
    st32((c.r[21].w[0] + 1320u), c.r[3].w[0]);
    c.budget -= 1;
L_001D7888:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001D788C:
    set32(c.r[5], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[20], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_001D7B8C; } }
L_001D78A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x454F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17987ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 88u)));  goto L_001D7B9C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17217ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  goto L_001D7938; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D440000u);
    c.r[2].d[0] = c.r[2].d[0] | 17223ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 80u);  goto L_001D7908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001D7B68; } }
L_001D7908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7910u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D7910u) [[unlikely]] return; }
L_001D7910:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 208u), c.r[4].w[0]);  goto L_001D7B7C; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7928u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 179u, depth + 1u); else { c.pc = 0x00205F60u; return; } if (c.pc != 0x001D7928u) [[unlikely]] return; }
L_001D7928:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[21].w[0] + 208u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7B7C; } }
L_001D7938:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[19].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[22], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D795Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001D795Cu) [[unlikely]] return; }
L_001D795C:
    set32(c.r[3], ld32((c.r[21].w[0] + 228u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 232u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7988u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D7988u) [[unlikely]] return; }
L_001D7988:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 52u)));  goto L_001D7A2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D440000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 148u)));
    c.r[5].d[0] = c.r[2].d[0] | 17223ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 228u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 232u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79CCu); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x001D79CCu) [[unlikely]] return; }
L_001D79CC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79D8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001D79D8u) [[unlikely]] return; }
L_001D79D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u + 80u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79F4u); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D79F4u) [[unlikely]] return; }
L_001D79F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), c.r[4].w[0]);  goto L_001D7A14; }
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7A0Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 179u, depth + 1u); else { c.pc = 0x00205F60u; return; } if (c.pc != 0x001D7A0Cu) [[unlikely]] return; }
L_001D7A0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 2;
L_001D7A14:
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 212u)));
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 212u), c.r[19].w[0]);  if (t) { goto L_001D7B58; } }
L_001D7A2C:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 228u)));  goto L_001D7B5C; }
    set32(c.r[6], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001D7A68; } }
L_001D7A48:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[18].d[0]; set32(c.r[17], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_001D7A74; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001D7A68:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7A48u | kUnwind; return; } goto L_001D7A48; }
L_001D7A74:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D7B58; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001D7AA0; } }
L_001D7A8C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_001D7AAC; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001D7AA0:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7A8Cu | kUnwind; return; } goto L_001D7A8C; }
L_001D7AAC:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[4].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 212u)));  goto L_001D7AE0; }
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 212u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7AE0; } }
L_001D7AC8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_001D7AE0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_001D7AE8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001D7AE0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7AC8u | kUnwind; return; } goto L_001D7AC8; }
L_001D7AE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D7B58; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D440000u);
    c.r[5].d[0] = c.r[2].d[0] | 17223ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B08u); set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x001D7B08u) [[unlikely]] return; }
L_001D7B08:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B14u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001D7B14u) [[unlikely]] return; }
L_001D7B14:
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B28u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D7B28u) [[unlikely]] return; }
L_001D7B28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[4].w[0]);  goto L_001D7B48; }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B40u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 179u, depth + 1u); else { c.pc = 0x00205F60u; return; } if (c.pc != 0x001D7B40u) [[unlikely]] return; }
L_001D7B40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 2;
L_001D7B48:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 212u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 212u), c.r[16].w[0]);
    c.budget -= 4;
L_001D7B58:
    set32(c.r[3], ld32((c.r[21].w[0] + 228u)));
    c.budget -= 1;
L_001D7B5C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 228u), c.r[3].w[0]);  if (t) { goto L_001D7B7C; } }
L_001D7B68:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B74u); set32(c.r[5], c.r[5].w[0] + 18648u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D7B74u) [[unlikely]] return; }
L_001D7B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7B98; } }
L_001D7B7C:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[20], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001D7B8C:
    c.r[3].d[0] = c.r[20].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D78A8u | kUnwind; return; } goto L_001D78A8; }
L_001D7B98:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 1;
L_001D7B9C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001D7F80; } }
L_001D7BA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D7F80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], ld32((c.r[21].w[0] + 212u)));  goto L_001D7C04; }
    set32(c.r[6], ld32((c.r[21].w[0] + 148u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], ld32((c.r[21].w[0] + 152u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BE0u); set32(c.r[5], c.r[5].w[0] + 18662u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D7BE0u) [[unlikely]] return; }
L_001D7BE0:
    set32(c.r[4], ld32((c.r[21].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D7C00; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D7BFCu) [[unlikely]] return; }
L_001D7BFC:
    st32((c.r[21].w[0] + 208u), 0u);
    c.budget -= 1;
L_001D7C00:
    set32(c.r[19], ld32((c.r[21].w[0] + 212u)));
    c.budget -= 1;
L_001D7C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D7C90; } }
L_001D7C0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D7F80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = c.r[19].d[0] + 0ull;  goto L_001D7C8C; }
    set32(c.r[6], ld32((c.r[21].w[0] + 148u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], ld32((c.r[21].w[0] + 152u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C48u); set32(c.r[5], c.r[5].w[0] + 18684u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D7C48u) [[unlikely]] return; }
L_001D7C48:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_001D7C5C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001D7C60; } }
L_001D7C5C:
    st32((c.r[21].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_001D7C60:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C6Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 297u, depth + 1u); else { c.pc = 0x001D7390u; return; } if (c.pc != 0x001D7C6Cu) [[unlikely]] return; }
L_001D7C6C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001D7C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D7C7Cu) [[unlikely]] return; }
L_001D7C7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[19], ld32((c.r[21].w[0] + 212u)));  goto L_001D7C90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_001D7C90; } }
L_001D7C8C:
    set32(c.r[19], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_001D7C90:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7C0Cu | kUnwind; return; } goto L_001D7C0C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7CB4:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_001D7CB8:
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 1344u)));  goto L_001D7CF4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CD8u); set32(c.r[5], c.r[5].w[0] + 18706u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D7CD8u) [[unlikely]] return; }
L_001D7CD8:
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7CF4:
    set32(c.r[4], 0u + 432u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D04u); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D7D04u) [[unlikely]] return; }
L_001D7D04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[21].w[0] + 216u), c.r[17].w[0]);  goto L_001D7D58; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 17473ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x001D7D24u) [[unlikely]] return; }
L_001D7D24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D3Cu); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x001D7D3Cu) [[unlikely]] return; }
L_001D7D3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D50u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 284u, depth + 1u); else { c.pc = 0x00207340u; return; } if (c.pc != 0x001D7D50u) [[unlikely]] return; }
L_001D7D50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[21].w[0] + 216u), c.r[17].w[0]);
    c.budget -= 2;
L_001D7D58:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001D7F80; } }
L_001D7D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D7F80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D7D9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001D7DC8; }
L_001D7D9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7DACu); set32(c.r[5], c.r[5].w[0] + 18729u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D7DACu) [[unlikely]] return; }
L_001D7DAC:
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001D7F80; } }
L_001D7DD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7DE8:
    set32(c.r[2], 0u + 40u);
    c.budget -= 1;
L_001D7DEC:
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 1332u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 1344u)));  goto L_001D7E28; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E0Cu); set32(c.r[5], c.r[5].w[0] + 18748u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D7E0Cu) [[unlikely]] return; }
L_001D7E0C:
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7E28:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001D7E40u) [[unlikely]] return; }
L_001D7E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 1332u), c.r[2].w[0]);  if (t) { goto L_001D7E58; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 1344u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E58u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D7E58u) [[unlikely]] return; }
L_001D7E58:
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7E74:
    set32(c.r[2], 0u + 50u);
    c.budget -= 1;
L_001D7E78:
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 1344u)));  goto L_001D7EB4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E98u); set32(c.r[5], c.r[5].w[0] + 18770u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D7E98u) [[unlikely]] return; }
L_001D7E98:
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7EB4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7ECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001D7ECCu) [[unlikely]] return; }
L_001D7ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_001D7EE4; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 1344u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7EE4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D7EE4u) [[unlikely]] return; }
L_001D7EE4:
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7F00:
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_001D7F04:
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[21].w[0] + 1324u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[21].w[0] + 1328u), c.f[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 1344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1344u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D772Cu | kUnwind; return; } goto L_001D772C; } }
L_001D7F40:
    set32(c.r[2], 0u + 100u);
    c.budget -= 1;
L_001D7F44:
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 1336u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_001D7F6C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D7F64u) [[unlikely]] return; }
L_001D7F64:
    st32((c.r[21].w[0] + 1336u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_001D7F6C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F80u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D7F80u) [[unlikely]] return; }
L_001D7F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001D7F84:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001D7FB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 11u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 29u, depth); } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 10u);  [[clang::musttail]] return unit_002E(c, 17u, depth); }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 1336u)));  [[clang::musttail]] return unit_002E(c, 13u, depth); }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 88u);  [[clang::musttail]] return unit_002E(c, 10u, depth); }
    [[clang::musttail]] return unit_002E(c, 2u, depth);
}

}
