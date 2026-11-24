#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AC[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161,
    0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D0000;
    case 2u: goto L_003D0004;
    case 3u: goto L_003D0020;
    case 4u: goto L_003D002C;
    case 5u: goto L_003D0064;
    case 6u: goto L_003D00C4;
    case 7u: goto L_003D00D4;
    case 8u: goto L_003D01A0;
    case 9u: goto L_003D01D0;
    case 10u: goto L_003D0200;
    case 11u: goto L_003D0210;
    case 12u: goto L_003D02A0;
    case 13u: goto L_003D02BC;
    case 14u: goto L_003D02F0;
    case 15u: goto L_003D0324;
    case 16u: goto L_003D0330;
    case 17u: goto L_003D0360;
    case 18u: goto L_003D037C;
    case 19u: goto L_003D03BC;
    case 20u: goto L_003D03C8;
    case 21u: goto L_003D03D0;
    case 22u: goto L_003D0428;
    case 23u: goto L_003D045C;
    case 24u: goto L_003D0480;
    case 25u: goto L_003D04C4;
    case 26u: goto L_003D0510;
    case 27u: goto L_003D07E0;
    case 28u: goto L_003D0900;
    case 29u: goto L_003D1020;
    case 30u: goto L_003D105C;
    case 31u: goto L_003D1070;
    case 32u: goto L_003D1100;
    case 33u: goto L_003D1270;
    case 34u: goto L_003D12CC;
    case 35u: goto L_003D12F8;
    case 36u: goto L_003D1338;
    case 37u: goto L_003D1370;
    case 38u: goto L_003D1390;
    case 39u: goto L_003D13C0;
    case 40u: goto L_003D13D0;
    case 41u: goto L_003D13F4;
    case 42u: goto L_003D1404;
    case 43u: goto L_003D1444;
    case 44u: goto L_003D1470;
    case 45u: goto L_003D14C4;
    case 46u: goto L_003D1504;
    case 47u: goto L_003D1544;
    case 48u: goto L_003D1584;
    case 49u: goto L_003D15C4;
    case 50u: goto L_003D15E8;
    case 51u: goto L_003D1628;
    case 52u: goto L_003D1668;
    case 53u: goto L_003D16A8;
    case 54u: goto L_003D16E8;
    case 55u: goto L_003D1728;
    case 56u: goto L_003D174C;
    case 57u: goto L_003D1770;
    case 58u: goto L_003D17B4;
    case 59u: goto L_003D186C;
    case 60u: goto L_003D1890;
    case 61u: goto L_003D18E8;
    case 62u: goto L_003D1908;
    case 63u: goto L_003D1920;
    case 64u: goto L_003D1934;
    case 65u: goto L_003D1970;
    case 66u: goto L_003D1984;
    case 67u: goto L_003D1A00;
    case 68u: goto L_003D1A24;
    case 69u: goto L_003D1A94;
    case 70u: goto L_003D1AA4;
    case 71u: goto L_003D1AB4;
    case 72u: goto L_003D1AC4;
    case 73u: goto L_003D1AE0;
    case 74u: goto L_003D1B98;
    case 75u: goto L_003D1BB0;
    case 76u: goto L_003D1C4C;
    case 77u: goto L_003D1C60;
    case 78u: goto L_003D1D14;
    case 79u: goto L_003D1D28;
    case 80u: goto L_003D1D34;
    case 81u: goto L_003D1D44;
    case 82u: goto L_003D1D54;
    case 83u: goto L_003D1DAC;
    case 84u: goto L_003D1DBC;
    case 85u: goto L_003D1DCC;
    case 86u: goto L_003D1DDC;
    case 87u: goto L_003D1DE4;
    case 88u: goto L_003D1DF4;
    case 89u: goto L_003D1E14;
    case 90u: goto L_003D1E34;
    case 91u: goto L_003D1E60;
    case 92u: goto L_003D1E80;
    case 93u: goto L_003D1E94;
    case 94u: goto L_003D1EA4;
    case 95u: goto L_003D1EBC;
    case 96u: goto L_003D1ED8;
    case 97u: goto L_003D1EFC;
    case 98u: goto L_003D1F1C;
    case 99u: goto L_003D1F3C;
    case 100u: goto L_003D1F5C;
    case 101u: goto L_003D1FA0;
    case 102u: goto L_003D2004;
    case 103u: goto L_003D2028;
    case 104u: goto L_003D2060;
    case 105u: goto L_003D20B0;
    case 106u: goto L_003D20C4;
    case 107u: goto L_003D20F0;
    case 108u: goto L_003D2120;
    case 109u: goto L_003D2138;
    case 110u: goto L_003D2150;
    case 111u: goto L_003D2178;
    case 112u: goto L_003D2194;
    case 113u: goto L_003D21B0;
    case 114u: goto L_003D21C0;
    case 115u: goto L_003D2230;
    case 116u: goto L_003D2298;
    case 117u: goto L_003D22D0;
    case 118u: goto L_003D22E0;
    case 119u: goto L_003D2318;
    case 120u: goto L_003D2328;
    case 121u: goto L_003D2348;
    case 122u: goto L_003D2378;
    case 123u: goto L_003D2388;
    case 124u: goto L_003D2394;
    case 125u: goto L_003D2410;
    case 126u: goto L_003D2430;
    case 127u: goto L_003D2444;
    case 128u: goto L_003D2470;
    case 129u: goto L_003D24A0;
    case 130u: goto L_003D24B8;
    case 131u: goto L_003D24D0;
    case 132u: goto L_003D24F8;
    case 133u: goto L_003D2514;
    case 134u: goto L_003D2530;
    case 135u: goto L_003D2540;
    case 136u: goto L_003D25B8;
    case 137u: goto L_003D25EC;
    case 138u: goto L_003D2618;
    case 139u: goto L_003D2624;
    case 140u: goto L_003D2640;
    case 141u: goto L_003D2660;
    case 142u: goto L_003D2670;
    case 143u: goto L_003D2684;
    case 144u: goto L_003D26D0;
    case 145u: goto L_003D2700;
    case 146u: goto L_003D2718;
    case 147u: goto L_003D2730;
    case 148u: goto L_003D2758;
    case 149u: goto L_003D2774;
    case 150u: goto L_003D2790;
    case 151u: goto L_003D27A0;
    case 152u: goto L_003D27C8;
    case 153u: goto L_003D27F0;
    case 154u: goto L_003D284C;
    case 155u: goto L_003D2870;
    case 156u: goto L_003D2884;
    case 157u: goto L_003D28B0;
    case 158u: goto L_003D28D8;
    case 159u: goto L_003D28F0;
    case 160u: goto L_003D2974;
    case 161u: goto L_003D297C;
    case 162u: goto L_003D2984;
    case 163u: goto L_003D2998;
    case 164u: goto L_003D29A0;
    case 165u: goto L_003D29C4;
    case 166u: goto L_003D29E0;
    case 167u: goto L_003D2A38;
    case 168u: goto L_003D2A50;
    case 169u: goto L_003D2A6C;
    case 170u: goto L_003D2A88;
    case 171u: goto L_003D2AA0;
    case 172u: goto L_003D2AF8;
    case 173u: goto L_003D2B20;
    case 174u: goto L_003D2B34;
    case 175u: goto L_003D2B4C;
    case 176u: goto L_003D2B60;
    case 177u: goto L_003D2B90;
    case 178u: goto L_003D2BA8;
    case 179u: goto L_003D2BC0;
    case 180u: goto L_003D2BE8;
    case 181u: goto L_003D2C04;
    case 182u: goto L_003D2C20;
    case 183u: goto L_003D2C30;
    case 184u: goto L_003D2CA0;
    case 185u: goto L_003D2CD0;
    case 186u: goto L_003D2CE0;
    case 187u: goto L_003D2CF4;
    case 188u: goto L_003D2D30;
    case 189u: goto L_003D2D60;
    case 190u: goto L_003D2D78;
    case 191u: goto L_003D2D90;
    case 192u: goto L_003D2DB8;
    case 193u: goto L_003D2DD4;
    case 194u: goto L_003D2DF0;
    case 195u: goto L_003D2E00;
    case 196u: goto L_003D2E30;
    case 197u: goto L_003D2E68;
    case 198u: goto L_003D2E90;
    case 199u: goto L_003D2EB8;
    case 200u: goto L_003D2EF0;
    case 201u: goto L_003D2F4C;
    case 202u: goto L_003D2F8C;
    case 203u: goto L_003D2FB4;
    case 204u: goto L_003D2FDC;
    case 205u: goto L_003D3010;
    case 206u: goto L_003D3024;
    case 207u: goto L_003D3050;
    case 208u: goto L_003D3084;
    case 209u: goto L_003D3090;
    case 210u: goto L_003D30A4;
    case 211u: goto L_003D30D0;
    case 212u: goto L_003D3100;
    case 213u: goto L_003D3118;
    case 214u: goto L_003D3130;
    case 215u: goto L_003D3158;
    case 216u: goto L_003D3174;
    case 217u: goto L_003D3190;
    case 218u: goto L_003D31A0;
    case 219u: goto L_003D31C8;
    case 220u: goto L_003D31EC;
    case 221u: goto L_003D3214;
    case 222u: goto L_003D323C;
    case 223u: goto L_003D3280;
    case 224u: goto L_003D32C4;
    case 225u: goto L_003D32F0;
    case 226u: goto L_003D331C;
    case 227u: goto L_003D3350;
    case 228u: goto L_003D3364;
    case 229u: goto L_003D3390;
    case 230u: goto L_003D33C4;
    case 231u: goto L_003D33D0;
    case 232u: goto L_003D33E4;
    case 233u: goto L_003D3444;
    case 234u: goto L_003D3460;
    case 235u: goto L_003D3490;
    case 236u: goto L_003D34A8;
    case 237u: goto L_003D34C0;
    case 238u: goto L_003D34E8;
    case 239u: goto L_003D3504;
    case 240u: goto L_003D3520;
    case 241u: goto L_003D3530;
    case 242u: goto L_003D3558;
    case 243u: goto L_003D3574;
    case 244u: goto L_003D35C8;
    case 245u: goto L_003D3600;
    case 246u: goto L_003D364C;
    case 247u: goto L_003D36B8;
    case 248u: goto L_003D3760;
    case 249u: goto L_003D3774;
    case 250u: goto L_003D3790;
    case 251u: goto L_003D37A4;
    case 252u: goto L_003D37D0;
    case 253u: goto L_003D3804;
    case 254u: goto L_003D3810;
    case 255u: goto L_003D3890;
    case 256u: goto L_003D38B0;
    case 257u: goto L_003D38D0;
    case 258u: goto L_003D3930;
    case 259u: goto L_003D399C;
    case 260u: goto L_003D39EC;
    case 261u: goto L_003D3A00;
    case 262u: goto L_003D3A14;
    case 263u: goto L_003D3A40;
    case 264u: goto L_003D3A70;
    case 265u: goto L_003D3A88;
    case 266u: goto L_003D3AA0;
    case 267u: goto L_003D3AC8;
    case 268u: goto L_003D3AE4;
    case 269u: goto L_003D3B00;
    case 270u: goto L_003D3B10;
    case 271u: goto L_003D3B30;
    case 272u: goto L_003D3B70;
    case 273u: goto L_003D3B98;
    case 274u: goto L_003D3BC0;
    case 275u: goto L_003D3BF0;
    case 276u: goto L_003D3C04;
    case 277u: goto L_003D3C30;
    case 278u: goto L_003D3C64;
    case 279u: goto L_003D3C70;
    case 280u: goto L_003D3C84;
    case 281u: goto L_003D3CD0;
    case 282u: goto L_003D3D00;
    case 283u: goto L_003D3D18;
    case 284u: goto L_003D3D30;
    case 285u: goto L_003D3D58;
    case 286u: goto L_003D3D74;
    case 287u: goto L_003D3D90;
    case 288u: goto L_003D3DA0;
    case 289u: goto L_003D3DC0;
    case 290u: goto L_003D3DD8;
    case 291u: goto L_003D3E08;
    case 292u: goto L_003D3E28;
    case 293u: goto L_003D3E48;
    case 294u: goto L_003D3E80;
    case 295u: goto L_003D3EDC;
    case 296u: goto L_003D3EF4;
    case 297u: goto L_003D3F14;
    case 298u: goto L_003D3F34;
    case 299u: goto L_003D3F58;
    case 300u: goto L_003D3F7C;
    case 301u: goto L_003D3FAC;
    default: bad_entry(c, 0x003D0000u); return;
    }
