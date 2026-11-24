#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B2[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0,
    0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0,
    0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127,
    0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0,
    0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284,
    0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0,
    0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0,
    0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E8000;
    case 2u: goto L_003E8054;
    case 3u: goto L_003E8060;
    case 4u: goto L_003E8070;
    case 5u: goto L_003E81E8;
    case 6u: goto L_003E8220;
    case 7u: goto L_003E825C;
    case 8u: goto L_003E8274;
    case 9u: goto L_003E8284;
    case 10u: goto L_003E8290;
    case 11u: goto L_003E829C;
    case 12u: goto L_003E82B4;
    case 13u: goto L_003E82C8;
    case 14u: goto L_003E82D0;
    case 15u: goto L_003E82DC;
    case 16u: goto L_003E8300;
    case 17u: goto L_003E8370;
    case 18u: goto L_003E84B0;
    case 19u: goto L_003E84C4;
    case 20u: goto L_003E8500;
    case 21u: goto L_003E8540;
    case 22u: goto L_003E8558;
    case 23u: goto L_003E8570;
    case 24u: goto L_003E857C;
    case 25u: goto L_003E8594;
    case 26u: goto L_003E85B0;
    case 27u: goto L_003E85D8;
    case 28u: goto L_003E85F4;
    case 29u: goto L_003E8610;
    case 30u: goto L_003E8620;
    case 31u: goto L_003E8678;
    case 32u: goto L_003E8690;
    case 33u: goto L_003E86A8;
    case 34u: goto L_003E86C0;
    case 35u: goto L_003E87BC;
    case 36u: goto L_003E87E8;
    case 37u: goto L_003E87F0;
    case 38u: goto L_003E881C;
    case 39u: goto L_003E8824;
    case 40u: goto L_003E8840;
    case 41u: goto L_003E8868;
    case 42u: goto L_003E8928;
    case 43u: goto L_003E89E0;
    case 44u: goto L_003E8A04;
    case 45u: goto L_003E8AB0;
    case 46u: goto L_003E8AF4;
    case 47u: goto L_003E8B18;
    case 48u: goto L_003E8B2C;
    case 49u: goto L_003E8B40;
    case 50u: goto L_003E8BB4;
    case 51u: goto L_003E8BE0;
    case 52u: goto L_003E8C68;
    case 53u: goto L_003E8C74;
    case 54u: goto L_003E8C84;
    case 55u: goto L_003E8C98;
    case 56u: goto L_003E8CA4;
    case 57u: goto L_003E8CB4;
    case 58u: goto L_003E8CC8;
    case 59u: goto L_003E8CD8;
    case 60u: goto L_003E8CEC;
    case 61u: goto L_003E8E68;
    case 62u: goto L_003E8E80;
    case 63u: goto L_003E9030;
    case 64u: goto L_003E9070;
    case 65u: goto L_003E9080;
    case 66u: goto L_003E90E0;
    case 67u: goto L_003E90F0;
    case 68u: goto L_003E9150;
    case 69u: goto L_003E9164;
    case 70u: goto L_003E91C8;
    case 71u: goto L_003E91DC;
    case 72u: goto L_003E924C;
    case 73u: goto L_003E925C;
    case 74u: goto L_003E9278;
    case 75u: goto L_003E9298;
    case 76u: goto L_003E92E0;
    case 77u: goto L_003E9328;
    case 78u: goto L_003E9350;
    case 79u: goto L_003E9364;
    case 80u: goto L_003E9378;
    case 81u: goto L_003E9388;
    case 82u: goto L_003E9394;
    case 83u: goto L_003E93A4;
    case 84u: goto L_003E93B0;
    case 85u: goto L_003E93C0;
    case 86u: goto L_003E93DC;
    case 87u: goto L_003E9404;
    case 88u: goto L_003E9430;
    case 89u: goto L_003E9464;
    case 90u: goto L_003E9478;
    case 91u: goto L_003E9484;
    case 92u: goto L_003E94A4;
    case 93u: goto L_003E94B4;
    case 94u: goto L_003E94C4;
    case 95u: goto L_003E94D8;
    case 96u: goto L_003E94E4;
    case 97u: goto L_003E9500;
    case 98u: goto L_003E9520;
    case 99u: goto L_003E958C;
    case 100u: goto L_003E959C;
    case 101u: goto L_003E95D8;
    case 102u: goto L_003E95E8;
    case 103u: goto L_003E9620;
    case 104u: goto L_003E9678;
    case 105u: goto L_003E96C0;
    case 106u: goto L_003E96D0;
    case 107u: goto L_003E96E0;
    case 108u: goto L_003E96F0;
    case 109u: goto L_003E9704;
    case 110u: goto L_003E971C;
    case 111u: goto L_003E9738;
    case 112u: goto L_003E9790;
    case 113u: goto L_003E97A8;
    case 114u: goto L_003E97E0;
    case 115u: goto L_003E9818;
    case 116u: goto L_003E9828;
    case 117u: goto L_003E9870;
    case 118u: goto L_003E98AC;
    case 119u: goto L_003E98C4;
    case 120u: goto L_003E98DC;
    case 121u: goto L_003E98E8;
    case 122u: goto L_003E9900;
    case 123u: goto L_003E9928;
    case 124u: goto L_003E994C;
    case 125u: goto L_003E9960;
    case 126u: goto L_003E996C;
    case 127u: goto L_003E997C;
    case 128u: goto L_003E9990;
    case 129u: goto L_003E999C;
    case 130u: goto L_003E99B4;
    case 131u: goto L_003E99C4;
    case 132u: goto L_003E9A10;
    case 133u: goto L_003E9A24;
    case 134u: goto L_003E9A70;
    case 135u: goto L_003E9A9C;
    case 136u: goto L_003E9AA8;
    case 137u: goto L_003E9AC0;
    case 138u: goto L_003E9AE0;
    case 139u: goto L_003E9AFC;
    case 140u: goto L_003E9B20;
    case 141u: goto L_003E9B3C;
    case 142u: goto L_003E9B50;
    case 143u: goto L_003E9B78;
    case 144u: goto L_003E9B94;
    case 145u: goto L_003E9BB0;
    case 146u: goto L_003E9BC0;
    case 147u: goto L_003E9BF8;
    case 148u: goto L_003E9C68;
    case 149u: goto L_003E9CB0;
    case 150u: goto L_003E9CB8;
    case 151u: goto L_003E9D5C;
    case 152u: goto L_003E9DAC;
    case 153u: goto L_003E9DD0;
    case 154u: goto L_003E9E60;
    case 155u: goto L_003E9EDC;
    case 156u: goto L_003E9F1C;
    case 157u: goto L_003E9F48;
    case 158u: goto L_003E9F70;
    case 159u: goto L_003E9FDC;
    case 160u: goto L_003EA020;
    case 161u: goto L_003EA028;
    case 162u: goto L_003EA064;
    case 163u: goto L_003EA074;
    case 164u: goto L_003EA0B8;
    case 165u: goto L_003EA0F4;
    case 166u: goto L_003EA140;
    case 167u: goto L_003EA150;
    case 168u: goto L_003EA190;
    case 169u: goto L_003EA1AC;
    case 170u: goto L_003EA1BC;
    case 171u: goto L_003EA1C8;
    case 172u: goto L_003EA1D0;
    case 173u: goto L_003EA1D8;
    case 174u: goto L_003EA1E0;
    case 175u: goto L_003EA20C;
    case 176u: goto L_003EA224;
    case 177u: goto L_003EA22C;
    case 178u: goto L_003EA240;
    case 179u: goto L_003EA288;
    case 180u: goto L_003EA294;
    case 181u: goto L_003EA2A4;
    case 182u: goto L_003EA2B0;
    case 183u: goto L_003EA2D8;
    case 184u: goto L_003EA2E4;
    case 185u: goto L_003EA2F8;
    case 186u: goto L_003EA310;
    case 187u: goto L_003EA320;
    case 188u: goto L_003EA3F8;
    case 189u: goto L_003EA408;
    case 190u: goto L_003EA420;
    case 191u: goto L_003EA438;
    case 192u: goto L_003EA460;
    case 193u: goto L_003EA470;
    case 194u: goto L_003EA480;
    case 195u: goto L_003EA494;
    case 196u: goto L_003EA4AC;
    case 197u: goto L_003EA4C4;
    case 198u: goto L_003EA4EC;
    case 199u: goto L_003EA500;
    case 200u: goto L_003EA510;
    case 201u: goto L_003EA520;
    case 202u: goto L_003EA54C;
    case 203u: goto L_003EA574;
    case 204u: goto L_003EA5B0;
    case 205u: goto L_003EA5D8;
    case 206u: goto L_003EA5E4;
    case 207u: goto L_003EA610;
    case 208u: goto L_003EA654;
    case 209u: goto L_003EA660;
    case 210u: goto L_003EA68C;
    case 211u: goto L_003EA6D0;
    case 212u: goto L_003EA6DC;
    case 213u: goto L_003EA714;
    case 214u: goto L_003EA748;
    case 215u: goto L_003EA754;
    case 216u: goto L_003EA78C;
    case 217u: goto L_003EA7C0;
    case 218u: goto L_003EA7EC;
    case 219u: goto L_003EA814;
    case 220u: goto L_003EA848;
    case 221u: goto L_003EA874;
    case 222u: goto L_003EA89C;
    case 223u: goto L_003EA8F0;
    case 224u: goto L_003EA8FC;
    case 225u: goto L_003EA910;
    case 226u: goto L_003EA924;
    case 227u: goto L_003EA950;
    case 228u: goto L_003EA968;
    case 229u: goto L_003EA980;
    case 230u: goto L_003EA9A8;
    case 231u: goto L_003EA9B8;
    case 232u: goto L_003EA9C8;
    case 233u: goto L_003EA9E8;
    case 234u: goto L_003EAA00;
    case 235u: goto L_003EAA18;
    case 236u: goto L_003EAA3C;
    case 237u: goto L_003EAA54;
    case 238u: goto L_003EAA6C;
    case 239u: goto L_003EAAA4;
    case 240u: goto L_003EAAB8;
    case 241u: goto L_003EAACC;
    case 242u: goto L_003EAB20;
    case 243u: goto L_003EAB48;
    case 244u: goto L_003EAB54;
    case 245u: goto L_003EAB90;
    case 246u: goto L_003EABA4;
    case 247u: goto L_003EABD0;
    case 248u: goto L_003EABF4;
    case 249u: goto L_003EAC90;
    case 250u: goto L_003EACA0;
    case 251u: goto L_003EACD0;
    case 252u: goto L_003EACE8;
    case 253u: goto L_003EAD00;
    case 254u: goto L_003EAE94;
    case 255u: goto L_003EAEC4;
    case 256u: goto L_003EB230;
    case 257u: goto L_003EB244;
    case 258u: goto L_003EB26C;
    case 259u: goto L_003EB280;
    case 260u: goto L_003EB2B0;
    case 261u: goto L_003EB2C8;
    case 262u: goto L_003EB2E0;
    case 263u: goto L_003EB308;
    case 264u: goto L_003EB324;
    case 265u: goto L_003EB340;
    case 266u: goto L_003EB350;
    case 267u: goto L_003EB370;
    case 268u: goto L_003EB3C8;
    case 269u: goto L_003EB3D8;
    case 270u: goto L_003EB3E8;
    case 271u: goto L_003EB3F8;
    case 272u: goto L_003EB408;
    case 273u: goto L_003EB418;
    case 274u: goto L_003EB428;
    case 275u: goto L_003EB438;
    case 276u: goto L_003EB448;
    case 277u: goto L_003EB458;
    case 278u: goto L_003EB470;
    case 279u: goto L_003EB484;
    case 280u: goto L_003EB4B0;
    case 281u: goto L_003EB4D0;
    case 282u: goto L_003EB4E0;
    case 283u: goto L_003EB4F0;
    case 284u: goto L_003EB4FC;
    case 285u: goto L_003EB510;
    case 286u: goto L_003EB520;
    case 287u: goto L_003EB528;
    case 288u: goto L_003EB534;
    case 289u: goto L_003EB54C;
    case 290u: goto L_003EB564;
    case 291u: goto L_003EB580;
    case 292u: goto L_003EB5A0;
    case 293u: goto L_003EB5D4;
    case 294u: goto L_003EB5E0;
    case 295u: goto L_003EB5F4;
    case 296u: goto L_003EB604;
    case 297u: goto L_003EB60C;
    case 298u: goto L_003EB618;
    case 299u: goto L_003EB630;
    case 300u: goto L_003EB648;
    case 301u: goto L_003EB660;
    case 302u: goto L_003EB694;
    case 303u: goto L_003EB6C8;
    case 304u: goto L_003EB710;
    case 305u: goto L_003EB738;
    case 306u: goto L_003EB748;
    case 307u: goto L_003EB754;
    case 308u: goto L_003EB764;
    case 309u: goto L_003EB770;
    case 310u: goto L_003EB784;
    case 311u: goto L_003EB794;
    case 312u: goto L_003EB7C4;
    case 313u: goto L_003EB7F4;
    case 314u: goto L_003EB800;
    case 315u: goto L_003EB810;
    case 316u: goto L_003EB81C;
    case 317u: goto L_003EB834;
    case 318u: goto L_003EB860;
    case 319u: goto L_003EB870;
    case 320u: goto L_003EB87C;
    case 321u: goto L_003EB88C;
    case 322u: goto L_003EB89C;
    case 323u: goto L_003EB8AC;
    case 324u: goto L_003EB8B8;
    case 325u: goto L_003EB8C4;
    case 326u: goto L_003EB8E0;
    case 327u: goto L_003EB910;
    case 328u: goto L_003EB91C;
    case 329u: goto L_003EB93C;
    case 330u: goto L_003EB960;
    case 331u: goto L_003EB9AC;
    case 332u: goto L_003EB9D0;
    case 333u: goto L_003EB9E4;
    case 334u: goto L_003EB9F8;
    case 335u: goto L_003EBA40;
    case 336u: goto L_003EBA70;
    case 337u: goto L_003EBA88;
    case 338u: goto L_003EBAA0;
    case 339u: goto L_003EBAC8;
    case 340u: goto L_003EBAE4;
    case 341u: goto L_003EBB00;
    case 342u: goto L_003EBB10;
    case 343u: goto L_003EBB34;
    case 344u: goto L_003EBB5C;
    case 345u: goto L_003EBBC0;
    case 346u: goto L_003EBBCC;
    case 347u: goto L_003EBC20;
    case 348u: goto L_003EBC34;
    case 349u: goto L_003EBC60;
    case 350u: goto L_003EBCCC;
    case 351u: goto L_003EBCFC;
    case 352u: goto L_003EBD30;
    case 353u: goto L_003EBD44;
    case 354u: goto L_003EBDB8;
    case 355u: goto L_003EBDC8;
    case 356u: goto L_003EBDD8;
    case 357u: goto L_003EBE10;
    case 358u: goto L_003EBE3C;
    case 359u: goto L_003EBE48;
    case 360u: goto L_003EBE60;
    case 361u: goto L_003EBE80;
    case 362u: goto L_003EBEA8;
    case 363u: goto L_003EBEC4;
    case 364u: goto L_003EBEE0;
    case 365u: goto L_003EBEF0;
    case 366u: goto L_003EBF28;
    case 367u: goto L_003EBF30;
    case 368u: goto L_003EBFA4;
    case 369u: goto L_003EBFDC;
    default: bad_entry(c, 0x003E8000u); return;
    }
