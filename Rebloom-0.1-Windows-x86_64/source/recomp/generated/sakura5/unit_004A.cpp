#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0,
    0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    24, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 351,
    0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0,
    382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0,
};

void unit_004A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00248000;
    case 2u: goto L_00248010;
    case 3u: goto L_0024802C;
    case 4u: goto L_002480D0;
    case 5u: goto L_00248100;
    case 6u: goto L_00248118;
    case 7u: goto L_00248130;
    case 8u: goto L_00248164;
    case 9u: goto L_00248174;
    case 10u: goto L_00248184;
    case 11u: goto L_0024818C;
    case 12u: goto L_002481B0;
    case 13u: goto L_002481D0;
    case 14u: goto L_002481E8;
    case 15u: goto L_002481F8;
    case 16u: goto L_00248204;
    case 17u: goto L_00248214;
    case 18u: goto L_0024825C;
    case 19u: goto L_00248284;
    case 20u: goto L_002482B0;
    case 21u: goto L_002482BC;
    case 22u: goto L_002482E0;
    case 23u: goto L_002482F0;
    case 24u: goto L_00248300;
    case 25u: goto L_0024830C;
    case 26u: goto L_00248310;
    case 27u: goto L_00248334;
    case 28u: goto L_00248634;
    case 29u: goto L_0024865C;
    case 30u: goto L_002486AC;
    case 31u: goto L_002486D8;
    case 32u: goto L_00248700;
    case 33u: goto L_00248730;
    case 34u: goto L_00248760;
    case 35u: goto L_0024878C;
    case 36u: goto L_002487BC;
    case 37u: goto L_002487E0;
    case 38u: goto L_002487F0;
    case 39u: goto L_00248810;
    case 40u: goto L_00248820;
    case 41u: goto L_00248830;
    case 42u: goto L_00248840;
    case 43u: goto L_00248850;
    case 44u: goto L_00248894;
    case 45u: goto L_002488A0;
    case 46u: goto L_002488AC;
    case 47u: goto L_002488B8;
    case 48u: goto L_002488C4;
    case 49u: goto L_002488D0;
    case 50u: goto L_0024890C;
    case 51u: goto L_00248978;
    case 52u: goto L_00248984;
    case 53u: goto L_002489CC;
    case 54u: goto L_002489D8;
    case 55u: goto L_00248AC4;
    case 56u: goto L_00248AD8;
    case 57u: goto L_00248C58;
    case 58u: goto L_00248D50;
    case 59u: goto L_00248D98;
    case 60u: goto L_00248DE0;
    case 61u: goto L_00248E14;
    case 62u: goto L_00248E48;
    case 63u: goto L_00248E58;
    case 64u: goto L_00248E68;
    case 65u: goto L_00248E78;
    case 66u: goto L_00248E88;
    case 67u: goto L_00248E98;
    case 68u: goto L_00248EFC;
    case 69u: goto L_00248F04;
    case 70u: goto L_00248F3C;
    case 71u: goto L_00248F48;
    case 72u: goto L_00248F58;
    case 73u: goto L_00249040;
    case 74u: goto L_0024905C;
    case 75u: goto L_00249088;
    case 76u: goto L_0024909C;
    case 77u: goto L_002490C0;
    case 78u: goto L_002490E4;
    case 79u: goto L_00249134;
    case 80u: goto L_00249144;
    case 81u: goto L_00249154;
    case 82u: goto L_00249164;
    case 83u: goto L_00249178;
    case 84u: goto L_002491A4;
    case 85u: goto L_002491C8;
    case 86u: goto L_002491E0;
    case 87u: goto L_002491FC;
    case 88u: goto L_00249240;
    case 89u: goto L_00249284;
    case 90u: goto L_002492C4;
    case 91u: goto L_002493E8;
    case 92u: goto L_002493F8;
    case 93u: goto L_0024941C;
    case 94u: goto L_00249440;
    case 95u: goto L_00249460;
    case 96u: goto L_00249478;
    case 97u: goto L_00249480;
    case 98u: goto L_002494A4;
    case 99u: goto L_002494C8;
    case 100u: goto L_002494E0;
    case 101u: goto L_002494FC;
    case 102u: goto L_00249508;
    case 103u: goto L_00249518;
    case 104u: goto L_0024954C;
    case 105u: goto L_00249570;
    case 106u: goto L_00249590;
    case 107u: goto L_002495A8;
    case 108u: goto L_002495B0;
    case 109u: goto L_002495DC;
    case 110u: goto L_00249600;
    case 111u: goto L_00249610;
    case 112u: goto L_00249628;
    case 113u: goto L_00249634;
    case 114u: goto L_00249658;
    case 115u: goto L_0024967C;
    case 116u: goto L_00249690;
    case 117u: goto L_002496D4;
    case 118u: goto L_002496E0;
    case 119u: goto L_00249704;
    case 120u: goto L_00249728;
    case 121u: goto L_00249740;
    case 122u: goto L_00249758;
    case 123u: goto L_00249760;
    case 124u: goto L_00249784;
    case 125u: goto L_002497A8;
    case 126u: goto L_002497C0;
    case 127u: goto L_00249804;
    case 128u: goto L_00249810;
    case 129u: goto L_00249834;
    case 130u: goto L_00249858;
    case 131u: goto L_00249870;
    case 132u: goto L_00249888;
    case 133u: goto L_002498BC;
    case 134u: goto L_002498E0;
    case 135u: goto L_00249904;
    case 136u: goto L_00249920;
    case 137u: goto L_00249938;
    case 138u: goto L_0024996C;
    case 139u: goto L_00249990;
    case 140u: goto L_002499B4;
    case 141u: goto L_002499D0;
    case 142u: goto L_002499E8;
    case 143u: goto L_00249A1C;
    case 144u: goto L_00249A40;
    case 145u: goto L_00249A64;
    case 146u: goto L_00249A80;
    case 147u: goto L_00249A98;
    case 148u: goto L_00249AA0;
    case 149u: goto L_00249AC4;
    case 150u: goto L_00249AE8;
    case 151u: goto L_00249B00;
    case 152u: goto L_00249B48;
    case 153u: goto L_00249B54;
    case 154u: goto L_00249BAC;
    case 155u: goto L_00249BD0;
    case 156u: goto L_00249BF4;
    case 157u: goto L_00249C10;
    case 158u: goto L_00249C28;
    case 159u: goto L_00249C80;
    case 160u: goto L_00249CA4;
    case 161u: goto L_00249CC8;
    case 162u: goto L_00249CD8;
    case 163u: goto L_00249CE0;
    case 164u: goto L_00249CFC;
    case 165u: goto L_00249D3C;
    case 166u: goto L_00249D80;
    case 167u: goto L_00249DC0;
    case 168u: goto L_00249E04;
    case 169u: goto L_00249F28;
    case 170u: goto L_00249F58;
    case 171u: goto L_00249F7C;
    case 172u: goto L_00249F90;
    case 173u: goto L_00249FA8;
    case 174u: goto L_00249FD8;
    case 175u: goto L_00249FFC;
    case 176u: goto L_0024A020;
    case 177u: goto L_0024A030;
    case 178u: goto L_0024A050;
    case 179u: goto L_0024A084;
    case 180u: goto L_0024A0B8;
    case 181u: goto L_0024A0DC;
    case 182u: goto L_0024A118;
    case 183u: goto L_0024A200;
    case 184u: goto L_0024A25C;
    case 185u: goto L_0024A2DC;
    case 186u: goto L_0024A35C;
    case 187u: goto L_0024A3BC;
    case 188u: goto L_0024A3D8;
    case 189u: goto L_0024A434;
    case 190u: goto L_0024A46C;
    case 191u: goto L_0024A494;
    case 192u: goto L_0024A4B8;
    case 193u: goto L_0024A4E0;
    case 194u: goto L_0024A504;
    case 195u: goto L_0024A518;
    case 196u: goto L_0024A520;
    case 197u: goto L_0024A538;
    case 198u: goto L_0024A558;
    case 199u: goto L_0024A568;
    case 200u: goto L_0024A5D4;
    case 201u: goto L_0024A5FC;
    case 202u: goto L_0024A620;
    case 203u: goto L_0024A648;
    case 204u: goto L_0024A66C;
    case 205u: goto L_0024A680;
    case 206u: goto L_0024A698;
    case 207u: goto L_0024A6C8;
    case 208u: goto L_0024A714;
    case 209u: goto L_0024A73C;
    case 210u: goto L_0024A760;
    case 211u: goto L_0024A788;
    case 212u: goto L_0024A7AC;
    case 213u: goto L_0024A7C0;
    case 214u: goto L_0024A7D8;
    case 215u: goto L_0024A808;
    case 216u: goto L_0024A82C;
    case 217u: goto L_0024A850;
    case 218u: goto L_0024A860;
    case 219u: goto L_0024A88C;
    case 220u: goto L_0024A8B0;
    case 221u: goto L_0024A8C0;
    case 222u: goto L_0024A8D8;
    case 223u: goto L_0024A908;
    case 224u: goto L_0024A92C;
    case 225u: goto L_0024A950;
    case 226u: goto L_0024A960;
    case 227u: goto L_0024A978;
    case 228u: goto L_0024A980;
    case 229u: goto L_0024A9A4;
    case 230u: goto L_0024A9C8;
    case 231u: goto L_0024A9E0;
    case 232u: goto L_0024AA00;
    case 233u: goto L_0024AA08;
    case 234u: goto L_0024AA14;
    case 235u: goto L_0024AA78;
    case 236u: goto L_0024AA9C;
    case 237u: goto L_0024AAD4;
    case 238u: goto L_0024AAF8;
    case 239u: goto L_0024AB10;
    case 240u: goto L_0024AB28;
    case 241u: goto L_0024AB30;
    case 242u: goto L_0024ABEC;
    case 243u: goto L_0024AC10;
    case 244u: goto L_0024AC40;
    case 245u: goto L_0024AC64;
    case 246u: goto L_0024AC80;
    case 247u: goto L_0024AC9C;
    case 248u: goto L_0024ACAC;
    case 249u: goto L_0024AD10;
    case 250u: goto L_0024AD38;
    case 251u: goto L_0024AD54;
    case 252u: goto L_0024AD5C;
    case 253u: goto L_0024AD84;
    case 254u: goto L_0024ADA8;
    case 255u: goto L_0024ADC0;
    case 256u: goto L_0024ADD8;
    case 257u: goto L_0024ADE0;
    case 258u: goto L_0024AE04;
    case 259u: goto L_0024AE28;
    case 260u: goto L_0024AE40;
    case 261u: goto L_0024AE58;
    case 262u: goto L_0024AE60;
    case 263u: goto L_0024AE84;
    case 264u: goto L_0024AEA8;
    case 265u: goto L_0024AEC0;
    case 266u: goto L_0024AEDC;
    case 267u: goto L_0024AF04;
    case 268u: goto L_0024AF14;
    case 269u: goto L_0024AF20;
    case 270u: goto L_0024AF84;
    case 271u: goto L_0024AFB0;
    case 272u: goto L_0024AFBC;
    case 273u: goto L_0024AFC4;
    case 274u: goto L_0024AFD0;
    case 275u: goto L_0024AFD8;
    case 276u: goto L_0024AFE4;
    case 277u: goto L_0024AFEC;
    case 278u: goto L_0024AFF8;
    case 279u: goto L_0024B01C;
    case 280u: goto L_0024B040;
    case 281u: goto L_0024B060;
    case 282u: goto L_0024B07C;
    case 283u: goto L_0024B0B4;
    case 284u: goto L_0024B0F4;
    case 285u: goto L_0024B144;
    case 286u: goto L_0024B150;
    case 287u: goto L_0024B1B0;
    case 288u: goto L_0024B1D4;
    case 289u: goto L_0024B1E4;
    case 290u: goto L_0024B1F4;
    case 291u: goto L_0024B218;
    case 292u: goto L_0024B23C;
    case 293u: goto L_0024B250;
    case 294u: goto L_0024B268;
    case 295u: goto L_0024B270;
    case 296u: goto L_0024B294;
    case 297u: goto L_0024B2B8;
    case 298u: goto L_0024B2D0;
    case 299u: goto L_0024B2EC;
    case 300u: goto L_0024B324;
    case 301u: goto L_0024B358;
    case 302u: goto L_0024B37C;
    case 303u: goto L_0024B3A0;
    case 304u: goto L_0024B3C0;
    case 305u: goto L_0024B3D0;
    case 306u: goto L_0024B3E4;
    case 307u: goto L_0024B418;
    case 308u: goto L_0024B450;
    case 309u: goto L_0024B4B4;
    case 310u: goto L_0024B4F0;
    case 311u: goto L_0024B508;
    case 312u: goto L_0024B520;
    case 313u: goto L_0024B540;
    case 314u: goto L_0024B550;
    case 315u: goto L_0024B560;
    case 316u: goto L_0024B594;
    case 317u: goto L_0024B5AC;
    case 318u: goto L_0024B5C0;
    case 319u: goto L_0024B5D8;
    case 320u: goto L_0024B604;
    case 321u: goto L_0024B60C;
    case 322u: goto L_0024B61C;
    case 323u: goto L_0024B630;
    case 324u: goto L_0024B678;
    case 325u: goto L_0024B690;
    case 326u: goto L_0024B6B0;
    case 327u: goto L_0024B6C0;
    case 328u: goto L_0024B6EC;
    case 329u: goto L_0024B704;
    case 330u: goto L_0024B710;
    case 331u: goto L_0024B728;
    case 332u: goto L_0024B740;
    case 333u: goto L_0024B770;
    case 334u: goto L_0024B79C;
    case 335u: goto L_0024B7BC;
    case 336u: goto L_0024B7DC;
    case 337u: goto L_0024B7FC;
    case 338u: goto L_0024B820;
    case 339u: goto L_0024B850;
    case 340u: goto L_0024B85C;
    case 341u: goto L_0024B8C0;
    case 342u: goto L_0024B910;
    case 343u: goto L_0024B954;
    case 344u: goto L_0024B990;
    case 345u: goto L_0024B9B8;
    case 346u: goto L_0024B9E4;
    case 347u: goto L_0024BA00;
    case 348u: goto L_0024BA58;
    case 349u: goto L_0024BA68;
    case 350u: goto L_0024BA70;
    case 351u: goto L_0024BA7C;
    case 352u: goto L_0024BA8C;
    case 353u: goto L_0024BA94;
    case 354u: goto L_0024BA9C;
    case 355u: goto L_0024BACC;
    case 356u: goto L_0024BB28;
    case 357u: goto L_0024BB44;
    case 358u: goto L_0024BB5C;
    case 359u: goto L_0024BB78;
    case 360u: goto L_0024BB94;
    case 361u: goto L_0024BBB4;
    case 362u: goto L_0024BBC4;
    case 363u: goto L_0024BBE8;
    case 364u: goto L_0024BC00;
    case 365u: goto L_0024BC18;
    case 366u: goto L_0024BC34;
    case 367u: goto L_0024BC54;
    case 368u: goto L_0024BC64;
    case 369u: goto L_0024BC88;
    case 370u: goto L_0024BCA0;
    case 371u: goto L_0024BCB8;
    case 372u: goto L_0024BCD4;
    case 373u: goto L_0024BCE4;
    case 374u: goto L_0024BD00;
    case 375u: goto L_0024BD18;
    case 376u: goto L_0024BD34;
    case 377u: goto L_0024BD54;
    case 378u: goto L_0024BD74;
    case 379u: goto L_0024BD84;
    case 380u: goto L_0024BDA0;
    case 381u: goto L_0024BDEC;
    case 382u: goto L_0024BE00;
    case 383u: goto L_0024BE0C;
    case 384u: goto L_0024BE1C;
    case 385u: goto L_0024BE38;
    case 386u: goto L_0024BE58;
    case 387u: goto L_0024BE64;
    case 388u: goto L_0024BE80;
    case 389u: goto L_0024BEC4;
    case 390u: goto L_0024BEE0;
    case 391u: goto L_0024BF14;
    case 392u: goto L_0024BF38;
    case 393u: goto L_0024BF4C;
    case 394u: goto L_0024BF84;
    case 395u: goto L_0024BFD0;
    case 396u: goto L_0024BFE4;
    case 397u: goto L_0024BFF0;
    default: bad_entry(c, 0x00248000u); return;
    }