L_003D0000:
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_003D0004:
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[12] = ld32((c.r[3].w[0] + 232u));  goto L_003D0024; }
    c.f[0] = ld32((c.r[3].w[0] + 232u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.f[0]);  if (t) { goto L_003D0030; } }
    goto L_003D0024;
L_003D0020:
    st32((c.r[18].w[0] + 92u), c.f[0]);
    c.budget -= 1;
L_003D0024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D002Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D002Cu) [[unlikely]] return; }
L_003D002C:
    st32((c.r[18].w[0] + 92u), c.f[0]);
    c.budget -= 1;
L_003D0030:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 100u), 0u);  goto L_003D0068; }
    set32(c.r[2], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003D005C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D0068; } }
L_003D005C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0064u);  if (depth < kMaxDepth) unit_00AC(c, 33u, depth + 1u); else { c.pc = 0x003D1270u; return; } if (c.pc != 0x003D0064u) [[unlikely]] return; }
L_003D0064:
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_003D0068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[18].w[0] + 12u), c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[2]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    st32((c.r[18].w[0] + 24u), c.f[2]);
    st32((c.r[18].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 20;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 108u), 0u);  goto L_003D015C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D00C4u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003D00C4u) [[unlikely]] return; }
L_003D00C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D00D4u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x003D00D4u) [[unlikely]] return; }
L_003D00D4:
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[4] = c.f[20] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    st32((c.r[18].w[0] + 12u), c.f[1]);
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    c.f[2] = ld32((c.r[18].w[0] + 28u));
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    st32((c.r[18].w[0] + 28u), c.f[0]);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 34;
L_003D015C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    st32((c.r[18].w[0] + 88u), c.f[0]);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st32((c.r[18].w[0] + 112u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 224u)));  goto L_003D0188; }
    st32((c.r[2].w[0] + 112u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 2;
L_003D0188:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 224u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 6;
L_003D01A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003D01D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D01F0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 228u), 0u);  goto L_003D01F0; }
    st32((c.r[4].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 112u), 0u);
    c.budget -= 2;
