#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A1[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0,
    0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0,
    328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
};

void unit_00A1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A4000;
    case 2u: goto L_003A4010;
    case 3u: goto L_003A4028;
    case 4u: goto L_003A402C;
    case 5u: goto L_003A4048;
    case 6u: goto L_003A40C0;
    case 7u: goto L_003A40E0;
    case 8u: goto L_003A40F8;
    case 9u: goto L_003A4104;
    case 10u: goto L_003A4134;
    case 11u: goto L_003A4154;
    case 12u: goto L_003A4184;
    case 13u: goto L_003A41C0;
    case 14u: goto L_003A41D8;
    case 15u: goto L_003A4210;
    case 16u: goto L_003A4224;
    case 17u: goto L_003A4234;
    case 18u: goto L_003A4248;
    case 19u: goto L_003A4264;
    case 20u: goto L_003A4274;
    case 21u: goto L_003A429C;
    case 22u: goto L_003A42C8;
    case 23u: goto L_003A4340;
    case 24u: goto L_003A43A0;
    case 25u: goto L_003A43BC;
    case 26u: goto L_003A43CC;
    case 27u: goto L_003A43D4;
    case 28u: goto L_003A43DC;
    case 29u: goto L_003A43F0;
    case 30u: goto L_003A4408;
    case 31u: goto L_003A441C;
    case 32u: goto L_003A4424;
    case 33u: goto L_003A443C;
    case 34u: goto L_003A4474;
    case 35u: goto L_003A4484;
    case 36u: goto L_003A4494;
    case 37u: goto L_003A44B4;
    case 38u: goto L_003A44C0;
    case 39u: goto L_003A44D0;
    case 40u: goto L_003A4558;
    case 41u: goto L_003A4570;
    case 42u: goto L_003A4580;
    case 43u: goto L_003A4594;
    case 44u: goto L_003A45A8;
    case 45u: goto L_003A45C0;
    case 46u: goto L_003A45F8;
    case 47u: goto L_003A4648;
    case 48u: goto L_003A4680;
    case 49u: goto L_003A46E4;
    case 50u: goto L_003A4754;
    case 51u: goto L_003A4900;
    case 52u: goto L_003A4988;
    case 53u: goto L_003A49F8;
    case 54u: goto L_003A4A0C;
    case 55u: goto L_003A4A28;
    case 56u: goto L_003A4AA0;
    case 57u: goto L_003A4B14;
    case 58u: goto L_003A4B24;
    case 59u: goto L_003A4B48;
    case 60u: goto L_003A4BA4;
    case 61u: goto L_003A4BE8;
    case 62u: goto L_003A4C30;
    case 63u: goto L_003A4C6C;
    case 64u: goto L_003A4C80;
    case 65u: goto L_003A4CA4;
    case 66u: goto L_003A4CC0;
    case 67u: goto L_003A4CD8;
    case 68u: goto L_003A4D30;
    case 69u: goto L_003A4D40;
    case 70u: goto L_003A4D54;
    case 71u: goto L_003A4DB8;
    case 72u: goto L_003A4DCC;
    case 73u: goto L_003A4DE4;
    case 74u: goto L_003A4E28;
    case 75u: goto L_003A4E50;
    case 76u: goto L_003A4E78;
    case 77u: goto L_003A4E98;
    case 78u: goto L_003A4EBC;
    case 79u: goto L_003A4EE4;
    case 80u: goto L_003A4F6C;
    case 81u: goto L_003A4F78;
    case 82u: goto L_003A4FF8;
    case 83u: goto L_003A500C;
    case 84u: goto L_003A5018;
    case 85u: goto L_003A5034;
    case 86u: goto L_003A5050;
    case 87u: goto L_003A505C;
    case 88u: goto L_003A5070;
    case 89u: goto L_003A5094;
    case 90u: goto L_003A50A8;
    case 91u: goto L_003A50B8;
    case 92u: goto L_003A50C0;
    case 93u: goto L_003A5108;
    case 94u: goto L_003A5118;
    case 95u: goto L_003A5148;
    case 96u: goto L_003A5158;
    case 97u: goto L_003A5164;
    case 98u: goto L_003A5174;
    case 99u: goto L_003A5184;
    case 100u: goto L_003A518C;
    case 101u: goto L_003A51B0;
    case 102u: goto L_003A51D0;
    case 103u: goto L_003A51E4;
    case 104u: goto L_003A5350;
    case 105u: goto L_003A5360;
    case 106u: goto L_003A5380;
    case 107u: goto L_003A5388;
    case 108u: goto L_003A5398;
    case 109u: goto L_003A53C8;
    case 110u: goto L_003A53E4;
    case 111u: goto L_003A5418;
    case 112u: goto L_003A5460;
    case 113u: goto L_003A5490;
    case 114u: goto L_003A54C8;
    case 115u: goto L_003A54E0;
    case 116u: goto L_003A5514;
    case 117u: goto L_003A5540;
    case 118u: goto L_003A5560;
    case 119u: goto L_003A5590;
    case 120u: goto L_003A55B8;
    case 121u: goto L_003A55F8;
    case 122u: goto L_003A5738;
    case 123u: goto L_003A5740;
    case 124u: goto L_003A5788;
    case 125u: goto L_003A57A0;
    case 126u: goto L_003A57A8;
    case 127u: goto L_003A57B0;
    case 128u: goto L_003A57B8;
    case 129u: goto L_003A57C0;
    case 130u: goto L_003A57E0;
    case 131u: goto L_003A5800;
    case 132u: goto L_003A5830;
    case 133u: goto L_003A5850;
    case 134u: goto L_003A586C;
    case 135u: goto L_003A588C;
    case 136u: goto L_003A58B4;
    case 137u: goto L_003A58E0;
    case 138u: goto L_003A590C;
    case 139u: goto L_003A5AE8;
    case 140u: goto L_003A5B10;
    case 141u: goto L_003A5B20;
    case 142u: goto L_003A5B2C;
    case 143u: goto L_003A5B48;
    case 144u: goto L_003A5B80;
    case 145u: goto L_003A5BB8;
    case 146u: goto L_003A5BC8;
    case 147u: goto L_003A5C08;
    case 148u: goto L_003A5C4C;
    case 149u: goto L_003A5C70;
    case 150u: goto L_003A5C78;
    case 151u: goto L_003A5C9C;
    case 152u: goto L_003A5CC0;
    case 153u: goto L_003A5CE8;
    case 154u: goto L_003A5D10;
    case 155u: goto L_003A5DA0;
    case 156u: goto L_003A5DB8;
    case 157u: goto L_003A5DE0;
    case 158u: goto L_003A5E10;
    case 159u: goto L_003A5E2C;
    case 160u: goto L_003A5E5C;
    case 161u: goto L_003A5E74;
    case 162u: goto L_003A5EB0;
    case 163u: goto L_003A5ECC;
    case 164u: goto L_003A5EFC;
    case 165u: goto L_003A5F14;
    case 166u: goto L_003A5F58;
    case 167u: goto L_003A5F70;
    case 168u: goto L_003A5FA0;
    case 169u: goto L_003A5FB0;
    case 170u: goto L_003A5FE0;
    case 171u: goto L_003A5FF8;
    case 172u: goto L_003A6028;
    case 173u: goto L_003A6038;
    case 174u: goto L_003A6048;
    case 175u: goto L_003A6058;
    case 176u: goto L_003A6070;
    case 177u: goto L_003A6098;
    case 178u: goto L_003A60E0;
    case 179u: goto L_003A60F8;
    case 180u: goto L_003A6110;
    case 181u: goto L_003A6130;
    case 182u: goto L_003A616C;
    case 183u: goto L_003A6180;
    case 184u: goto L_003A6190;
    case 185u: goto L_003A61A8;
    case 186u: goto L_003A61C0;
    case 187u: goto L_003A61F0;
    case 188u: goto L_003A6218;
    case 189u: goto L_003A6248;
    case 190u: goto L_003A6268;
    case 191u: goto L_003A6294;
    case 192u: goto L_003A62AC;
    case 193u: goto L_003A62D8;
    case 194u: goto L_003A62F4;
    case 195u: goto L_003A6338;
    case 196u: goto L_003A6350;
    case 197u: goto L_003A636C;
    case 198u: goto L_003A6380;
    case 199u: goto L_003A63B0;
    case 200u: goto L_003A63CC;
    case 201u: goto L_003A63DC;
    case 202u: goto L_003A63FC;
    case 203u: goto L_003A6420;
    case 204u: goto L_003A644C;
    case 205u: goto L_003A6460;
    case 206u: goto L_003A6478;
    case 207u: goto L_003A648C;
    case 208u: goto L_003A64A4;
    case 209u: goto L_003A64B8;
    case 210u: goto L_003A64D0;
    case 211u: goto L_003A64E8;
    case 212u: goto L_003A6510;
    case 213u: goto L_003A6528;
    case 214u: goto L_003A6540;
    case 215u: goto L_003A6554;
    case 216u: goto L_003A6568;
    case 217u: goto L_003A656C;
    case 218u: goto L_003A65C0;
    case 219u: goto L_003A65E4;
    case 220u: goto L_003A6608;
    case 221u: goto L_003A6668;
    case 222u: goto L_003A6688;
    case 223u: goto L_003A66A0;
    case 224u: goto L_003A66F0;
    case 225u: goto L_003A6704;
    case 226u: goto L_003A6758;
    case 227u: goto L_003A676C;
    case 228u: goto L_003A67C0;
    case 229u: goto L_003A67E8;
    case 230u: goto L_003A683C;
    case 231u: goto L_003A6848;
    case 232u: goto L_003A6860;
    case 233u: goto L_003A68A8;
    case 234u: goto L_003A68E8;
    case 235u: goto L_003A6910;
    case 236u: goto L_003A6944;
    case 237u: goto L_003A6980;
    case 238u: goto L_003A69A0;
    case 239u: goto L_003A69D8;
    case 240u: goto L_003A6A90;
    case 241u: goto L_003A6AB0;
    case 242u: goto L_003A6AE0;
    case 243u: goto L_003A6B00;
    case 244u: goto L_003A6B20;
    case 245u: goto L_003A6B48;
    case 246u: goto L_003A6B60;
    case 247u: goto L_003A6B98;
    case 248u: goto L_003A6BAC;
    case 249u: goto L_003A6BC0;
    case 250u: goto L_003A6BE0;
    case 251u: goto L_003A6C90;
    case 252u: goto L_003A6CA0;
    case 253u: goto L_003A6CCC;
    case 254u: goto L_003A6D24;
    case 255u: goto L_003A6D2C;
    case 256u: goto L_003A6D60;
    case 257u: goto L_003A6D78;
    case 258u: goto L_003A6D84;
    case 259u: goto L_003A6DD0;
    case 260u: goto L_003A6DF4;
    case 261u: goto L_003A6E4C;
    case 262u: goto L_003A6E60;
    case 263u: goto L_003A6E90;
    case 264u: goto L_003A6F8C;
    case 265u: goto L_003A6F9C;
    case 266u: goto L_003A70A0;
    case 267u: goto L_003A70A8;
    case 268u: goto L_003A70D8;
    case 269u: goto L_003A7128;
    case 270u: goto L_003A7148;
    case 271u: goto L_003A7178;
    case 272u: goto L_003A7190;
    case 273u: goto L_003A71BC;
    case 274u: goto L_003A71D0;
    case 275u: goto L_003A71E8;
    case 276u: goto L_003A7220;
    case 277u: goto L_003A7230;
    case 278u: goto L_003A7240;
    case 279u: goto L_003A725C;
    case 280u: goto L_003A72F0;
    case 281u: goto L_003A73E0;
    case 282u: goto L_003A73F8;
    case 283u: goto L_003A7410;
    case 284u: goto L_003A7428;
    case 285u: goto L_003A7440;
    case 286u: goto L_003A7458;
    case 287u: goto L_003A7468;
    case 288u: goto L_003A7488;
    case 289u: goto L_003A7490;
    case 290u: goto L_003A7498;
    case 291u: goto L_003A7508;
    case 292u: goto L_003A7518;
    case 293u: goto L_003A756C;
    case 294u: goto L_003A7580;
    case 295u: goto L_003A75B4;
    case 296u: goto L_003A75F4;
    case 297u: goto L_003A7604;
    case 298u: goto L_003A7620;
    case 299u: goto L_003A7658;
    case 300u: goto L_003A7668;
    case 301u: goto L_003A7698;
    case 302u: goto L_003A76A8;
    case 303u: goto L_003A76C8;
    case 304u: goto L_003A76DC;
    case 305u: goto L_003A76F0;
    case 306u: goto L_003A7704;
    case 307u: goto L_003A7718;
    case 308u: goto L_003A7730;
    case 309u: goto L_003A7744;
    case 310u: goto L_003A774C;
    case 311u: goto L_003A7778;
    case 312u: goto L_003A77A0;
    case 313u: goto L_003A77C8;
    case 314u: goto L_003A77F0;
    case 315u: goto L_003A7814;
    case 316u: goto L_003A7838;
    case 317u: goto L_003A7860;
    case 318u: goto L_003A787C;
    case 319u: goto L_003A78C0;
    case 320u: goto L_003A78F8;
    case 321u: goto L_003A7918;
    case 322u: goto L_003A798C;
    case 323u: goto L_003A799C;
    case 324u: goto L_003A79B0;
    case 325u: goto L_003A79CC;
    case 326u: goto L_003A79DC;
    case 327u: goto L_003A79F0;
    case 328u: goto L_003A7A00;
    case 329u: goto L_003A7A10;
    case 330u: goto L_003A7A48;
    case 331u: goto L_003A7A84;
    case 332u: goto L_003A7AC8;
    case 333u: goto L_003A7AE0;
    case 334u: goto L_003A7AE8;
    case 335u: goto L_003A7B34;
    case 336u: goto L_003A7B48;
    case 337u: goto L_003A7B54;
    case 338u: goto L_003A7B5C;
    case 339u: goto L_003A7B90;
    case 340u: goto L_003A7BA0;
    case 341u: goto L_003A7C30;
    case 342u: goto L_003A7C98;
    case 343u: goto L_003A7D00;
    case 344u: goto L_003A7D08;
    case 345u: goto L_003A7D4C;
    case 346u: goto L_003A7D6C;
    case 347u: goto L_003A7D7C;
    case 348u: goto L_003A7D90;
    case 349u: goto L_003A7DB8;
    case 350u: goto L_003A7DD0;
    case 351u: goto L_003A7DE4;
    case 352u: goto L_003A7E40;
    case 353u: goto L_003A7E54;
    case 354u: goto L_003A7E6C;
    case 355u: goto L_003A7E90;
    case 356u: goto L_003A7EAC;
    case 357u: goto L_003A7F00;
    case 358u: goto L_003A7F20;
    case 359u: goto L_003A7F98;
    case 360u: goto L_003A7FB0;
    case 361u: goto L_003A7FE4;
    default: bad_entry(c, 0x003A4000u); return;
    }