L_003E8000:
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[6] = ld32((c.r[3].w[0] + 32u));
    c.f[5] = ld32((c.r[3].w[0] + 96u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E8078; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[23].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8054u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003E8054u) [[unlikely]] return; }
L_003E8054:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8060u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003E8060u) [[unlikely]] return; }
L_003E8060:
    c.f[12] = ld32((c.r[16].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8070u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003E8070u) [[unlikely]] return; }
L_003E8070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8088; } }
L_003E8078:
    st32((c.r[29].w[0] + 208u), c.f[3]);
    st32((c.r[29].w[0] + 212u), c.f[3]);
    st32((c.r[29].w[0] + 216u), c.f[3]);
    c.budget -= 4;
L_003E8088:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 31;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_003E8120; } }
    c.f[0] = c.r[21].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_003E8130; } }
L_003E8120:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 4;
L_003E8130:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = c.r[21].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    st32((c.r[3].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[2] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[2] = ld32((c.r[29].w[0] + 324u));
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[2] = ld32((c.r[29].w[0] + 328u));
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[3].w[0] + 32u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 46;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7E30u | kUnwind; return; } [[clang::musttail]] return unit_00B1(c, 321u, depth); } }
L_003E81E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_003E8220:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E82E8; }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E825Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003E825Cu) [[unlikely]] return; }
L_003E825C:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8274u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E8274u) [[unlikely]] return; }
L_003E8274:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8284u); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003E8284u) [[unlikely]] return; }
L_003E8284:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8290u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x003E8290u) [[unlikely]] return; }
L_003E8290:
    set32(c.r[19], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E829Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E829Cu) [[unlikely]] return; }