L_003D01F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D0200:
    set32(c.r[6], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D0298; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 108u)));
    c.budget -= 1;
L_003D0210:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D0288; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D0230; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 116u)));
    st32((c.r[5].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 3;
L_003D0230:
    set32(c.r[5], ld32((c.r[6].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D0248; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 112u)));
    st32((c.r[5].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 3;
L_003D0248:
    set32(c.r[3], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003D0270; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D0268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 224u), c.r[3].w[0]);  if (t) { goto L_003D0270; } }
L_003D0268:
    st32((c.r[4].w[0] + 224u), 0u);
    c.budget -= 2;
L_003D0270:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[6].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 228u)));
    st32((c.r[5].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 228u), c.r[5].w[0]);  if (t) { goto L_003D0290; } }
L_003D0288:
    set32(c.r[6], ld32((c.r[6].w[0] + 116u)));
    c.budget -= 2;
L_003D0290:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0210u | kUnwind; return; } goto L_003D0210; }
L_003D0298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D02A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02BCu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_00A9(c, 275u, depth + 1u); else { c.pc = 0x003C6AE0u; return; } if (c.pc != 0x003D02BCu) [[unlikely]] return; }
L_003D02BC:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[20], c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D02F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0324u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003D0324u) [[unlikely]] return; }
L_003D0324:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0330u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003D0330u) [[unlikely]] return; }
L_003D0330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_003D03A0; }
    c.f[1] = 0u;
    c.f[20] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0360u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x003D0360u) [[unlikely]] return; }
L_003D0360:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D037Cu);  if (depth < kMaxDepth) unit_0005(c, 116u, depth + 1u); else { c.pc = 0x00136BE8u; return; } if (c.pc != 0x003D037Cu) [[unlikely]] return; }
L_003D037C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 16383u);
    c.budget -= 9;
L_003D03A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_003D03B0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003D03B0:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03BCu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0019(c, 9u, depth + 1u); else { c.pc = 0x001841F0u; return; } if (c.pc != 0x003D03BCu) [[unlikely]] return; }
L_003D03BC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03C8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003D03C8u) [[unlikely]] return; }
L_003D03C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03D0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x003D03D0u) [[unlikely]] return; }
L_003D03D0:
    c.f[3] = ld32((c.r[29].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003D045C; } }
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_003D0444; } }
L_003D0428:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0428u | kUnwind; return; } goto L_003D0428; } }
L_003D0444:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D045Cu); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_001C(c, 27u, depth + 1u); else { c.pc = 0x001906F0u; return; } if (c.pc != 0x003D045Cu) [[unlikely]] return; }
L_003D045C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D0480:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 188u));  goto L_003D04EC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[1] = ld32((c.r[4].w[0] + 188u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D04E8; } }
    c.f[0] = ld32((c.r[5].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D0500; } }
    c.f[0] = ld32((c.r[5].w[0] + 84u));
    c.budget -= 1;
L_003D04C4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 188u));
    c.f[0] = ld32((c.r[5].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[5].w[0] + 84u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D04C4u | kUnwind; return; } goto L_003D04C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0500; } }
L_003D04E8:
    c.f[1] = ld32((c.r[4].w[0] + 188u));
    c.budget -= 1;
L_003D04EC:
    c.f[0] = ld32((c.r[5].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D0500; } }
    st32((c.r[5].w[0] + 84u), c.f[1]);
    c.budget -= 1;
L_003D0500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D0510:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[8].d[0]) { set32(c.r[6], ld32((c.r[2].w[0] + 212u)));  goto L_003D0694; }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003D0560; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003D0578; } }
L_003D0560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003D0578:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003D05B8; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003D05D0; } }
L_003D05B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003D05D0:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_003D0610; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003D062C; } }
L_003D0610:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003D062C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_003D066C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003D0688; } }
L_003D066C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003D0688:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_003D1014; } }
L_003D0694:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[8].d[0]) { set32(c.r[6], ld32((c.r[4].w[0] + 212u)));  goto L_003D06C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = ld32((c.r[4].w[0] + 188u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[7], c.r[5].w[0] - 1u);  goto L_003D07D4; }
    set32(c.r[6], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 1;
L_003D06C4:
    set32(c.r[2], c.r[6].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[5], c.r[2].w[0] >> 1);  goto L_003D06E0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003D06F8; } }
L_003D06E0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_003D06F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[6].w[0] >> 16);
    c.r[5].d[0] = c.r[5].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = c.r[5].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003D0720; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_003D073C; } }
L_003D0720:
    set32(c.r[5], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003D073C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[6].w[0] >> 8);
    c.r[5].d[0] = c.r[5].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[1] = c.r[5].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_003D0764; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_003D0780; } }
L_003D0764:
    set32(c.r[5], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003D0780:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] | 32897ull;
    c.f[1] = c.r[5].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_003D07A4; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_003D07C0; } }
L_003D07A4:
    set32(c.r[5], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[4] = fp::cvt_s_w(c.f[1]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_003D07C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32897ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);  if (t) { goto L_003D0898; } }
L_003D07D4:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003D0888; } }
    set32(c.r[9], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 1;
L_003D07E0:
    set32(c.r[5], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[9].w[0])));
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.f[0] = ld32((c.r[11].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003D0804; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D0804:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);  goto L_003D0878; }
    c.f[7] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = ld32((c.r[11].w[0] + 16u));
    c.f[6] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[5] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[11].w[0] + 8u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[1]);
    c.f[4] = ld32((c.r[6].w[0] + 12u));
    c.f[3] = ld32((c.r[11].w[0] + 12u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[3]);  if (t) { goto L_003D0898; } }
L_003D0878:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D07E0u | kUnwind; return; } goto L_003D07E0; } }
L_003D0888:
    c.f[0] = ld32((c.r[11].w[0] + 16u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[2] = ld32((c.r[11].w[0] + 8u));
    c.f[3] = ld32((c.r[11].w[0] + 12u));
    c.budget -= 4;
L_003D0898:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_003D0B40; }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[6] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    c.f[4] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  goto L_003D08E0; }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003D08F8; } }
L_003D08E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003D08F8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 2;
L_003D0900:
    set32(c.r[7], c.r[4].w[0] << 24);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[6] = c.r[5].w[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  goto L_003D0938; }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003D0950; } }
L_003D0938:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003D0950:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[4].w[0] << 16);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[6] = c.r[5].w[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];  if (t) { goto L_003D0990; } }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003D09AC; } }
L_003D0990:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_003D09AC:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[4].w[0] << 8);
    c.f[5] = ld32((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[6] = c.r[5].w[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];  if (t) { goto L_003D09EC; } }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[4], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003D0A08; } }