L_003A4000:
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4010u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_009A(c, 103u, depth + 1u); else { c.pc = 0x0038AEA8u; return; } if (c.pc != 0x003A4010u) [[unlikely]] return; }
L_003A4010:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003A402C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003A4028:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003A402C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4048:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 3368u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[3], c.r[16].w[0] + 3648u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    set32(c.r[6], c.r[16].w[0] + 3560u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], ld32((c.r[16].w[0] + 8120u)));  if (t) { goto L_003A40A0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_003A40A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], ld32((c.r[6].w[0] + 40u)));  if (t) { goto L_003A40C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40C0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A40C0u) [[unlikely]] return; }
L_003A40C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A41A0; } }
L_003A40C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] - 1u);  goto L_003A40E4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40E0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 2u, depth + 1u); else { c.pc = 0x003AC018u; return; } if (c.pc != 0x003A40E0u) [[unlikely]] return; }
L_003A40E0:
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_003A40E4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003A40FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 3u, depth + 1u); else { c.pc = 0x003AC0B8u; return; } if (c.pc != 0x003A40F8u) [[unlikely]] return; }
L_003A40F8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A40FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 138u, depth + 1u); else { c.pc = 0x003AD918u; return; } if (c.pc != 0x003A4104u) [[unlikely]] return; }
L_003A4104:
    c.r[2].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A4128; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2716u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A419C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A4128:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4134u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A3(c, 42u, depth + 1u); else { c.pc = 0x003AC6E0u; return; } if (c.pc != 0x003A4134u) [[unlikely]] return; }
L_003A4134:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A419C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4154u); set32(c.r[7], c.r[29].w[0] + 12u);  if (depth < kMaxDepth) unit_00A1(c, 13u, depth + 1u); else { c.pc = 0x003A41C0u; return; } if (c.pc != 0x003A4154u) [[unlikely]] return; }
L_003A4154:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003A4168u);  goto L_003A416C; }
L_003A416C:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4184u); set32(c.r[6], c.r[20].w[0] - c.r[6].w[0]);  if (depth < kMaxDepth) unit_0098(c, 42u, depth + 1u); else { c.pc = 0x00381AF0u; return; } if (c.pc != 0x003A4184u) [[unlikely]] return; }
L_003A4184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A419C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 4;
L_003A419C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A41A0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A41C0:
    set32(c.r[4], c.r[4].w[0] + 2564u);
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003A41D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[21], ld32((c.r[18].w[0] + 8120u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4210u); set32(c.r[17], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_00A1(c, 22u, depth + 1u); else { c.pc = 0x003A42C8u; return; } if (c.pc != 0x003A4210u) [[unlikely]] return; }
L_003A4210:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4224u); set32(c.r[22], c.r[21].w[0] + 140u);  if (depth < kMaxDepth) unit_0096(c, 219u, depth + 1u); else { c.pc = 0x0037A8C8u; return; } if (c.pc != 0x003A4224u) [[unlikely]] return; }
L_003A4224:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4234u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 130u, depth + 1u); else { c.pc = 0x0038B708u; return; } if (c.pc != 0x003A4234u) [[unlikely]] return; }
L_003A4234:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4248u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 219u, depth + 1u); else { c.pc = 0x0037A8C8u; return; } if (c.pc != 0x003A4248u) [[unlikely]] return; }
L_003A4248:
    set32(c.r[17], c.r[2].w[0] - c.r[20].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4264u); c.r[7].d[0] = c.r[7].d[0] | 3847ull;  if (depth < kMaxDepth) unit_00A0(c, 250u, depth + 1u); else { c.pc = 0x003A2630u; return; } if (c.pc != 0x003A4264u) [[unlikely]] return; }
L_003A4264:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4274u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 245u, depth + 1u); else { c.pc = 0x003A2588u; return; } if (c.pc != 0x003A4274u) [[unlikely]] return; }
L_003A4274:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003A42A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A4294; } }
    st32((c.r[21].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_003A4294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A429Cu); set32(c.r[6], ld32((c.r[22].w[0] + 24u)));  if (depth < kMaxDepth) unit_00A2(c, 195u, depth + 1u); else { c.pc = 0x003A9800u; return; } if (c.pc != 0x003A429Cu) [[unlikely]] return; }
L_003A429C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A42A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A42C8:
    set32(c.r[5], c.r[4].w[0] + 3560u);
    set32(c.r[3], ld32((c.r[4].w[0] + 3684u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 3604u);  if (t) { goto L_003A4338; } }
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    ldl(c.r[6], (c.r[5].w[0] + 23u));
    ldr(c.r[6], (c.r[5].w[0] + 16u));
    ldl(c.r[7], (c.r[5].w[0] + 31u));
    ldr(c.r[7], (c.r[5].w[0] + 24u));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    sdr(c.r[3], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    sdl(c.r[7], (c.r[4].w[0] + 31u));
    sdr(c.r[7], (c.r[4].w[0] + 24u));
    ldl(c.r[2], (c.r[5].w[0] + 39u));
    ldr(c.r[2], (c.r[5].w[0] + 32u));
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    sdl(c.r[2], (c.r[4].w[0] + 39u));
    sdr(c.r[2], (c.r[4].w[0] + 32u));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 22;
L_003A4338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A4340:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    set32(c.r[22], c.r[20].w[0] + 2544u);
    st64((c.r[29].w[0] + 136u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[2], c.r[20].w[0] + 2384u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 8120u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[30], c.r[19].w[0] + 140u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43A0u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 46u, depth + 1u); else { c.pc = 0x003A45F8u; return; } if (c.pc != 0x003A43A0u) [[unlikely]] return; }
L_003A43A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A45C4; }
    set32(c.r[6], c.r[29].w[0] + 52u);
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43BCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 51u, depth + 1u); else { c.pc = 0x003A4900u; return; } if (c.pc != 0x003A43BCu) [[unlikely]] return; }
L_003A43BC:
    set32(c.r[5], c.r[19].w[0] + 4236u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43CCu); set32(c.r[4], ld32((c.r[2].w[0] + 84u)));  if (depth < kMaxDepth) unit_00A1(c, 75u, depth + 1u); else { c.pc = 0x003A4E50u; return; } if (c.pc != 0x003A43CCu) [[unlikely]] return; }
L_003A43CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 52u, depth + 1u); else { c.pc = 0x003A4988u; return; } if (c.pc != 0x003A43D4u) [[unlikely]] return; }
L_003A43D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43DCu);  if (depth < kMaxDepth) unit_00A4(c, 334u, depth + 1u); else { c.pc = 0x003B3D58u; return; } if (c.pc != 0x003A43DCu) [[unlikely]] return; }
L_003A43DC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43F0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 219u, depth + 1u); else { c.pc = 0x0037A8C8u; return; } if (c.pc != 0x003A43F0u) [[unlikely]] return; }
L_003A43F0:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4408u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 330u, depth + 1u); else { c.pc = 0x003A7A48u; return; } if (c.pc != 0x003A4408u) [[unlikely]] return; }
L_003A4408:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A441Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 219u, depth + 1u); else { c.pc = 0x0037A8C8u; return; } if (c.pc != 0x003A441Cu) [[unlikely]] return; }
L_003A441C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4424u); set32(c.r[21], c.r[2].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 334u, depth + 1u); else { c.pc = 0x003B3D58u; return; } if (c.pc != 0x003A4424u) [[unlikely]] return; }
L_003A4424:
    set32(c.r[4], ld32((c.r[30].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] - c.r[18].d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A443Cu); set32(c.r[4], c.r[4].w[0] + 14008u);  if (depth < kMaxDepth) unit_00A3(c, 140u, depth + 1u); else { c.pc = 0x003AD940u; return; } if (c.pc != 0x003A443Cu) [[unlikely]] return; }
L_003A443C:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[22].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[22].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4474u); c.r[7].d[0] = c.r[7].d[0] | 3846ull;  if (depth < kMaxDepth) unit_00A0(c, 250u, depth + 1u); else { c.pc = 0x003A2630u; return; } if (c.pc != 0x003A4474u) [[unlikely]] return; }
L_003A4474:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4484u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 245u, depth + 1u); else { c.pc = 0x003A2588u; return; } if (c.pc != 0x003A4484u) [[unlikely]] return; }
L_003A4484:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003A44A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4494u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A1(c, 183u, depth + 1u); else { c.pc = 0x003A6180u; return; } if (c.pc != 0x003A4494u) [[unlikely]] return; }
L_003A4494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A45C4; } }
    c.budget -= 1;
L_003A44A0:
    c.budget -= 2;
    if (c.r[21].sd[0] <= 0) { set32(c.r[2], ld32((c.r[19].w[0] + 360u)));  goto L_003A45B0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A44B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 174u, depth + 1u); else { c.pc = 0x003A6048u; return; } if (c.pc != 0x003A44B4u) [[unlikely]] return; }
L_003A44B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A44C0u); set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A1(c, 56u, depth + 1u); else { c.pc = 0x003A4AA0u; return; } if (c.pc != 0x003A44C0u) [[unlikely]] return; }
L_003A44C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A44D0u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 62u, depth + 1u); else { c.pc = 0x003A4C30u; return; } if (c.pc != 0x003A44D0u) [[unlikely]] return; }
L_003A44D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[7], 0u + 3u);
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 372u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[30].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st32((c.r[3].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_003A4530; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 360u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 360u), 0u);  goto L_003A4534; }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 360u), c.r[2].w[0]);  if (t) { goto L_003A4534; } }
L_003A4530:
    st32((c.r[19].w[0] + 360u), 0u);
    c.budget -= 1;
L_003A4534:
    set32(c.r[2], ld32((c.r[19].w[0] + 360u)));
    st32((c.r[19].w[0] + 364u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 368u), 0u);  if (t) { goto L_003A4598; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A4578; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 24u)));
    c.budget -= 1;