L_00248000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024802Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0024802Cu) [[unlikely]] return; }
L_0024802C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54520000u);
    set32(c.r[3], c.r[3].w[0] + 19568u);
    c.r[2].d[0] = c.r[2].d[0] | 19777ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002480D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00248118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 19568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248100u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00248100u) [[unlikely]] return; }
L_00248100:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024811C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00248118u) [[unlikely]] return; }
L_00248118:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024811C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002482C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248164u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0043(c, 99u, depth + 1u); else { c.pc = 0x0022C830u; return; } if (c.pc != 0x00248164u) [[unlikely]] return; }
L_00248164:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248174u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_004A(c, 43u, depth + 1u); else { c.pc = 0x00248850u; return; } if (c.pc != 0x00248174u) [[unlikely]] return; }
L_00248174:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248184u); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00248184u) [[unlikely]] return; }
L_00248184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024818Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x0024818Cu) [[unlikely]] return; }
L_0024818C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[17].w[0] + 64u);  goto L_002481EC; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002481B0u) [[unlikely]] return; }
L_002481B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_002481D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481D0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002481D0u) [[unlikely]] return; }
L_002481D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002481E8; } }
L_002481D8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002481E8u) [[unlikely]] return; }
L_002481E8:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_002481EC:
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481F8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002481F8u) [[unlikely]] return; }
L_002481F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248204u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0043(c, 99u, depth + 1u); else { c.pc = 0x0022C830u; return; } if (c.pc != 0x00248204u) [[unlikely]] return; }
L_00248204:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248214u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00248214u) [[unlikely]] return; }
L_00248214:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0] + 120u), 0u);  goto L_002482C0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002482BC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 21264u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024825Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0024825Cu) [[unlikely]] return; }
L_0024825C:
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_00248274; } }
    st32((c.r[17].w[0] + 124u), 0u);
    c.budget -= 1;