L_003E829C:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x001615D0u; return; } if (c.pc != 0x003E82B4u) [[unlikely]] return; }
L_003E82B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82C8u); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_000E(c, 333u, depth + 1u); else { c.pc = 0x0015AE30u; return; } if (c.pc != 0x003E82C8u) [[unlikely]] return; }
L_003E82C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003E82D0u) [[unlikely]] return; }
L_003E82D0:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E82DCu) [[unlikely]] return; }
L_003E82DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 3;
L_003E82E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E8300:
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003E831C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_003E8324; } }
L_003E831C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003E8324:
    st32((c.r[4].w[0] + 52u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), 0u);  c.pc = t; return; }
L_003E8370:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E84A0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 72u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 68u)));  goto L_003E83B8; }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_003E84A0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 1;
L_003E83B8:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E84A0; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 88u));  goto L_003E83DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E84A0; } }
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.budget -= 1;
L_003E83DC:
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    st32((c.r[4].w[0] + 88u), c.f[12]);
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.budget -= 49;
L_003E84A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E84B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E84C4u) [[unlikely]] return; }
L_003E84C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10848u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E8500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E8594; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10848u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 56u)));  goto L_003E8544; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8540u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003E8540u) [[unlikely]] return; }
L_003E8540:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_003E8544:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  goto L_003E855C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8558u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003E8558u) [[unlikely]] return; }
L_003E8558:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003E855C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E8574; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8570u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003E8570u) [[unlikely]] return; }
L_003E8570:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E8574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E857Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E857Cu) [[unlikely]] return; }
L_003E857C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E8598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E8594u) [[unlikely]] return; }
L_003E8594:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E8598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E85B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85D8u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E85D8u) [[unlikely]] return; }
L_003E85D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E85F8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 18u, depth + 1u); else { c.pc = 0x003E84B0u; return; } if (c.pc != 0x003E85F4u) [[unlikely]] return; }
L_003E85F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E85F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E8610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 611u);  c.pc = t; return; }
L_003E8620:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E8A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8678u); set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003E8678u) [[unlikely]] return; }
L_003E8678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003E8A5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8690u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003E8690u) [[unlikely]] return; }
L_003E8690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003E8A5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003E86A8u) [[unlikely]] return; }
L_003E86A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003E8A5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003E86C0u) [[unlikely]] return; }
L_003E86C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003E8A5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 17;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_003E8728; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  goto L_003E872C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 100u), 0u);  goto L_003E872C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003E8730; } }
L_003E8728:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_003E872C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003E8730:
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 88u));
    c.f[22] = ld32((c.r[3].w[0] + 44u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.f[21] = ld32((c.r[3].w[0] + 48u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.f[20] = ld32((c.r[3].w[0] + 52u));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == 0ull; c.f[23] = ld32((c.r[3].w[0] + 40u));  if (t) { goto L_003E885C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = 0ull + 0ull;  goto L_003E87B4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 132u));
    c.budget -= 3;
L_003E87B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87BCu);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003E87BCu) [[unlikely]] return; }
L_003E87BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.f[25] = c.f[0];  if (t) { goto L_003E87DC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[2].w[0] + 134u));  if (t) { goto L_003E87E0; } }
L_003E87DC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E87E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87E8u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003E87E8u) [[unlikely]] return; }
L_003E87E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87F0u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 74u, depth + 1u); else { c.pc = 0x001647D0u; return; } if (c.pc != 0x003E87F0u) [[unlikely]] return; }
L_003E87F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));  goto L_003E880C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[24] = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 5;
L_003E880C:
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E881Cu); set32(c.r[6], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x003E881Cu) [[unlikely]] return; }
L_003E881C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8824u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x003E8824u) [[unlikely]] return; }
L_003E8824:
    c.f[25] = fp::ee::div(c.fcr31, c.f[0], c.f[25]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8840u);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x003E8840u) [[unlikely]] return; }
L_003E8840:
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[24]);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[23], c.f[25]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[25]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 7;
L_003E885C:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003E8868:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8928u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 16u, depth + 1u); else { c.pc = 0x003E8300u; return; } if (c.pc != 0x003E8928u) [[unlikely]] return; }
L_003E8928:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E89E0u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 16u, depth + 1u); else { c.pc = 0x003E8300u; return; } if (c.pc != 0x003E89E0u) [[unlikely]] return; }
L_003E89E0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 92u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8868u | kUnwind; return; } goto L_003E8868; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 51u, depth + 1u); else { c.pc = 0x003E8BE0u; return; } if (c.pc != 0x003E8A04u) [[unlikely]] return; }
L_003E8A04:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.f[23]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[4].w[0] + 16u), c.f[22]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[4].w[0] + 36u), c.f[23]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[4].w[0] + 40u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[4].w[0] + 60u), c.f[21]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[4].w[0] + 64u), c.f[22]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[4].w[0] + 84u), c.f[21]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[4].w[0] + 88u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[17].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003E8A6C; } }
L_003E8A5C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003E8A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E8AB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003E8BB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8AF4u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003E8AF4u) [[unlikely]] return; }
L_003E8AF4:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003E8BB8; }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E8B18:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B2Cu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 17u, depth + 1u); else { c.pc = 0x003E8370u; return; } if (c.pc != 0x003E8B2Cu) [[unlikely]] return; }
L_003E8B2C:
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B40u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 17u, depth + 1u); else { c.pc = 0x003E8370u; return; } if (c.pc != 0x003E8B40u) [[unlikely]] return; }
L_003E8B40:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 92u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8B18u | kUnwind; return; } goto L_003E8B18; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  goto L_003E8B68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E8BA8; } }
L_003E8B68:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  goto L_003E8B88; }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003E8B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003E8BA8; } }
L_003E8B84:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003E8B88:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003E8BA8; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E8BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003E8BA8; } }
L_003E8BA4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E8BA8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BB4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 51u, depth + 1u); else { c.pc = 0x003E8BE0u; return; } if (c.pc != 0x003E8BB4u) [[unlikely]] return; }
L_003E8BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003E8BB8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E8BE0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E8CEC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003E8CC0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003E8CBC; } }
    set32(c.r[7], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C68u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003E8C68u) [[unlikely]] return; }
L_003E8C68:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C74u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003E8C74u) [[unlikely]] return; }
L_003E8C74:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C84u); set32(c.r[19], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003E8C84u) [[unlikely]] return; }
L_003E8C84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C98u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x003E8C98u) [[unlikely]] return; }
L_003E8C98:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CA4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003E8CA4u) [[unlikely]] return; }
L_003E8CA4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CB4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003E8CB4u) [[unlikely]] return; }
L_003E8CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 108u)));  if (t) { goto L_003E8CF0; } }
L_003E8CBC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E8CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CC8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003E8CC8u) [[unlikely]] return; }
L_003E8CC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CD8u); set32(c.r[16], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003E8CD8u) [[unlikely]] return; }
L_003E8CD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CECu); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x003E8CECu) [[unlikely]] return; }
L_003E8CEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 1;
L_003E8CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003E8E54; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003E8D34; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003E8D4C; } }
L_003E8D34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003E8D4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[3].w[0] << 24);
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003E8D88; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003E8DA0; } }
L_003E8D88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003E8DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 16);
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_003E8DDC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003E8DF8; } }
L_003E8DDC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003E8DF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 8);
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_003E8E34; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003E8E50; } }
L_003E8E34:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003E8E50:
    c.r[16].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 1;
L_003E8E54:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], c.r[29].w[0] + 220u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E68u); set32(c.r[6], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x003E8E68u) [[unlikely]] return; }
L_003E8E68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[5].w[0];
    c.budget -= 6;
L_003E8E80:
    set32(c.r[6], ld32((c.r[18].w[0] + 56u)));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 36u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 56u)));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 40u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 35;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003E9000; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_003E8F34; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[8].w[0] + 48u));  if (t) { goto L_003E8F48; } }
L_003E8F34:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.f[0] = ld32((c.r[8].w[0] + 48u));
    c.budget -= 5;
L_003E8F48:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[5].w[0] << 24);  if (t) { goto L_003E8F68; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[8].w[0] + 44u));  if (t) { goto L_003E8F80; } }
L_003E8F68:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.f[0] = ld32((c.r[8].w[0] + 44u));
    c.budget -= 6;