L_003A4558:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4570u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A1(c, 185u, depth + 1u); else { c.pc = 0x003A61A8u; return; } if (c.pc != 0x003A4570u) [[unlikely]] return; }
L_003A4570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_003A4584; } }
L_003A4578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4580u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A1(c, 184u, depth + 1u); else { c.pc = 0x003A6190u; return; } if (c.pc != 0x003A4580u) [[unlikely]] return; }
L_003A4580:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_003A4584:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4594u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_009B(c, 133u, depth + 1u); else { c.pc = 0x0038DB90u; return; } if (c.pc != 0x003A4594u) [[unlikely]] return; }
L_003A4594:
    st32((c.r[19].w[0] + 132u), 0u);
    c.budget -= 1;
L_003A4598:
    set32(c.r[6], ld32((c.r[30].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A45A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 192u, depth + 1u); else { c.pc = 0x003A9798u; return; } if (c.pc != 0x003A45A8u) [[unlikely]] return; }
L_003A45A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A45C4; } }
L_003A45B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A45C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A45C0u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A1(c, 183u, depth + 1u); else { c.pc = 0x003A6180u; return; } if (c.pc != 0x003A45C0u) [[unlikely]] return; }
L_003A45C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A45C4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003A45F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 8120u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 360u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[19].w[0] + 2384u);  if (t) { goto L_003A4640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_003A4660; } }
L_003A4640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4648u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x003A60F8u; return; } if (c.pc != 0x003A4648u) [[unlikely]] return; }
L_003A4648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_003A4660; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_003A48DC; } }
L_003A4660:
    set32(c.r[10], ld32((c.r[20].w[0])));
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[10].w[0] + 92u);
    c.r[2].d[0] = c.r[18].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003A46E0; } }
    set32(c.r[2], c.r[18].w[0] + 128u);
    c.budget -= 1;
L_003A4680:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4680u | kUnwind; return; } goto L_003A4680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[16].w[0] + 4384u));  if (t) { goto L_003A471C; } }
    c.budget -= 1;
L_003A46E0:
    set32(c.r[2], c.r[18].w[0] + 128u);
    c.budget -= 1;
L_003A46E4:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A46E4u | kUnwind; return; } goto L_003A46E4; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 4384u));
    c.budget -= 1;
L_003A471C:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st64((c.r[5].w[0] + 224u), c.r[2].d[0]);  if (t) { goto L_003A4830; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003A476C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 360u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003A476C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4754u); set32(c.r[4], ld32((c.r[16].w[0] + 352u)));  if (depth < kMaxDepth) unit_00A1(c, 187u, depth + 1u); else { c.pc = 0x003A61F0u; return; } if (c.pc != 0x003A4754u) [[unlikely]] return; }
L_003A4754:
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 6;
L_003A476C:
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] + 30u);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[8].w[0] + 15u);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[9].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[8], c.r[8].w[0] + 30u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[4].w[0] + 63u);
    set32(c.r[4], c.r[4].w[0] + 126u);
    set32(c.r[6], c.r[2].w[0] + 63u);
    set32(c.r[2], c.r[2].w[0] + 126u);
    c.r[3].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[9].d[0] != 0) c.r[5].d[0] = c.r[8].d[0];
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 6));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 6));
    set32(c.r[4], ld32((c.r[16].w[0] + 356u)));
    mmi::mult(c, 1, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 10);
    st16((c.r[17].w[0] + 30u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[9].w[0]);
    c.budget -= 48;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_003A48BC; } }
    c.budget -= 1;
L_003A4830:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 312u)));  if (t) { goto L_003A4864; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 316u)));
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 8;
L_003A4864:
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[3], ld32((c.r[16].w[0] + 316u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    ldl(c.r[5], (c.r[2].w[0] + 7u));
    ldr(c.r[5], (c.r[2].w[0]));
    ldl(c.r[6], (c.r[2].w[0] + 15u));
    ldr(c.r[6], (c.r[2].w[0] + 8u));
    sdl(c.r[5], (c.r[17].w[0] + 7u));
    sdr(c.r[5], (c.r[17].w[0]));
    sdl(c.r[6], (c.r[17].w[0] + 15u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    sdr(c.r[6], (c.r[17].w[0] + 8u));
    ldl(c.r[9], (c.r[3].w[0] + 7u));
    ldr(c.r[9], (c.r[3].w[0]));
    ldl(c.r[2], (c.r[3].w[0] + 15u));
    ldr(c.r[2], (c.r[3].w[0] + 8u));
    sdl(c.r[9], (c.r[17].w[0] + 23u));
    sdr(c.r[9], (c.r[17].w[0] + 16u));
    sdl(c.r[2], (c.r[17].w[0] + 31u));
    sdr(c.r[2], (c.r[17].w[0] + 24u));
    c.budget -= 22;
L_003A48BC:
    set32(c.r[3], ld32((c.r[10].w[0] + 8u)));
    set32(c.r[4], c.r[10].w[0] + 92u);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[21].w[0] + 40u), 0u);
    c.budget -= 8;
L_003A48DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A4900:
    set32(c.r[8], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A4978; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003A4938; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st32((c.r[6].w[0]), 0u);  goto L_003A497C; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[8].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 356u)));  goto L_003A4950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), 0u);  if (t) { goto L_003A497C; } }
L_003A4938:
    set32(c.r[2], ld32((c.r[4].w[0] + 352u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003A4950:
    set32(c.r[4], ld32((c.r[4].w[0] + 352u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003A4978:
    st32((c.r[6].w[0]), 0u);
    c.budget -= 1;
L_003A497C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), 0u);  c.pc = t; return; }
L_003A4988:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 3648u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 3428u);  if (t) { goto L_003A4A88; } }
    ldl(c.r[2], (c.r[16].w[0] + 3571u));
    ldr(c.r[2], (c.r[16].w[0] + 3564u));
    ldl(c.r[3], (c.r[16].w[0] + 3579u));
    ldr(c.r[3], (c.r[16].w[0] + 3572u));
    ldl(c.r[6], (c.r[16].w[0] + 3587u));
    ldr(c.r[6], (c.r[16].w[0] + 3580u));
    ldl(c.r[7], (c.r[16].w[0] + 3595u));
    ldr(c.r[7], (c.r[16].w[0] + 3588u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    sdl(c.r[7], (c.r[29].w[0] + 31u));
    sdr(c.r[7], (c.r[29].w[0] + 24u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A49F8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A0(c, 339u, depth + 1u); else { c.pc = 0x003A3D60u; return; } if (c.pc != 0x003A49F8u) [[unlikely]] return; }
L_003A49F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003A4A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A0Cu);  if (depth < kMaxDepth) unit_00A0(c, 345u, depth + 1u); else { c.pc = 0x003A3F18u; return; } if (c.pc != 0x003A4A0Cu) [[unlikely]] return; }
L_003A4A0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
L_003A4A18:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A28u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00A3(c, 87u, depth + 1u); else { c.pc = 0x003ACDE8u; return; } if (c.pc != 0x003A4A28u) [[unlikely]] return; }
L_003A4A28:
    set32(c.r[5], 0u + 1u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[6], (c.r[29].w[0] + 31u));
    ldr(c.r[6], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 3659u));
    sdr(c.r[2], (c.r[16].w[0] + 3652u));
    sdl(c.r[3], (c.r[16].w[0] + 3667u));
    sdr(c.r[3], (c.r[16].w[0] + 3660u));
    sdl(c.r[4], (c.r[16].w[0] + 3675u));
    sdr(c.r[4], (c.r[16].w[0] + 3668u));
    sdl(c.r[6], (c.r[16].w[0] + 3683u));
    sdr(c.r[6], (c.r[16].w[0] + 3676u));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 24;
L_003A4A88:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A4AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    ldl(c.r[2], (c.r[16].w[0] + 3567u));
    ldr(c.r[2], (c.r[16].w[0] + 3560u));
    ldl(c.r[3], (c.r[16].w[0] + 3575u));
    ldr(c.r[3], (c.r[16].w[0] + 3568u));
    ldl(c.r[5], (c.r[16].w[0] + 3583u));
    ldr(c.r[5], (c.r[16].w[0] + 3576u));
    ldl(c.r[6], (c.r[16].w[0] + 3591u));
    ldr(c.r[6], (c.r[16].w[0] + 3584u));
    sdl(c.r[2], (c.r[17].w[0] + 19u));
    sdr(c.r[2], (c.r[17].w[0] + 12u));
    sdl(c.r[3], (c.r[17].w[0] + 27u));
    sdr(c.r[3], (c.r[17].w[0] + 20u));
    sdl(c.r[5], (c.r[17].w[0] + 35u));
    sdr(c.r[5], (c.r[17].w[0] + 28u));
    sdl(c.r[6], (c.r[17].w[0] + 43u));
    sdr(c.r[6], (c.r[17].w[0] + 36u));
    ldl(c.r[2], (c.r[16].w[0] + 3599u));
    ldr(c.r[2], (c.r[16].w[0] + 3592u));
    set32(c.r[3], ld32((c.r[16].w[0] + 3600u)));
    sdl(c.r[2], (c.r[17].w[0] + 51u));
    sdr(c.r[2], (c.r[17].w[0] + 44u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B14u); st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 277u, depth + 1u); else { c.pc = 0x003A7230u; return; } if (c.pc != 0x003A4B14u) [[unlikely]] return; }
L_003A4B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A4B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B24u);  if (depth < kMaxDepth) unit_00A1(c, 339u, depth + 1u); else { c.pc = 0x003A7B90u; return; } if (c.pc != 0x003A4B24u) [[unlikely]] return; }
L_003A4B24:
    st32((c.r[17].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 1;
L_003A4B28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003A4B48; }
L_003A4B48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[3].w[0] + 3368u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 3684u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BA4u); st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 277u, depth + 1u); else { c.pc = 0x003A7230u; return; } if (c.pc != 0x003A4BA4u) [[unlikely]] return; }
L_003A4BA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_003A4C00; }
    set32(c.r[5], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 17104u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BE8u); set32(c.r[5], c.r[5].w[0] << 3);  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003A4BE8u) [[unlikely]] return; }
L_003A4BE8:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
L_003A4C00:
    set32(c.r[2], ld32((c.r[17].w[0] + 644u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A4C20; }
    st32((c.r[17].w[0] + 644u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 648u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003A4C20:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 8120u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 4244u);  if (t) { goto L_003A4C6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C6Cu); set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_00A1(c, 75u, depth + 1u); else { c.pc = 0x003A4E50u; return; } if (c.pc != 0x003A4C6Cu) [[unlikely]] return; }
L_003A4C6C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C80u); set32(c.r[7], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x003A4CD8u; return; } if (c.pc != 0x003A4C80u) [[unlikely]] return; }
L_003A4C80:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[18].w[0] + 4244u);  if (t) { goto L_003A4CB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4CA4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A4CA4u) [[unlikely]] return; }
L_003A4CA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003A4CC0; } }
    c.budget -= 1;
L_003A4CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4CC0u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_00A1(c, 75u, depth + 1u); else { c.pc = 0x003A4E50u; return; } if (c.pc != 0x003A4CC0u) [[unlikely]] return; }
L_003A4CC0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4CD8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    st32((c.r[20].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D30u); st32((c.r[21].w[0]), 0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4D30u) [[unlikely]] return; }
L_003A4D30:
    set32(c.r[6], 0u + 204u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D40u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x003A4D40u) [[unlikely]] return; }
L_003A4D40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003A4DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A4D54u) [[unlikely]] return; }
L_003A4D54:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003A4E10; } }
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[16].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003A4DF0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16608u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003A4E10; } }
    set32(c.r[2], c.r[6].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u + 34u);
    set32(c.r[18], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DB8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x003A4DB8u) [[unlikely]] return; }
L_003A4DB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  goto L_003A4E14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A4DCCu) [[unlikely]] return; }
L_003A4DCC:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A4E10; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DE4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x003A4DE4u) [[unlikely]] return; }
L_003A4DE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);  if (t) { goto L_003A4E08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 1;
L_003A4DF0:
    set32(c.r[3], c.r[3].w[0] + 10412u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003A4E10; } }
    c.budget -= 1;