L_003D09EC:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[4], c.f[4]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003D0A08:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[2], c.r[5].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[2].w[0] >> 1);  goto L_003D0A2C; }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003D0A44; } }
L_003D0A2C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 6;
L_003D0A44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);  if (t) { goto L_003D0A70; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003D0A8C; } }
L_003D0A70:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003D0A8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[5].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);  if (t) { goto L_003D0ABC; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003D0AD8; } }
L_003D0ABC:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003D0AD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[5].w[0] >> 16);
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);  if (t) { goto L_003D0B08; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003D0B24; } }
L_003D0B08:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003D0B24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32897ull;
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);  if (t) { goto L_003D0DE0; } }
L_003D0B40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D0DE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[6] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    c.f[4] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  goto L_003D0B84; }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003D0B9C; } }
L_003D0B84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003D0B9C:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[7], c.r[4].w[0] << 24);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[6] = c.r[5].w[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  goto L_003D0BDC; }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003D0BF4; } }
L_003D0BDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003D0BF4:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[4].w[0] << 16);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[6] = c.r[5].w[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];  if (t) { goto L_003D0C34; } }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003D0C50; } }
L_003D0C34:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_003D0C50:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[4].w[0] << 8);
    c.f[5] = ld32((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[6] = c.r[5].w[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];  if (t) { goto L_003D0C90; } }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[4], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003D0CAC; } }
L_003D0C90:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[4], c.f[4]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003D0CAC:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[2], c.r[5].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[2].w[0] >> 1);  goto L_003D0CD0; }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003D0CE8; } }
L_003D0CD0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 6;
L_003D0CE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);  if (t) { goto L_003D0D14; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003D0D30; } }
L_003D0D14:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003D0D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[5].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);  if (t) { goto L_003D0D60; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003D0D7C; } }
L_003D0D60:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003D0D7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[5].w[0] >> 16);
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);  if (t) { goto L_003D0DAC; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003D0DC8; } }
L_003D0DAC:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003D0DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32897ull;
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 6;
L_003D0DE0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  goto L_003D0EBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D0E04; } }
    c.f[0] = c.f[4];
    c.budget -= 1;
L_003D0E04:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003D0E20; }
    c.f[0] = c.f[4];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003D0E20:
    c.f[4] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D0E38; } }
    c.f[1] = c.f[4];
    c.budget -= 1;
L_003D0E38:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003D0E54; }
    c.f[1] = c.f[4];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003D0E54:
    c.f[4] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D0E6C; } }
    c.f[2] = c.f[4];
    c.budget -= 1;
L_003D0E6C:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003D0E88; }
    c.f[2] = c.f[4];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003D0E88:
    c.f[4] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D0EA0; } }
    c.f[3] = c.f[4];
    c.budget -= 1;
L_003D0EA0:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D0EB8; } }
    c.f[3] = c.f[4];
    c.budget -= 1;
L_003D0EB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_003D0EBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);  goto L_003D0EF0; }
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003D0F08; } }
L_003D0EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003D0F08:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);  goto L_003D0F44; }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003D0F5C; } }
L_003D0F44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003D0F5C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_003D0F98; } }
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003D0FB4; } }
L_003D0F98:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003D0FB4:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_003D0FF0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003D100C; } }
L_003D0FF0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003D100C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 2;
L_003D1014:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D1020:
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
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D105Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D105Cu) [[unlikely]] return; }
L_003D105C:
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1070u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D1070u) [[unlikely]] return; }
L_003D1070:
    c.f[3] = ld32((c.r[19].w[0] + 204u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    st32((c.r[17].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[19].w[0] + 208u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 208u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 204u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D1100:
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  goto L_003D122C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  goto L_003D11DC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  goto L_003D1188; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  goto L_003D1138; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 100u)));  if (t) { goto L_003D1268; } }
L_003D1138:
    set32(c.r[8], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 100u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 252u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 236u)));  goto L_003D1168; }
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D1264; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 1;
L_003D1168:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  goto L_003D117C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D1264; } }
L_003D117C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D1264; } }
L_003D1188:
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 44u)));  goto L_003D11A8; }
    st32((c.r[5].w[0] + 100u), 0u);
    set32(c.r[8], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 2;
L_003D11A8:
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D1264; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_003D11D4; }
    set32(c.r[2], ld32((c.r[8].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D1264; } }
L_003D11D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D1264; } }
L_003D11DC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[5].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D11F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
L_003D11F4:
    set32(c.r[8], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D1264; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_003D1224; }
    set32(c.r[2], ld32((c.r[8].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D1264; } }
L_003D1224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D1264; } }
L_003D122C:
    set32(c.r[8], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 100u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 252u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D1264; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[8].w[0] + 1u);  goto L_003D1260; }
    set32(c.r[2], ld32((c.r[3].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003D1264; } }
L_003D1260:
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_003D1264:
    set32(c.r[5], ld32((c.r[5].w[0] + 100u)));
    c.budget -= 1;
L_003D1268:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1020u | kUnwind; return; } goto L_003D1020; }
L_003D1270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003D135C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003D131C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003D12DC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003D12B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D1380; } }
L_003D12B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D12CCu); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D12CCu) [[unlikely]] return; }
L_003D12CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 248u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003D137C; } }
L_003D12DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D12F8u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D12F8u) [[unlikely]] return; }
L_003D12F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 248u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D137C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  if (t) { goto L_003D137C; } }
L_003D131C:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1338u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D1338u) [[unlikely]] return; }
L_003D1338:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D137C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  if (t) { goto L_003D137C; } }
L_003D135C:
    set32(c.r[3], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1370u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D1370u) [[unlikely]] return; }
L_003D1370:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003D137C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D1380:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D1390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[17].w[0] + 112u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D13C0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003D13C0u) [[unlikely]] return; }
L_003D13C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D13D0u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003D13D0u) [[unlikely]] return; }
L_003D13D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[21] = c.f[0];
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D13F4u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003D13F4u) [[unlikely]] return; }
L_003D13F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1404u); set32(c.r[5], c.r[5].w[0] + 25744u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003D1404u) [[unlikely]] return; }
L_003D1404:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_003D1428; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_003D1428:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D1468; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1444u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 134u, depth + 1u); else { c.pc = 0x00137278u; return; } if (c.pc != 0x003D1444u) [[unlikely]] return; }
L_003D1444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003D1750; } }
L_003D1468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1470u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D1470u) [[unlikely]] return; }
L_003D1470:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[22], c.f[21]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);  goto L_003D15F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  goto L_003D14CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D14C4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D14C4u) [[unlikely]] return; }
L_003D14C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D14CC:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);  goto L_003D150C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC66A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1504u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D1504u) [[unlikely]] return; }
L_003D1504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D150C:
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  goto L_003D154C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC65D0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1544u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D1544u) [[unlikely]] return; }
L_003D1544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D154C:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);  goto L_003D158C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC66A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1584u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D1584u) [[unlikely]] return; }
L_003D1584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D158C:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003D15CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6730000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D15C4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D15C4u) [[unlikely]] return; }
L_003D15C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D15E8; } }
L_003D15CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D15E8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D15E8u) [[unlikely]] return; }
L_003D15E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D15F0:
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  goto L_003D1630; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1628u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D1628u) [[unlikely]] return; }
L_003D1628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D1630:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);  goto L_003D1670; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6A70000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 63488ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1668u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D1668u) [[unlikely]] return; }
L_003D1668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D1670:
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  goto L_003D16B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6D20000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D16A8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D16A8u) [[unlikely]] return; }
L_003D16A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D16B0:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);  goto L_003D16F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6B70000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D16E8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D16E8u) [[unlikely]] return; }
L_003D16E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D16F0:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003D1730; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1728u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D1728u) [[unlikely]] return; }
L_003D1728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D174C; } }
L_003D1730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D174Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D174Cu) [[unlikely]] return; }
L_003D174C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D1750:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D1770:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D184C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003D17F0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D17B4:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[20].w[0] + 184u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 184u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D17B4u | kUnwind; return; } goto L_003D17B4; } }
    c.budget -= 1;