L_003E8F80:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_003E8FA4; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[8].w[0] + 40u));  if (t) { goto L_003E8FBC; } }
L_003E8FA4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.f[0] = ld32((c.r[8].w[0] + 40u));
    c.budget -= 6;
L_003E8FBC:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_003E8FE0; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003E8FF8; } }
L_003E8FE0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003E8FF8:
    c.r[16].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 2;
L_003E9000:
    set32(c.r[6], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 92u);
    c.r[5].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8E80u | kUnwind; return; } goto L_003E8E80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E9240; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E9030:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[1] = ld32((c.r[18].w[0] + 84u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9070u); c.f[12] = ld32((c.r[2].w[0] + 12u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x003E9070u) [[unlikely]] return; }
L_003E9070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9080u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 36u, depth + 1u); else { c.pc = 0x00120450u; return; } if (c.pc != 0x003E9080u) [[unlikely]] return; }
L_003E9080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E90D0; } }
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 84u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 84u), c.f[0]);
    c.budget -= 18;
L_003E90D0:
    set32(c.r[19], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90E0u); c.f[12] = ld32((c.r[2].w[0] + 16u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x003E90E0u) [[unlikely]] return; }
L_003E90E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90F0u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 36u, depth + 1u); else { c.pc = 0x00120450u; return; } if (c.pc != 0x003E90F0u) [[unlikely]] return; }
L_003E90F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E9140; } }
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 88u), c.f[0]);
    c.budget -= 18;
L_003E9140:
    set32(c.r[19], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9150u); c.f[12] = ld32((c.r[2].w[0] + 12u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x003E9150u) [[unlikely]] return; }
L_003E9150:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFF00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9164u); mmi::pcpyld(c.r[5], c.r[0], c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 32u, depth + 1u); else { c.pc = 0x00120400u; return; } if (c.pc != 0x003E9164u) [[unlikely]] return; }
L_003E9164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E91B8; } }
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 84u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 84u), c.f[0]);
    c.budget -= 19;
L_003E91B8:
    set32(c.r[19], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91C8u); c.f[12] = ld32((c.r[2].w[0] + 16u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x003E91C8u) [[unlikely]] return; }
L_003E91C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFF00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91DCu); mmi::pcpyld(c.r[5], c.r[0], c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 32u, depth + 1u); else { c.pc = 0x00120400u; return; } if (c.pc != 0x003E91DCu) [[unlikely]] return; }
L_003E91DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E9230; } }
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 88u), c.f[0]);
    c.budget -= 19;
L_003E9230:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9030u | kUnwind; return; } goto L_003E9030; } }
L_003E9240:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E924Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003E924Cu) [[unlikely]] return; }
L_003E924C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E925Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003E925Cu) [[unlikely]] return; }
L_003E925C:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E92C0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9278u); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_000F(c, 55u, depth + 1u); else { c.pc = 0x0015C5F0u; return; } if (c.pc != 0x003E9278u) [[unlikely]] return; }
L_003E9278:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[18].w[0] + 104u), 0u);  goto L_003E92BC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9298u); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_000F(c, 57u, depth + 1u); else { c.pc = 0x0015C610u; return; } if (c.pc != 0x003E9298u) [[unlikely]] return; }
L_003E9298:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 1u);  goto L_003E92B8; }
    st32((c.r[18].w[0] + 104u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E92BC; } }
L_003E92B8:
    st32((c.r[18].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 1;
L_003E92BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E92C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003E92E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E94E8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E94E4; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9328u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003E9328u) [[unlikely]] return; }
L_003E9328:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 74u));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[17].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E9348; }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003E9348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9350u);  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x003E9350u) [[unlikely]] return; }
L_003E9350:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E938C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9364u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E9364u) [[unlikely]] return; }
L_003E9364:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9378u); st32((c.r[2].w[0] + 64u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E9378u) [[unlikely]] return; }
L_003E9378:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9388u); c.r[6].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x003E9388u) [[unlikely]] return; }
L_003E9388:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E938C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9394u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E9394u) [[unlikely]] return; }
L_003E9394:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93A4u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x003E93A4u) [[unlikely]] return; }
L_003E93A4:
    set32(c.r[19], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E93B0u) [[unlikely]] return; }
L_003E93B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93C0u); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E93C0u) [[unlikely]] return; }
L_003E93C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E93DCu) [[unlikely]] return; }
L_003E93DC:
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[17].d[0] & 7ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 248ull;
    st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9404u); st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003E9404u) [[unlikely]] return; }
L_003E9404:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 85u));
    c.r[3].d[0] = c.r[3].d[0] & 199ull;
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st64((c.r[4].w[0] + 16u), 0ull);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E9454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9430u);  if (depth < kMaxDepth) unit_000E(c, 229u, depth + 1u); else { c.pc = 0x00159AF0u; return; } if (c.pc != 0x003E9430u) [[unlikely]] return; }
L_003E9430:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9448; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E9448:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[5], ld32((c.r[18].w[0] + 48u)));  goto L_003E9458; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E9454:
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 1;
L_003E9458:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x001615D0u; return; } if (c.pc != 0x003E9464u) [[unlikely]] return; }
L_003E9464:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.f[0] = ld32((c.r[18].w[0] + 72u));  goto L_003E9488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003E9478u) [[unlikely]] return; }
L_003E9478:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9484u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x003E9484u) [[unlikely]] return; }
L_003E9484:
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.budget -= 1;
L_003E9488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94A4u); st32((c.r[29].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003E94A4u) [[unlikely]] return; }
L_003E94A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94B4u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003E94B4u) [[unlikely]] return; }
L_003E94B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0015AE70u; return; } if (c.pc != 0x003E94C4u) [[unlikely]] return; }
L_003E94C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E94DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003E94D8u) [[unlikely]] return; }
L_003E94D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E94DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94E4u);  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x003E94E4u) [[unlikely]] return; }
L_003E94E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E94E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E9500:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003E9520:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), c.f[13]);
    st32((c.r[4].w[0] + 76u), c.f[14]);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E958Cu); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003E958Cu) [[unlikely]] return; }
L_003E958C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E959Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003E959Cu) [[unlikely]] return; }
L_003E959C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003E95B0; } }
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[19].w[0]);  if (t) { goto L_003E95B4; } }
L_003E95B0:
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 1;
L_003E95B4:
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E9600; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E95D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E95E8u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003E95E8u) [[unlikely]] return; }
L_003E95E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E95D8u | kUnwind; return; } goto L_003E95D8; } }
    c.budget -= 1;
L_003E9600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E9620:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[21] = c.f[12];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.f[12] = ld32((c.r[21].w[0] + 68u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9678u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 253u, depth + 1u); else { c.pc = 0x003EAD00u; return; } if (c.pc != 0x003E9678u) [[unlikely]] return; }
L_003E9678:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], 0u + 1u);
    c.f[12] = ld32((c.r[21].w[0] + 68u));
    c.f[2] = ld32((c.r[21].w[0] + 76u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[12]);  if (t) { goto L_003E96B4; } }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_003E96B8; }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_003E96B4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_003E96B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96C0u); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003E96C0u) [[unlikely]] return; }
L_003E96C0:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96D0u); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003E96D0u) [[unlikely]] return; }
L_003E96D0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003E96E0u) [[unlikely]] return; }
L_003E96E0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96F0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003E96F0u) [[unlikely]] return; }
L_003E96F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_003E9728; } }
    set32(c.r[16], c.r[17].w[0] << 4);
    c.budget -= 1;
L_003E9704:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E971Cu); set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003E971Cu) [[unlikely]] return; }
L_003E971C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] > 0; set32(c.r[16], c.r[16].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9704u | kUnwind; return; } goto L_003E9704; } }
L_003E9728:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9738u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003E9738u) [[unlikely]] return; }
L_003E9738:
    c.f[1] = ld32((c.r[21].w[0] + 72u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[21]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[21].w[0] + 72u), c.f[1]);  if (t) { goto L_003E975C; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_003E975C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_003E97AC; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_003E9798; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_003E9784; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E97A8; } }
L_003E9784:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9790u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 114u, depth + 1u); else { c.pc = 0x003E97E0u; return; } if (c.pc != 0x003E9790u) [[unlikely]] return; }
L_003E9790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E97A8; } }
L_003E9798:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97A8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 117u, depth + 1u); else { c.pc = 0x003E9870u; return; } if (c.pc != 0x003E97A8u) [[unlikely]] return; }
L_003E97A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003E97AC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E97E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E9848; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E9818:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9828u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 97u, depth + 1u); else { c.pc = 0x003E9500u; return; } if (c.pc != 0x003E9828u) [[unlikely]] return; }
L_003E9828:
    st32((c.r[16].w[0] + 20u), c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9818u | kUnwind; return; } goto L_003E9818; } }
    c.budget -= 1;