L_003A4E08:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003A4E10:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003A4E14:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E28u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4E28u) [[unlikely]] return; }
L_003A4E28:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A4E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E78u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A4E78u) [[unlikely]] return; }
L_003A4E78:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4E98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4EBCu); set32(c.r[5], ld32((c.r[17].w[0] + 8128u)));  if (depth < kMaxDepth) unit_009E(c, 457u, depth + 1u); else { c.pc = 0x0039B758u; return; } if (c.pc != 0x003A4EBCu) [[unlikely]] return; }
L_003A4EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003A4ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A4FE0; } }
    c.budget -= 1;
L_003A4ED0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003A4FE0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4EE4u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x003A1C10u; return; } if (c.pc != 0x003A4EE4u) [[unlikely]] return; }
L_003A4EE4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003A4F10; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] - 3u);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A4F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A4F64; } }
L_003A4F10:
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003A4F34; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_003A4F60; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003A4F34:
    c.r[2].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A4F60; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003A4F64; }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003A4F60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A4F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4F6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 82u, depth + 1u); else { c.pc = 0x003A4FF8u; return; } if (c.pc != 0x003A4F6Cu) [[unlikely]] return; }
L_003A4F6C:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
L_003A4F78:
    set32(c.r[2], 0u + 3u);
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003A4FBC; } }
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  goto L_003A4FA8; }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_003A4FAC; } }
L_003A4FA8:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003A4FAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4F78u | kUnwind; return; } goto L_003A4F78; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_003A4FBC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A4FD0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 2472u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    st64((c.r[17].w[0] + 2472u), c.r[2].d[0]);
    c.budget -= 3;
L_003A4FD0:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 2464u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    st64((c.r[17].w[0] + 2464u), c.r[3].d[0]);
    c.budget -= 4;
L_003A4FE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A4FF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A500Cu); set32(c.r[5], ld32((c.r[4].w[0] + 8128u)));  if (depth < kMaxDepth) unit_009E(c, 460u, depth + 1u); else { c.pc = 0x0039B830u; return; } if (c.pc != 0x003A500Cu) [[unlikely]] return; }
L_003A500C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5018:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5034u); set32(c.r[5], ld32((c.r[16].w[0] + 8128u)));  if (depth < kMaxDepth) unit_009E(c, 488u, depth + 1u); else { c.pc = 0x0039BD30u; return; } if (c.pc != 0x003A5034u) [[unlikely]] return; }
L_003A5034:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[29].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A5060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5050u);  if (depth < kMaxDepth) unit_009F(c, 12u, depth + 1u); else { c.pc = 0x0039C4C0u; return; } if (c.pc != 0x003A5050u) [[unlikely]] return; }
L_003A5050:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2456u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A505Cu); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_009F(c, 30u, depth + 1u); else { c.pc = 0x0039C678u; return; } if (c.pc != 0x003A505Cu) [[unlikely]] return; }
L_003A505C:
    st64((c.r[16].w[0] + 2456u), c.r[2].d[0]);
    c.budget -= 1;
L_003A5060:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5094u); set32(c.r[18], c.r[17].w[0] + 9120u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A5094u) [[unlikely]] return; }
L_003A5094:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A51B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50A8u); st32((c.r[17].w[0] + 8120u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x003A51D0u; return; } if (c.pc != 0x003A50A8u) [[unlikely]] return; }
L_003A50A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A51B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50B8u);  if (depth < kMaxDepth) unit_00A1(c, 280u, depth + 1u); else { c.pc = 0x003A72F0u; return; } if (c.pc != 0x003A50B8u) [[unlikely]] return; }
L_003A50B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50C0u);  if (depth < kMaxDepth) unit_009B(c, 118u, depth + 1u); else { c.pc = 0x0038DA20u; return; } if (c.pc != 0x003A50C0u) [[unlikely]] return; }
L_003A50C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[5], c.r[5].w[0] + 21944u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A5100; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 3850ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5108u);  if (depth < kMaxDepth) unit_009A(c, 112u, depth + 1u); else { c.pc = 0x0038B420u; return; } if (c.pc != 0x003A5108u) [[unlikely]] return; }
L_003A5108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A5140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 124u, depth + 1u); else { c.pc = 0x003A5788u; return; } if (c.pc != 0x003A5118u) [[unlikely]] return; }
L_003A5118:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3851ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5148u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A5148u) [[unlikely]] return; }
L_003A5148:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5158u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 141u, depth + 1u); else { c.pc = 0x0038DC28u; return; } if (c.pc != 0x003A5158u) [[unlikely]] return; }
L_003A5158:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5164u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A5164u) [[unlikely]] return; }
L_003A5164:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5174u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 141u, depth + 1u); else { c.pc = 0x0038DC28u; return; } if (c.pc != 0x003A5174u) [[unlikely]] return; }
L_003A5174:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5184u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_009B(c, 141u, depth + 1u); else { c.pc = 0x0038DC28u; return; } if (c.pc != 0x003A5184u) [[unlikely]] return; }
L_003A5184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A518Cu); st32((c.r[18].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 224u, depth + 1u); else { c.pc = 0x003A9AD0u; return; } if (c.pc != 0x003A518Cu) [[unlikely]] return; }
L_003A518C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A51B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 17184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[3].w[0] - 17180u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A51B0u); set32(c.r[7], ld32((c.r[2].w[0] - 17176u)));  if (depth < kMaxDepth) unit_00A0(c, 97u, depth + 1u); else { c.pc = 0x003A0FC0u; return; } if (c.pc != 0x003A51B0u) [[unlikely]] return; }
L_003A51B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A51B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A51D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A51E4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x003A53C8u; return; } if (c.pc != 0x003A51E4u) [[unlikely]] return; }
L_003A51E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_003A5208; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3861ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[2].w[0] - 17296u);
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[5], (c.r[7].w[0] + 15u));
    ldr(c.r[5], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[3], (c.r[16].w[0] + 11u));
    sdr(c.r[3], (c.r[16].w[0] + 4u));
    sdl(c.r[5], (c.r[16].w[0] + 19u));
    sdr(c.r[5], (c.r[16].w[0] + 12u));
    sdl(c.r[6], (c.r[16].w[0] + 27u));
    sdr(c.r[6], (c.r[16].w[0] + 20u));
    ldl(c.r[3], (c.r[7].w[0] + 31u));
    ldr(c.r[3], (c.r[7].w[0] + 24u));
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    sdl(c.r[3], (c.r[16].w[0] + 35u));
    sdr(c.r[3], (c.r[16].w[0] + 28u));
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], c.r[16].w[0] + 48u);
    set32(c.r[7], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[11], c.r[4].w[0] - 17256u);
    ldl(c.r[8], (c.r[11].w[0] + 7u));
    ldr(c.r[8], (c.r[11].w[0]));
    sdl(c.r[8], (c.r[16].w[0] + 47u));
    sdr(c.r[8], (c.r[16].w[0] + 40u));
    set32(c.r[8], 0u + 192u);
    set32(c.r[9], 0u + 1u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[11], c.r[2].w[0] - 17248u);
    ldl(c.r[4], (c.r[11].w[0] + 7u));
    ldr(c.r[4], (c.r[11].w[0]));
    ldl(c.r[6], (c.r[11].w[0] + 15u));
    ldr(c.r[6], (c.r[11].w[0] + 8u));
    ldl(c.r[10], (c.r[11].w[0] + 23u));
    ldr(c.r[10], (c.r[11].w[0] + 16u));
    sdl(c.r[4], (c.r[3].w[0] + 7u));
    sdr(c.r[4], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[10], (c.r[3].w[0] + 23u));
    sdr(c.r[10], (c.r[3].w[0] + 16u));
    ldl(c.r[4], (c.r[11].w[0] + 31u));
    ldr(c.r[4], (c.r[11].w[0] + 24u));
    ldl(c.r[6], (c.r[11].w[0] + 39u));
    ldr(c.r[6], (c.r[11].w[0] + 32u));
    ldl(c.r[10], (c.r[11].w[0] + 47u));
    ldr(c.r[10], (c.r[11].w[0] + 40u));
    sdl(c.r[4], (c.r[3].w[0] + 31u));
    sdr(c.r[4], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[3].w[0] + 39u));
    sdr(c.r[6], (c.r[3].w[0] + 32u));
    sdl(c.r[10], (c.r[3].w[0] + 47u));
    sdr(c.r[10], (c.r[3].w[0] + 40u));
    ldl(c.r[4], (c.r[11].w[0] + 55u));
    ldr(c.r[4], (c.r[11].w[0] + 48u));
    ldl(c.r[6], (c.r[11].w[0] + 63u));
    ldr(c.r[6], (c.r[11].w[0] + 56u));
    sdl(c.r[4], (c.r[3].w[0] + 55u));
    sdr(c.r[4], (c.r[3].w[0] + 48u));
    sdl(c.r[6], (c.r[3].w[0] + 63u));
    sdr(c.r[6], (c.r[3].w[0] + 56u));
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 116u), c.r[7].w[0]);
    set32(c.r[4], c.r[16].w[0] + 384u);
    st32((c.r[16].w[0] + 120u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 316u), c.r[9].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 352u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), 0u);
    st32((c.r[16].w[0] + 368u), 0u);
    c.budget -= 82;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5350u); st32((c.r[16].w[0] + 372u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003A5490u; return; } if (c.pc != 0x003A5350u) [[unlikely]] return; }
L_003A5350:
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5360u); set32(c.r[4], c.r[16].w[0] + 140u);  if (depth < kMaxDepth) unit_00A1(c, 117u, depth + 1u); else { c.pc = 0x003A5540u; return; } if (c.pc != 0x003A5360u) [[unlikely]] return; }
L_003A5360:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[16].w[0] + 268u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 272u), 0u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5380u); set32(c.r[4], c.r[16].w[0] + 280u);  if (depth < kMaxDepth) unit_00A0(c, 279u, depth + 1u); else { c.pc = 0x003A2AC8u; return; } if (c.pc != 0x003A5380u) [[unlikely]] return; }
L_003A5380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5388u); set32(c.r[4], c.r[16].w[0] + 4224u);  if (depth < kMaxDepth) unit_00A1(c, 118u, depth + 1u); else { c.pc = 0x003A5560u; return; } if (c.pc != 0x003A5388u) [[unlikely]] return; }
L_003A5388:
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], c.r[16].w[0] + 4372u);
    set32(c.r[3], c.r[16].w[0] + 4068u);
    c.budget -= 4;
L_003A5398:
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 240u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5398u | kUnwind; return; } goto L_003A5398; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A53C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[5].w[0] - 17296u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_003A53F0; }
L_003A53E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003A53F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003A5408; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A5484; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 1;
L_003A5408:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 17256u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
L_003A5418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A53E4u | kUnwind; return; } goto L_003A53E4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5418u | kUnwind; return; } goto L_003A5418; }
    set32(c.r[2], c.r[5].w[0] - 17296u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003A5484; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 17248u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
L_003A5460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A53E4u | kUnwind; return; } goto L_003A53E4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5460u | kUnwind; return; } goto L_003A5460; }
L_003A5484:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A5490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 9;
    { const bool t = c.r[6].sd[0] <= 0; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003A5520; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], 0u + 1u);
    set32(c.r[19], 0u - 1u);
    c.budget -= 5;
L_003A54C8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54E0u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003A54E0u) [[unlikely]] return; }
L_003A54E0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], c.r[16].w[0] + 92u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[16].w[0] + 60u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5514u); st32((c.r[16].w[0] + 88u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 117u, depth + 1u); else { c.pc = 0x003A5540u; return; } if (c.pc != 0x003A5514u) [[unlikely]] return; }
L_003A5514:
    st32((c.r[16].w[0] + 232u), 0u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A54C8u | kUnwind; return; } goto L_003A54C8; } }