L_00248274:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248284u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00248284u) [[unlikely]] return; }
L_00248284:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_002482B0; } }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002482B0u); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004A(c, 60u, depth + 1u); else { c.pc = 0x00248DE0u; return; } if (c.pc != 0x002482B0u) [[unlikely]] return; }
L_002482B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002482BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 7u, depth + 1u); else { c.pc = 0x00248130u; return; } if (c.pc != 0x002482BCu) [[unlikely]] return; }
L_002482BC:
    st32((c.r[17].w[0] + 120u), 0u);
    c.budget -= 1;
L_002482C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002482E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002482F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EA30u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 149u, depth); }
L_00248300:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EA30u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 149u, depth); }
L_0024830C:
    set32(c.r[5], c.r[2].w[0] + 64u);
    c.budget -= 1;
L_00248310:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248334u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 38u, depth + 1u); else { c.pc = 0x002487F0u; return; } if (c.pc != 0x00248334u) [[unlikely]] return; }
L_00248334:
    set32(c.r[2], 0u + 605u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 96u), c.r[17].w[0]);  if (t) { goto L_002485F8; } }
    set32(c.r[2], 0u + 604u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_002485F0; }
    set32(c.r[2], 0u + 603u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 17u);  goto L_002485E8; }
    set32(c.r[2], 0u + 602u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_002485E0; }
    set32(c.r[2], 0u + 601u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 9u);  goto L_002485D8; }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002485D0; }
    set32(c.r[2], 0u + 507u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 17u);  goto L_002485C8; }
    set32(c.r[2], 0u + 506u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 12u);  goto L_002485C0; }
    set32(c.r[2], 0u + 505u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 15u);  goto L_002485B8; }
    set32(c.r[2], 0u + 504u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 14u);  goto L_002485B0; }
    set32(c.r[2], 0u + 503u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 7u);  goto L_002485A8; }
    set32(c.r[2], 0u + 502u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 10u);  goto L_002485A0; }
    set32(c.r[2], 0u + 500u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_00248598; }
    set32(c.r[2], 0u + 405u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 12u);  goto L_00248590; }
    set32(c.r[2], 0u + 404u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 17u);  goto L_00248588; }
    set32(c.r[2], 0u + 403u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00248580; }
    set32(c.r[2], 0u + 402u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_00248578; }
    set32(c.r[2], 0u + 401u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 7u);  goto L_00248570; }
    set32(c.r[2], 0u + 400u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { st32((c.r[18].w[0] + 104u), 0u);  goto L_002485FC; }
    set32(c.r[2], 0u + 304u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00248568; }
    set32(c.r[2], 0u + 303u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 13u);  goto L_00248560; }
    set32(c.r[2], 0u + 302u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 7u);  goto L_00248558; }
    set32(c.r[2], 0u + 301u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00248550; }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { st32((c.r[18].w[0] + 104u), 0u);  goto L_002485FC; }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00248548; }
    set32(c.r[2], 0u + 204u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_00248540; }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 7u);  goto L_00248538; }
    set32(c.r[2], 0u + 202u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 12u);  goto L_00248530; }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 9u);  goto L_00248528; }
    set32(c.r[2], 0u + 200u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { st32((c.r[18].w[0] + 104u), 0u);  goto L_002485FC; }
    set32(c.r[2], 0u + 106u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00248520; }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_00248518; }
    set32(c.r[2], 0u + 104u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 7u);  goto L_00248510; }
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00248508; }
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 9u);  goto L_00248500; }
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 8u);  goto L_002484F8; }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { st32((c.r[18].w[0] + 104u), 0u);  goto L_002485FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), 0u);  if (t) { goto L_002485FC; } }
L_002484F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_00248598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002485FC; } }
L_002485F8:
    st32((c.r[18].w[0] + 104u), 0u);
    c.budget -= 1;
L_002485FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00248624; }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_00248624:
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248634u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0043(c, 99u, depth + 1u); else { c.pc = 0x0022C830u; return; } if (c.pc != 0x00248634u) [[unlikely]] return; }
L_00248634:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_00248798; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17152u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_004A[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024865C:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC28C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  goto L_00248684; }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_00248684:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 11u);  goto L_002486A4; }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_002486A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_002486AC:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 72u));  goto L_002486D4; }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_002486D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3020000u);
    c.budget -= 1;
L_002486D8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 3u);  goto L_002486F8; }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_002486F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_00248700:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 15u);  goto L_00248728; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_00248728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_00248730:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 19u);  goto L_00248758; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_00248758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_00248760:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 5u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 100u), 0u);  goto L_002487A4; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002487A4; } }
L_0024878C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), 0u);  if (t) { goto L_002487A4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00248798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002487A4:
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002487BCu); st32((c.r[18].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004A(c, 60u, depth + 1u); else { c.pc = 0x00248DE0u; return; } if (c.pc != 0x002487BCu) [[unlikely]] return; }
L_002487BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002487E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 96u)));  c.pc = t; return; }
L_002487F0:
    st32((c.r[4].w[0] + 128u), 0u);
    set32(c.r[5], c.r[4].w[0] + 64u);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 144u), 0u);
    c.budget -= 7;
    { set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C830u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 99u, depth); }
L_00248810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 132u)));  c.pc = t; return; }
L_00248820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 136u)));  c.pc = t; return; }
L_00248830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 140u), c.r[5].w[0]);  c.pc = t; return; }
L_00248840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 148u), c.r[5].w[0]);  c.pc = t; return; }
L_00248850:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_002488DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 17120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_004A[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00248894:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 21248u);  if (t) { goto L_002488F0; } }
L_002488A0:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 20688u);  if (t) { goto L_002488F0; } }
L_002488AC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 20080u);  if (t) { goto L_002488F0; } }
L_002488B8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 19440u);  if (t) { goto L_002488F0; } }
L_002488C4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 18640u);  if (t) { goto L_002488F0; } }
L_002488D0:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 17920u);  if (t) { goto L_002488F0; } }
L_002488DC:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_002488F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_0024890C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024890Cu | kUnwind; return; } goto L_0024890C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 9232u));
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.f[3] = ld32((c.r[2].w[0] + 9236u));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 192u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 9240u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 9244u));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[29].w[0] + 200u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[3]);
    st32((c.r[29].w[0] + 204u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248978u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00248978u) [[unlikely]] return; }
L_00248978:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248984u); set32(c.r[5], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00248984u) [[unlikely]] return; }
L_00248984:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], 0u + 1u);  goto L_002489A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 128u), 0u);  if (t) { goto L_00248DBC; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002489A8:
    st32((c.r[19].w[0] + 128u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  goto L_002489C4; }
    st32((c.r[19].w[0] + 132u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 2;
L_002489C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002489CCu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0043(c, 99u, depth + 1u); else { c.pc = 0x0022C830u; return; } if (c.pc != 0x002489CCu) [[unlikely]] return; }
L_002489CC:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002489D8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002489D8u) [[unlikely]] return; }
L_002489D8:
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00248DC0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[19].w[0] + 132u)));  goto L_00248A38; }
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248A34; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00248DBC; } }
    st32((c.r[19].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248DBC; } }
L_00248A34:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 1;
L_00248A38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00248DBC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[4].w[0] + 9248u));
    c.r[17].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 9252u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[4].w[0] + 9256u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 9260u));
    set32(c.r[4], 0u + 10000u);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = c.r[4].w[0];
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 168u), c.f[2]);
    st32((c.r[29].w[0] + 172u), c.f[1]);
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    st32((c.r[19].w[0] + 116u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    st32((c.r[19].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DB0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 1;
L_00248AC4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248AD8u); set32(c.r[16], ld32((c.r[3].w[0] + 224u)));  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x00248AD8u) [[unlikely]] return; }
L_00248AD8:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 100u)));  goto L_00248BA8; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 100u)));  goto L_00248B54; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_00248B04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 100u)));  if (t) { goto L_00248CF0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_00248B04:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 5u);  goto L_00248B2C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00248B28; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248B28:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00248B2C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248CEC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248CEC; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_00248B54:
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 7u);  goto L_00248B80; }
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248B7C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248B7C:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_00248B80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00248CEC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248CEC; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_00248BA8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], 0u + 5u);  goto L_00248BD0; }
    set32(c.r[5], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00248BCC; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248BCC:
    set32(c.r[6], 0u + 5u);
    c.budget -= 1;
L_00248BD0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[4], 0u + 5u);  goto L_00248C04; }
    set32(c.r[5], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00248C00; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00248C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[6].w[0]);  if (t) { goto L_00248DBC; } }
L_00248C00:
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_00248C04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00248C28; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00248C28; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248C28:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 5u);  goto L_00248C50; }
    set32(c.r[5], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00248C4C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248C4C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_00248C50:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 17u);  goto L_00248C78; }
L_00248C58:
    set32(c.r[5], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00248C74; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248C74:
    set32(c.r[4], 0u + 17u);
    c.budget -= 1;
L_00248C78:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 17u);  goto L_00248CA0; }
    set32(c.r[5], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00248C9C; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248C9C:
    set32(c.r[4], 0u + 17u);
    c.budget -= 1;
L_00248CA0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 17u);  goto L_00248CC8; }
    set32(c.r[5], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00248CC4; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248CC4:
    set32(c.r[4], 0u + 17u);
    c.budget -= 1;
L_00248CC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00248CEC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248CEC; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248CEC:
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_00248CF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00248D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248DBC; } }
L_00248D00:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[3], ld32((c.r[19].w[0] + 116u)));  goto L_00248D30; }
    set32(c.r[3], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00248DBC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248DBC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 1;
L_00248D30:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00248DB0; }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00248D50:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248D50u | kUnwind; return; } goto L_00248D50; } }
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    st32((c.r[29].w[0] + 148u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D98u); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00248D98u) [[unlikely]] return; }
L_00248D98:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00248DAC; } }
    st32((c.r[19].w[0] + 108u), c.r[16].w[0]);
    c.f[20] = c.f[0];
    c.budget -= 2;