L_003E9848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9870:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98ACu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x003E98ACu) [[unlikely]] return; }
L_003E98AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[2].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98C4u); set32(c.r[6], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003E98C4u) [[unlikely]] return; }
L_003E98C4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98DCu); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003E98DCu) [[unlikely]] return; }
L_003E98DC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003E98E8u) [[unlikely]] return; }
L_003E98E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003E99E8; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003E9900:
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_003E9930; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[22].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9928u); set32(c.r[5], c.r[3].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003E9928u) [[unlikely]] return; }
L_003E9928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9950; } }
L_003E9930:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[22].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E994Cu); set32(c.r[6], c.r[3].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003E994Cu) [[unlikely]] return; }
L_003E994C:
    c.budget -= 1;
L_003E9950:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9960u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003E9960u) [[unlikely]] return; }
L_003E9960:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E996Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003E996Cu) [[unlikely]] return; }
L_003E996C:
    c.f[12] = ld32((c.r[18].w[0] + 84u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E997Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003E997Cu) [[unlikely]] return; }
L_003E997C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9990u); set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003E9990u) [[unlikely]] return; }
L_003E9990:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E999Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00B2(c, 97u, depth + 1u); else { c.pc = 0x003E9500u; return; } if (c.pc != 0x003E999Cu) [[unlikely]] return; }
L_003E999C:
    st32((c.r[20].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99B4u); set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003E99B4u) [[unlikely]] return; }
L_003E99B4:
    set32(c.r[2], c.r[19].w[0] + 24u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99C4u); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 97u, depth + 1u); else { c.pc = 0x003E9500u; return; } if (c.pc != 0x003E99C4u) [[unlikely]] return; }
L_003E99C4:
    st32((c.r[20].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[20], c.r[20].w[0] + 48u);
    c.r[3].d[0] = c.r[22].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9900u | kUnwind; return; } goto L_003E9900; } }
    c.budget -= 1;
L_003E99E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_003E9A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E9A24u) [[unlikely]] return; }
L_003E9A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 10912u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E9AC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A9Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 138u, depth + 1u); else { c.pc = 0x003E9AE0u; return; } if (c.pc != 0x003E9A9Cu) [[unlikely]] return; }
L_003E9A9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E9AA8u) [[unlikely]] return; }
L_003E9AA8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E9AC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E9AC0u) [[unlikely]] return; }
L_003E9AC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E9AC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E9AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E9B18; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003E9AFC:
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9AFCu | kUnwind; return; } goto L_003E9AFC; } }
L_003E9B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 247u, depth + 1u); else { c.pc = 0x003EABD0u; return; } if (c.pc != 0x003E9B20u) [[unlikely]] return; }
L_003E9B20:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E9B44; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003E9B3Cu) [[unlikely]] return; }
L_003E9B3C:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003E9B44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B78u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E9B78u) [[unlikely]] return; }
L_003E9B78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E9B98; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 132u, depth + 1u); else { c.pc = 0x003E9A10u; return; } if (c.pc != 0x003E9B94u) [[unlikely]] return; }
L_003E9B94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E9B98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E9BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 102u);  c.pc = t; return; }
L_003E9BC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E9F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9BF8u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003E9BF8u) [[unlikely]] return; }
L_003E9BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003E9F3C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]); c.r[18].d[0] = c.lo.d[0];  if (t) { goto L_003E9D40; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C68u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003E9C68u) [[unlikely]] return; }
L_003E9C68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003E9F3C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[9].w[0]);
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003E9E48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_003E9CB0:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E9D28; } }
L_003E9CB8:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[8], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    mmi::mult(c, 1, c.r[6].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[1];
    set32(c.r[9], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    c.r[8].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9CB8u | kUnwind; return; } goto L_003E9CB8; } }
L_003E9D28:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[7].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9CB0u | kUnwind; return; } goto L_003E9CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9E48; } }
L_003E9D40:
    set32(c.r[17], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003E9D5Cu) [[unlikely]] return; }
L_003E9D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003E9F3C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] - 1u);
    mmi::div(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 17;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003E9E48; } }
    set32(c.r[10], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003E9DAC:
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[10].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = c.r[10].sd[0] <= 0; set32(c.r[9], c.r[6].w[0] << 1);  if (t) { goto L_003E9E38; } }
    set32(c.r[5], c.r[9].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[5].w[0] << 3);
    c.budget -= 5;
L_003E9DD0:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 40u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    c.r[9].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9DD0u | kUnwind; return; } goto L_003E9DD0; } }
L_003E9E38:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[10], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9DACu | kUnwind; return; } goto L_003E9DAC; }
L_003E9E48:
    set32(c.r[4], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E9EA8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.budget -= 2;
L_003E9E60:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E9F40; }
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 156u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9E60u | kUnwind; return; } goto L_003E9E60; } }
L_003E9EA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.f[1] = ld32((c.r[5].w[0] + 60u));
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[16].w[0] + 64u), c.f[1]);
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E9F30; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_003E9EDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003E9EF4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E9EF4:
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9F30; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F1Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9F1Cu) [[unlikely]] return; }
L_003E9F1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9EDCu | kUnwind; return; } goto L_003E9EDC; } }
    c.budget -= 1;
L_003E9F30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003E9F48; } }
L_003E9F3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E9F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F48u);  if (depth < kMaxDepth) unit_00B2(c, 245u, depth + 1u); else { c.pc = 0x003EAB90u; return; } if (c.pc != 0x003E9F48u) [[unlikely]] return; }
L_003E9F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E9F4C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E9F70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], 0u + 1u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.f[21] = c.f[12];  if (t) { goto L_003EA110; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003EA114; }
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FDCu); c.f[20] = ld32((c.r[17].w[0] + 56u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003E9FDCu) [[unlikely]] return; }
L_003E9FDC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[19].w[0] + 64u));  goto L_003EA004; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EA054; } }
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.budget -= 1;
L_003EA004:
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EA054; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EA050; } }
L_003EA020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA028u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 178u, depth + 1u); else { c.pc = 0x003EA240u; return; } if (c.pc != 0x003EA028u) [[unlikely]] return; }
L_003EA028:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EA050; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA020u | kUnwind; return; } goto L_003EA020; } }
    c.budget -= 1;
L_003EA050:
    st32((c.r[19].w[0] + 64u), 0u);
    c.budget -= 1;
L_003EA054:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EA110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA064u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 247u, depth + 1u); else { c.pc = 0x003EABD0u; return; } if (c.pc != 0x003EA064u) [[unlikely]] return; }
L_003EA064:
    st32((c.r[19].w[0] + 144u), 0u);
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EA110; } }
L_003EA074:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EA0C0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 60u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0B8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 103u, depth + 1u); else { c.pc = 0x003E9620u; return; } if (c.pc != 0x003EA0B8u) [[unlikely]] return; }
L_003EA0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA0F8; } }
L_003EA0C0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.f[12] = c.f[21];
    set32(c.r[7], ld32((c.r[19].w[0] + 60u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0F4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 103u, depth + 1u); else { c.pc = 0x003E9620u; return; } if (c.pc != 0x003EA0F4u) [[unlikely]] return; }
L_003EA0F4:
    c.budget -= 1;
L_003EA0F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 144u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[19].w[0] + 144u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA074u | kUnwind; return; } goto L_003EA074; } }
    c.budget -= 1;
L_003EA110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003EA114:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EA140:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9AE0u | kUnwind; return; } goto L_003E9AE0; }
L_003EA150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EA22C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003EA230; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA190u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003EA190u) [[unlikely]] return; }
L_003EA190:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 5u);  goto L_003EA1B4; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1ACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003EA1ACu) [[unlikely]] return; }
L_003EA1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (t) { goto L_003EA1C0; } }
L_003EA1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003EA1BCu) [[unlikely]] return; }
L_003EA1BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_003EA1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1C8u); set32(c.r[5], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x003EA1C8u) [[unlikely]] return; }
L_003EA1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0016D8A0u; return; } if (c.pc != 0x003EA1D0u) [[unlikely]] return; }
L_003EA1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1D8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0013(c, 128u, depth + 1u); else { c.pc = 0x0016D930u; return; } if (c.pc != 0x003EA1D8u) [[unlikely]] return; }
L_003EA1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1E0u); set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003EA1E0u) [[unlikely]] return; }
L_003EA1E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[3].w[0] + 4u)));  goto L_003EA214; }
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], c.r[3].w[0] << 1);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA20Cu); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x003EA20Cu) [[unlikely]] return; }
L_003EA20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA224; } }
L_003EA214:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA224u); mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]); c.r[5].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x003EA224u) [[unlikely]] return; }
L_003EA224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA22Cu);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003EA22Cu) [[unlikely]] return; }
L_003EA22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EA230:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA240:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[23]);
    st32((c.r[29].w[0] + 40u), c.f[22]);
    st32((c.r[29].w[0] + 36u), c.f[21]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EA3A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA288u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003EA288u) [[unlikely]] return; }