L_003A5520:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 32u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00387F08u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 70u, depth); }
L_003A5560:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], 0u + 16u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[8], c.r[4].w[0] + 16u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[7], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[6], 0u + 15u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 12;
L_003A5590:
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5590u | kUnwind; return; } goto L_003A5590; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A55B8:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[3].sd[0] < -3ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;  if (t) { goto L_003A55E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A55F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A55F0; } }
L_003A55E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A55F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A55F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 8120u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A576C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[12], c.r[2].w[0] - 17296u);
    ldl(c.r[9], (c.r[16].w[0] + 11u));
    ldr(c.r[9], (c.r[16].w[0] + 4u));
    ldl(c.r[10], (c.r[16].w[0] + 19u));
    ldr(c.r[10], (c.r[16].w[0] + 12u));
    ldl(c.r[11], (c.r[16].w[0] + 27u));
    ldr(c.r[11], (c.r[16].w[0] + 20u));
    sdl(c.r[9], (c.r[12].w[0] + 7u));
    sdr(c.r[9], (c.r[12].w[0]));
    sdl(c.r[10], (c.r[12].w[0] + 15u));
    sdr(c.r[10], (c.r[12].w[0] + 8u));
    sdl(c.r[11], (c.r[12].w[0] + 23u));
    sdr(c.r[11], (c.r[12].w[0] + 16u));
    ldl(c.r[9], (c.r[16].w[0] + 35u));
    ldr(c.r[9], (c.r[16].w[0] + 28u));
    set32(c.r[10], ld32((c.r[16].w[0] + 36u)));
    sdl(c.r[9], (c.r[12].w[0] + 31u));
    sdr(c.r[9], (c.r[12].w[0] + 24u));
    st32((c.r[12].w[0] + 32u), c.r[10].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[11], c.r[3].w[0] - 17256u);
    ldl(c.r[2], (c.r[16].w[0] + 47u));
    ldr(c.r[2], (c.r[16].w[0] + 40u));
    sdl(c.r[2], (c.r[11].w[0] + 7u));
    sdr(c.r[2], (c.r[11].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[9], c.r[5].w[0] - 17248u);
    ldl(c.r[12], (c.r[16].w[0] + 55u));
    ldr(c.r[12], (c.r[16].w[0] + 48u));
    ldl(c.r[2], (c.r[16].w[0] + 63u));
    ldr(c.r[2], (c.r[16].w[0] + 56u));
    ldl(c.r[3], (c.r[16].w[0] + 71u));
    ldr(c.r[3], (c.r[16].w[0] + 64u));
    sdl(c.r[12], (c.r[9].w[0] + 7u));
    sdr(c.r[12], (c.r[9].w[0]));
    sdl(c.r[2], (c.r[9].w[0] + 15u));
    sdr(c.r[2], (c.r[9].w[0] + 8u));
    sdl(c.r[3], (c.r[9].w[0] + 23u));
    sdr(c.r[3], (c.r[9].w[0] + 16u));
    ldl(c.r[12], (c.r[16].w[0] + 79u));
    ldr(c.r[12], (c.r[16].w[0] + 72u));
    ldl(c.r[2], (c.r[16].w[0] + 87u));
    ldr(c.r[2], (c.r[16].w[0] + 80u));
    ldl(c.r[3], (c.r[16].w[0] + 95u));
    ldr(c.r[3], (c.r[16].w[0] + 88u));
    sdl(c.r[12], (c.r[9].w[0] + 31u));
    sdr(c.r[12], (c.r[9].w[0] + 24u));
    sdl(c.r[2], (c.r[9].w[0] + 39u));
    sdr(c.r[2], (c.r[9].w[0] + 32u));
    sdl(c.r[3], (c.r[9].w[0] + 47u));
    sdr(c.r[3], (c.r[9].w[0] + 40u));
    ldl(c.r[12], (c.r[16].w[0] + 103u));
    ldr(c.r[12], (c.r[16].w[0] + 96u));
    ldl(c.r[2], (c.r[16].w[0] + 111u));
    ldr(c.r[2], (c.r[16].w[0] + 104u));
    sdl(c.r[12], (c.r[9].w[0] + 55u));
    sdr(c.r[12], (c.r[9].w[0] + 48u));
    sdl(c.r[2], (c.r[9].w[0] + 63u));
    sdr(c.r[2], (c.r[9].w[0] + 56u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4224u)));
    st32((c.r[6].w[0] - 17184u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4228u)));
    st32((c.r[7].w[0] - 17180u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4232u)));
    c.budget -= 70;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5738u); st32((c.r[8].w[0] - 17176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 307u, depth + 1u); else { c.pc = 0x003A7718u; return; } if (c.pc != 0x003A5738u) [[unlikely]] return; }
L_003A5738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 124u, depth + 1u); else { c.pc = 0x003A5788u; return; } if (c.pc != 0x003A5740u) [[unlikely]] return; }
L_003A5740:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A5768; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3852ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5768:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003A576C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DBA8u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 134u, depth); }
L_003A57A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A57A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A57B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A57B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A57C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3853ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A57E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3853ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 3368u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5830u); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 175u, depth + 1u); else { c.pc = 0x003A6058u; return; } if (c.pc != 0x003A5830u) [[unlikely]] return; }
L_003A5830:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A5848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003A58BC; } }
    c.budget -= 1;
L_003A5848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5850u);  if (depth < kMaxDepth) unit_00A1(c, 188u, depth + 1u); else { c.pc = 0x003A6218u; return; } if (c.pc != 0x003A5850u) [[unlikely]] return; }
L_003A5850:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A5894; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A586Cu);  if (depth < kMaxDepth) unit_00A1(c, 137u, depth + 1u); else { c.pc = 0x003A58E0u; return; } if (c.pc != 0x003A586Cu) [[unlikely]] return; }
L_003A586C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 636u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A588Cu); st32((c.r[19].w[0] + 640u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 119u, depth + 1u); else { c.pc = 0x003AD400u; return; } if (c.pc != 0x003A588Cu) [[unlikely]] return; }
L_003A588C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A58A0; } }
L_003A5894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003A58C0; } }
    c.budget -= 1;
L_003A58A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A58C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A58B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 222u, depth + 1u); else { c.pc = 0x003A6688u; return; } if (c.pc != 0x003A58B4u) [[unlikely]] return; }
L_003A58B4:
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003A58BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A58C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A58E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A590Cu); set32(c.r[17], ld32((c.r[16].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00A1(c, 170u, depth + 1u); else { c.pc = 0x003A5FE0u; return; } if (c.pc != 0x003A590Cu) [[unlikely]] return; }
L_003A590C:
    set32(c.r[10], 0u + 1u);
    set32(c.r[9], c.r[19].w[0] + 92u);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    set32(c.r[8], c.r[2].w[0] + 8u);
    set32(c.r[3], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    st32((c.r[8].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 64u)));
    st32((c.r[8].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 12u)));
    st32((c.r[8].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[8].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    st32((c.r[8].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    st32((c.r[8].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    st32((c.r[8].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    st32((c.r[8].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    st32((c.r[8].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    st32((c.r[8].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 68u)));
    st32((c.r[8].w[0] + 60u), c.r[7].w[0]);
    c.budget -= 41;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[8].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003A59C0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003A59C4; } }
    c.budget -= 1;
L_003A59C0:
    st32((c.r[8].w[0] + 72u), c.r[10].w[0]);
    c.budget -= 1;
L_003A59C4:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 224u));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st64((c.r[2].w[0] + 80u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[9].w[0] + 56u)));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[9].w[0] + 60u)));
    st32((c.r[3].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[9].w[0] + 72u)));
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[9].w[0] + 76u)));
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld16((c.r[9].w[0] + 80u));
    st16((c.r[4].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld16((c.r[9].w[0] + 82u));
    st16((c.r[3].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 85u));
    st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 86u));
    st8((c.r[3].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 87u));
    st8((c.r[4].w[0] + 110u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 89u));
    st8((c.r[3].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 90u));
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 91u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[3].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 92u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    st8((c.r[4].w[0] + 114u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 93u));
    st8((c.r[3].w[0] + 115u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 94u));
    st8((c.r[4].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 95u));
    st8((c.r[3].w[0] + 117u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 96u));
    st8((c.r[4].w[0] + 118u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 97u));
    st8((c.r[3].w[0] + 119u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 98u));
    st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 99u));
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 100u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[4].w[0] + 122u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 73;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5AE8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B10u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003A5B10u) [[unlikely]] return; }
L_003A5B10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B20u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 143u, depth + 1u); else { c.pc = 0x003A5B48u; return; } if (c.pc != 0x003A5B20u) [[unlikely]] return; }
L_003A5B20:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B2Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003A5B2Cu) [[unlikely]] return; }
L_003A5B2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5B48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[19], ld32((c.r[16].w[0] + 8120u)));  if (t) { goto L_003A5BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B80u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 168u, depth + 1u); else { c.pc = 0x003A5FA0u; return; } if (c.pc != 0x003A5B80u) [[unlikely]] return; }
L_003A5B80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A5BB0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3871ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5BB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 170u, depth + 1u); else { c.pc = 0x003A5FE0u; return; } if (c.pc != 0x003A5BB8u) [[unlikely]] return; }
L_003A5BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A5C40; } }
L_003A5BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5BC8u);  if (depth < kMaxDepth) unit_00A1(c, 149u, depth + 1u); else { c.pc = 0x003A5C70u; return; } if (c.pc != 0x003A5BC8u) [[unlikely]] return; }
L_003A5BC8:
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[5].d[0] | 3854ull;  if (t) { goto L_003A5C00; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 166u, depth + 1u); else { c.pc = 0x003A5F58u; return; } if (c.pc != 0x003A5C08u) [[unlikely]] return; }
L_003A5C08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[5].d[0] = c.r[5].d[0] | 3855ull;  if (t) { goto L_003A5C40; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5C40:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 186u, depth + 1u); else { c.pc = 0x003A61C0u; return; } if (c.pc != 0x003A5C4Cu) [[unlikely]] return; }
L_003A5C4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] - 8u);  c.pc = t; return; }
L_003A5C78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 8120u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 153u, depth + 1u); else { c.pc = 0x003A5CE8u; return; } if (c.pc != 0x003A5C9Cu) [[unlikely]] return; }
L_003A5C9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003A5CD8; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A5CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5CC0u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A5CC0u) [[unlikely]] return; }
L_003A5CC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 200u);  goto L_003A5CCC; }
L_003A5CC8:
    set32(c.r[2], 0u + 192u);
    c.budget -= 1;
L_003A5CCC:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_003A5CD8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5CE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D10u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_00A1(c, 157u, depth + 1u); else { c.pc = 0x003A5DE0u; return; } if (c.pc != 0x003A5D10u) [[unlikely]] return; }
L_003A5D10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003A5DCC; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A5DC8; } }
    ldl(c.r[2], (c.r[4].w[0] + 19u));
    ldr(c.r[2], (c.r[4].w[0] + 12u));
    ldl(c.r[3], (c.r[4].w[0] + 27u));
    ldr(c.r[3], (c.r[4].w[0] + 20u));
    ldl(c.r[5], (c.r[4].w[0] + 35u));
    ldr(c.r[5], (c.r[4].w[0] + 28u));
    ldl(c.r[6], (c.r[4].w[0] + 43u));
    ldr(c.r[6], (c.r[4].w[0] + 36u));
    sdl(c.r[2], (c.r[17].w[0] + 3435u));
    sdr(c.r[2], (c.r[17].w[0] + 3428u));
    sdl(c.r[3], (c.r[17].w[0] + 3443u));
    sdr(c.r[3], (c.r[17].w[0] + 3436u));
    sdl(c.r[5], (c.r[17].w[0] + 3451u));
    sdr(c.r[5], (c.r[17].w[0] + 3444u));
    sdl(c.r[6], (c.r[17].w[0] + 3459u));
    sdr(c.r[6], (c.r[17].w[0] + 3452u));
    ldl(c.r[2], (c.r[4].w[0] + 51u));
    ldr(c.r[2], (c.r[4].w[0] + 44u));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    sdl(c.r[2], (c.r[17].w[0] + 3467u));
    sdr(c.r[2], (c.r[17].w[0] + 3460u));
    st32((c.r[17].w[0] + 3468u), c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + 56u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 512u)));
    set32(c.r[6], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DA0u); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009A(c, 170u, depth + 1u); else { c.pc = 0x0038BD38u; return; } if (c.pc != 0x003A5DA0u) [[unlikely]] return; }
L_003A5DA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 3867ull;  if (t) { goto L_003A5DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DB8u);  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A5DB8u) [[unlikely]] return; }
L_003A5DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A5DCC; } }
L_003A5DC0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003A5DC8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A5DCC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A5DE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 13992u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8120u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 2768u);  if (t) { goto L_003A5E08; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 5;
L_003A5E08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E2Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A5E2Cu) [[unlikely]] return; }
L_003A5E2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A5E50; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 392ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5E50:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 166u, depth + 1u); else { c.pc = 0x003A5F58u; return; } if (c.pc != 0x003A5E5Cu) [[unlikely]] return; }
L_003A5E5C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A5E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E74u); c.r[5].d[0] = c.r[5].d[0] | 3888ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A5E74u) [[unlikely]] return; }
L_003A5E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 2428u)));  if (t) { goto L_003A5E90; } }
    c.budget -= 1;