L_003D17F0:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 196u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 200u), c.f[0]);  if (t) { goto L_003D1944; } }
L_003D184C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D186Cu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003D186Cu) [[unlikely]] return; }
L_003D186C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003D1880; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D1944; } }
L_003D1880:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003D1900; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_003D1890:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = ld32((c.r[20].w[0] + 184u));
    c.f[15] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 184u));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.f[16] = ld32((c.r[2].w[0] + 12u));
    c.f[17] = ld32((c.r[2].w[0] + 16u));
    c.f[18] = ld32((c.r[2].w[0] + 20u));
    c.f[19] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D18E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003D18E8u) [[unlikely]] return; }
L_003D18E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1890u | kUnwind; return; } goto L_003D1890; } }
    c.budget -= 1;
L_003D1900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1908u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003D1908u) [[unlikely]] return; }
L_003D1908:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 236u), c.r[2].w[0]);  goto L_003D1924; }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1920u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x003D1920u) [[unlikely]] return; }
L_003D1920:
    st32((c.r[20].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 1;
L_003D1924:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1934u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003D1934u) [[unlikely]] return; }
L_003D1934:
    set32(c.r[2], ld32((c.r[20].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_003D1944; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D1944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D1970:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003D19E8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D1984:
    set32(c.r[3], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_003D19B8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 116u), 0u);  if (t) { goto L_003D19D0; } }
    c.budget -= 1;
L_003D19B8:
    set32(c.r[6], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[3], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 116u), c.r[5].w[0]);
    c.budget -= 6;
L_003D19D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1984u | kUnwind; return; } goto L_003D1984; } }
L_003D19E8:
    set32(c.r[3], ld32((c.r[4].w[0] + 220u)));
    st32((c.r[4].w[0] + 228u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 224u), 0u);  c.pc = t; return; }
L_003D1A00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1A24u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00AC(c, 101u, depth + 1u); else { c.pc = 0x003D1FA0u; return; } if (c.pc != 0x003D1A24u) [[unlikely]] return; }
L_003D1A24:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D1AC8; }
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 11;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 184u));  goto L_003D1A80; }
    c.f[1] = ld32((c.r[17].w[0] + 184u));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D1A7C; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.f[0]);  if (t) { goto L_003D1A84; } }
L_003D1A7C:
    c.f[0] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 1;
L_003D1A80:
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.budget -= 1;
L_003D1A84:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1A94u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D1A94u) [[unlikely]] return; }
L_003D1A94:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1AA4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D1AA4u) [[unlikely]] return; }
L_003D1AA4:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1AB4u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D1AB4u) [[unlikely]] return; }
L_003D1AB4:
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1AC4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D1AC4u) [[unlikely]] return; }
L_003D1AC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D1AC8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D1AE0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.f[31]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    c.f[21] = ld32((c.r[29].w[0] + 296u));
    c.f[22] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[3], ld32((c.r[6].w[0] + 220u)));
    c.f[23] = ld32((c.r[29].w[0] + 308u));
    c.f[24] = ld32((c.r[29].w[0] + 312u));
    c.f[25] = ld32((c.r[29].w[0] + 320u));
    c.f[26] = ld32((c.r[29].w[0] + 324u));
    c.f[27] = ld32((c.r[29].w[0] + 328u));
    c.f[28] = ld32((c.r[29].w[0] + 336u));
    c.f[29] = ld32((c.r[29].w[0] + 340u));
    c.f[30] = ld32((c.r[29].w[0] + 344u));
    c.f[31] = c.f[12];
    c.budget -= 36;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_003D1BB8; } }
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[31]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[6].w[0] + 232u));  goto L_003D1BA0; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[31]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    st32((c.r[16].w[0] + 92u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1B98u); set32(c.r[7], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_00AC(c, 29u, depth + 1u); else { c.pc = 0x003D1020u; return; } if (c.pc != 0x003D1B98u) [[unlikely]] return; }
L_003D1B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003D1BE0; } }
L_003D1BA0:
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1BB0u); st32((c.r[16].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 32u, depth + 1u); else { c.pc = 0x003D1100u; return; } if (c.pc != 0x003D1BB0u) [[unlikely]] return; }
L_003D1BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D1BDC; } }
L_003D1BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 264u), 0u);
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 276u), 0u);
    st32((c.r[29].w[0] + 272u), 0u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 9;
L_003D1BDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D1BE0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003D1C68; }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[31]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 184u));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_003D1C28; }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0] + 80u), c.f[1]);  goto L_003D1C24; }
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_003D1C24:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D1C28:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 236u)));  goto L_003D1C54; }
    c.f[12] = ld32((c.r[16].w[0] + 80u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C4Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00AC(c, 104u, depth + 1u); else { c.pc = 0x003D2060u; return; } if (c.pc != 0x003D1C4Cu) [[unlikely]] return; }
L_003D1C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003D1C7C; } }
L_003D1C54:
    c.f[12] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C60u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003D1C60u) [[unlikely]] return; }
L_003D1C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D1C78; } }
L_003D1C68:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 4;
L_003D1C78:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D1C7C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[29].w[0] + 148u));  goto L_003D1C98; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003D1CF4; }
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 1;
L_003D1C98:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[4] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[22] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[21] = 0u;
    c.f[23] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[25] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[26] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[28] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[29] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[24] = c.f[21];
    c.f[27] = c.f[21];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[30] = c.f[21];  if (t) { goto L_003D1D9C; } }
L_003D1CF4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_003D1DA0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[2].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D14u); set32(c.r[6], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003D1D14u) [[unlikely]] return; }
L_003D1D14:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D28u); set32(c.r[6], c.r[6].w[0] + 25760u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003D1D28u) [[unlikely]] return; }
L_003D1D28:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D34u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003D1D34u) [[unlikely]] return; }
L_003D1D34:
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D44u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D1D44u) [[unlikely]] return; }
L_003D1D44:
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D54u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D1D54u) [[unlikely]] return; }
L_003D1D54:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[23] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[25] = c.f[20] ^ fp::kSign;
    c.f[27] = c.f[21] ^ fp::kSign;
    c.f[26] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[29] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[22] = c.f[20];
    c.f[24] = c.f[21];
    c.f[28] = c.f[25];
    c.f[30] = c.f[27];
    c.budget -= 18;