L_003EA288:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA294u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x003EA294u) [[unlikely]] return; }
L_003EA294:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2A4u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003EA2A4u) [[unlikely]] return; }
L_003EA2A4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EA2B0u) [[unlikely]] return; }
L_003EA2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2D8u); st32((c.r[29].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003EA2D8u) [[unlikely]] return; }
L_003EA2D8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2E4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EA2E4u) [[unlikely]] return; }
L_003EA2E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2F8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EA2F8u) [[unlikely]] return; }
L_003EA2F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA310u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EA310u) [[unlikely]] return; }
L_003EA310:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA320u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003EA320u) [[unlikely]] return; }
L_003EA320:
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[5] = ld32((c.r[29].w[0] + 216u));
    c.f[4] = ld32((c.r[29].w[0] + 136u));
    c.f[7] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[3] = 0u;
    c.f[4] = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[6] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 208u), c.f[7]);
    st32((c.r[29].w[0] + 216u), c.f[5]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    st32((c.r[29].w[0] + 212u), c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[5] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 208u), c.f[4]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[29].w[0] + 212u), c.f[4]);
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 212u), c.f[1]);  if (t) { goto L_003EA3C4; } }
L_003EA3A0:
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 208u), c.f[0]);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[2]);
    c.budget -= 9;
L_003EA3C4:
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 6u);  goto L_003EA5A8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = ld32((c.r[16].w[0] + 40u));  goto L_003EA518; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_003EA488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA3F8u); c.f[12] = ld32((c.r[16].w[0] + 28u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA3F8u) [[unlikely]] return; }
L_003EA3F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA408u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA408u) [[unlikely]] return; }
L_003EA408:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA420u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA420u) [[unlikely]] return; }
L_003EA420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA438u); c.f[23] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA438u) [[unlikely]] return; }
L_003EA438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[23]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA460u); st32((c.r[29].w[0] + 200u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EA460u) [[unlikely]] return; }
L_003EA460:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA470u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EA470u) [[unlikely]] return; }
L_003EA470:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA480u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EA480u) [[unlikely]] return; }
L_003EA480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003EA8D0; } }
L_003EA488:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA494u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA494u) [[unlikely]] return; }
L_003EA494:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4ACu); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA4ACu) [[unlikely]] return; }
L_003EA4AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4C4u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA4C4u) [[unlikely]] return; }
L_003EA4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[22]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4ECu); st32((c.r[29].w[0] + 200u), c.f[21]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EA4ECu) [[unlikely]] return; }
L_003EA4EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA500u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EA500u) [[unlikely]] return; }
L_003EA500:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA510u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EA510u) [[unlikely]] return; }
L_003EA510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA8CC; } }
L_003EA518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA520u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA520u) [[unlikely]] return; }
L_003EA520:
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[17], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA54Cu); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA54Cu) [[unlikely]] return; }
L_003EA54C:
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA574u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA574u) [[unlikely]] return; }
L_003EA574:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 228u), c.f[22]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 236u), c.f[20]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { goto L_003EA8CC; } }
L_003EA5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA5B0u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003EA5B0u) [[unlikely]] return; }
L_003EA5B0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 44u)));  goto L_003EA5DC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25792u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003E8000u < 16384u) { entry = entries_00B2[(t - 0x003E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003EA5D8:
    set32(c.r[17], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003EA5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA5E4u); c.f[12] = ld32((c.r[17].w[0] + 40u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA5E4u) [[unlikely]] return; }
L_003EA5E4:
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA610u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA610u) [[unlikely]] return; }
L_003EA610:
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[5] = c.r[2].w[0];
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[29].w[0] + 232u), c.f[21]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 236u), c.f[20]);
    st32((c.r[29].w[0] + 228u), c.f[3]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { goto L_003EA8CC; } }
L_003EA654:
    set32(c.r[17], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA660u); c.f[12] = ld32((c.r[17].w[0] + 40u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA660u) [[unlikely]] return; }
L_003EA660:
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA68Cu); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA68Cu) [[unlikely]] return; }
L_003EA68C:
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[5] = c.r[2].w[0];
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[29].w[0] + 232u), c.f[21]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 236u), c.f[20]);
    st32((c.r[29].w[0] + 228u), c.f[3]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { goto L_003EA8CC; } }
L_003EA6D0:
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA6DCu); c.f[12] = ld32((c.r[16].w[0] + 40u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA6DCu) [[unlikely]] return; }
L_003EA6DC:
    c.f[4] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA714u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA714u) [[unlikely]] return; }
L_003EA714:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 228u), c.f[22]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 236u), c.f[20]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { goto L_003EA8CC; } }
L_003EA748:
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA754u); c.f[12] = ld32((c.r[16].w[0] + 40u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA754u) [[unlikely]] return; }
L_003EA754:
    c.f[4] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA78Cu); c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA78Cu) [[unlikely]] return; }
L_003EA78C:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 228u), c.f[22]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 236u), c.f[20]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { goto L_003EA8CC; } }
L_003EA7C0:
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7ECu); c.f[21] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA7ECu) [[unlikely]] return; }
L_003EA7EC:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA814u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA814u) [[unlikely]] return; }
L_003EA814:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 228u), c.f[22]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 236u), c.f[20]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { goto L_003EA8CC; } }
L_003EA848:
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA874u); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA874u) [[unlikely]] return; }
L_003EA874:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA89Cu); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA89Cu) [[unlikely]] return; }
L_003EA89C:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 228u), c.f[22]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 236u), c.f[20]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.budget -= 12;
L_003EA8CC:
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003EA8D0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EA9D0; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA8F0u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003EA8F0u) [[unlikely]] return; }
L_003EA8F0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA8FCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EA8FCu) [[unlikely]] return; }
L_003EA8FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 108u));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA910u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA910u) [[unlikely]] return; }
L_003EA910:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA924u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003EA924u) [[unlikely]] return; }
L_003EA924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_003EA9AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA950u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA950u) [[unlikely]] return; }
L_003EA950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA968u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA968u) [[unlikely]] return; }
L_003EA968:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA980u); c.f[23] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EA980u) [[unlikely]] return; }
L_003EA980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[23]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9A8u); st32((c.r[29].w[0] + 200u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EA9A8u) [[unlikely]] return; }
L_003EA9A8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_003EA9AC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EA9B8u) [[unlikely]] return; }
L_003EA9B8:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003EA9C8u) [[unlikely]] return; }
L_003EA9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003EAA2C; } }
L_003EA9D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAA28; } }
    c.f[12] = ld32((c.r[5].w[0] + 96u));
    c.f[13] = ld32((c.r[5].w[0] + 100u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 251u, depth + 1u); else { c.pc = 0x003EACD0u; return; } if (c.pc != 0x003EA9E8u) [[unlikely]] return; }
L_003EA9E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[22] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 88u));
    c.f[13] = ld32((c.r[2].w[0] + 92u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 251u, depth + 1u); else { c.pc = 0x003EACD0u; return; } if (c.pc != 0x003EAA00u) [[unlikely]] return; }
L_003EAA00:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 80u));
    c.f[13] = ld32((c.r[2].w[0] + 84u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 251u, depth + 1u); else { c.pc = 0x003EACD0u; return; } if (c.pc != 0x003EAA18u) [[unlikely]] return; }
L_003EAA18:
    st32((c.r[29].w[0] + 240u), c.f[0]);
    st32((c.r[29].w[0] + 244u), c.f[21]);
    st32((c.r[29].w[0] + 248u), c.f[22]);
    st32((c.r[29].w[0] + 252u), c.f[20]);
    c.budget -= 4;
L_003EAA28:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003EAA2C:
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 251u, depth + 1u); else { c.pc = 0x003EACD0u; return; } if (c.pc != 0x003EAA3Cu) [[unlikely]] return; }
L_003EAA3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[22] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 120u));
    c.f[13] = ld32((c.r[2].w[0] + 124u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 251u, depth + 1u); else { c.pc = 0x003EACD0u; return; } if (c.pc != 0x003EAA54u) [[unlikely]] return; }