L_003A5E80:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2428u)));
    c.budget -= 4;
L_003A5E90:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 2428u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5ECCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A5ECCu) [[unlikely]] return; }
L_003A5ECC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A5EF0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 393ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A5EF0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5EFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 166u, depth + 1u); else { c.pc = 0x003A5F58u; return; } if (c.pc != 0x003A5EFCu) [[unlikely]] return; }
L_003A5EFC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A5F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F14u); c.r[5].d[0] = c.r[5].d[0] | 3889ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A5F14u) [[unlikely]] return; }
L_003A5F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 2428u)));  if (t) { goto L_003A5F38; } }
    c.budget -= 1;
L_003A5F20:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2428u)));
    c.budget -= 6;
L_003A5F38:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 2428u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5F58:
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    set32(c.r[4], c.r[4].w[0] + 5800u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] + 384u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    c.budget -= 6;
L_003A5F70:
    set32(c.r[4], c.r[4].w[0] + 136u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[6].w[0] + 240u);  if (t) { goto L_003A5F98; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5F70u | kUnwind; return; } goto L_003A5F70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A5F98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5FA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 384u);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 4;
L_003A5FB0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] + 240u);  if (t) { goto L_003A5FD8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5FB0u | kUnwind; return; } goto L_003A5FB0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A5FD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5FE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 376u)));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[3], c.r[2].w[0] + 384u);  if (t) { goto L_003A601C; } }
    set32(c.r[4], c.r[4].w[0] + 5800u);
    c.budget -= 1;
L_003A5FF8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] + 136u);  if (t) { goto L_003A6020; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5FF8u | kUnwind; return; } goto L_003A5FF8; } }
L_003A601C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A6028:
    set32(c.r[3], ld32((c.r[4].w[0] + 8120u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 124u), c.r[2].w[0]);  c.pc = t; return; }
L_003A6038:
    set32(c.r[3], ld32((c.r[4].w[0] + 8120u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 124u)));  c.pc = t; return; }
L_003A6048:
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 128u), c.r[5].w[0]);  c.pc = t; return; }
L_003A6058:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6070u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003A6070u) [[unlikely]] return; }
L_003A6070:
    set32(c.r[5], ld32((c.r[16].w[0] + 8120u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 376u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[5].w[0] + 384u);  if (t) { goto L_003A60C4; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
L_003A6098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 240u);  if (t) { goto L_003A60A8; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003A60B0; }
L_003A60A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 2;
L_003A60B0:
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6098u | kUnwind; return; } goto L_003A6098; }
L_003A60C4:
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A60D8; } }
    if (c.r[16].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_003A60D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A60E0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003A60E0u) [[unlikely]] return; }
L_003A60E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A60F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6110u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003A6110u) [[unlikely]] return; }
L_003A6110:
    set32(c.r[2], ld32((c.r[16].w[0] + 8120u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 376u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], c.r[2].w[0] + 384u);  if (t) { goto L_003A615C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[16].w[0]));  if (t) { goto L_003A6140; } }
    c.budget -= 1;
L_003A6130:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 240u);  if (t) { goto L_003A615C; } }
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 1;
L_003A6140:
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6130u | kUnwind; return; } goto L_003A6130; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003A615C:
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A616Cu); if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003A616Cu) [[unlikely]] return; }
L_003A616C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6180:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[4].w[0]), 0u);  goto L_003A6188; }
L_003A6188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A6190:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A619C; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003A619C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A61A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003A61B4; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003A61B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A61C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003A61E4; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[4].w[0]), 0u);  goto L_003A61DC; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003A61DC:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_003A61E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A61F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003A6210; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[4].w[0]), 0u);  goto L_003A6210; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003A6210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A6218:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6248u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003A6248u) [[unlikely]] return; }
L_003A6248:
    set32(c.r[2], ld32((c.r[16].w[0] + 8120u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 376u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[2].w[0] + 384u);  if (t) { goto L_003A62A4; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[21], 0u + 2u);
    set32(c.r[20], 0u + 4u);
    set32(c.r[19], 0u - 1u);
    c.budget -= 4;
L_003A6268:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_003A6280; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[20].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003A629C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_003A6280:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003A629C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6294u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 221u, depth + 1u); else { c.pc = 0x003A6668u; return; } if (c.pc != 0x003A6294u) [[unlikely]] return; }
L_003A6294:
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[16].d[0];
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 2;
L_003A629C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6268u | kUnwind; return; } goto L_003A6268; } }
L_003A62A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62ACu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003A62ACu) [[unlikely]] return; }
L_003A62AC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A62D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62F4u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 210u, depth + 1u); else { c.pc = 0x003A64D0u; return; } if (c.pc != 0x003A62F4u) [[unlikely]] return; }
L_003A62F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_003A630C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003A6318; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003A630C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003A6324; } }
    c.budget -= 1;
L_003A6318:
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003A6324:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6338:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6350u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A6350u) [[unlikely]] return; }
L_003A6350:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 391ull;  if (t) { goto L_003A6378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A636Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A636Cu) [[unlikely]] return; }
L_003A636C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A639C; } }
    c.budget -= 1;
L_003A6378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6380u);  if (depth < kMaxDepth) unit_00A1(c, 199u, depth + 1u); else { c.pc = 0x003A63B0u; return; } if (c.pc != 0x003A6380u) [[unlikely]] return; }
L_003A6380:
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 2408u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_003A6398; } }
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_003A6398:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003A639C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A63B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63CCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003A63CCu) [[unlikely]] return; }
L_003A63CC:
    set32(c.r[5], c.r[29].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 216u, depth + 1u); else { c.pc = 0x003A6568u; return; } if (c.pc != 0x003A63DCu) [[unlikely]] return; }
L_003A63DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    set32(c.r[5], 0u + 15u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63FCu); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A63FCu) [[unlikely]] return; }
L_003A63FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003A6458; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A6428; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6420u); set32(c.r[5], ld32((c.r[2].w[0] + 56u)));  if (depth < kMaxDepth) unit_00A3(c, 120u, depth + 1u); else { c.pc = 0x003AD438u; return; } if (c.pc != 0x003A6420u) [[unlikely]] return; }
L_003A6420:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003A6458; }
L_003A6428:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_003A6458; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], 0u + 2u);  goto L_003A6458; }
    set32(c.r[6], ld32((c.r[2].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A644Cu); set32(c.r[5], ld32((c.r[2].w[0] + 56u)));  if (depth < kMaxDepth) unit_00A3(c, 120u, depth + 1u); else { c.pc = 0x003AD438u; return; } if (c.pc != 0x003A644Cu) [[unlikely]] return; }
L_003A644C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_003A6458; }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_003A6458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6460u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003A6460u) [[unlikely]] return; }
L_003A6460:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A648Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A648Cu) [[unlikely]] return; }
L_003A648C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 387ull;  if (t) { goto L_003A64B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64A4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A64A4u) [[unlikely]] return; }
L_003A64A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A64BC; } }
    c.budget -= 1;
L_003A64B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64B8u);  if (depth < kMaxDepth) unit_00A1(c, 210u, depth + 1u); else { c.pc = 0x003A64D0u; return; } if (c.pc != 0x003A64B8u) [[unlikely]] return; }
L_003A64B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A64BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A64D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64E8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003A64E8u) [[unlikely]] return; }
L_003A64E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[29].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 8u);  if (t) { goto L_003A6508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), 0u);  if (t) { goto L_003A654C; } }
L_003A6508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6510u);  if (depth < kMaxDepth) unit_00A1(c, 216u, depth + 1u); else { c.pc = 0x003A6568u; return; } if (c.pc != 0x003A6510u) [[unlikely]] return; }
L_003A6510:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_003A654C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6528u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A6528u) [[unlikely]] return; }
L_003A6528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A654C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6540u); set32(c.r[5], ld32((c.r[2].w[0] + 56u)));  if (depth < kMaxDepth) unit_00A3(c, 120u, depth + 1u); else { c.pc = 0x003AD438u; return; } if (c.pc != 0x003A6540u) [[unlikely]] return; }
L_003A6540:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
L_003A654C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6554u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003A6554u) [[unlikely]] return; }
L_003A6554:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6568:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.budget -= 1;
L_003A656C:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 376u)));
    set32(c.r[16], c.r[2].w[0] + 384u);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003A661C; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[22], 0u + 2u);
    set32(c.r[21], 0u + 4u);
    c.budget -= 4;
L_003A65C0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_003A65D8; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_003A6614; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003A65D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65E4u); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_00A1(c, 221u, depth + 1u); else { c.pc = 0x003A6668u; return; } if (c.pc != 0x003A65E4u) [[unlikely]] return; }
L_003A65E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A6600; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_003A6610; } }
    c.budget -= 1;
L_003A6600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6608u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A1(c, 221u, depth + 1u); else { c.pc = 0x003A6668u; return; } if (c.pc != 0x003A6608u) [[unlikely]] return; }
L_003A6608:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  goto L_003A6610; }
L_003A6610:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_003A6614:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A65C0u | kUnwind; return; } goto L_003A65C0; } }
L_003A661C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A6630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_003A6638; } }
    c.budget -= 1;
L_003A6630:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A6640; } }
L_003A6638:
    st32((c.r[17].w[0]), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003A6640:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A6668:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A667C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003A667C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A6688:
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.r[3].w[0]);  c.pc = t; return; }
L_003A66A0:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A66E4; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 6;
L_003A66E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A66F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6704u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x003A6704u) [[unlikely]] return; }
L_003A6704:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 62752ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62864ull;
    c.r[4].d[0] = c.r[4].d[0] | 45056ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F070u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_003A6758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A676Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x003A676Cu) [[unlikely]] return; }
L_003A676C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 62752ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62864ull;
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F070u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_003A67C0:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0]), c.r[5].d[0]);  c.pc = t; return; }
L_003A67E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[10], c.r[7].w[0] << 11);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A683Cu); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x003A683Cu) [[unlikely]] return; }
L_003A683C:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6848u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 232u, depth + 1u); else { c.pc = 0x003A6860u; return; } if (c.pc != 0x003A6848u) [[unlikely]] return; }
L_003A6848:
    st64((c.r[16].w[0] + 72u), 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003A68CC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_003A68A8:
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0] + 20u), 0u);
    st64((c.r[3].w[0]), c.r[4].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st64((c.r[3].w[0] + 8u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A68A8u | kUnwind; return; } goto L_003A68A8; } }
L_003A68CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A6920; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_003A68E8:
    set32(c.r[5], c.r[18].w[0] << 11);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[16].d[0];
    set32(c.r[7], 0u + 128u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6910u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00A1(c, 228u, depth + 1u); else { c.pc = 0x003A67C0u; return; } if (c.pc != 0x003A6910u) [[unlikely]] return; }
L_003A6910:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A68E8u | kUnwind; return; } goto L_003A68E8; }
L_003A6920:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[16].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6944u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A1(c, 228u, depth + 1u); else { c.pc = 0x003A67C0u; return; } if (c.pc != 0x003A6944u) [[unlikely]] return; }
L_003A6944:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 46128ull;
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6980u); st32((c.r[5].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 226u, depth + 1u); else { c.pc = 0x003A6758u; return; } if (c.pc != 0x003A6980u) [[unlikely]] return; }
L_003A6980:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A69A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A69D8u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x003A69D8u) [[unlikely]] return; }
L_003A69D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x003A69FCu);  goto L_003A6A00; }
L_003A6A00:
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] - 4096u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[4].w[0]);  goto L_003A6A48; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003A6A68; } }
    c.budget -= 1;
L_003A6A48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_003A6A68:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124F80u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 135u, depth); }
L_003A6A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AB0u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x003A6AB0u) [[unlikely]] return; }
L_003A6AB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st64((c.r[16].w[0] + 72u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124F80u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 135u, depth); }
L_003A6AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B00u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x003A6B00u) [[unlikely]] return; }
L_003A6B00:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[17].d[0];
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[16].w[0] + 72u), c.r[2].d[0]);  if (t) { goto L_003A6B40; } }
    c.budget -= 1;