L_003D1D9C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_003D1DA0:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1DACu); c.f[12] = c.f[31];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D1DACu) [[unlikely]] return; }
L_003D1DAC:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1DBCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D1DBCu) [[unlikely]] return; }
L_003D1DBC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1DCCu); c.f[12] = c.f[31];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D1DCCu) [[unlikely]] return; }
L_003D1DCC:
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1DDCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D1DDCu) [[unlikely]] return; }
L_003D1DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1DE4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x003D1DE4u) [[unlikely]] return; }
L_003D1DE4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1DF4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003D1DF4u) [[unlikely]] return; }
L_003D1DF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_003D1E18; }
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E14u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x003D1E14u) [[unlikely]] return; }
L_003D1E14:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D1E18:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_003D1E3C; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E34u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003D1E34u) [[unlikely]] return; }
L_003D1E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003D1E64; } }
L_003D1E3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D1E60; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[17].w[0] + 232u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E60u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003D1E60u) [[unlikely]] return; }
L_003D1E60:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D1E64:
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003D1E98; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E80u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00AC(c, 38u, depth + 1u); else { c.pc = 0x003D1390u; return; } if (c.pc != 0x003D1E80u) [[unlikely]] return; }
L_003D1E80:
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E94u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x003D1E94u) [[unlikely]] return; }
L_003D1E94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D1E98:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1EA4u); c.f[12] = c.f[31];  if (depth < kMaxDepth) unit_00AC(c, 101u, depth + 1u); else { c.pc = 0x003D1FA0u; return; } if (c.pc != 0x003D1EA4u) [[unlikely]] return; }
L_003D1EA4:
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1EBCu); st32((c.r[16].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 24u, depth + 1u); else { c.pc = 0x003D0480u; return; } if (c.pc != 0x003D1EBCu) [[unlikely]] return; }
L_003D1EBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[16].w[0] + 84u));  goto L_003D1ED0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D1EDC; } }
L_003D1ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1ED8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 26u, depth + 1u); else { c.pc = 0x003D0510u; return; } if (c.pc != 0x003D1ED8u) [[unlikely]] return; }
L_003D1ED8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D1EDC:
    c.f[13] = ld32((c.r[29].w[0] + 108u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[16] = ld32((c.r[29].w[0] + 256u));
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1EFCu); c.f[14] = c.f[21];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x003D1EFCu) [[unlikely]] return; }
L_003D1EFC:
    c.f[15] = ld32((c.r[29].w[0] + 276u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[16] = ld32((c.r[29].w[0] + 260u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[12] = c.f[22];
    c.f[13] = c.f[23];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F1Cu); c.f[14] = c.f[24];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x003D1F1Cu) [[unlikely]] return; }
L_003D1F1C:
    c.f[15] = ld32((c.r[29].w[0] + 280u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[16] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[12] = c.f[25];
    c.f[13] = c.f[26];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F3Cu); c.f[14] = c.f[27];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x003D1F3Cu) [[unlikely]] return; }
L_003D1F3C:
    c.f[15] = ld32((c.r[29].w[0] + 284u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[16] = ld32((c.r[29].w[0] + 268u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[12] = c.f[28];
    c.f[13] = c.f[29];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F5Cu); c.f[14] = c.f[30];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x003D1F5Cu) [[unlikely]] return; }
L_003D1F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003D1FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D2020; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_003D1FFC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 88u));  goto L_003D1FDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D2048; } }
L_003D1FDC:
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 88u), c.f[1]);  if (t) { goto L_003D2044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003D2048; } }
L_003D1FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2004u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003D2004u) [[unlikely]] return; }
L_003D2004:
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D2044; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003D2048; } }
L_003D2020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2028u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003D2028u) [[unlikely]] return; }
L_003D2028:
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D2044; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003D2048; } }
L_003D2044:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D2048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2060:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[4] = ld32((c.r[4].w[0] + 200u));
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = 0u;
    set32(c.r[4], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[12]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[12]);
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[3]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_003D20B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D20C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D20C4u) [[unlikely]] return; }
L_003D20C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6304u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D20F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D2138; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2120u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D2120u) [[unlikely]] return; }
L_003D2120:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D213C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D2138u) [[unlikely]] return; }
L_003D2138:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D213C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D2150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2178u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D2178u) [[unlikely]] return; }
L_003D2178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D2198; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 105u, depth + 1u); else { c.pc = 0x003D20B0u; return; } if (c.pc != 0x003D2194u) [[unlikely]] return; }
L_003D2194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D2198:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D21B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 60u);  c.pc = t; return; }
L_003D21C0:
    set32(c.r[8], ld32((c.r[4].w[0] + 40u)));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 84u));
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D221C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] - 1u);  goto L_003D21F0; }
L_003D21F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);  goto L_003D21FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_003D21FC:
    c.r[3].d[0] = ld16((c.r[8].w[0] + 86u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 8;
L_003D221C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D2230:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);  if (t) { goto L_003D2380; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[17].w[0] + 48u)));  goto L_003D2320; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[17].w[0] + 48u)));  goto L_003D22D8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 48u)));  goto L_003D2290; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003D2414; } }
L_003D2290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x003D2298u) [[unlikely]] return; }
L_003D2298:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 15848u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 15840u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 15852u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D22D0u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003D22D0u) [[unlikely]] return; }
L_003D22D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2410; } }
L_003D22D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D22E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003D22E0u) [[unlikely]] return; }
L_003D22E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 15848u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 15840u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 80u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 15852u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2318u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003D2318u) [[unlikely]] return; }
L_003D2318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2410; } }
L_003D2320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x003D2328u) [[unlikely]] return; }
L_003D2328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15856u));
    set32(c.r[6], c.r[6].w[0] + 15860u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[4], 0u + 6u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[21]);
    c.budget -= 8;
L_003D2348:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2348u | kUnwind; return; } goto L_003D2348; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2378u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003D2378u) [[unlikely]] return; }
L_003D2378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2410; } }
L_003D2380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2388u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003D2388u) [[unlikely]] return; }
L_003D2388:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2394u); c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x003D2394u) [[unlikely]] return; }
L_003D2394:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_003D23EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003D23D8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003D23C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D2404; } }
L_003D23C4:
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), c.f[20]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_003D2400; } }
L_003D23D8:
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_003D2400; } }
L_003D23EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[20]);
    c.budget -= 5;
L_003D2400:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D2404:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2410u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003D2410u) [[unlikely]] return; }
L_003D2410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D2414:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D2430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2444u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D2444u) [[unlikely]] return; }
L_003D2444:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6368u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D24B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D24A0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D24A0u) [[unlikely]] return; }
L_003D24A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D24BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D24B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D24B8u) [[unlikely]] return; }
L_003D24B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D24BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D24D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D24F8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D24F8u) [[unlikely]] return; }
L_003D24F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D2518; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2514u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 126u, depth + 1u); else { c.pc = 0x003D2430u; return; } if (c.pc != 0x003D2514u) [[unlikely]] return; }
L_003D2514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D2518:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D2530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 61u);  c.pc = t; return; }
L_003D2540:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 84u));
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D2610; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D25B8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D25B8u) [[unlikely]] return; }
L_003D25B8:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D25ECu); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D25ECu) [[unlikely]] return; }
L_003D25EC:
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[3]);
    st32((c.r[17].w[0] + 56u), c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.f[1]);  if (t) { goto L_003D2640; } }