L_003EAA54:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 112u));
    c.f[13] = ld32((c.r[2].w[0] + 116u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 251u, depth + 1u); else { c.pc = 0x003EACD0u; return; } if (c.pc != 0x003EAA6Cu) [[unlikely]] return; }
L_003EAA6C:
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[21]);
    st32((c.r[29].w[0] + 264u), c.f[22]);
    st32((c.r[29].w[0] + 268u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));  goto L_003EAA98; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 2;
L_003EAA98:
    set32(c.r[5], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003EAAA4u) [[unlikely]] return; }
L_003EAAA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));  goto L_003EAAC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 245u, depth + 1u); else { c.pc = 0x003EAB90u; return; } if (c.pc != 0x003EAAB8u) [[unlikely]] return; }
L_003EAAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EAB60; } }
L_003EAAC0:
    set32(c.r[5], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAACCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003EAACCu) [[unlikely]] return; }
L_003EAACC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003EAB20; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 256u);
    set32(c.r[10], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30172u)));
    c.f[12] = ld32((c.r[3].w[0] + 44u));
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    c.f[13] = ld32((c.r[3].w[0] + 64u));
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.f[14] = ld32((c.r[3].w[0] + 136u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB20u); set32(c.r[11], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00B2(c, 98u, depth + 1u); else { c.pc = 0x003E9520u; return; } if (c.pc != 0x003EAB20u) [[unlikely]] return; }
L_003EAB20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003EAB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[17].w[0]);  if (t) { goto L_003EAB5C; } }
L_003EAB30:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003EAB4C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003EAB48u) [[unlikely]] return; }
L_003EAB48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003EAB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB54u);  if (depth < kMaxDepth) unit_00B2(c, 245u, depth + 1u); else { c.pc = 0x003EAB90u; return; } if (c.pc != 0x003EAB54u) [[unlikely]] return; }
L_003EAB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EAB60; } }
L_003EAB5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EAB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[23] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_003EAB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EABA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 138u, depth + 1u); else { c.pc = 0x003E9AE0u; return; } if (c.pc != 0x003EABA4u) [[unlikely]] return; }
L_003EABA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EABD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EACB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003EABF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EACA8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EAC28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EAC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003EAC28; } }
    c.budget -= 1;
L_003EAC20:
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 2;
L_003EAC28:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EAC50; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EAC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003EAC50; } }
L_003EAC48:
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_003EAC50:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003EAC78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EAC70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003EAC78; } }
L_003EAC70:
    st32((c.r[17].w[0] + 56u), 0u);
    c.budget -= 2;
L_003EAC78:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003EAC90u) [[unlikely]] return; }
L_003EAC90:
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003EACA0u) [[unlikely]] return; }
L_003EACA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EACB0; } }
L_003EACA8:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_003EACB0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EABF4u | kUnwind; return; } goto L_003EABF4; }
L_003EACB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EACD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACE8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[20]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EACE8u) [[unlikely]] return; }
L_003EACE8:
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EAD00:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], ld32((c.r[6].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 148u)));  goto L_003EAE7C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003EAD58; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EAD70; } }
L_003EAD58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003EAD70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003EADAC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EADC4; } }
L_003EADAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003EADC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_003EAE00; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EAE1C; } }
L_003EAE00:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003EAE1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_003EAE58; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EAE74; } }
L_003EAE58:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003EAE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_003EB220; } }
L_003EAE7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EAEB0; } }
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EAEB0; } }
L_003EAE94:
    c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAE94u | kUnwind; return; } goto L_003EAE94; } }
L_003EAEB0:
    set32(c.r[6], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EB0C8; } }
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_003EAEC4:
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EAEE8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EAEE8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);  goto L_003EB0B4; }
    c.f[0] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[5] = ld32((c.r[5].w[0] + 16u));
    c.f[3] = 0u;
    c.f[4] = ld32((c.r[2].w[0] + 16u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = c.r[4].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[3].w[0];
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[8] = ld32((c.r[5].w[0] + 12u));  if (t) { goto L_003EAF50; } }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[4] = ld32((c.r[2].w[0] + 12u));  if (t) { goto L_003EAF6C; } }
L_003EAF50:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[4] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
L_003EAF6C:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[3] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[8]);
    set32(c.r[6], c.r[3].w[0] << 24);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[8]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  goto L_003EAFBC; }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[4] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_003EAFD4; } }
L_003EAFBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 6;
L_003EAFD4:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[3] = 0u;
    set32(c.r[5], c.r[3].w[0] << 16);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_003EB024; } }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[2].w[0] + 4u));  if (t) { goto L_003EB040; } }
L_003EB024:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
L_003EB040:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 8);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[3], c.f[6]);
    c.f[3] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_003EB090; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EB0AC; } }
L_003EB090:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003EB0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];  if (t) { goto L_003EB220; } }
L_003EB0B4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAEC4u | kUnwind; return; } goto L_003EAEC4; } }
    c.budget -= 1;
L_003EB0C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003EB100; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003EB118; } }
L_003EB100:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003EB118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[3].w[0] << 24);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003EB154; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003EB16C; } }
L_003EB154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003EB16C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 16);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_003EB1A8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003EB1C4; } }
L_003EB1A8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003EB1C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 8);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_003EB200; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EB21C; } }
L_003EB200:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003EB21C:
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 1;
L_003EB220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EB230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB244u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003EB244u) [[unlikely]] return; }
L_003EB244:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 10976u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB26Cu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003EB26Cu) [[unlikely]] return; }
L_003EB26C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EB280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EB2C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB2B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003EB2B0u) [[unlikely]] return; }
L_003EB2B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EB2CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB2C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003EB2C8u) [[unlikely]] return; }
L_003EB2C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EB2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EB2E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB308u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003EB308u) [[unlikely]] return; }
L_003EB308:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003EB328; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB324u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 256u, depth + 1u); else { c.pc = 0x003EB230u; return; } if (c.pc != 0x003EB324u) [[unlikely]] return; }
L_003EB324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EB328:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EB340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 612u);  c.pc = t; return; }
L_003EB350:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003EB370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EB450; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003EB420; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003EB3F0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003EB3C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003EB45C; } }
L_003EB3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3C8u);  if (depth < kMaxDepth) unit_00B2(c, 280u, depth + 1u); else { c.pc = 0x003EB4B0u; return; } if (c.pc != 0x003EB3C8u) [[unlikely]] return; }
L_003EB3C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3D8u); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003EB3D8u) [[unlikely]] return; }
L_003EB3D8:
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003EB3E8u) [[unlikely]] return; }
L_003EB3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EB458; } }
L_003EB3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3F8u);  if (depth < kMaxDepth) unit_00B2(c, 291u, depth + 1u); else { c.pc = 0x003EB580u; return; } if (c.pc != 0x003EB3F8u) [[unlikely]] return; }
L_003EB3F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB408u); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003EB408u) [[unlikely]] return; }
L_003EB408:
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB418u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003EB418u) [[unlikely]] return; }
L_003EB418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EB458; } }
L_003EB420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB428u);  if (depth < kMaxDepth) unit_00B2(c, 301u, depth + 1u); else { c.pc = 0x003EB660u; return; } if (c.pc != 0x003EB428u) [[unlikely]] return; }
L_003EB428:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB438u); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003EB438u) [[unlikely]] return; }
L_003EB438:
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB448u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003EB448u) [[unlikely]] return; }
L_003EB448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EB458; } }
L_003EB450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB458u);  if (depth < kMaxDepth) unit_00B2(c, 304u, depth + 1u); else { c.pc = 0x003EB710u; return; } if (c.pc != 0x003EB458u) [[unlikely]] return; }
L_003EB458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003EB45C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EB470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB484u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003EB484u) [[unlikely]] return; }
L_003EB484:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003EB4A4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003EB4A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EB4B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4D0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003EB4D0u) [[unlikely]] return; }
L_003EB4D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4E0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x003EB4E0u) [[unlikely]] return; }
L_003EB4E0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4F0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003EB4F0u) [[unlikely]] return; }
L_003EB4F0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4FCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EB4FCu) [[unlikely]] return; }
L_003EB4FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB510u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EB510u) [[unlikely]] return; }
L_003EB510:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB520u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EB520u) [[unlikely]] return; }
L_003EB520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB528u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003EB528u) [[unlikely]] return; }
L_003EB528:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB534u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EB534u) [[unlikely]] return; }
L_003EB534:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 25824u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB54Cu); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003EB8E0u; return; } if (c.pc != 0x003EB54Cu) [[unlikely]] return; }
L_003EB54C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003EB568; }
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB564u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003EB564u) [[unlikely]] return; }
L_003EB564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EB568:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EB580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB5A0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003EB5A0u) [[unlikely]] return; }
L_003EB5A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB5D4u); st32((c.r[29].w[0] + 56u), c.f[2]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003EB5D4u) [[unlikely]] return; }
L_003EB5D4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB5E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EB5E0u) [[unlikely]] return; }
L_003EB5E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB5F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EB5F4u) [[unlikely]] return; }
L_003EB5F4:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB604u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EB604u) [[unlikely]] return; }
L_003EB604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB60Cu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003EB60Cu) [[unlikely]] return; }
L_003EB60C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB618u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EB618u) [[unlikely]] return; }
L_003EB618:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 25840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB630u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003EB8E0u; return; } if (c.pc != 0x003EB630u) [[unlikely]] return; }
L_003EB630:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003EB64C; }
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB648u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003EB648u) [[unlikely]] return; }
L_003EB648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EB64C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EB660:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.f[21] = ld32((c.r[3].w[0] + 20u));
    c.f[20] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB694u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003EB694u) [[unlikely]] return; }