L_00248DAC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00248DB0:
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248AC4u | kUnwind; return; } goto L_00248AC4; }
L_00248DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00248DC0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00248DE0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E14u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x00248E14u) [[unlikely]] return; }
L_00248E14:
    set32(c.r[3], 0u + 10000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.f[21] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00248EA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 17088u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_004A[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00248E48:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[19], 0u + 14u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 21248u);  if (t) { goto L_00248EBC; } }
L_00248E58:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[19], 0u + 15u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 20688u);  if (t) { goto L_00248EBC; } }
L_00248E68:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[19], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 20080u);  if (t) { goto L_00248EBC; } }
L_00248E78:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[19], 0u + 20u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 19440u);  if (t) { goto L_00248EBC; } }
L_00248E88:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[19], 0u + 18u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 18640u);  if (t) { goto L_00248EBC; } }
L_00248E98:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[19], 0u + 19u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 17920u);  if (t) { goto L_00248EBC; } }
L_00248EA8:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0024900C; } }
L_00248EBC:
    set32(c.r[7], ld32((c.r[20].w[0] + 100u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[20].w[0] + 64u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248EFCu); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00248EFCu) [[unlikely]] return; }
L_00248EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00248F80; } }
L_00248F04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[20].w[0] + 64u);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F3Cu); st32((c.r[29].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00248F3Cu) [[unlikely]] return; }
L_00248F3C:
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F48u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00248F48u) [[unlikely]] return; }
L_00248F48:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F58u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x00248F58u) [[unlikely]] return; }
L_00248F58:
    c.f[1] = ld32((c.r[28].w[0] - 32672u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00248F80; }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00248F7C; } }
    c.f[21] = c.f[20];
    st32((c.r[20].w[0] + 108u), c.r[17].w[0]);
    c.budget -= 2;
L_00248F7C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00248F80:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248F04u | kUnwind; return; } goto L_00248F04; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  goto L_00248FD4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  goto L_00248FAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 108u)));  if (t) { goto L_00249000; } }
L_00248FAC:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00248FFC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248FFC; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00248FFC; } }
L_00248FD4:
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248FFC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00248FFC; } }
    set32(c.r[3], 0u + 3u);
    st32((c.r[20].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 2;
L_00248FFC:
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_00249000:
    st32((c.r[20].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    st32((c.r[20].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 3;
L_0024900C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00249040:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024905Cu); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024905Cu) [[unlikely]] return; }
L_0024905C:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00249170; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00249080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002491CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00249080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249088u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00249088u) [[unlikely]] return; }
L_00249088:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 660u)));  goto L_002490F0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024909Cu); set32(c.r[4], c.r[4].w[0] - 16064u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0024909Cu) [[unlikely]] return; }
L_0024909C:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002490C0u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002490C0u) [[unlikely]] return; }
L_002490C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002491C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002491C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002490E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002490E4u) [[unlikely]] return; }
L_002490E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002491C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    c.budget -= 1;
L_002490F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_00249104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_00249128; } }
L_00249104:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00249128; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024912C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024912C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249134u);  if (depth < kMaxDepth) unit_0044(c, 430u, depth + 1u); else { c.pc = 0x00232EE0u; return; } if (c.pc != 0x00249134u) [[unlikely]] return; }
L_00249134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249144u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00249144u) [[unlikely]] return; }
L_00249144:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249154u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00249154u) [[unlikely]] return; }
L_00249154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249164u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00249164u) [[unlikely]] return; }
L_00249164:
    set32(c.r[2], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_00249170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249178u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 28u, depth + 1u); else { c.pc = 0x002342E0u; return; } if (c.pc != 0x00249178u) [[unlikely]] return; }
L_00249178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002491C8; } }
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002491A4u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002491A4u) [[unlikely]] return; }
L_002491A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002491C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002491C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002491C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002491C8u) [[unlikely]] return; }
L_002491C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002491CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002491E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002491FCu); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002491FCu) [[unlikely]] return; }
L_002491FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_00249248; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_00249244; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00249240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249240u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249240u) [[unlikely]] return; }
L_00249240:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_00249244:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00249248:
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_0024928C; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 124u), 0u);  goto L_00249288; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00249284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249284u) [[unlikely]] return; }
L_00249284:
    st32((c.r[17].w[0] + 124u), 0u);
    c.budget -= 1;
L_00249288:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_0024928C:
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_002492CC; }
    st32((c.r[17].w[0] + 140u), 0u);
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 144u), 0u);  goto L_002492C8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002492C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002492C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002492C4u) [[unlikely]] return; }
L_002492C4:
    st32((c.r[17].w[0] + 144u), 0u);
    c.budget -= 1;
L_002492C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_002492CC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002492DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002492F0; } }
L_002492DC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002492F0; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002492F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_00249318; } }
L_00249304:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00249318; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_00249318:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024932C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_00249340; } }
L_0024932C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_00249340; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_00249340:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_00249368; } }
L_00249354:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00249368; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_00249368:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024937C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_00249390; } }
L_0024937C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_00249390; }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.budget -= 3;
L_00249390:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002493A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[17].w[0] + 120u)));  if (t) { goto L_002493B8; } }
L_002493A4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[10].d[0] = 0ull + 0ull;  goto L_002493B8; }
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[10], c.f[0]);
    c.budget -= 3;
L_002493B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002493CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[17].w[0] + 140u)));  if (t) { goto L_002493E0; } }
L_002493CC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[11].d[0] = 0ull + 0ull;  goto L_002493E0; }
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.f[0]);
    c.budget -= 3;