L_003D2610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2618u); c.r[4].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003D2618u) [[unlikely]] return; }
L_003D2618:
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2624u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003D2624u) [[unlikely]] return; }
L_003D2624:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2640u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003D2640u) [[unlikely]] return; }
L_003D2640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003D2660:
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F500u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 219u, depth); }
L_003D2670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2684u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D2684u) [[unlikely]] return; }
L_003D2684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 6432u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003D26B8; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003D26B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D26D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D2718; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2700u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D2700u) [[unlikely]] return; }
L_003D2700:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D271C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2718u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D2718u) [[unlikely]] return; }
L_003D2718:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D271C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D2730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2758u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D2758u) [[unlikely]] return; }
L_003D2758:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D2778; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2774u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 142u, depth + 1u); else { c.pc = 0x003D2670u; return; } if (c.pc != 0x003D2774u) [[unlikely]] return; }
L_003D2774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D2778:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D2790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 62u);  c.pc = t; return; }
L_003D27A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D27D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D27C8u);  if (depth < kMaxDepth) unit_00AC(c, 159u, depth + 1u); else { c.pc = 0x003D28F0u; return; } if (c.pc != 0x003D27C8u) [[unlikely]] return; }
L_003D27C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003D27D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D27F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D2858; } }
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003D2850; }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003D284C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D284C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D284Cu);  if (depth < kMaxDepth) unit_00AC(c, 159u, depth + 1u); else { c.pc = 0x003D28F0u; return; } if (c.pc != 0x003D284Cu) [[unlikely]] return; }
L_003D284C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D2850:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003D2858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D2884u) [[unlikely]] return; }
L_003D2884:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D28A4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D28A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D28B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D28DC; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D28D8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003D28D8u) [[unlikely]] return; }
L_003D28D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D28DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D28F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D29B8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D29BC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 40u)));  goto L_003D2988; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  goto L_003D296C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 40u)));  goto L_003D2954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_003D29C8; } }
L_003D2954:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 86u));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D29C4; } }
L_003D296C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2974u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D2974u) [[unlikely]] return; }
L_003D2974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D297Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D297Cu) [[unlikely]] return; }
L_003D297C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2984u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 272u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x003D2984u) [[unlikely]] return; }
L_003D2984:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_003D2988:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2998u); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D2998u) [[unlikely]] return; }
L_003D2998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D29A0u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 272u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x003D29A0u) [[unlikely]] return; }
L_003D29A0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D29C4; } }
L_003D29B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D29BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D29C4u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D29C4u) [[unlikely]] return; }
L_003D29C4:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_003D29C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D29E0u); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003D29E0u) [[unlikely]] return; }
L_003D29E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.f[3] = ld32((c.r[2].w[0] + 15888u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 15892u));
    c.f[4] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 15896u));
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15900u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2A38u); st32((c.r[29].w[0] + 104u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003D2A38u) [[unlikely]] return; }
L_003D2A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2A50u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2A50u) [[unlikely]] return; }
L_003D2A50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2A6Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2A6Cu) [[unlikely]] return; }
L_003D2A6C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2A88u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2A88u) [[unlikely]] return; }
L_003D2A88:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2AA0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D2AA0u) [[unlikely]] return; }
L_003D2AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.f[2] = ld32((c.r[2].w[0] + 15872u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[4] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 15876u));
    c.f[3] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15880u));
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 15884u)));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[4]);
    st32((c.r[29].w[0] + 88u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2AF8u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D2AF8u) [[unlikely]] return; }
L_003D2AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003D2B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D2B34u) [[unlikely]] return; }
L_003D2B34:
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[25], c.r[25].w[0] + 6496u);
    st32((c.r[16].w[0] + 4u), c.r[25].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2B4Cu) [[unlikely]] return; }
L_003D2B4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D2BA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B90u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D2B90u) [[unlikely]] return; }
L_003D2B90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D2BAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2BA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D2BA8u) [[unlikely]] return; }
L_003D2BA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D2BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D2BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2BE8u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D2BE8u) [[unlikely]] return; }
L_003D2BE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D2C08; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2C04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 173u, depth + 1u); else { c.pc = 0x003D2B20u; return; } if (c.pc != 0x003D2C04u) [[unlikely]] return; }
L_003D2C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D2C08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D2C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 601u);  c.pc = t; return; }
L_003D2C30:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], 0u + 4u);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[3].w[0] + 160u), c.f[0]);
    st32((c.r[3].w[0] + 164u), c.f[1]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.f[2] = ld32((c.r[5].w[0] + 24u));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[3].w[0] + 176u), c.f[0]);
    st32((c.r[3].w[0] + 180u), c.f[1]);
    st32((c.r[3].w[0] + 184u), c.f[2]);
    st32((c.r[3].w[0] + 188u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D2C98; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003D2C98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D2CA0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003D2CBC; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003D2CBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D2CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), 0u);  c.pc = t; return; }
L_003D2CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2CF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D2CF4u) [[unlikely]] return; }
L_003D2CF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6560u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D2D78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2D60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D2D60u) [[unlikely]] return; }
L_003D2D60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D2D7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2D78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D2D78u) [[unlikely]] return; }
L_003D2D78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D2D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D2D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2DB8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D2DB8u) [[unlikely]] return; }
L_003D2DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D2DD8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2DD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 186u, depth + 1u); else { c.pc = 0x003D2CE0u; return; } if (c.pc != 0x003D2DD4u) [[unlikely]] return; }
L_003D2DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D2DD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D2DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 22u);  c.pc = t; return; }
L_003D2E00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D2EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E30u);  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D2E30u) [[unlikely]] return; }
L_003D2E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E68u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2E68u) [[unlikely]] return; }
L_003D2E68:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E90u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2E90u) [[unlikely]] return; }
L_003D2E90:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2EB8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2EB8u) [[unlikely]] return; }
L_003D2EB8:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.budget -= 3;
L_003D2EC4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D2EF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F4Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D2F4Cu) [[unlikely]] return; }
L_003D2F4C:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F8Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2F8Cu) [[unlikely]] return; }
L_003D2F8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2FB4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2FB4u) [[unlikely]] return; }
L_003D2FB4:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2FDCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D2FDCu) [[unlikely]] return; }
L_003D2FDC:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D3010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D3024u) [[unlikely]] return; }
L_003D3024:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D3044; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D3044:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D3088; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3084u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D3084u) [[unlikely]] return; }
L_003D3084:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D3088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D30A4u) [[unlikely]] return; }
L_003D30A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6624u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D30D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D3118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3100u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D3100u) [[unlikely]] return; }
L_003D3100:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D311C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D3118u) [[unlikely]] return; }
L_003D3118:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D311C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D3130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3158u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D3158u) [[unlikely]] return; }
L_003D3158:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D3178; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3174u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 209u, depth + 1u); else { c.pc = 0x003D3090u; return; } if (c.pc != 0x003D3174u) [[unlikely]] return; }
L_003D3174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D3178:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D3190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 21u);  c.pc = t; return; }
L_003D31A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D31C8u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D31C8u) [[unlikely]] return; }
L_003D31C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[20] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D31ECu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D31ECu) [[unlikely]] return; }
L_003D31EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3214u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3214u) [[unlikely]] return; }
L_003D3214:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D323Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D323Cu) [[unlikely]] return; }
L_003D323C:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D3280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D3328; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D32C4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D32C4u) [[unlikely]] return; }
L_003D32C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D32F0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D32F0u) [[unlikely]] return; }
L_003D32F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D331Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D331Cu) [[unlikely]] return; }
L_003D331C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_003D3328:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D3350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D3364u) [[unlikely]] return; }
L_003D3364:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D3384; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D3384:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D33C8; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D33C4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D33C4u) [[unlikely]] return; }
L_003D33C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D33C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D33D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D33E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D33E4u) [[unlikely]] return; }
L_003D33E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 6688u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_003D341C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D3448; } }
L_003D341C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3444u); st32((c.r[16].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_00AC(c, 254u, depth + 1u); else { c.pc = 0x003D3810u; return; } if (c.pc != 0x003D3444u) [[unlikely]] return; }
L_003D3444:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D3448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D34A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3490u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D3490u) [[unlikely]] return; }
L_003D3490:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D34AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D34A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D34A8u) [[unlikely]] return; }
L_003D34A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D34AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D34C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D34E8u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D34E8u) [[unlikely]] return; }
L_003D34E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D3508; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3504u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 231u, depth + 1u); else { c.pc = 0x003D33D0u; return; } if (c.pc != 0x003D3504u) [[unlikely]] return; }
L_003D3504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D3508:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D3520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 28u);  c.pc = t; return; }
L_003D3530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3558u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D3558u) [[unlikely]] return; }
L_003D3558:
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D35A8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003D3574:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 16u));  goto L_003D3590; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003D35A8; } }
L_003D3590:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3574u | kUnwind; return; } goto L_003D3574; } }
    c.budget -= 1;