L_003EB694:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB6C8u); st32((c.r[29].w[0] + 56u), c.f[2]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EB6C8u) [[unlikely]] return; }
L_003EB6C8:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[16].w[0] + 52u));  goto L_003EB6E0; }
    st32((c.r[16].w[0] + 52u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 2;
L_003EB6E0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003EB6F4; }
    st32((c.r[16].w[0] + 52u), c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003EB6F4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EB710:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB738u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003EB738u) [[unlikely]] return; }
L_003EB738:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB748u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x003EB748u) [[unlikely]] return; }
L_003EB748:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB754u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003EB754u) [[unlikely]] return; }
L_003EB754:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB764u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003EB764u) [[unlikely]] return; }
L_003EB764:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB770u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EB770u) [[unlikely]] return; }
L_003EB770:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB784u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EB784u) [[unlikely]] return; }
L_003EB784:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB794u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EB794u) [[unlikely]] return; }
L_003EB794:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB7C4u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EB7C4u) [[unlikely]] return; }
L_003EB7C4:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB7F4u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000D(c, 361u, depth + 1u); else { c.pc = 0x001575A0u; return; } if (c.pc != 0x003EB7F4u) [[unlikely]] return; }
L_003EB7F4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB800u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 224u, depth + 1u); else { c.pc = 0x0018FA10u; return; } if (c.pc != 0x003EB800u) [[unlikely]] return; }
L_003EB800:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB810u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 3u, depth + 1u); else { c.pc = 0x00190080u; return; } if (c.pc != 0x003EB810u) [[unlikely]] return; }
L_003EB810:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB81Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EB81Cu) [[unlikely]] return; }
L_003EB81C:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB834u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003EB834u) [[unlikely]] return; }
L_003EB834:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB860u); st32((c.r[29].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EB860u) [[unlikely]] return; }
L_003EB860:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB870u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003EB870u) [[unlikely]] return; }
L_003EB870:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB87Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EB87Cu) [[unlikely]] return; }
L_003EB87C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB88Cu); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x003EB88Cu) [[unlikely]] return; }
L_003EB88C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB89Cu); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x003EB89Cu) [[unlikely]] return; }
L_003EB89C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB8ACu); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x003EB8ACu) [[unlikely]] return; }
L_003EB8AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB8B8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003EB8B8u) [[unlikely]] return; }
L_003EB8B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB8C4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003EB8C4u) [[unlikely]] return; }
L_003EB8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_003EB8E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB910u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003EB910u) [[unlikely]] return; }
L_003EB910:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB91Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003EB91Cu) [[unlikely]] return; }
L_003EB91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB93Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x003EB93Cu) [[unlikely]] return; }
L_003EB93C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[29].w[0] + 64u));  goto L_003EB968; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003EB960u) [[unlikely]] return; }
L_003EB960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EB9B0; } }
L_003EB968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[0]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[4]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9ACu); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x003EB9ACu) [[unlikely]] return; }
L_003EB9AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EB9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EB9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003EB9E4u) [[unlikely]] return; }
L_003EB9E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 337u, depth + 1u); else { c.pc = 0x003C3C50u; return; } if (c.pc != 0x003EB9F8u) [[unlikely]] return; }
L_003EB9F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003EBA24; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003EBA2C; } }
L_003EBA24:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_003EBA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EBA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EBA88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA70u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003EBA70u) [[unlikely]] return; }
L_003EBA70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EBA8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003EBA88u) [[unlikely]] return; }
L_003EBA88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EBA8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EBAA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBAC8u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003EBAC8u) [[unlikely]] return; }
L_003EBAC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003EBAE8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBAE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 332u, depth + 1u); else { c.pc = 0x003EB9D0u; return; } if (c.pc != 0x003EBAE4u) [[unlikely]] return; }
L_003EBAE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EBAE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EBB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 712u);  c.pc = t; return; }
L_003EBB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003EBB40; } }
L_003EBB34:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_003EBB40:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EBB68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB5Cu);  if (depth < kMaxDepth) unit_00A8(c, 338u, depth + 1u); else { c.pc = 0x003C3C60u; return; } if (c.pc != 0x003EBB5Cu) [[unlikely]] return; }
L_003EBB5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBB34u | kUnwind; return; } goto L_003EBB34; }
    c.budget -= 1;
L_003EBB68:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003EBBF8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[17].d[0] = ld16((c.r[3].w[0] + 84u));
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003EBBB8; } }
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_003EBBE4; } }
L_003EBBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBBC0u); c.r[4].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003EBBC0u) [[unlikely]] return; }
L_003EBBC0:
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBBCCu); set32(c.r[4], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003EBBCCu) [[unlikely]] return; }
L_003EBBCC:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 6;
L_003EBBE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003EBC04; } }
L_003EBBF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003EBC04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EBC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003EBC34u) [[unlikely]] return; }
L_003EBC34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003EBC54; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003EBC54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EBC60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003EBD14; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  goto L_003EBCB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EBD10; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003EBCB0:
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);  if (t) { goto L_003EBD10; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EBCCC:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBCFCu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EBCFCu) [[unlikely]] return; }
L_003EBCFC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBCCCu | kUnwind; return; } goto L_003EBCCC; } }
    c.budget -= 1;
L_003EBD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003EBD14:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EBD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003EBD44u) [[unlikely]] return; }
L_003EBD44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 11104u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 76u), 0u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4864u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDB8u); st32((c.r[16].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003EBDB8u) [[unlikely]] return; }
L_003EBDB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDC8u); set32(c.r[5], c.r[5].w[0] - 4864u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003EBDC8u) [[unlikely]] return; }
L_003EBDC8:
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EBDD8u) [[unlikely]] return; }
L_003EBDD8:
    st32((c.r[16].w[0] + 240u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003EBDF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EBE00; } }
L_003EBDF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003EBE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EBE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EBE60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 11104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE3Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 33u, depth + 1u); else { c.pc = 0x003EC580u; return; } if (c.pc != 0x003EBE3Cu) [[unlikely]] return; }
L_003EBE3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003EBE48u) [[unlikely]] return; }
L_003EBE48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EBE64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003EBE60u) [[unlikely]] return; }
L_003EBE60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EBE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EBE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEA8u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003EBEA8u) [[unlikely]] return; }
L_003EBEA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003EBEC8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 352u, depth + 1u); else { c.pc = 0x003EBD30u; return; } if (c.pc != 0x003EBEC4u) [[unlikely]] return; }
L_003EBEC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EBEC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EBEE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 501u);  c.pc = t; return; }
L_003EBEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF28u); st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 34u, depth + 1u); else { c.pc = 0x003EC5A0u; return; } if (c.pc != 0x003EBF28u) [[unlikely]] return; }
L_003EBF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003EBF30u) [[unlikely]] return; }
L_003EBF30:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 248u));
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 252u)));  goto L_003EBF9C; }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0])));  [[clang::musttail]] return unit_00B3(c, 4u, depth); }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00B3(c, 3u, depth); } }
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00B3(c, 3u, depth); } }
L_003EBF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFA4u); c.f[20] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x003EBFA4u) [[unlikely]] return; }
L_003EBFA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00B3(c, 3u, depth); } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00B3(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFDCu); set32(c.r[4], ld32((c.r[16].w[0] + 252u)));  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x003EBFDCu) [[unlikely]] return; }
L_003EBFDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 252u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.budget -= 9;
    [[clang::musttail]] return unit_00B3(c, 1u, depth);
}

}