L_002493E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002493E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 437u, depth + 1u); else { c.pc = 0x00232FA0u; return; } if (c.pc != 0x002493E8u) [[unlikely]] return; }
L_002493E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002493F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x002493F8u) [[unlikely]] return; }
L_002493F8:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024941Cu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024941Cu) [[unlikely]] return; }
L_0024941C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00249444; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249440u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249440u) [[unlikely]] return; }
L_00249440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00249444:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00249460:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249478u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249478u) [[unlikely]] return; }
L_00249478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249480u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 446u, depth + 1u); else { c.pc = 0x00233170u; return; } if (c.pc != 0x00249480u) [[unlikely]] return; }
L_00249480:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494A4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002494A4u) [[unlikely]] return; }
L_002494A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002494CC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002494C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002494C8u) [[unlikely]] return; }
L_002494C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002494CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002494E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494FCu); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002494FCu) [[unlikely]] return; }
L_002494FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 451u, depth + 1u); else { c.pc = 0x00233200u; return; } if (c.pc != 0x00249508u) [[unlikely]] return; }
L_00249508:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00249574; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249518u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 473u, depth + 1u); else { c.pc = 0x002335F0u; return; } if (c.pc != 0x00249518u) [[unlikely]] return; }
L_00249518:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024954Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024954Cu) [[unlikely]] return; }
L_0024954C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249570; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249570u) [[unlikely]] return; }
L_00249570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00249574:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00249590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495A8u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002495A8u) [[unlikely]] return; }
L_002495A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 452u, depth + 1u); else { c.pc = 0x00233210u; return; } if (c.pc != 0x002495B0u) [[unlikely]] return; }
L_002495B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00249604; }
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495DCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002495DCu) [[unlikely]] return; }
L_002495DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249600; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249600u) [[unlikely]] return; }
L_00249600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00249604:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249628u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249628u) [[unlikely]] return; }
L_00249628:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249634u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 449u, depth + 1u); else { c.pc = 0x002331B0u; return; } if (c.pc != 0x00249634u) [[unlikely]] return; }
L_00249634:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249658u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249658u) [[unlikely]] return; }
L_00249658:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00249680; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024967C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024967Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024967Cu) [[unlikely]] return; }
L_0024967C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00249680:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002496B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002496CC; } }
L_002496B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002496CC; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_002496CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002496D4u); set32(c.r[4], 0u + 4115u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002496D4u) [[unlikely]] return; }
L_002496D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002496E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 277u, depth + 1u); else { c.pc = 0x00252B40u; return; } if (c.pc != 0x002496E0u) [[unlikely]] return; }
L_002496E0:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249704u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249704u) [[unlikely]] return; }
L_00249704:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0024972C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249728u) [[unlikely]] return; }
L_00249728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024972C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00249740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249758u); set32(c.r[4], 0u + 4115u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249758u) [[unlikely]] return; }
L_00249758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249760u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 276u, depth + 1u); else { c.pc = 0x00252B30u; return; } if (c.pc != 0x00249760u) [[unlikely]] return; }
L_00249760:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249784u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249784u) [[unlikely]] return; }
L_00249784:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002497AC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002497A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002497A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002497A8u) [[unlikely]] return; }
L_002497A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002497AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002497C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002497E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002497FC; } }
L_002497E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002497FC; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_002497FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249804u); set32(c.r[4], 0u + 4115u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249804u) [[unlikely]] return; }
L_00249804:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249810u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 279u, depth + 1u); else { c.pc = 0x00252C40u; return; } if (c.pc != 0x00249810u) [[unlikely]] return; }
L_00249810:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249834u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249834u) [[unlikely]] return; }
L_00249834:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0024985C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249858u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249858u) [[unlikely]] return; }
L_00249858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024985C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00249870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249888u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249888u) [[unlikely]] return; }
L_00249888:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_002498A4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_002498B4; } }
L_002498A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_002498B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 12u);  if (t) { goto L_002498B4; } }
L_002498B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002498BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 482u, depth + 1u); else { c.pc = 0x00233710u; return; } if (c.pc != 0x002498BCu) [[unlikely]] return; }
L_002498BC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002498E0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002498E0u) [[unlikely]] return; }
L_002498E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00249908; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249904u) [[unlikely]] return; }
L_00249904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00249908:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249938u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249938u) [[unlikely]] return; }
L_00249938:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_00249954; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_00249964; } }
L_00249954:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00249964; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 12u);  if (t) { goto L_00249964; } }
L_00249964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024996Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 478u, depth + 1u); else { c.pc = 0x00233670u; return; } if (c.pc != 0x0024996Cu) [[unlikely]] return; }
L_0024996C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249990u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249990u) [[unlikely]] return; }
L_00249990:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002499B8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002499B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002499B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002499B4u) [[unlikely]] return; }
L_002499B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002499B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002499D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002499E8u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002499E8u) [[unlikely]] return; }
L_002499E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_00249A04; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_00249A14; } }
L_00249A04:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00249A14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 12u);  if (t) { goto L_00249A14; } }
L_00249A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 486u, depth + 1u); else { c.pc = 0x002337B0u; return; } if (c.pc != 0x00249A1Cu) [[unlikely]] return; }
L_00249A1C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A40u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249A40u) [[unlikely]] return; }
L_00249A40:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00249A68; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249A64u) [[unlikely]] return; }
L_00249A64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00249A68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A98u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249A98u) [[unlikely]] return; }
L_00249A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249AA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 495u, depth + 1u); else { c.pc = 0x00233910u; return; } if (c.pc != 0x00249AA0u) [[unlikely]] return; }
L_00249AA0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249AC4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249AC4u) [[unlikely]] return; }
L_00249AC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00249AEC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249AE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249AE8u) [[unlikely]] return; }
L_00249AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00249AEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249B00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00249B4C; } }
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), 0u);  goto L_00249B4C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00249B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249B48u) [[unlikely]] return; }
L_00249B48:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_00249B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B54u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249B54u) [[unlikely]] return; }
L_00249B54:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00249B68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00249B7C; } }
L_00249B68:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00249B7C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00249B7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00249B90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_00249BA4; } }
L_00249B90:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00249BA4; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_00249BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 5u, depth + 1u); else { c.pc = 0x00234030u; return; } if (c.pc != 0x00249BACu) [[unlikely]] return; }
L_00249BAC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BD0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249BD0u) [[unlikely]] return; }
L_00249BD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00249BF8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249BF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249BF4u) [[unlikely]] return; }
L_00249BF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00249BF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249C10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249C28u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249C28u) [[unlikely]] return; }
L_00249C28:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00249C3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00249C50; } }
L_00249C3C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00249C50; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00249C50:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00249C64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_00249C78; } }
L_00249C64:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00249C78; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_00249C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249C80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 137u, depth + 1u); else { c.pc = 0x00235D20u; return; } if (c.pc != 0x00249C80u) [[unlikely]] return; }
L_00249C80:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249CA4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249CA4u) [[unlikely]] return; }
L_00249CA4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00249CCC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249CC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249CC8u) [[unlikely]] return; }
L_00249CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00249CCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249CD8:
    c.budget -= 2;
L_00249CE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249CFCu); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249CFCu) [[unlikely]] return; }
L_00249CFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_00249D44; }
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 84u), 0u);  goto L_00249D40; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00249D3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249D3Cu) [[unlikely]] return; }
L_00249D3C:
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 1;
L_00249D40:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00249D44:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_00249D88; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_00249D84; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00249D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249D80u) [[unlikely]] return; }
L_00249D80:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_00249D84:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00249D88:
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_00249DC8; }
    st32((c.r[17].w[0] + 120u), 0u);
    st32((c.r[17].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 124u), 0u);  goto L_00249DC4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00249DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249DC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249DC0u) [[unlikely]] return; }
L_00249DC0:
    st32((c.r[17].w[0] + 124u), 0u);
    c.budget -= 1;
L_00249DC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00249DC8:
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_00249E0C; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 144u), 0u);  goto L_00249E08; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00249E04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249E04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249E04u) [[unlikely]] return; }
L_00249E04:
    st32((c.r[17].w[0] + 144u), 0u);
    c.budget -= 1;
L_00249E08:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_00249E0C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249E1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_00249E30; } }
L_00249E1C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00249E30; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00249E30:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249E44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_00249E58; } }
L_00249E44:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00249E58; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_00249E58:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249E6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_00249E80; } }
L_00249E6C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_00249E80; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_00249E80:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_00249EA8; } }
L_00249E94:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00249EA8; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_00249EA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249EBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_00249ED0; } }
L_00249EBC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_00249ED0; }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.budget -= 3;
L_00249ED0:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[17].w[0] + 120u)));  if (t) { goto L_00249EF8; } }
L_00249EE4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[10].d[0] = 0ull + 0ull;  goto L_00249EF8; }
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[10], c.f[0]);
    c.budget -= 3;
L_00249EF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00249F0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[17].w[0] + 140u)));  if (t) { goto L_00249F20; } }
L_00249F0C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[11].d[0] = 0ull + 0ull;  goto L_00249F20; }
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.f[0]);
    c.budget -= 3;
L_00249F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249F28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 453u, depth + 1u); else { c.pc = 0x00233220u; return; } if (c.pc != 0x00249F28u) [[unlikely]] return; }
L_00249F28:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00249F80; }
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249F58u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249F58u) [[unlikely]] return; }
L_00249F58:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249F7C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00249F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00249F7Cu) [[unlikely]] return; }
L_00249F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00249F80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00249F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249FA8u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00249FA8u) [[unlikely]] return; }
L_00249FA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00249FBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00249FD0; } }
L_00249FBC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00249FD0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00249FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249FD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 471u, depth + 1u); else { c.pc = 0x00233590u; return; } if (c.pc != 0x00249FD8u) [[unlikely]] return; }
L_00249FD8:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249FFCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00249FFCu) [[unlikely]] return; }
L_00249FFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024A024; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A020u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A020u) [[unlikely]] return; }
L_0024A020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024A024:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024A030:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4116u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A050u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024A050u) [[unlikely]] return; }
L_0024A050:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024A064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_0024A07C; } }
L_0024A064:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A07C; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 19u, depth + 1u); else { c.pc = 0x002341C0u; return; } if (c.pc != 0x0024A084u) [[unlikely]] return; }
L_0024A084:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_0024A0E0; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 144u), 0u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A0B8u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A0B8u) [[unlikely]] return; }
L_0024A0B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024A0DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024A0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A0DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A0DCu) [[unlikely]] return; }
L_0024A0DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_0024A0E0:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024A11C; } }
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 84u), 0u);  goto L_0024A11C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024A118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A118u) [[unlikely]] return; }
L_0024A118:
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 1;
L_0024A11C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 68u), 0u);  goto L_0024A4C0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A138; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_0024A14C; } }
L_0024A138:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0024A14C; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_0024A14C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_0024A3E0; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_0024A264; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_0024A188; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024A184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024A470; } }
L_0024A184:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_0024A188:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_0024A1AC; } }
L_0024A198:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A1AC; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A1AC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A1BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_0024A1D0; } }
L_0024A1BC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024A1D0; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_0024A1D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A1E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_0024A1F8; } }
L_0024A1E4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_0024A1F8; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_0024A1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A200u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 312u, depth + 1u); else { c.pc = 0x00237650u; return; } if (c.pc != 0x0024A200u) [[unlikely]] return; }
L_0024A200:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_0024A228; } }
L_0024A214:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A228; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A228:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A23C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_0024A250; } }
L_0024A23C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024A250; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_0024A250:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A25Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x0024A25Cu) [[unlikely]] return; }
L_0024A25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024A46C; } }
L_0024A264:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A274; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_0024A288; } }
L_0024A274:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A288; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A288:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_0024A2AC; } }
L_0024A298:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024A2AC; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_0024A2AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A2C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_0024A2D4; } }
L_0024A2C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_0024A2D4; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_0024A2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A2DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 312u, depth + 1u); else { c.pc = 0x00237650u; return; } if (c.pc != 0x0024A2DCu) [[unlikely]] return; }
L_0024A2DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A2F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_0024A304; } }
L_0024A2F0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A304; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A304:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A318; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_0024A32C; } }
L_0024A318:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024A32C; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_0024A32C:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_0024A354; } }
L_0024A340:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_0024A354; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_0024A354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A35Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x0024A35Cu) [[unlikely]] return; }
L_0024A35C:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A370; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_0024A384; } }
L_0024A370:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024A384; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024A384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A46C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A3A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_0024A3B4; } }
L_0024A3A0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A3B4; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A3BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 196u, depth + 1u); else { c.pc = 0x002366B0u; return; } if (c.pc != 0x0024A3BCu) [[unlikely]] return; }
L_0024A3BC:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A3D8u); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0024A3D8u) [[unlikely]] return; }
L_0024A3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024A46C; } }
L_0024A3E0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A3F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_0024A404; } }
L_0024A3F0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A404; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A404:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A414; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_0024A428; } }
L_0024A414:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024A428; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_0024A428:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A434u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0045(c, 312u, depth + 1u); else { c.pc = 0x00237650u; return; } if (c.pc != 0x0024A434u) [[unlikely]] return; }
L_0024A434:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024A448; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_0024A45C; } }
L_0024A448:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A45C; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A45C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A46Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x0024A46Cu) [[unlikely]] return; }
L_0024A46C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024A470:
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A494u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A494u) [[unlikely]] return; }
L_0024A494:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024A508; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A4B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A4B8u) [[unlikely]] return; }
L_0024A4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024A504; } }
L_0024A4C0:
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A4E0u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A4E0u) [[unlikely]] return; }
L_0024A4E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024A504; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A504u) [[unlikely]] return; }
L_0024A504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024A508:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0024A518:
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 1;
    c.pc = 0x0024A51Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_0024A520:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A538u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024A538u) [[unlikely]] return; }