L_003D35A8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D35D8; }
    c.f[12] = ld32((c.r[16].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D35D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D35C8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003D35C8u) [[unlikely]] return; }
L_003D35C8:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[1]);
    c.budget -= 3;
L_003D35D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D35D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D3600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D3774; } }
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[16], ld32((c.r[18].w[0] + 96u)));
    c.f[2] = ld32((c.r[18].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D36F8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 1;
L_003D364C:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 108u));  goto L_003D367C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003D3774; } }
L_003D367C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D36A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_003D36B0; } }
L_003D36A8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003D36B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D36B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 254u, depth + 1u); else { c.pc = 0x003D3810u; return; } if (c.pc != 0x003D36B8u) [[unlikely]] return; }
L_003D36B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003D36E0; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 104u));  goto L_003D36E4; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003D3774; } }
L_003D36E0:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.budget -= 1;
L_003D36E4:
    c.f[2] = ld32((c.r[18].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[18].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D364Cu | kUnwind; return; } goto L_003D364C; }
    c.budget -= 1;
L_003D36F8:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 104u), c.f[1]);
    st32((c.r[18].w[0] + 108u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.f[13] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 104u));  goto L_003D3748; }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003D3774; } }
L_003D3748:
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    c.f[14] = ld32((c.r[3].w[0] + 20u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3760u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003D3760u) [[unlikely]] return; }
L_003D3760:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3774u); set32(c.r[6], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_001D(c, 239u, depth + 1u); else { c.pc = 0x00196730u; return; } if (c.pc != 0x003D3774u) [[unlikely]] return; }
L_003D3774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D3790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D37A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D37A4u) [[unlikely]] return; }
L_003D37A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D37C4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D37C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D37D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D3808; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3804u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D3804u) [[unlikely]] return; }
L_003D3804:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D3808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3890u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3890u) [[unlikely]] return; }
L_003D3890:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D38B0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D38B0u) [[unlikely]] return; }
L_003D38B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D38D0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D38D0u) [[unlikely]] return; }
L_003D38D0:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.f[0] = 0u;
    st32((c.r[17].w[0] + 84u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[16].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003D3914; }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 9;
L_003D3914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D3930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D39A4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 100u)));  goto L_003D3950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D39F0; } }
L_003D3950:
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003D39EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D39EC; } }
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D399Cu); st32((c.r[4].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 254u, depth + 1u); else { c.pc = 0x003D3810u; return; } if (c.pc != 0x003D399Cu) [[unlikely]] return; }
L_003D399C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D39EC; } }
L_003D39A4:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003D39EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D39EC; } }
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D39ECu); st32((c.r[4].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 254u, depth + 1u); else { c.pc = 0x003D3810u; return; } if (c.pc != 0x003D39ECu) [[unlikely]] return; }
L_003D39EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D39F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3A14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D3A14u) [[unlikely]] return; }
L_003D3A14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6752u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D3A88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3A70u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D3A70u) [[unlikely]] return; }
L_003D3A70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D3A8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3A88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D3A88u) [[unlikely]] return; }
L_003D3A88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D3A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D3AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3AC8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D3AC8u) [[unlikely]] return; }
L_003D3AC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D3AE8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3AE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 261u, depth + 1u); else { c.pc = 0x003D3A00u; return; } if (c.pc != 0x003D3AE4u) [[unlikely]] return; }
L_003D3AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D3AE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D3B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 20u);  c.pc = t; return; }
L_003D3B10:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003D3B30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[20] = c.f[12];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B70u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3B70u) [[unlikely]] return; }
L_003D3B70:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B98u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3B98u) [[unlikely]] return; }
L_003D3B98:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3BC0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3BC0u) [[unlikely]] return; }
L_003D3BC0:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D3BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3C04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D3C04u) [[unlikely]] return; }
L_003D3C04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D3C24; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D3C24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D3C68; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3C64u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D3C64u) [[unlikely]] return; }
L_003D3C64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D3C68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3C84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D3C84u) [[unlikely]] return; }
L_003D3C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 6816u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D3D18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D00u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D3D00u) [[unlikely]] return; }
L_003D3D00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D3D1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D3D18u) [[unlikely]] return; }
L_003D3D18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D3D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D3D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D58u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D3D58u) [[unlikely]] return; }
L_003D3D58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D3D78; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 279u, depth + 1u); else { c.pc = 0x003D3C70u; return; } if (c.pc != 0x003D3D74u) [[unlikely]] return; }
L_003D3D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D3D78:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D3D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 25u);  c.pc = t; return; }
L_003D3DA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3DC0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00AD(c, 5u, depth + 1u); else { c.pc = 0x003D4080u; return; } if (c.pc != 0x003D3DC0u) [[unlikely]] return; }
L_003D3DC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D3E58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3DD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D3DD8u) [[unlikely]] return; }
L_003D3DD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E08u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3E08u) [[unlikely]] return; }
L_003D3E08:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E28u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3E28u) [[unlikely]] return; }
L_003D3E28:
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E48u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3E48u) [[unlikely]] return; }
L_003D3E48:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_003D3E58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D3E80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D3F48; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);  goto L_003D3EE0; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D3EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3EDCu);  if (depth < kMaxDepth) unit_00AD(c, 5u, depth + 1u); else { c.pc = 0x003D4080u; return; } if (c.pc != 0x003D3EDCu) [[unlikely]] return; }
L_003D3EDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.budget -= 1;
L_003D3EE0:
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3EF4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3EF4u) [[unlikely]] return; }
L_003D3EF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = c.r[3].w[0];
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F14u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3F14u) [[unlikely]] return; }
L_003D3F14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = c.r[3].w[0];
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F34u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D3F34u) [[unlikely]] return; }
L_003D3F34:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.budget -= 5;
L_003D3F48:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D3F58u) [[unlikely]] return; }
L_003D3F58:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F7Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D3F7Cu) [[unlikely]] return; }
L_003D3F7C:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3FACu); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D3FACu) [[unlikely]] return; }
L_003D3FAC:
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[3]);
    st32((c.r[17].w[0] + 72u), c.f[2]);
    st32((c.r[17].w[0] + 76u), c.f[1]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
}

}