L_003A6B20:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6B20u | kUnwind; return; } goto L_003A6B20; } }
    c.budget -= 1;
L_003A6B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B48u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x003A6B48u) [[unlikely]] return; }
L_003A6B48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6B60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B98u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x003A6B98u) [[unlikely]] return; }
L_003A6B98:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A6BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BACu); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x003A6BACu) [[unlikely]] return; }
L_003A6BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6D30; } }
    c.budget -= 1;
L_003A6BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BC0u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00A1(c, 226u, depth + 1u); else { c.pc = 0x003A6758u; return; } if (c.pc != 0x003A6BC0u) [[unlikely]] return; }
L_003A6BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46080ull;
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 223u, depth + 1u); else { c.pc = 0x003A66A0u; return; } if (c.pc != 0x003A6BE0u) [[unlikely]] return; }
L_003A6BE0:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003A6BF0u);  goto L_003A6BF4; }
L_003A6BF4:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[4].w[0] + 2047u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[3], c.r[19].w[0] << 11);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 23;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[17].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_003A6C90; } }
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003A6C60u);  goto L_003A6C64; }
L_003A6C64:
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[23], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[4].w[0] << 11);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C90u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 228u, depth + 1u); else { c.pc = 0x003A67C0u; return; } if (c.pc != 0x003A6C90u) [[unlikely]] return; }
L_003A6C90:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A6CF4; } }
    set32(c.r[20], c.r[19].w[0] - 1u);
    set32(c.r[22], 0u + 3u);
    c.budget -= 2;
L_003A6CA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[7].d[0] = c.r[18].d[0] ^ c.r[20].d[0];
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[16].w[0] << 11);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    if (c.r[7].d[0] != 0) c.r[6].d[0] = c.r[22].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CCCu); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_00A1(c, 228u, depth + 1u); else { c.pc = 0x003A67C0u; return; } if (c.pc != 0x003A6CCCu) [[unlikely]] return; }
L_003A6CCC:
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[5].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003A6CE4u);  goto L_003A6CE8; }
L_003A6CE8:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6CA0u | kUnwind; return; } goto L_003A6CA0; } }
L_003A6CF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003A6D24; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_003A6D1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[21].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
L_003A6D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D24u); c.r[4].d[0] = c.r[21].d[0] | 256ull;  if (depth < kMaxDepth) unit_00A1(c, 226u, depth + 1u); else { c.pc = 0x003A6758u; return; } if (c.pc != 0x003A6D24u) [[unlikely]] return; }
L_003A6D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D2Cu); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x003A6D2Cu) [[unlikely]] return; }
L_003A6D2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A6D30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A6D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D78u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x003A6D78u) [[unlikely]] return; }
L_003A6D78:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D84u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00A1(c, 226u, depth + 1u); else { c.pc = 0x003A6758u; return; } if (c.pc != 0x003A6D84u) [[unlikely]] return; }
L_003A6D84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46112ull;
    c.r[6].d[0] = c.r[6].d[0] | 46080ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 19;
L_003A6DD0:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6DD0u | kUnwind; return; } goto L_003A6DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DF4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 224u, depth + 1u); else { c.pc = 0x003A66F0u; return; } if (c.pc != 0x003A6DF4u) [[unlikely]] return; }
L_003A6DF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 45088ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 45056ull;
    c.r[7].d[0] = c.r[7].d[0] | 8224ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[5].d[0] | 8208ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E4Cu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x003A6E4Cu) [[unlikely]] return; }
L_003A6E4C:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E90u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x003A6E90u) [[unlikely]] return; }
L_003A6E90:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[3], c.r[4].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], c.r[9].w[0] - c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[21], c.r[5].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[20], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[10].d[0] | 256ull;  if (t) { goto L_003A6F80; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[7].w[0] - c.r[18].w[0]);
    set32(c.r[8], c.r[6].w[0] << 11);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[20].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[21], c.r[4].w[0] >> 4);
    c.budget -= 10;
    { const bool t = c.r[9].d[0] == c.r[7].d[0]; set32(c.r[18], c.r[18].w[0] + c.r[8].w[0]);  if (t) { goto L_003A6F0C; } }
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_003A6F10; } }
L_003A6F0C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6F10:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[4].w[0] << 28);
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[19].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 11;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003A6F38u);  goto L_003A6F3C; }
L_003A6F3C:
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_003A6F68; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003A6F4Cu);  goto L_003A6F50; }
L_003A6F50:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003A7068; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] - 1u);  if (t) { goto L_003A6F6C; } }
L_003A6F68:
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_003A6F6C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003A7064; } }
    c.budget -= 1;
L_003A6F80:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 223u, depth + 1u); else { c.pc = 0x003A66A0u; return; } if (c.pc != 0x003A6F8Cu) [[unlikely]] return; }
L_003A6F8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F9Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 223u, depth + 1u); else { c.pc = 0x003A66A0u; return; } if (c.pc != 0x003A6F9Cu) [[unlikely]] return; }
L_003A6F9C:
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[14].d[0]; c.r[9].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_003A7064; } }
    set32(c.r[12], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[11], 0u + 3u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[12].w[0] << 11);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003A6FC0u);  goto L_003A6FC4; }
L_003A6FC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[13], ld32((c.r[16].w[0] + 16u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 11);
    set32(c.r[2], c.r[4].w[0] + c.r[13].w[0]);
    set32(c.r[5], c.r[14].w[0] + c.r[12].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[21], c.r[3].w[0] >> 4);
    c.r[6].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[12].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[20].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[12].w[0]);
    set32(c.r[7], c.r[7].w[0] << 11);
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = c.r[6].d[0] ^ c.r[8].d[0];
    if (c.r[6].d[0] == 0) c.r[11].d[0] = 0ull;
    set32(c.r[11], c.r[11].w[0] << 28);
    c.r[4].d[0] = c.r[4].d[0] | c.r[11].d[0];
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 32;
    { const bool t = c.r[2].sd[0] < 0; c.r[19].d[0] = c.r[4].d[0] | 256ull;  if (t) { goto L_003A7058; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[12].d[0] == 0ull) { breakpoint(c, 0x003A704Cu);  goto L_003A7050; }
L_003A7050:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003A7068; }
L_003A7058:
    set32(c.r[2], c.r[13].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_003A7064:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003A7068:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_003A70A4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_003A70A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70A0u); c.r[4].d[0] = c.r[4].d[0] | 256ull;  if (depth < kMaxDepth) unit_00A1(c, 224u, depth + 1u); else { c.pc = 0x003A66F0u; return; } if (c.pc != 0x003A70A0u) [[unlikely]] return; }
L_003A70A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_003A70A4:
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 1;
L_003A70A8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A70A8u | kUnwind; return; } goto L_003A70A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 5;
L_003A70D8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A70D8u | kUnwind; return; } goto L_003A70D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[3].d[0] = c.r[3].d[0] | 46128ull;
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    st32((c.r[2].w[0]), c.r[18].w[0]);
    st32((c.r[3].w[0]), c.r[20].w[0]);
    st32((c.r[4].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003A712C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7128u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 226u, depth + 1u); else { c.pc = 0x003A6758u; return; } if (c.pc != 0x003A7128u) [[unlikely]] return; }
L_003A7128:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003A712C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7148u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x003A7148u) [[unlikely]] return; }
L_003A7148:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A7178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7190u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00A1(c, 226u, depth + 1u); else { c.pc = 0x003A6758u; return; } if (c.pc != 0x003A7190u) [[unlikely]] return; }
L_003A7190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    c.r[2].d[0] = c.r[2].d[0] | 46112ull;
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71BCu); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x003A71BCu) [[unlikely]] return; }
L_003A71BC:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A71D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71E8u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x003A71E8u) [[unlikely]] return; }
L_003A71E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + 2051u);
    set32(c.r[3], c.r[3].w[0] + 4098u);
    c.r[5].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124F80u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 135u, depth); }
L_003A7220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 10416u), c.r[4].w[0]);  c.pc = t; return; }
L_003A7230:
    set32(c.r[3], ld32((c.r[4].w[0] + 8120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4392u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003A7240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10416u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003A7278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A725Cu);  if (depth < kMaxDepth) unit_0007(c, 57u, depth + 1u); else { c.pc = 0x0013CD50u; return; } if (c.pc != 0x003A725Cu) [[unlikely]] return; }
L_003A725C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 17168u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 72u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00387E38u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 67u, depth); }
L_003A7278:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A72F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 10416u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 8120u)));
    set32(c.r[6], c.r[5].w[0] + 4u);
    set32(c.r[17], c.r[5].w[0] + 4392u);
    set32(c.r[19], c.r[5].w[0] + 4432u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], c.r[5].w[0] + 4600u);  if (t) { goto L_003A7348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003A74D4; } }
L_003A7348:
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 40u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[20], c.r[2].w[0] + 10240u);  if (t) { goto L_003A7398; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 63u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (t) { goto L_003A73B4; } }
L_003A7398:
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[3], c.r[7].w[0] + 63u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 7;
L_003A73B4:
    st32((c.r[5].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[16], ld32((c.r[5].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] | 63ull;
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[21].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[21].w[0] + 4175u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73E0u); c.r[23].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00A2(c, 224u, depth + 1u); else { c.pc = 0x003A9AD0u; return; } if (c.pc != 0x003A73E0u) [[unlikely]] return; }
L_003A73E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A7460; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 8u, depth + 1u); else { c.pc = 0x0013C1A8u; return; } if (c.pc != 0x003A73F8u) [[unlikely]] return; }
L_003A73F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[6], c.r[6].w[0] + 29976u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7410u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 69u, depth + 1u); else { c.pc = 0x0013CFC0u; return; } if (c.pc != 0x003A7410u) [[unlikely]] return; }
L_003A7410:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[6], c.r[6].w[0] + 30240u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7428u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 69u, depth + 1u); else { c.pc = 0x0013CFC0u; return; } if (c.pc != 0x003A7428u) [[unlikely]] return; }
L_003A7428:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[6], c.r[6].w[0] + 30408u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7440u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 69u, depth + 1u); else { c.pc = 0x0013CFC0u; return; } if (c.pc != 0x003A7440u) [[unlikely]] return; }
L_003A7440:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 30448u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7458u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0007(c, 69u, depth + 1u); else { c.pc = 0x0013CFC0u; return; } if (c.pc != 0x003A7458u) [[unlikely]] return; }
L_003A7458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 112u);  if (t) { goto L_003A746C; } }
L_003A7460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7468u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 313u, depth + 1u); else { c.pc = 0x003A77C8u; return; } if (c.pc != 0x003A7468u) [[unlikely]] return; }
L_003A7468:
    set32(c.r[16], c.r[17].w[0] + 112u);
    c.budget -= 1;
L_003A746C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], 0u + 256u);
    set32(c.r[9], 0u + 512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 229u, depth + 1u); else { c.pc = 0x003A67E8u; return; } if (c.pc != 0x003A7488u) [[unlikely]] return; }
L_003A7488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 246u, depth + 1u); else { c.pc = 0x003A6B60u; return; } if (c.pc != 0x003A7490u) [[unlikely]] return; }
L_003A7490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7498u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 256u, depth + 1u); else { c.pc = 0x003A6D60u; return; } if (c.pc != 0x003A7498u) [[unlikely]] return; }
L_003A7498:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    st32((c.r[30].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 15;
L_003A74D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A7508:
    set32(c.r[3], ld32((c.r[4].w[0] + 8120u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4604u)));  c.pc = t; return; }
L_003A7518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] - 17096u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[2].w[0] - 17088u);
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    sdl(c.r[3], (c.r[8].w[0] + 7u));
    sdr(c.r[3], (c.r[8].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 8120u)));
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    sdl(c.r[9], (c.r[2].w[0] + 4607u));
    sdr(c.r[9], (c.r[2].w[0] + 4600u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A756Cu); c.r[5].d[0] = c.r[5].d[0] | 3904ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A756Cu) [[unlikely]] return; }