L_0024A538:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024A54C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024A560; } }
L_0024A54C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A560; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_0024A558:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 2;
L_0024A560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A568u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x002341B0u; return; } if (c.pc != 0x0024A568u) [[unlikely]] return; }
L_0024A568:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_0024A628; }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024A588; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024A59C; } }
L_0024A588:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024A598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_0024A59C; } }
L_0024A598:
    c.f[12] = 0u;
    c.budget -= 1;
L_0024A59C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024A5B4; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024A5C8; } }
L_0024A5B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024A5C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[14] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_0024A5C8; } }
L_0024A5C4:
    c.f[14] = 0u;
    c.budget -= 1;
L_0024A5C8:
    c.f[13] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A5D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 75u, depth + 1u); else { c.pc = 0x0022C630u; return; } if (c.pc != 0x0024A5D4u) [[unlikely]] return; }
L_0024A5D4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A5FCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A5FCu) [[unlikely]] return; }
L_0024A5FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024A670; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A620u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A620u) [[unlikely]] return; }
L_0024A620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024A66C; } }
L_0024A628:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A648u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A648u) [[unlikely]] return; }
L_0024A648:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024A66C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A66Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A66Cu) [[unlikely]] return; }
L_0024A66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024A670:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024A680:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A698u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024A698u) [[unlikely]] return; }
L_0024A698:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024A6AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024A6C0; } }
L_0024A6AC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A6C0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A6C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x002341B0u; return; } if (c.pc != 0x0024A6C8u) [[unlikely]] return; }
L_0024A6C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_0024A768; }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024A6E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_0024A6F8; } }
L_0024A6E4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0024A6F8; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_0024A6F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], 0u + 360u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A714u);  if (depth < kMaxDepth) unit_0043(c, 101u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x0024A714u) [[unlikely]] return; }
L_0024A714:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A73Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A73Cu) [[unlikely]] return; }
L_0024A73C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024A7B0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A760u) [[unlikely]] return; }
L_0024A760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024A7AC; } }
L_0024A768:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A788u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A788u) [[unlikely]] return; }
L_0024A788:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024A7AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A7ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A7ACu) [[unlikely]] return; }
L_0024A7AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024A7B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024A7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A7D8u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024A7D8u) [[unlikely]] return; }
L_0024A7D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024A7EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024A800; } }
L_0024A7EC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A800; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A808u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 496u, depth + 1u); else { c.pc = 0x00233920u; return; } if (c.pc != 0x0024A808u) [[unlikely]] return; }
L_0024A808:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A82Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A82Cu) [[unlikely]] return; }
L_0024A82C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024A854; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A850u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A850u) [[unlikely]] return; }
L_0024A850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024A854:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024A860:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A88Cu); set32(c.r[4], c.r[4].w[0] + 668u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A88Cu) [[unlikely]] return; }
L_0024A88C:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0024A8B4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A8B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A8B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A8B0u) [[unlikely]] return; }
L_0024A8B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0024A8B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A8C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A8D8u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024A8D8u) [[unlikely]] return; }
L_0024A8D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024A8EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024A900; } }
L_0024A8EC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024A900; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024A900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A908u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 497u, depth + 1u); else { c.pc = 0x00233930u; return; } if (c.pc != 0x0024A908u) [[unlikely]] return; }
L_0024A908:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A92Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A92Cu) [[unlikely]] return; }
L_0024A92C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024A954; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A950u) [[unlikely]] return; }
L_0024A950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024A954:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024A960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A978u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024A978u) [[unlikely]] return; }
L_0024A978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A980u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0024A980u) [[unlikely]] return; }
L_0024A980:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A9A4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024A9A4u) [[unlikely]] return; }
L_0024A9A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024A9CC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024A9C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A9C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024A9C8u) [[unlikely]] return; }
L_0024A9C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024A9CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024A9E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4116u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AA00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024AA00u) [[unlikely]] return; }
L_0024AA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AA08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 27u, depth + 1u); else { c.pc = 0x002342D0u; return; } if (c.pc != 0x0024AA08u) [[unlikely]] return; }
L_0024AA08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
L_0024AA14:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024AA24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_0024AA38; } }
L_0024AA24:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0024AA38; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_0024AA38:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0024AAA0; }
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 96u), c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AA78u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024AA78u) [[unlikely]] return; }
L_0024AA78:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024AA9C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024AA9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AA9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024AA9Cu) [[unlikely]] return; }
L_0024AA9C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0024AAA0:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024AA14u | kUnwind; return; } goto L_0024AA14; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AAD4u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024AAD4u) [[unlikely]] return; }
L_0024AAD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024AAFC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024AAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AAF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024AAF8u) [[unlikely]] return; }
L_0024AAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024AAFC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024AB10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB28u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024AB28u) [[unlikely]] return; }
L_0024AB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 27u, depth + 1u); else { c.pc = 0x002342D0u; return; } if (c.pc != 0x0024AB30u) [[unlikely]] return; }
L_0024AB30:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024AB44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024AB58; } }
L_0024AB44:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0024AB58; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_0024AB58:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[2], 0u - 1u);  goto L_0024AC1C; }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024AB70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024AB84; } }
L_0024AB70:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0024AB84; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_0024AB84:
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024AC18; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024ABA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024ABB4; } }
L_0024ABA0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024ABB4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024ABB4:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ABECu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024ABECu) [[unlikely]] return; }
L_0024ABEC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024AC68; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024AC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AC10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024AC10u) [[unlikely]] return; }
L_0024AC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024AC64; } }
L_0024AC18:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0024AC1C:
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AC40u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024AC40u) [[unlikely]] return; }
L_0024AC40:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024AC64; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024AC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AC64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024AC64u) [[unlikely]] return; }
L_0024AC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024AC68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024AC80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AC9Cu); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024AC9Cu) [[unlikely]] return; }
L_0024AC9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ACACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 26u, depth + 1u); else { c.pc = 0x00234280u; return; } if (c.pc != 0x0024ACACu) [[unlikely]] return; }
L_0024ACAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 52u), 0u);  goto L_0024AD64; }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024ACC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024ACDC; } }
L_0024ACC8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0024ACDC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_0024ACDC:
    st32((c.r[17].w[0] + 1372u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024ACF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024AD08; } }
L_0024ACF4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024AD08; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024AD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 493u, depth + 1u); else { c.pc = 0x0022F620u; return; } if (c.pc != 0x0024AD10u) [[unlikely]] return; }
L_0024AD10:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD38u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024AD38u) [[unlikely]] return; }
L_0024AD38:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0024ADAC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024ADA8; } }
L_0024AD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024AD5Cu) [[unlikely]] return; }
L_0024AD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024ADA8; } }
L_0024AD64:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD84u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024AD84u) [[unlikely]] return; }
L_0024AD84:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024ADA8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024ADA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ADA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024ADA8u) [[unlikely]] return; }
L_0024ADA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024ADAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024ADC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ADD8u); set32(c.r[4], 0u + 4115u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024ADD8u) [[unlikely]] return; }
L_0024ADD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ADE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 296u, depth + 1u); else { c.pc = 0x00252F30u; return; } if (c.pc != 0x0024ADE0u) [[unlikely]] return; }
L_0024ADE0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE04u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024AE04u) [[unlikely]] return; }
L_0024AE04:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024AE2C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024AE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024AE28u) [[unlikely]] return; }
L_0024AE28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024AE2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024AE40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE58u); set32(c.r[4], 0u + 4115u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024AE58u) [[unlikely]] return; }
L_0024AE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 301u, depth + 1u); else { c.pc = 0x00252F90u; return; } if (c.pc != 0x0024AE60u) [[unlikely]] return; }
L_0024AE60:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE84u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024AE84u) [[unlikely]] return; }
L_0024AE84:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024AEAC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024AEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AEA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024AEA8u) [[unlikely]] return; }
L_0024AEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024AEAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024AEC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AEDCu); set32(c.r[4], 0u + 4115u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024AEDCu) [[unlikely]] return; }
L_0024AEDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024AF34; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0024AEFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0024B044; } }
L_0024AEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AF04u);  if (depth < kMaxDepth) unit_004C(c, 291u, depth + 1u); else { c.pc = 0x00252E80u; return; } if (c.pc != 0x0024AF04u) [[unlikely]] return; }
L_0024AF04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0024AF18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AF14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 296u, depth + 1u); else { c.pc = 0x00252F30u; return; } if (c.pc != 0x0024AF14u) [[unlikely]] return; }
L_0024AF14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024AF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AF20u);  if (depth < kMaxDepth) unit_004C(c, 290u, depth + 1u); else { c.pc = 0x00252E70u; return; } if (c.pc != 0x0024AF20u) [[unlikely]] return; }
L_0024AF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B040; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_0024AF34:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024AF48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_0024AF5C; } }
L_0024AF48:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024AF5C; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024AF5C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[29].w[0] + 52u), 0u);  goto L_0024AFFC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_004A[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024AF84:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024AF94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_0024AFA8; } }
L_0024AF94:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_0024AFA8; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_0024AFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AFB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 282u, depth + 1u); else { c.pc = 0x00252DA0u; return; } if (c.pc != 0x0024AFB0u) [[unlikely]] return; }
L_0024AFB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AFBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x0024AFBCu) [[unlikely]] return; }
L_0024AFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024AFF8; } }
L_0024AFC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AFD0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x0024AFD0u) [[unlikely]] return; }
L_0024AFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024AFF8; } }
L_0024AFD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AFE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004C(c, 292u, depth + 1u); else { c.pc = 0x00252E90u; return; } if (c.pc != 0x0024AFE4u) [[unlikely]] return; }
L_0024AFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024AFF8; } }
L_0024AFEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AFF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 292u, depth + 1u); else { c.pc = 0x00252E90u; return; } if (c.pc != 0x0024AFF8u) [[unlikely]] return; }
L_0024AFF8:
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 1;
L_0024AFFC:
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B01Cu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024B01Cu) [[unlikely]] return; }
L_0024B01C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024B040; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B040u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B040u) [[unlikely]] return; }
L_0024B040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024B044:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024B060:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B07Cu); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024B07Cu) [[unlikely]] return; }
L_0024B07C:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024B0B8; } }
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_0024B0B8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B0B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B0B4u) [[unlikely]] return; }
L_0024B0B4:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_0024B0B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 704u)));  goto L_0024B0FC; }
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 44u), 0u);  goto L_0024B0F8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B0F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B0F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B0F4u) [[unlikely]] return; }
L_0024B0F4:
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_0024B0F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    c.budget -= 1;
L_0024B0FC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0024B1DC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_0024B118; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0024B240; } }
L_0024B118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_0024B13C; } }
L_0024B128:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0024B13C; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_0024B13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B144u);  if (depth < kMaxDepth) unit_00C1(c, 381u, depth + 1u); else { c.pc = 0x00426100u; return; } if (c.pc != 0x0024B144u) [[unlikely]] return; }
L_0024B144:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B150u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 328u, depth + 1u); else { c.pc = 0x00237990u; return; } if (c.pc != 0x0024B150u) [[unlikely]] return; }
L_0024B150:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024B164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_0024B178; } }
L_0024B164:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0024B178; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_0024B178:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st32((c.r[29].w[0] + 84u), 0u);  goto L_0024B190; }
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_0024B23C; } }
L_0024B190:
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B1B0u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024B1B0u) [[unlikely]] return; }
L_0024B1B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024B23C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B23C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B1D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B1D4u) [[unlikely]] return; }
L_0024B1D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B23C; } }
L_0024B1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B1E4u);  if (depth < kMaxDepth) unit_0045(c, 334u, depth + 1u); else { c.pc = 0x00237A30u; return; } if (c.pc != 0x0024B1E4u) [[unlikely]] return; }
L_0024B1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B23C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B1F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 332u, depth + 1u); else { c.pc = 0x002379F0u; return; } if (c.pc != 0x0024B1F4u) [[unlikely]] return; }
L_0024B1F4:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B218u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024B218u) [[unlikely]] return; }
L_0024B218:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024B23C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B23C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B23Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B23Cu) [[unlikely]] return; }
L_0024B23C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024B240:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024B250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B268u); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024B268u) [[unlikely]] return; }
L_0024B268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B270u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0024B270u) [[unlikely]] return; }
L_0024B270:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B294u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024B294u) [[unlikely]] return; }
L_0024B294:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024B2BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B2B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B2B8u) [[unlikely]] return; }
L_0024B2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024B2BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024B2D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B2ECu); set32(c.r[4], 0u + 4116u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024B2ECu) [[unlikely]] return; }
L_0024B2EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024B300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0024B318; } }
L_0024B300:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024B318; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_0024B318:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B324u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0024B324u) [[unlikely]] return; }
L_0024B324:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024B338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_0024B34C; } }
L_0024B338:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024B34C; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_0024B34C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B358u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0024B358u) [[unlikely]] return; }
L_0024B358:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B37Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024B37Cu) [[unlikely]] return; }
L_0024B37C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0024B3A4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B3A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B3A0u) [[unlikely]] return; }
L_0024B3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024B3A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024B3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 17024u);  c.pc = t; return; }
L_0024B3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 708u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B3E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0024B3E4u) [[unlikely]] return; }
L_0024B3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024B438; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B418u); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x0024B418u) [[unlikely]] return; }
L_0024B418:
    st32((c.r[16].w[0] + 672u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[16].w[0] + 668u), 0u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[16].w[0] + 684u), 0u);
    st32((c.r[16].w[0] + 688u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 704u), 0u);
    c.budget -= 8;
L_0024B438:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024B450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024B520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0024B508; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[17].w[0] + 688u);
    set32(c.r[3], c.r[3].w[0] + 16128u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0024B4B4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 668u);  goto L_0024B4B8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024B4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B4B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B4B4u) [[unlikely]] return; }
L_0024B4B4:
    set32(c.r[2], c.r[17].w[0] + 668u);
    c.budget -= 1;
L_0024B4B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B4F0; } }
    set32(c.r[2], c.r[17].w[0] + 672u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B4F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024B4F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024B4F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B4F0u) [[unlikely]] return; }
L_0024B4F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B508u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x0024B508u) [[unlikely]] return; }
L_0024B508:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024B524; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B520u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0024B520u) [[unlikely]] return; }
L_0024B520:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024B524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024B540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 704u), 0u);  c.pc = t; return; }
L_0024B550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024B560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0024B5B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19664u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0024B594; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0024B594:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0024B5AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B5ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0024B5ACu) [[unlikely]] return; }
L_0024B5AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024B5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024B5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4103u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B5D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x0024B5D8u) [[unlikely]] return; }
L_0024B5D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[2], c.r[2].w[0] + 19696u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[16].w[0] + 160u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 18768u);
    set32(c.r[6], c.r[6].w[0] - 18896u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B604u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x0024B604u) [[unlikely]] return; }
L_0024B604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B60Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 332u, depth + 1u); else { c.pc = 0x0024B740u; return; } if (c.pc != 0x0024B60Cu) [[unlikely]] return; }
L_0024B60C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B61Cu); set32(c.r[5], c.r[5].w[0] - 15616u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x0024B61Cu) [[unlikely]] return; }
L_0024B61C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024B630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024B690; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0024B67C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024B678; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024B678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B678u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B678u) [[unlikely]] return; }
L_0024B678:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0024B67C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024B694; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B690u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0024B690u) [[unlikely]] return; }
L_0024B690:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024B694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024B6B0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0024B6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024B728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B6ECu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004A(c, 333u, depth + 1u); else { c.pc = 0x0024B770u; return; } if (c.pc != 0x0024B6ECu) [[unlikely]] return; }
L_0024B6EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[17].w[0] + 160u);
    set32(c.r[5], c.r[5].w[0] - 18896u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B704u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x0024B704u) [[unlikely]] return; }
L_0024B704:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x0024B710u) [[unlikely]] return; }
L_0024B710:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024B72C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0024B728u) [[unlikely]] return; }
L_0024B728:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024B72C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024B740:
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 204u), 0u);
    st32((c.r[4].w[0] + 208u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0024B770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_0024B7A4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B79Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024B79Cu) [[unlikely]] return; }
L_0024B79C:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_0024B7A4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 204u)));  goto L_0024B7C4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B7BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024B7BCu) [[unlikely]] return; }
L_0024B7BC:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 2;
L_0024B7C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  goto L_0024B7E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B7DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024B7DCu) [[unlikely]] return; }
L_0024B7DC:
    st32((c.r[16].w[0] + 204u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 2;
L_0024B7E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0024B804; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B7FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024B7FCu) [[unlikely]] return; }
L_0024B7FC:
    st32((c.r[16].w[0] + 208u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0024B804:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024B820:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024B958; } }
L_0024B850:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B85Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0024B85Cu) [[unlikely]] return; }
L_0024B85C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[0]);
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[20].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0024B958; }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[19], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 120u), c.r[4].w[0]);  goto L_0024B894; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 4;
L_0024B894:
    set32(c.r[21], c.r[19].w[0] + 4u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_0024B8C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B8C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B8C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B8C0u) [[unlikely]] return; }