L_003A756C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 12u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75B4u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 238u, depth + 1u); else { c.pc = 0x003A69A0u; return; } if (c.pc != 0x003A75B4u) [[unlikely]] return; }
L_003A75B4:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75F4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 321u, depth + 1u); else { c.pc = 0x003A7918u; return; } if (c.pc != 0x003A75F4u) [[unlikely]] return; }
L_003A75F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7604u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 240u, depth + 1u); else { c.pc = 0x003A6A90u; return; } if (c.pc != 0x003A7604u) [[unlikely]] return; }
L_003A7604:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A7620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8120u)));
    set32(c.r[17], c.r[2].w[0] + 4392u);
    set32(c.r[4], c.r[2].w[0] + 4432u);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; set32(c.r[16], c.r[2].w[0] + 4504u);  if (t) { goto L_003A7660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7658u);  if (depth < kMaxDepth) unit_0007(c, 66u, depth + 1u); else { c.pc = 0x0013CED8u; return; } if (c.pc != 0x003A7658u) [[unlikely]] return; }
L_003A7658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A76AC; } }
L_003A7660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7668u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 246u, depth + 1u); else { c.pc = 0x003A6B60u; return; } if (c.pc != 0x003A7668u) [[unlikely]] return; }
L_003A7668:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A76AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A76AC; } }
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16632u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7698u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00A1(c, 294u, depth + 1u); else { c.pc = 0x003A7580u; return; } if (c.pc != 0x003A7698u) [[unlikely]] return; }
L_003A7698:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76A8u); st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 246u, depth + 1u); else { c.pc = 0x003A6B60u; return; } if (c.pc != 0x003A76A8u) [[unlikely]] return; }
L_003A76A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A76AC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A76C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76DCu); set32(c.r[4], c.r[4].w[0] + 4504u);  if (depth < kMaxDepth) unit_00A1(c, 256u, depth + 1u); else { c.pc = 0x003A6D60u; return; } if (c.pc != 0x003A76DCu) [[unlikely]] return; }
L_003A76DC:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A76F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7704u); set32(c.r[4], c.r[4].w[0] + 4504u);  if (depth < kMaxDepth) unit_00A1(c, 262u, depth + 1u); else { c.pc = 0x003A6E60u; return; } if (c.pc != 0x003A7704u) [[unlikely]] return; }
L_003A7704:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7718:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7730u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 277u, depth + 1u); else { c.pc = 0x003A7230u; return; } if (c.pc != 0x003A7730u) [[unlikely]] return; }
L_003A7730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A7790; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 8120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7744u); set32(c.r[4], c.r[16].w[0] + 4504u);  if (depth < kMaxDepth) unit_00A1(c, 271u, depth + 1u); else { c.pc = 0x003A7178u; return; } if (c.pc != 0x003A7744u) [[unlikely]] return; }
L_003A7744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A774Cu);  if (depth < kMaxDepth) unit_00A2(c, 224u, depth + 1u); else { c.pc = 0x003A9AD0u; return; } if (c.pc != 0x003A774Cu) [[unlikely]] return; }
L_003A774C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 4432u);  if (t) { goto L_003A7770; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013CE00u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 61u, depth); }
L_003A7770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7778u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0013CEE8u; return; } if (c.pc != 0x003A7778u) [[unlikely]] return; }
L_003A7778:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003A77A0; }
L_003A7790:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A77A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8120u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 17168u);
    set32(c.r[5], c.r[5].w[0] + 4432u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00387B58u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 61u, depth); }
L_003A77C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 17168u);
    set32(c.r[6], 0u + 72u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8120u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4432u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00387B58u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 61u, depth); }
L_003A77F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7814u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 277u, depth + 1u); else { c.pc = 0x003A7230u; return; } if (c.pc != 0x003A7814u) [[unlikely]] return; }
L_003A7814:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A7840; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A7838:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_003A783C:
    c.budget -= 1;
L_003A7840:
    set32(c.r[4], ld32((c.r[18].w[0] + 8120u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 4504u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7580u | kUnwind; return; } goto L_003A7580; }
L_003A7860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A787Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 277u, depth + 1u); else { c.pc = 0x003A7230u; return; } if (c.pc != 0x003A787Cu) [[unlikely]] return; }
L_003A787C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A78A0; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A78A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8120u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 4504u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6AE0u | kUnwind; return; } goto L_003A6AE0; }
L_003A78C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8120u)));
    set32(c.r[16], c.r[4].w[0] + 4392u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; set32(c.r[4], c.r[4].w[0] + 4504u);  if (t) { goto L_003A7900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78F8u);  if (depth < kMaxDepth) unit_00A1(c, 274u, depth + 1u); else { c.pc = 0x003A71D0u; return; } if (c.pc != 0x003A78F8u) [[unlikely]] return; }
L_003A78F8:
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 2;
L_003A7900:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A7918:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    set32(c.r[30], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[7], c.r[17].w[0] + c.r[7].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[7].d[0] = c.r[7].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 24;
    { const bool t = c.r[7].d[0] != 0ull; c.r[20].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003A7A14; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], c.r[17].w[0] - c.r[16].w[0]);  goto L_003A79B8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A798Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A798Cu) [[unlikely]] return; }
L_003A798C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A799Cu); set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A799Cu) [[unlikely]] return; }
L_003A799C:
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79B0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A79B0u) [[unlikely]] return; }
L_003A79B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003A7A14; } }
L_003A79B8:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A79F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A79CCu) [[unlikely]] return; }
L_003A79CC:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79DCu); set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A79DCu) [[unlikely]] return; }
L_003A79DC:
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[21].w[0] - c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79F0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A79F0u) [[unlikely]] return; }
L_003A79F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003A7A14; } }
L_003A79F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A00u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A7A00u) [[unlikely]] return; }
L_003A7A00:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A10u); set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A7A10u) [[unlikely]] return; }
L_003A7A10:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_003A7A14:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A7A48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 277u, depth + 1u); else { c.pc = 0x003A7230u; return; } if (c.pc != 0x003A7A84u) [[unlikely]] return; }
L_003A7A84:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003A7AC0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038B700u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 129u, depth); }
L_003A7AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AC8u); set32(c.r[18], ld32((c.r[21].w[0] + 8120u)));  if (depth < kMaxDepth) unit_009A(c, 130u, depth + 1u); else { c.pc = 0x0038B708u; return; } if (c.pc != 0x003A7AC8u) [[unlikely]] return; }
L_003A7AC8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 4504u);
    set32(c.r[19], c.r[18].w[0] + 4392u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AE0u); set32(c.r[17], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00A1(c, 262u, depth + 1u); else { c.pc = 0x003A6E60u; return; } if (c.pc != 0x003A7AE0u) [[unlikely]] return; }
L_003A7AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 246u, depth + 1u); else { c.pc = 0x003A6B60u; return; } if (c.pc != 0x003A7AE8u) [[unlikely]] return; }
L_003A7AE8:
    set32(c.r[4], c.r[18].w[0] + 4432u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[10], ld32((c.r[21].w[0] + 56u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[9], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[3].w[0] + 15u);
    c.r[7].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[2].w[0] + 15u);
    c.r[5].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[8].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 17;
    { const bool t = c.r[10].d[0] != c.r[9].d[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]); c.r[6].d[0] = c.lo.d[0];  if (t) { goto L_003A7B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B34u); set32(c.r[5], ld32((c.r[20].w[0] + 32u)));  if (depth < kMaxDepth) unit_0007(c, 62u, depth + 1u); else { c.pc = 0x0013CE48u; return; } if (c.pc != 0x003A7B34u) [[unlikely]] return; }
L_003A7B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), 0u);  if (t) { goto L_003A7B4C; } }
    c.budget -= 1;
L_003A7B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B48u); set32(c.r[5], ld32((c.r[20].w[0] + 32u)));  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0013CE90u; return; } if (c.pc != 0x003A7B48u) [[unlikely]] return; }
L_003A7B48:
    st32((c.r[19].w[0] + 20u), 0u);
    c.budget -= 1;
L_003A7B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B54u); set32(c.r[4], c.r[19].w[0] + 112u);  if (depth < kMaxDepth) unit_00A1(c, 256u, depth + 1u); else { c.pc = 0x003A6D60u; return; } if (c.pc != 0x003A7B54u) [[unlikely]] return; }
L_003A7B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B5Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 349u, depth + 1u); else { c.pc = 0x003A7DB8u; return; } if (c.pc != 0x003A7B5Cu) [[unlikely]] return; }
L_003A7B5C:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], 0u - 3u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[22].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A7B90:
    set32(c.r[3], ld32((c.r[4].w[0] + 8120u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4440u)));  c.pc = t; return; }
L_003A7BA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8120u)));
    set32(c.r[17], c.r[3].w[0] + 4392u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 17u));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 18u));
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    st8((c.r[29].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 36;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003A7C84; } }
L_003A7C30:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_003A7C80; } }
    set32(c.r[2], c.r[29].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_003A7C84; }
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_003A7C84; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 183u);  if (t) { goto L_003A7CD0; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_003A7C84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_003A7C98; } }
    c.budget -= 1;
L_003A7C80:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003A7C84:
    set32(c.r[2], 0u + 3u);
    if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[18].d[0];
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7C30u | kUnwind; return; } goto L_003A7C30; } }
L_003A7C98:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + c.r[18].w[0]);  if (t) { goto L_003A7CE0; } }
    set32(c.r[2], c.r[29].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A7D34; } }
    c.budget -= 1;
L_003A7CD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7C98u | kUnwind; return; } goto L_003A7C98; } }
L_003A7CE0:
    c.r[2].d[0] = ld8((c.r[4].w[0] - 3u));
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] - 2u));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] - 1u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A7D34; } }
    c.budget -= 1;
L_003A7D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D08u);  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A7D08u) [[unlikely]] return; }
L_003A7D08:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], 0u + 1u);  goto L_003A7D20; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_003A7D20:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[16].w[0] - c.r[19].w[0]);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    c.r[7].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
L_003A7D34:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A7D5C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D4Cu); set32(c.r[6], 0u + 132u);  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x003A7D4Cu) [[unlikely]] return; }
L_003A7D4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7D00u | kUnwind; return; } goto L_003A7D00; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A7D5C:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003A7D94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 34u, depth + 1u); else { c.pc = 0x0039C710u; return; } if (c.pc != 0x003A7D6Cu) [[unlikely]] return; }
L_003A7D6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003A7D94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D7Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 39u, depth + 1u); else { c.pc = 0x0039C778u; return; } if (c.pc != 0x003A7D7Cu) [[unlikely]] return; }
L_003A7D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A7D94; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 319u, depth + 1u); else { c.pc = 0x003A78C0u; return; } if (c.pc != 0x003A7D90u) [[unlikely]] return; }
L_003A7D90:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A7D94:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A7DB8:
    set32(c.r[3], ld32((c.r[4].w[0] + 8120u)));
    set32(c.r[3], c.r[3].w[0] + 4392u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_003A7DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7DE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 277u, depth + 1u); else { c.pc = 0x003A7230u; return; } if (c.pc != 0x003A7DE4u) [[unlikely]] return; }
L_003A7DE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003A7DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A7E18; } }
    c.budget -= 1;
L_003A7DF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8120u)));
    set32(c.r[4], c.r[4].w[0] + 4392u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A7E18; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003A7E18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7E54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A7E54u) [[unlikely]] return; }
L_003A7E54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 321ull;  if (t) { goto L_003A7E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7E6Cu);  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A7E6Cu) [[unlikely]] return; }
L_003A7E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A7E7C; } }
    c.budget -= 1;
L_003A7E78:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_003A7E7C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7EACu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A7EACu) [[unlikely]] return; }
L_003A7EAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 322ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003A7ED8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A7ED8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; if (c.r[4].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];  if (t) { goto L_003A7EF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A7F08; } }
L_003A7EF0:
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 358u, depth + 1u); else { c.pc = 0x003A7F20u; return; } if (c.pc != 0x003A7F00u) [[unlikely]] return; }
L_003A7F00:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_003A7F08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A7F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A7F68; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 84u)));  goto L_003A7F80; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A7FA0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003A7FA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7F90; } }
L_003A7F68:
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; st32((c.r[3].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003A7F9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7F90; } }
L_003A7F80:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003A7F9C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A7F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7F98u);  if (depth < kMaxDepth) unit_00A1(c, 360u, depth + 1u); else { c.pc = 0x003A7FB0u; return; } if (c.pc != 0x003A7F98u) [[unlikely]] return; }
L_003A7F98:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A7F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A7FA0:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003A7FA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A2(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7FE4u);  if (depth < kMaxDepth) unit_00A3(c, 101u, depth + 1u); else { c.pc = 0x003AD1A0u; return; } if (c.pc != 0x003A7FE4u) [[unlikely]] return; }
L_003A7FE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 2u, depth); }
}

}