L_0024B8C0:
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[20], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[4].w[0]);  goto L_0024B8E4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_0024B8E4:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 4u);  if (t) { goto L_0024B910; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B910u) [[unlikely]] return; }
L_0024B910:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[4].w[0]);  goto L_0024B92C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_0024B92C:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0024B954; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024B954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B954u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024B954u) [[unlikely]] return; }
L_0024B954:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024B958:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B850u | kUnwind; return; } goto L_0024B850; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024B990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.f[21] = c.f[12];
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B9B8u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x0024B9B8u) [[unlikely]] return; }
L_0024B9B8:
    st32((c.r[2].w[0] + 208u), c.f[21]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    set32(c.r[4], 0u + 4096u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 212u), c.f[20]);
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B9E4u); st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024B9E4u) [[unlikely]] return; }
L_0024B9E4:
    st32((c.r[2].w[0] + 248u), c.f[21]);
    st32((c.r[2].w[0] + 252u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024BA00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024BDB4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 432u);  goto L_0024BB3C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_0024BAE4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024BA84; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0024BA5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0024BE68; } }
L_0024BA58:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0024BA5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA68u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004A(c, 333u, depth + 1u); else { c.pc = 0x0024B770u; return; } if (c.pc != 0x0024BA68u) [[unlikely]] return; }
L_0024BA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 332u, depth + 1u); else { c.pc = 0x0024B740u; return; } if (c.pc != 0x0024BA70u) [[unlikely]] return; }
L_0024BA70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024BA7Cu) [[unlikely]] return; }
L_0024BA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BE64; } }
L_0024BA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA8Cu);  if (depth < kMaxDepth) unit_004A(c, 333u, depth + 1u); else { c.pc = 0x0024B770u; return; } if (c.pc != 0x0024BA8Cu) [[unlikely]] return; }
L_0024BA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 332u, depth + 1u); else { c.pc = 0x0024B740u; return; } if (c.pc != 0x0024BA94u) [[unlikely]] return; }
L_0024BA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA9Cu); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024BA9Cu) [[unlikely]] return; }
L_0024BA9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), c.r[4].w[0]);  goto L_0024BAD4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 15391u);
    set32(c.r[7], c.r[7].w[0] - 15378u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BACCu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0024BACCu) [[unlikely]] return; }
L_0024BACC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), c.r[4].w[0]);
    c.budget -= 2;
L_0024BAD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 4;
L_0024BAE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024BE64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024BB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_0024BB30; }
L_0024BB18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB28u); set32(c.r[5], c.r[5].w[0] - 15363u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024BB28u) [[unlikely]] return; }
L_0024BB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BA58u | kUnwind; return; } goto L_0024BA58; } }
L_0024BB30:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 432u);
    c.budget -= 3;
L_0024BB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB44u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024BB44u) [[unlikely]] return; }
L_0024BB44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  goto L_0024BB60; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB5Cu); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0033(c, 344u, depth + 1u); else { c.pc = 0x001EEF40u; return; } if (c.pc != 0x0024BB5Cu) [[unlikely]] return; }
L_0024BB5C:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_0024BB60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[2].d[0] | 20562ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB78u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024BB78u) [[unlikely]] return; }
L_0024BB78:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB94u); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024BB94u) [[unlikely]] return; }
L_0024BB94:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024BBA4; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_0024BBBC; }
L_0024BBA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BBB4u); set32(c.r[5], c.r[5].w[0] - 15348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024BBB4u) [[unlikely]] return; }
L_0024BBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BA58u | kUnwind; return; } goto L_0024BA58; } }
L_0024BBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BBC4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024BBC4u) [[unlikely]] return; }
L_0024BBC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_0024BBEC; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BBE8u); set32(c.r[8], c.r[8].w[0] - 15392u);  if (depth < kMaxDepth) unit_0034(c, 57u, depth + 1u); else { c.pc = 0x001F08A0u; return; } if (c.pc != 0x0024BBE8u) [[unlikely]] return; }
L_0024BBE8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024BBEC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC00u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x0024BC00u) [[unlikely]] return; }
L_0024BC00:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC18u); c.r[5].d[0] = c.r[2].d[0] | 17473ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024BC18u) [[unlikely]] return; }
L_0024BC18:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC34u); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024BC34u) [[unlikely]] return; }
L_0024BC34:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024BC44; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_0024BC5C; }
L_0024BC44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC54u); set32(c.r[5], c.r[5].w[0] - 15348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024BC54u) [[unlikely]] return; }
L_0024BC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BA58u | kUnwind; return; } goto L_0024BA58; } }
L_0024BC5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC64u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024BC64u) [[unlikely]] return; }
L_0024BC64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_0024BC8C; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC88u); set32(c.r[8], c.r[8].w[0] - 15392u);  if (depth < kMaxDepth) unit_0034(c, 7u, depth + 1u); else { c.pc = 0x001F00E0u; return; } if (c.pc != 0x0024BC88u) [[unlikely]] return; }
L_0024BC88:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024BC8C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCA0u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x0024BCA0u) [[unlikely]] return; }
L_0024BCA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCB8u); c.r[5].d[0] = c.r[2].d[0] | 20545ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024BCB8u) [[unlikely]] return; }
L_0024BCB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 64u);  goto L_0024BCDC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCD4u); set32(c.r[5], c.r[5].w[0] - 15348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024BCD4u) [[unlikely]] return; }
L_0024BCD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BA58u | kUnwind; return; } goto L_0024BA58; } }
L_0024BCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCE4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024BCE4u) [[unlikely]] return; }
L_0024BCE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_0024BD04; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BD00u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 100u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x0024BD00u) [[unlikely]] return; }
L_0024BD00:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024BD04:
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BD18u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x0024BD18u) [[unlikely]] return; }
L_0024BD18:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[2].d[0] | 20562ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BD34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x0024BD34u) [[unlikely]] return; }
L_0024BD34:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BD54u); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x0024BD54u) [[unlikely]] return; }
L_0024BD54:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024BD64; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 92u);  goto L_0024BD7C; }
L_0024BD64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BD74u); set32(c.r[5], c.r[5].w[0] - 15348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024BD74u) [[unlikely]] return; }
L_0024BD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BA58u | kUnwind; return; } goto L_0024BA58; } }
L_0024BD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BD84u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024BD84u) [[unlikely]] return; }
L_0024BD84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 208u), c.r[4].w[0]);  goto L_0024BDA8; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BDA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 74u, depth + 1u); else { c.pc = 0x0020CA00u; return; } if (c.pc != 0x0024BDA0u) [[unlikely]] return; }
L_0024BDA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 208u), c.r[4].w[0]);
    c.budget -= 2;
L_0024BDA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_0024BDB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024BE64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024BE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BDECu); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024BDECu) [[unlikely]] return; }
L_0024BDEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 204u), c.r[2].w[0]);  goto L_0024BE04; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 10u, depth + 1u); else { c.pc = 0x0025C2A0u; return; } if (c.pc != 0x0024BE00u) [[unlikely]] return; }
L_0024BE00:
    st32((c.r[16].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 1;
L_0024BE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE0Cu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024BE0Cu) [[unlikely]] return; }
L_0024BE0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE1Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 20u, depth + 1u); else { c.pc = 0x0025C3E0u; return; } if (c.pc != 0x0024BE1Cu) [[unlikely]] return; }
L_0024BE1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0024BE40; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024BE38u) [[unlikely]] return; }
L_0024BE38:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 2;
L_0024BE40:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], c.r[6].w[0] + 9792u);
    set32(c.r[7], 0u + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE58u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 359u, depth + 1u); else { c.pc = 0x001EF0E0u; return; } if (c.pc != 0x0024BE58u) [[unlikely]] return; }
L_0024BE58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024BE64u) [[unlikely]] return; }
L_0024BE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024BE68:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024BE80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0024BFA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0024BF90; } }
L_0024BEC4:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 140u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BEE0u); set32(c.r[6], 0u + 259u);  if (depth < kMaxDepth) unit_0033(c, 325u, depth + 1u); else { c.pc = 0x001EEC50u; return; } if (c.pc != 0x0024BEE0u) [[unlikely]] return; }
L_0024BEE0:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_0024BEF8; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024BEF8:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF14u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024BF14u) [[unlikely]] return; }
L_0024BF14:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    c.r[7].d[0] = c.r[21].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF38u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024BF38u) [[unlikely]] return; }
L_0024BF38:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF4Cu); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x0024BF4Cu) [[unlikely]] return; }
L_0024BF4C:
    set32(c.r[7], ld32((c.r[20].w[0] + 156u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[2].w[0] + 10160u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] - 12u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF84u); set32(c.r[6], 0u + 258u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024BF84u) [[unlikely]] return; }
L_0024BF84:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 3;
L_0024BF90:
    set32(c.r[3], ld32((c.r[20].w[0] + 156u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BEC4u | kUnwind; return; } goto L_0024BEC4; }
L_0024BFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0024BFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BFE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 333u, depth + 1u); else { c.pc = 0x0024B770u; return; } if (c.pc != 0x0024BFE4u) [[unlikely]] return; }
L_0024BFE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BFF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024BFF0u) [[unlikely]] return; }
L_0024BFF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
