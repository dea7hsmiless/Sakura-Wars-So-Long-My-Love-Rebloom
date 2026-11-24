#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006E[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0,
    64, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0,
    201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0,
    0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252,
    0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0,
    0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0,
    0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370,
    0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 381,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0,
    397, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0,
    0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0,
    422, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429,
    0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0,
};

void unit_006E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D8000;
    case 2u: goto L_002D800C;
    case 3u: goto L_002D8018;
    case 4u: goto L_002D80F0;
    case 5u: goto L_002D8110;
    case 6u: goto L_002D8170;
    case 7u: goto L_002D8180;
    case 8u: goto L_002D81C4;
    case 9u: goto L_002D8208;
    case 10u: goto L_002D825C;
    case 11u: goto L_002D82C4;
    case 12u: goto L_002D82D0;
    case 13u: goto L_002D82E0;
    case 14u: goto L_002D82F0;
    case 15u: goto L_002D8308;
    case 16u: goto L_002D8364;
    case 17u: goto L_002D83B4;
    case 18u: goto L_002D83E0;
    case 19u: goto L_002D8430;
    case 20u: goto L_002D84D0;
    case 21u: goto L_002D8508;
    case 22u: goto L_002D8580;
    case 23u: goto L_002D85B8;
    case 24u: goto L_002D85C8;
    case 25u: goto L_002D85DC;
    case 26u: goto L_002D8688;
    case 27u: goto L_002D86B4;
    case 28u: goto L_002D86C0;
    case 29u: goto L_002D86D8;
    case 30u: goto L_002D86F4;
    case 31u: goto L_002D8704;
    case 32u: goto L_002D8718;
    case 33u: goto L_002D876C;
    case 34u: goto L_002D87C0;
    case 35u: goto L_002D881C;
    case 36u: goto L_002D8870;
    case 37u: goto L_002D88B4;
    case 38u: goto L_002D88C0;
    case 39u: goto L_002D88D0;
    case 40u: goto L_002D88E0;
    case 41u: goto L_002D899C;
    case 42u: goto L_002D89B4;
    case 43u: goto L_002D8A04;
    case 44u: goto L_002D8A54;
    case 45u: goto L_002D8A98;
    case 46u: goto L_002D8AE8;
    case 47u: goto L_002D8B30;
    case 48u: goto L_002D8B6C;
    case 49u: goto L_002D8B7C;
    case 50u: goto L_002D8B90;
    case 51u: goto L_002D8B98;
    case 52u: goto L_002D8BA4;
    case 53u: goto L_002D8BB4;
    case 54u: goto L_002D8BC8;
    case 55u: goto L_002D8BF0;
    case 56u: goto L_002D8C20;
    case 57u: goto L_002D8C48;
    case 58u: goto L_002D8C54;
    case 59u: goto L_002D8C64;
    case 60u: goto L_002D8C78;
    case 61u: goto L_002D8CA0;
    case 62u: goto L_002D8CDC;
    case 63u: goto L_002D8CEC;
    case 64u: goto L_002D8D00;
    case 65u: goto L_002D8D08;
    case 66u: goto L_002D8D14;
    case 67u: goto L_002D8D24;
    case 68u: goto L_002D8D38;
    case 69u: goto L_002D8D60;
    case 70u: goto L_002D8D90;
    case 71u: goto L_002D8DB8;
    case 72u: goto L_002D8DC4;
    case 73u: goto L_002D8DD4;
    case 74u: goto L_002D8DE8;
    case 75u: goto L_002D8E10;
    case 76u: goto L_002D8F50;
    case 77u: goto L_002D8F98;
    case 78u: goto L_002D8FD4;
    case 79u: goto L_002D8FE4;
    case 80u: goto L_002D9030;
    case 81u: goto L_002D9040;
    case 82u: goto L_002D9050;
    case 83u: goto L_002D9074;
    case 84u: goto L_002D90C8;
    case 85u: goto L_002D9130;
    case 86u: goto L_002D913C;
    case 87u: goto L_002D914C;
    case 88u: goto L_002D915C;
    case 89u: goto L_002D9180;
    case 90u: goto L_002D92BC;
    case 91u: goto L_002D9320;
    case 92u: goto L_002D9364;
    case 93u: goto L_002D93B8;
    case 94u: goto L_002D9414;
    case 95u: goto L_002D9468;
    case 96u: goto L_002D94AC;
    case 97u: goto L_002D94B8;
    case 98u: goto L_002D950C;
    case 99u: goto L_002D9520;
    case 100u: goto L_002D9530;
    case 101u: goto L_002D95E0;
    case 102u: goto L_002D9600;
    case 103u: goto L_002D96C4;
    case 104u: goto L_002D9700;
    case 105u: goto L_002D9714;
    case 106u: goto L_002D9720;
    case 107u: goto L_002D9740;
    case 108u: goto L_002D9770;
    case 109u: goto L_002D97A0;
    case 110u: goto L_002D97E4;
    case 111u: goto L_002D981C;
    case 112u: goto L_002D9860;
    case 113u: goto L_002D9880;
    case 114u: goto L_002D98F8;
    case 115u: goto L_002D9920;
    case 116u: goto L_002D9A5C;
    case 117u: goto L_002D9A80;
    case 118u: goto L_002D9A98;
    case 119u: goto L_002D9AF4;
    case 120u: goto L_002D9B18;
    case 121u: goto L_002D9B4C;
    case 122u: goto L_002D9B88;
    case 123u: goto L_002D9BFC;
    case 124u: goto L_002D9C1C;
    case 125u: goto L_002D9C9C;
    case 126u: goto L_002D9CBC;
    case 127u: goto L_002D9D00;
    case 128u: goto L_002D9D28;
    case 129u: goto L_002D9D44;
    case 130u: goto L_002D9D74;
    case 131u: goto L_002D9DA0;
    case 132u: goto L_002D9DE0;
    case 133u: goto L_002D9EB8;
    case 134u: goto L_002D9F0C;
    case 135u: goto L_002D9F40;
    case 136u: goto L_002D9F50;
    case 137u: goto L_002D9F60;
    case 138u: goto L_002D9F80;
    case 139u: goto L_002D9F90;
    case 140u: goto L_002DA020;
    case 141u: goto L_002DA07C;
    case 142u: goto L_002DA0B4;
    case 143u: goto L_002DA1CC;
    case 144u: goto L_002DA1E8;
    case 145u: goto L_002DA258;
    case 146u: goto L_002DA340;
    case 147u: goto L_002DA358;
    case 148u: goto L_002DA364;
    case 149u: goto L_002DA370;
    case 150u: goto L_002DA3A0;
    case 151u: goto L_002DA3DC;
    case 152u: goto L_002DA434;
    case 153u: goto L_002DA494;
    case 154u: goto L_002DA4C0;
    case 155u: goto L_002DA528;
    case 156u: goto L_002DA55C;
    case 157u: goto L_002DA578;
    case 158u: goto L_002DA620;
    case 159u: goto L_002DA638;
    case 160u: goto L_002DA674;
    case 161u: goto L_002DA6B0;
    case 162u: goto L_002DA6F4;
    case 163u: goto L_002DA72C;
    case 164u: goto L_002DA774;
    case 165u: goto L_002DA7A8;
    case 166u: goto L_002DA814;
    case 167u: goto L_002DA82C;
    case 168u: goto L_002DA86C;
    case 169u: goto L_002DA8B4;
    case 170u: goto L_002DA8D8;
    case 171u: goto L_002DA904;
    case 172u: goto L_002DA91C;
    case 173u: goto L_002DA95C;
    case 174u: goto L_002DA9A4;
    case 175u: goto L_002DA9C8;
    case 176u: goto L_002DA9E0;
    case 177u: goto L_002DAA00;
    case 178u: goto L_002DAA34;
    case 179u: goto L_002DAA44;
    case 180u: goto L_002DAA64;
    case 181u: goto L_002DAA84;
    case 182u: goto L_002DAA9C;
    case 183u: goto L_002DAAA8;
    case 184u: goto L_002DAAB4;
    case 185u: goto L_002DAAC0;
    case 186u: goto L_002DAACC;
    case 187u: goto L_002DAAD8;
    case 188u: goto L_002DAAEC;
    case 189u: goto L_002DAB04;
    case 190u: goto L_002DAB20;
    case 191u: goto L_002DAB38;
    case 192u: goto L_002DAB5C;
    case 193u: goto L_002DAB74;
    case 194u: goto L_002DAB8C;
    case 195u: goto L_002DABAC;
    case 196u: goto L_002DABC4;
    case 197u: goto L_002DABD0;
    case 198u: goto L_002DABDC;
    case 199u: goto L_002DABEC;
    case 200u: goto L_002DABF4;
    case 201u: goto L_002DAC00;
    case 202u: goto L_002DAC0C;
    case 203u: goto L_002DAC14;
    case 204u: goto L_002DAC20;
    case 205u: goto L_002DAC48;
    case 206u: goto L_002DAC54;
    case 207u: goto L_002DAC7C;
    case 208u: goto L_002DAC8C;
    case 209u: goto L_002DACC0;
    case 210u: goto L_002DACCC;
    case 211u: goto L_002DACD8;
    case 212u: goto L_002DACEC;
    case 213u: goto L_002DACF8;
    case 214u: goto L_002DAD0C;
    case 215u: goto L_002DAD18;
    case 216u: goto L_002DAD2C;
    case 217u: goto L_002DAD38;
    case 218u: goto L_002DAD44;
    case 219u: goto L_002DAD50;
    case 220u: goto L_002DAD84;
    case 221u: goto L_002DAD9C;
    case 222u: goto L_002DADA8;
    case 223u: goto L_002DADB4;
    case 224u: goto L_002DADC0;
    case 225u: goto L_002DADCC;
    case 226u: goto L_002DADD8;
    case 227u: goto L_002DADEC;
    case 228u: goto L_002DAE04;
    case 229u: goto L_002DAE10;
    case 230u: goto L_002DAE1C;
    case 231u: goto L_002DAE30;
    case 232u: goto L_002DAE44;
    case 233u: goto L_002DAE4C;
    case 234u: goto L_002DAE78;
    case 235u: goto L_002DAE8C;
    case 236u: goto L_002DAE94;
    case 237u: goto L_002DAEB8;
    case 238u: goto L_002DAEC4;
    case 239u: goto L_002DAED0;
    case 240u: goto L_002DAEDC;
    case 241u: goto L_002DAEE4;
    case 242u: goto L_002DAEEC;
    case 243u: goto L_002DAF10;
    case 244u: goto L_002DAF1C;
    case 245u: goto L_002DAF28;
    case 246u: goto L_002DAF34;
    case 247u: goto L_002DAF40;
    case 248u: goto L_002DAF4C;
    case 249u: goto L_002DAF58;
    case 250u: goto L_002DAF64;
    case 251u: goto L_002DAF70;
    case 252u: goto L_002DAF7C;
    case 253u: goto L_002DAF88;
    case 254u: goto L_002DAF94;
    case 255u: goto L_002DAFA8;
    case 256u: goto L_002DAFC0;
    case 257u: goto L_002DAFCC;
    case 258u: goto L_002DAFE0;
    case 259u: goto L_002DAFF8;
    case 260u: goto L_002DB004;
    case 261u: goto L_002DB018;
    case 262u: goto L_002DB030;
    case 263u: goto L_002DB03C;
    case 264u: goto L_002DB060;
    case 265u: goto L_002DB06C;
    case 266u: goto L_002DB078;
    case 267u: goto L_002DB084;
    case 268u: goto L_002DB090;
    case 269u: goto L_002DB0B4;
    case 270u: goto L_002DB0CC;
    case 271u: goto L_002DB0D8;
    case 272u: goto L_002DB0E4;
    case 273u: goto L_002DB0F8;
    case 274u: goto L_002DB118;
    case 275u: goto L_002DB12C;
    case 276u: goto L_002DB134;
    case 277u: goto L_002DB160;
    case 278u: goto L_002DB174;
    case 279u: goto L_002DB17C;
    case 280u: goto L_002DB1A8;
    case 281u: goto L_002DB1BC;
    case 282u: goto L_002DB1C4;
    case 283u: goto L_002DB1F0;
    case 284u: goto L_002DB204;
    case 285u: goto L_002DB20C;
    case 286u: goto L_002DB238;
    case 287u: goto L_002DB258;
    case 288u: goto L_002DB26C;
    case 289u: goto L_002DB274;
    case 290u: goto L_002DB2A4;
    case 291u: goto L_002DB2B8;
    case 292u: goto L_002DB2C0;
    case 293u: goto L_002DB2F0;
    case 294u: goto L_002DB304;
    case 295u: goto L_002DB30C;
    case 296u: goto L_002DB33C;
    case 297u: goto L_002DB350;
    case 298u: goto L_002DB358;
    case 299u: goto L_002DB388;
    case 300u: goto L_002DB39C;
    case 301u: goto L_002DB3A4;
    case 302u: goto L_002DB3D4;
    case 303u: goto L_002DB3E8;
    case 304u: goto L_002DB3F0;
    case 305u: goto L_002DB41C;
    case 306u: goto L_002DB434;
    case 307u: goto L_002DB440;
    case 308u: goto L_002DB44C;
    case 309u: goto L_002DB458;
    case 310u: goto L_002DB46C;
    case 311u: goto L_002DB48C;
    case 312u: goto L_002DB4A0;
    case 313u: goto L_002DB4A8;
    case 314u: goto L_002DB4D8;
    case 315u: goto L_002DB4EC;
    case 316u: goto L_002DB4F4;
    case 317u: goto L_002DB524;
    case 318u: goto L_002DB538;
    case 319u: goto L_002DB540;
    case 320u: goto L_002DB570;
    case 321u: goto L_002DB584;
    case 322u: goto L_002DB58C;
    case 323u: goto L_002DB5BC;
    case 324u: goto L_002DB5D0;
    case 325u: goto L_002DB5D8;
    case 326u: goto L_002DB608;
    case 327u: goto L_002DB61C;
    case 328u: goto L_002DB624;
    case 329u: goto L_002DB654;
    case 330u: goto L_002DB668;
    case 331u: goto L_002DB670;
    case 332u: goto L_002DB6A0;
    case 333u: goto L_002DB6B4;
    case 334u: goto L_002DB6BC;
    case 335u: goto L_002DB6EC;
    case 336u: goto L_002DB700;
    case 337u: goto L_002DB708;
    case 338u: goto L_002DB738;
    case 339u: goto L_002DB74C;
    case 340u: goto L_002DB754;
    case 341u: goto L_002DB784;
    case 342u: goto L_002DB798;
    case 343u: goto L_002DB7A0;
    case 344u: goto L_002DB7D0;
    case 345u: goto L_002DB7E4;
    case 346u: goto L_002DB7EC;
    case 347u: goto L_002DB81C;
    case 348u: goto L_002DB834;
    case 349u: goto L_002DB840;
    case 350u: goto L_002DB84C;
    case 351u: goto L_002DB858;
    case 352u: goto L_002DB860;
    case 353u: goto L_002DB884;
    case 354u: goto L_002DB89C;
    case 355u: goto L_002DB8A8;
    case 356u: goto L_002DB8B4;
    case 357u: goto L_002DB8C0;
    case 358u: goto L_002DB8CC;
    case 359u: goto L_002DB8D8;
    case 360u: goto L_002DB8E4;
    case 361u: goto L_002DB8F0;
    case 362u: goto L_002DB8FC;
    case 363u: goto L_002DB908;
    case 364u: goto L_002DB928;
    case 365u: goto L_002DB940;
    case 366u: goto L_002DB94C;
    case 367u: goto L_002DB958;
    case 368u: goto L_002DB964;
    case 369u: goto L_002DB970;
    case 370u: goto L_002DB97C;
    case 371u: goto L_002DB988;
    case 372u: goto L_002DB99C;
    case 373u: goto L_002DB9C0;
    case 374u: goto L_002DB9D4;
    case 375u: goto L_002DB9DC;
    case 376u: goto L_002DBA10;
    case 377u: goto L_002DBA24;
    case 378u: goto L_002DBA2C;
    case 379u: goto L_002DBA60;
    case 380u: goto L_002DBA74;
    case 381u: goto L_002DBA7C;
    case 382u: goto L_002DBAB0;
    case 383u: goto L_002DBAC4;
    case 384u: goto L_002DBACC;
    case 385u: goto L_002DBB00;
    case 386u: goto L_002DBB14;
    case 387u: goto L_002DBB1C;
    case 388u: goto L_002DBB50;
    case 389u: goto L_002DBB64;
    case 390u: goto L_002DBB6C;
    case 391u: goto L_002DBB9C;
    case 392u: goto L_002DBBB0;
    case 393u: goto L_002DBBB8;
    case 394u: goto L_002DBBDC;
    case 395u: goto L_002DBBE8;
    case 396u: goto L_002DBBF4;
    case 397u: goto L_002DBC00;
    case 398u: goto L_002DBC0C;
    case 399u: goto L_002DBC20;
    case 400u: goto L_002DBC38;
    case 401u: goto L_002DBC44;
    case 402u: goto L_002DBC50;
    case 403u: goto L_002DBC90;
    case 404u: goto L_002DBCD0;
    case 405u: goto L_002DBD10;
    case 406u: goto L_002DBD50;
    case 407u: goto L_002DBD90;
    case 408u: goto L_002DBDD0;
    case 409u: goto L_002DBE18;
    case 410u: goto L_002DBE38;
    case 411u: goto L_002DBE50;
    case 412u: goto L_002DBE5C;
    case 413u: goto L_002DBE68;
    case 414u: goto L_002DBE74;
    case 415u: goto L_002DBE88;
    case 416u: goto L_002DBEA0;
    case 417u: goto L_002DBEAC;
    case 418u: goto L_002DBEB8;
    case 419u: goto L_002DBEC4;
    case 420u: goto L_002DBED0;
    case 421u: goto L_002DBEE8;
    case 422u: goto L_002DBF00;
    case 423u: goto L_002DBF0C;
    case 424u: goto L_002DBF20;
    case 425u: goto L_002DBF38;
    case 426u: goto L_002DBF44;
    case 427u: goto L_002DBF50;
    case 428u: goto L_002DBF64;
    case 429u: goto L_002DBF7C;
    case 430u: goto L_002DBF8C;
    case 431u: goto L_002DBFAC;
    case 432u: goto L_002DBFC4;
    case 433u: goto L_002DBFD8;
    case 434u: goto L_002DBFE8;
    default: bad_entry(c, 0x002D8000u); return;
    }
L_002D8000:
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D800Cu); st32((c.r[29].w[0] + 72u), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002D800Cu) [[unlikely]] return; }
L_002D800C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8018u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x002D8018u) [[unlikely]] return; }
L_002D8018:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[3].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[3].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[3].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[3].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[3].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[3].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[3].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[3].w[0] + 140u), c.f[0]);
    st32((c.r[3].w[0] + 172u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[3].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[3].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[3].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[3].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[3].w[0] + 76u), c.f[0]);
    st32((c.r[3].w[0] + 108u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 54;
L_002D80F0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002D8110:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D8158; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], c.r[2].w[0] + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 76u);  if (t) { goto L_002D8164; } }
L_002D8158:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], c.r[2].w[0] + 40u);
    set32(c.r[20], c.r[2].w[0] + 52u);
    c.budget -= 3;
L_002D8164:
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8170u); c.f[12] = ld32((c.r[19].w[0] + 128u));  if (depth < kMaxDepth) unit_0018(c, 117u, depth + 1u); else { c.pc = 0x00180DF0u; return; } if (c.pc != 0x002D8170u) [[unlikely]] return; }
L_002D8170:
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8180u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 117u, depth + 1u); else { c.pc = 0x00180DF0u; return; } if (c.pc != 0x002D8180u) [[unlikely]] return; }
L_002D8180:
    st32((c.r[29].w[0] + 168u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D81BC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    c.f[0] = ld32((c.r[2].w[0] + 2048u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2052u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2056u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2060u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_002D81E4; } }
L_002D81BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D81C4u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D81C4u) [[unlikely]] return; }
L_002D81C4:
    c.f[0] = ld32((c.r[18].w[0] + 1392u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1396u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1400u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1404u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_002D81E4:
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_002D8248; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8208u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D8208u) [[unlikely]] return; }
L_002D8208:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_002D82B8; } }
L_002D8244:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_002D8248:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_002D82BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D825Cu); set32(c.r[4], 0u - c.r[4].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D825Cu) [[unlikely]] return; }
L_002D825C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.f[2] = ld32((c.r[18].w[0] + 196u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D82B8; } }
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_002D82B8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002D82BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82C4u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D82C4u) [[unlikely]] return; }
L_002D82C4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D82D0u) [[unlikely]] return; }
L_002D82D0:
    set32(c.r[6], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D82E0u) [[unlikely]] return; }
L_002D82E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82F0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D82F0u) [[unlikely]] return; }
L_002D82F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 172u)));  goto L_002D8454; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8308u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D8308u) [[unlikely]] return; }
L_002D8308:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8450; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D8450; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002D84B0; }
    set32(c.r[4], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[3], 0u + 2004u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D83D8; }
    set32(c.r[3], 0u + 2001u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D835C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8450; } }
L_002D835C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8364u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8364u) [[unlikely]] return; }
L_002D8364:
    c.f[2] = ld32((c.r[18].w[0] + 736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[17].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 740u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 744u));
    st32((c.r[17].w[0] + 8u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 748u));
    st32((c.r[17].w[0] + 12u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83B4u); st32((c.r[17].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D83B4u) [[unlikely]] return; }
L_002D83B4:
    c.f[0] = ld32((c.r[18].w[0] + 736u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 740u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 744u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 748u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_002D8450; } }
L_002D83D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83E0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D83E0u) [[unlikely]] return; }
L_002D83E0:
    c.f[2] = ld32((c.r[18].w[0] + 736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[17].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 740u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 744u));
    st32((c.r[17].w[0] + 8u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 748u));
    st32((c.r[17].w[0] + 12u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8430u); st32((c.r[17].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8430u) [[unlikely]] return; }
L_002D8430:
    c.f[0] = ld32((c.r[18].w[0] + 736u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 740u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 744u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 748u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_002D8450:
    set32(c.r[3], ld32((c.r[18].w[0] + 172u)));
    c.budget -= 1;
L_002D8454:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D84AC; } }
    set32(c.r[3], 0u - 337u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC3510000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], 0u - 447u);
    set32(c.r[3], 0u - 303u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC2EA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC3970000u);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 19;
L_002D84AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002D84B0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002D84D0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8508u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8508u) [[unlikely]] return; }
L_002D8508:
    c.f[0] = ld32((c.r[19].w[0] + 1392u));
    set32(c.r[2], 0u + 1000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1396u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1400u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1404u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 12;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002D8578; }
    set32(c.r[2], 0u + 1013u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002D8574; } }
    set32(c.r[2], 0u + 1007u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002D8574; } }
    set32(c.r[2], 0u + 1009u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002D8574; } }
    set32(c.r[2], 0u + 1010u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002D8574; } }
    set32(c.r[2], 0u + 4000u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D85C0; }
L_002D8574:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002D8578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8580u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8580u) [[unlikely]] return; }
L_002D8580:
    c.f[0] = ld32((c.r[19].w[0] + 1392u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 288u);
    set32(c.r[8], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1396u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1400u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1404u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85B8u); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x002D85B8u) [[unlikely]] return; }
L_002D85B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 1304u)));  if (t) { goto L_002D86C4; } }
L_002D85C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85C8u);  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x002D85C8u) [[unlikely]] return; }
L_002D85C8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 1264u));  goto L_002D8690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D85DCu) [[unlikely]] return; }
L_002D85DC:
    c.f[0] = ld32((c.r[19].w[0] + 1392u));
    set32(c.r[2], 0u + 2003u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 1396u));
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 1400u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1404u));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 204u), c.f[0]);  if (t) { goto L_002D8644; } }
    set32(c.r[2], 0u + 2002u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[29].w[0] + 196u));  goto L_002D8648; }
    set32(c.r[2], 0u + 2001u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002D8644; } }
    set32(c.r[2], 0u + 2000u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_002D8630; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_002D8660; } }
L_002D8630:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 196u), c.f[0]);  if (t) { goto L_002D8670; } }
L_002D8644:
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.budget -= 1;
L_002D8648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 196u), c.f[0]);  if (t) { goto L_002D8670; } }
L_002D8660:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.budget -= 4;
L_002D8670:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8688u); set32(c.r[8], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x002D8688u) [[unlikely]] return; }
L_002D8688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D86C0; } }
L_002D8690:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1268u));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1272u));
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1276u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86B4u); st32((c.r[29].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D86B4u) [[unlikely]] return; }
L_002D86B4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86C0u); set32(c.r[5], c.r[19].w[0] + 1200u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002D86C0u) [[unlikely]] return; }
L_002D86C0:
    set32(c.r[3], ld32((c.r[19].w[0] + 1304u)));
    c.budget -= 1;
L_002D86C4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 112u)));  goto L_002D874C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D86D8u) [[unlikely]] return; }
L_002D86D8:
    c.f[20] = ld32((c.r[2].w[0] + 144u));
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 192u);  goto L_002D86FC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86F4u); set32(c.r[5], c.r[19].w[0] + 1280u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002D86F4u) [[unlikely]] return; }
L_002D86F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (t) { goto L_002D8708; } }
L_002D86FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8704u); set32(c.r[5], c.r[19].w[0] + 1280u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002D8704u) [[unlikely]] return; }
L_002D8704:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 1;
L_002D8708:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8718u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D8718u) [[unlikely]] return; }
L_002D8718:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 13;
L_002D874C:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[20].w[0] + 88u)));  goto L_002D87AC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D87A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D876Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D876Cu) [[unlikely]] return; }
L_002D876C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_002D87F8; } }
L_002D87A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_002D87AC:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 116u)));  goto L_002D87FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87C0u); set32(c.r[4], 0u - c.r[4].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D87C0u) [[unlikely]] return; }
L_002D87C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_002D87F8:
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 1;
L_002D87FC:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[20].w[0] + 88u)));  goto L_002D885C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D881Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D881Cu) [[unlikely]] return; }
L_002D881C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_002D88A8; } }
L_002D8858:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_002D885C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_002D88AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8870u); set32(c.r[4], 0u - c.r[4].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D8870u) [[unlikely]] return; }
L_002D8870:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 14;
L_002D88A8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002D88AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88B4u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002D88B4u) [[unlikely]] return; }
L_002D88B4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D88C0u) [[unlikely]] return; }
L_002D88C0:
    set32(c.r[6], ld32((c.r[20].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88D0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x002D88D0u) [[unlikely]] return; }
L_002D88D0:
    set32(c.r[6], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D88E0u) [[unlikely]] return; }
L_002D88E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D88F4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 2;
L_002D88F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002D8920; }
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002D898C; } }
L_002D8920:
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 84u)));  goto L_002D893C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], c.r[2].w[0] + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 76u);  if (t) { goto L_002D8944; } }
L_002D893C:
    set32(c.r[4], c.r[2].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] + 52u);
    c.budget -= 2;
L_002D8944:
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = 0u;
    c.f[4] = ld32((c.r[3].w[0] + 13732u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), c.f[3]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 18;
L_002D898C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D899Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D899Cu) [[unlikely]] return; }
L_002D899C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002D8B0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89B4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D89B4u) [[unlikely]] return; }
L_002D89B4:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8B08; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D8B08; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[3], 0u + 2001u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002D8A90; }
    set32(c.r[3], 0u + 2000u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002D89FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8B08; } }
L_002D89FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A04u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8A04u) [[unlikely]] return; }
L_002D8A04:
    c.f[2] = ld32((c.r[19].w[0] + 736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[18].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 740u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[18].w[0] + 8u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 748u));
    st32((c.r[18].w[0] + 12u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A54u); st32((c.r[18].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8A54u) [[unlikely]] return; }
L_002D8A54:
    c.f[1] = ld32((c.r[19].w[0] + 736u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 740u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 748u));
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_002D8B08; } }
L_002D8A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A98u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8A98u) [[unlikely]] return; }
L_002D8A98:
    c.f[2] = ld32((c.r[19].w[0] + 736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    st32((c.r[18].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 740u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[18].w[0] + 8u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 748u));
    st32((c.r[18].w[0] + 12u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8AE8u); st32((c.r[18].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8AE8u) [[unlikely]] return; }
L_002D8AE8:
    c.f[0] = ld32((c.r[19].w[0] + 736u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 748u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_002D8B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002D8B0C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002D8B30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 1320u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D8B74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8B6Cu) [[unlikely]] return; }
L_002D8B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 352u);  if (t) { goto L_002D8B80; } }
L_002D8B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8B7Cu) [[unlikely]] return; }
L_002D8B7C:
    set32(c.r[5], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_002D8B80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B90u); set32(c.r[6], c.r[6].w[0] + 19520u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D8B90u) [[unlikely]] return; }
L_002D8B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B98u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D8B98u) [[unlikely]] return; }
L_002D8B98:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BA4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D8BA4u) [[unlikely]] return; }
L_002D8BA4:
    set32(c.r[6], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BB4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D8BB4u) [[unlikely]] return; }
L_002D8BB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BC8u); set32(c.r[6], c.r[6].w[0] + 19536u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D8BC8u) [[unlikely]] return; }
L_002D8BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002D8BF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8C20u) [[unlikely]] return; }
L_002D8C20:
    c.f[0] = ld32((c.r[18].w[0] + 1392u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1396u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1400u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1404u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C48u); st32((c.r[16].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D8C48u) [[unlikely]] return; }
L_002D8C48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C54u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D8C54u) [[unlikely]] return; }
L_002D8C54:
    set32(c.r[6], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C64u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D8C64u) [[unlikely]] return; }
L_002D8C64:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C78u); set32(c.r[6], c.r[6].w[0] + 19552u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D8C78u) [[unlikely]] return; }
L_002D8C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002D8CA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 1320u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D8CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8CDCu) [[unlikely]] return; }
L_002D8CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 352u);  if (t) { goto L_002D8CF0; } }
L_002D8CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8CECu) [[unlikely]] return; }
L_002D8CEC:
    set32(c.r[5], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_002D8CF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D00u); set32(c.r[6], c.r[6].w[0] + 19568u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D8D00u) [[unlikely]] return; }
L_002D8D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D08u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D8D08u) [[unlikely]] return; }
L_002D8D08:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D14u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D8D14u) [[unlikely]] return; }
L_002D8D14:
    set32(c.r[6], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D24u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D8D24u) [[unlikely]] return; }
L_002D8D24:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D38u); set32(c.r[6], c.r[6].w[0] + 19584u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D8D38u) [[unlikely]] return; }
L_002D8D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002D8D60:
    set32(c.r[29], c.r[29].w[0] - 144u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D8D90u) [[unlikely]] return; }
L_002D8D90:
    c.f[0] = ld32((c.r[18].w[0] + 1392u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1396u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1400u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1404u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DB8u); st32((c.r[16].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D8DB8u) [[unlikely]] return; }
L_002D8DB8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DC4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D8DC4u) [[unlikely]] return; }
L_002D8DC4:
    set32(c.r[6], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D8DD4u) [[unlikely]] return; }
L_002D8DD4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DE8u); set32(c.r[6], c.r[6].w[0] + 19600u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D8DE8u) [[unlikely]] return; }
L_002D8DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002D8E10:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 608u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1936u);  if (t) { goto L_002D8E94; } }
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.f[0]);  if (t) { goto L_002D8ED4; } }
L_002D8E94:
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.budget -= 16;
L_002D8ED4:
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[19].w[0] + 84u)));  goto L_002D8F5C; }
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D8F58; } }
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D8F58; } }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D8F58; } }
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D8F58; } }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D8F58; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F50u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 5u, depth + 1u); else { c.pc = 0x002D8110u; return; } if (c.pc != 0x002D8F50u) [[unlikely]] return; }
L_002D8F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002D9160; } }
L_002D8F58:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 1;
L_002D8F5C:
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.f[13] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[20], c.r[2].w[0] + 52u);
    c.f[1] = ld32((c.r[2].w[0] + 44u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 212u), c.f[2]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F98u); st32((c.r[29].w[0] + 216u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x002D8F98u) [[unlikely]] return; }
L_002D8F98:
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 160u), 0u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FD4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 117u, depth + 1u); else { c.pc = 0x00180DF0u; return; } if (c.pc != 0x002D8FD4u) [[unlikely]] return; }
L_002D8FD4:
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FE4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0018(c, 117u, depth + 1u); else { c.pc = 0x00180DF0u; return; } if (c.pc != 0x002D8FE4u) [[unlikely]] return; }
L_002D8FE4:
    st32((c.r[29].w[0] + 168u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[18].w[0] + 1320u)));  goto L_002D9020; }
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    c.f[0] = ld32((c.r[2].w[0] + 2048u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2052u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2056u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2060u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_002D9050; } }
L_002D9020:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D9038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9030u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D9030u) [[unlikely]] return; }
L_002D9030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[20].w[0] + 352u);  if (t) { goto L_002D9044; } }
L_002D9038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9040u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D9040u) [[unlikely]] return; }
L_002D9040:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_002D9044:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9050u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D9050u) [[unlikely]] return; }
L_002D9050:
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_002D90B4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D90B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9074u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D9074u) [[unlikely]] return; }
L_002D9074:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_002D9124; } }
L_002D90B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_002D90B4:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_002D9128; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90C8u); set32(c.r[4], 0u - c.r[4].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D90C8u) [[unlikely]] return; }
L_002D90C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.f[2] = ld32((c.r[18].w[0] + 196u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D9124; } }
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_002D9124:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002D9128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9130u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D9130u) [[unlikely]] return; }
L_002D9130:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D913Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D913Cu) [[unlikely]] return; }
L_002D913C:
    set32(c.r[6], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D914Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D914Cu) [[unlikely]] return; }
L_002D914C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D915Cu); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D915Cu) [[unlikely]] return; }
L_002D915C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002D9160:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002D9180:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 608u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1936u);  if (t) { goto L_002D9200; } }
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.f[0]);  if (t) { goto L_002D9240; } }
L_002D9200:
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.budget -= 16;
L_002D9240:
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[18].w[0] + 1320u)));  goto L_002D92C8; }
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D92C4; } }
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D92C4; } }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D92C4; } }
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D92C4; } }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D92C4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92BCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 20u, depth + 1u); else { c.pc = 0x002D84D0u; return; } if (c.pc != 0x002D92BCu) [[unlikely]] return; }
L_002D92BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002D95E4; } }
L_002D92C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 1;
L_002D92C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 192u));  goto L_002D92F4; }
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.f[0]);  if (t) { goto L_002D9310; } }
L_002D92F4:
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 196u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 200u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 204u));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.budget -= 7;
L_002D9310:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9320u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D9320u) [[unlikely]] return; }
L_002D9320:
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 11;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_002D93A4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D93A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9364u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D9364u) [[unlikely]] return; }
L_002D9364:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_002D93F0; } }
L_002D93A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_002D93A4:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 116u)));  goto L_002D93F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D93B8u); set32(c.r[4], 0u - c.r[4].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D93B8u) [[unlikely]] return; }
L_002D93B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_002D93F0:
    set32(c.r[4], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 1;
L_002D93F4:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_002D9454; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9414u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D9414u) [[unlikely]] return; }
L_002D9414:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_002D94A0; } }
L_002D9450:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_002D9454:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_002D94A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9468u); set32(c.r[4], 0u - c.r[4].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D9468u) [[unlikely]] return; }
L_002D9468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 14;
L_002D94A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002D94A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D94ACu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D94ACu) [[unlikely]] return; }
L_002D94AC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D94B8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D94B8u) [[unlikely]] return; }
L_002D94B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[2], 0u + 4020u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 420u)));  goto L_002D94F8; }
    set32(c.r[2], 0u + 4019u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D94F4; } }
    set32(c.r[2], 0u + 4018u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D94F4; } }
    set32(c.r[2], 0u + 4017u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D94F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 112u)));  if (t) { goto L_002D9510; } }
L_002D94F4:
    set32(c.r[6], ld32((c.r[18].w[0] + 420u)));
    c.budget -= 1;
L_002D94F8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D950C; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D950Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002D950Cu) [[unlikely]] return; }
L_002D950C:
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 1;
L_002D9510:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9520u); set32(c.r[6], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x002D9520u) [[unlikely]] return; }
L_002D9520:
    set32(c.r[6], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9530u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D9530u) [[unlikely]] return; }
L_002D9530:
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002D95D4; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 80u)));
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 404u)));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002D95A0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 8ull;  if (t) { goto L_002D95A4; } }
L_002D95A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D95A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[29].w[0] + 160u));  goto L_002D95BC; }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.f[0]);  if (t) { goto L_002D95D0; } }
L_002D95BC:
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 5;
L_002D95D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D95D4:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95E0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D95E0u) [[unlikely]] return; }
L_002D95E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002D95E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002D9600:
    set32(c.r[29], c.r[29].w[0] - 800u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D968C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002D9690; } }
L_002D968C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9690:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D969C; }
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D969C:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[4], c.r[29].w[0] + 768u);
    set32(c.r[5], 0u + 4u);
    c.f[24] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 784u), 0u);
    st32((c.r[29].w[0] + 768u), 0u);
    st32((c.r[29].w[0] + 772u), 0u);
    st32((c.r[29].w[0] + 776u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96C4u); st32((c.r[29].w[0] + 780u), 0u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D96C4u) [[unlikely]] return; }
L_002D96C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u - 17u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 280u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[7].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9700u); st32((c.r[7].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D9700u) [[unlikely]] return; }
L_002D9700:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9714u); st128((c.r[29].w[0] + 752u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D9714u) [[unlikely]] return; }
L_002D9714:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9720u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D9720u) [[unlikely]] return; }
L_002D9720:
    c.f[20] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[21] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 752u);
    c.f[22] = ld32((c.r[18].w[0] + 8u));
    c.f[23] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9740u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D9740u) [[unlikely]] return; }
L_002D9740:
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9770u); st32((c.r[29].w[0] + 348u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D9770u) [[unlikely]] return; }
L_002D9770:
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[6], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 352u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97A0u); st32((c.r[29].w[0] + 364u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D97A0u) [[unlikely]] return; }
L_002D97A0:
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    set32(c.r[2], 0u + 4u);
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[5], c.r[29].w[0] + 560u);
    st32((c.r[29].w[0] + 584u), c.f[0]);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[29].w[0] + 576u), c.f[2]);
    st32((c.r[29].w[0] + 580u), c.f[1]);
    st32((c.r[29].w[0] + 588u), c.f[0]);
    st32((c.r[29].w[0] + 560u), c.f[20]);
    st32((c.r[29].w[0] + 564u), c.f[21]);
    st32((c.r[29].w[0] + 568u), c.f[22]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97E4u); st32((c.r[29].w[0] + 572u), c.f[23]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D97E4u) [[unlikely]] return; }
L_002D97E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D98B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002D98B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D9808; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D9808:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 560u);
    set32(c.r[7], c.r[29].w[0] + 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D981Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D981Cu) [[unlikely]] return; }
L_002D981C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D98B0; } }
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 764u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 756u), 0u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 760u), c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9860u); st32((c.r[29].w[0] + 752u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D9860u) [[unlikely]] return; }
L_002D9860:
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[12] = c.f[24];
    set32(c.r[5], c.r[29].w[0] + 752u);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9880u); st32((c.r[19].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D9880u) [[unlikely]] return; }
L_002D9880:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[3] = ld32((c.r[29].w[0] + 276u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_002D98B0:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D99E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[4] = ld32((c.r[19].w[0] + 4u));
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = ld32((c.r[19].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0]));
    st32((c.r[29].w[0] + 560u), c.f[1]);
    st32((c.r[29].w[0] + 640u), 0u);
    st32((c.r[29].w[0] + 564u), c.f[4]);
    st32((c.r[29].w[0] + 568u), c.f[3]);
    st32((c.r[29].w[0] + 572u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98F8u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D98F8u) [[unlikely]] return; }
L_002D98F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D990C; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D990C:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 560u);
    set32(c.r[7], c.r[29].w[0] + 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9920u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D9920u) [[unlikely]] return; }
L_002D9920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D99E4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D9964; }
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_002D995C; }
L_002D995C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_002D99E4; } }
L_002D9964:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D99E4; } }
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0] + 500u));
    c.f[4] = ld32((c.r[29].w[0] + 484u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[5] = ld32((c.r[4].w[0] + 32u));  if (t) { goto L_002D9998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[4];  if (t) { goto L_002D999C; } }
L_002D9998:
    c.f[1] = c.f[3];
    c.budget -= 1;
L_002D999C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D99CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[1]);  if (t) { goto L_002D99E4; } }
L_002D99CC:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = c.f[3];  goto L_002D99D8; }
L_002D99D8:
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    c.budget -= 3;
L_002D99E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D99E8:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9A18; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002D9A18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9A24; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D9A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9B20; } }
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[13] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 468u), 0u);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 472u), c.f[13]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A5Cu); st32((c.r[29].w[0] + 464u), c.f[12]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x002D9A5Cu) [[unlikely]] return; }
L_002D9A5C:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D9B20; } }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A80u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D9A80u) [[unlikely]] return; }
L_002D9A80:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A98u); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D9A98u) [[unlikely]] return; }
L_002D9A98:
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[3] = ld32((c.r[29].w[0] + 260u));
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[20]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9AF4u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0018(c, 117u, depth + 1u); else { c.pc = 0x00180DF0u; return; } if (c.pc != 0x002D9AF4u) [[unlikely]] return; }
L_002D9AF4:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[20].w[0] + 84u)));  goto L_002D9B08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[20]);  if (t) { goto L_002D9B20; } }
L_002D9B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B18u); set32(c.r[4], c.r[3].w[0] + 40u);  if (depth < kMaxDepth) unit_0018(c, 117u, depth + 1u); else { c.pc = 0x00180DF0u; return; } if (c.pc != 0x002D9B18u) [[unlikely]] return; }
L_002D9B18:
    c.f[20] = c.f[0];
    st32((c.r[19].w[0] + 4u), c.f[20]);
    c.budget -= 2;
L_002D9B20:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002D9C88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_002D9B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002D9B44; } }
L_002D9B40:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B4Cu);  if (depth < kMaxDepth) unit_0052(c, 95u, depth + 1u); else { c.pc = 0x00268E80u; return; } if (c.pc != 0x002D9B4Cu) [[unlikely]] return; }
L_002D9B4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D9C88; } }
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 444u), c.f[0]);
    st32((c.r[29].w[0] + 448u), c.f[24]);
    set32(c.r[21], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002D9C5C; } }
L_002D9B88:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9B9C; }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002D9B9C:
    set32(c.r[16], ld32((c.r[2].w[0] + 168u)));
    c.r[2].d[0] = c.r[16].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002D9C5C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9BE0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002D9BE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_002D9BEC; }
    set32(c.r[7], c.r[2].w[0] + 272u);
    c.budget -= 1;
L_002D9BEC:
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BFCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 96u, depth + 1u); else { c.pc = 0x00214CF0u; return; } if (c.pc != 0x002D9BFCu) [[unlikely]] return; }
L_002D9BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9C58; } }
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9C58; } }
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C1Cu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0016(c, 258u, depth + 1u); else { c.pc = 0x0017B830u; return; } if (c.pc != 0x002D9C1Cu) [[unlikely]] return; }
L_002D9C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9C58; } }
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    c.f[2] = ld32((c.r[29].w[0] + 388u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = c.f[0];  goto L_002D9C38; }
L_002D9C38:
    c.f[1] = ld32((c.r[29].w[0] + 416u));
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_002D9C54; }
L_002D9C54:
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.budget -= 1;
L_002D9C58:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002D9C5C:
    c.r[2].d[0] = c.r[20].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9B88u | kUnwind; return; } goto L_002D9B88; }
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_002D9C88:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 560u);  goto L_002D9D98; }
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C9Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D9C9Cu) [[unlikely]] return; }
L_002D9C9C:
    c.f[20] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[21] = ld32((c.r[18].w[0] + 4u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[22] = ld32((c.r[18].w[0] + 8u));
    c.f[23] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CBCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D9CBCu) [[unlikely]] return; }
L_002D9CBC:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[2], 0u + 4u);
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[5], c.r[29].w[0] + 560u);
    st32((c.r[29].w[0] + 584u), c.f[0]);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[29].w[0] + 576u), c.f[2]);
    st32((c.r[29].w[0] + 580u), c.f[1]);
    st32((c.r[29].w[0] + 588u), c.f[0]);
    st32((c.r[29].w[0] + 560u), c.f[20]);
    st32((c.r[29].w[0] + 564u), c.f[21]);
    st32((c.r[29].w[0] + 568u), c.f[22]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D00u); st32((c.r[29].w[0] + 572u), c.f[23]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D9D00u) [[unlikely]] return; }
L_002D9D00:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D9D14; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D9D14:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 560u);
    set32(c.r[7], c.r[29].w[0] + 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D28u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D9D28u) [[unlikely]] return; }
L_002D9D28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D9D94; } }
    c.f[12] = c.f[24];
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D44u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D9D44u) [[unlikely]] return; }
L_002D9D44:
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[6], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 320u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D74u); st32((c.r[29].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D9D74u) [[unlikely]] return; }
L_002D9D74:
    c.f[3] = ld32((c.r[29].w[0] + 228u));
    c.f[2] = ld32((c.r[29].w[0] + 232u));
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[3]);
    st32((c.r[19].w[0] + 8u), c.f[2]);
    st32((c.r[19].w[0] + 12u), c.f[1]);
    c.budget -= 8;
L_002D9D94:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 1;
L_002D9D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D9DA0u) [[unlikely]] return; }
L_002D9DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 800u);  c.pc = t; return; }
L_002D9DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_002D9E04; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9E04:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[6], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[6], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 404u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002D9F80; } }
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = 0u;
    st32((c.r[2].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_002D9E78; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 540u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 5;
L_002D9E78:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9EC0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D9EAC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D9EA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9ED4; } }
L_002D9EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 116u)));  if (t) { goto L_002D9ED4; } }
L_002D9EAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EB8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002D9EB8u) [[unlikely]] return; }
L_002D9EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9ED4; } }
L_002D9EC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9ED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 368u)));  if (t) { goto L_002D9ED4; } }
L_002D9ED4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_002D9F68; }
    set32(c.r[5], ld32((c.r[2].w[0] + 1304u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 88u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F0Cu); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D9F0Cu) [[unlikely]] return; }
L_002D9F0C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D9F58; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D9F48; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D9F38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_002D9F74; } }
L_002D9F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F40u);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002D9F40u) [[unlikely]] return; }
L_002D9F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9F70; } }
L_002D9F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F50u);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002D9F50u) [[unlikely]] return; }
L_002D9F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9F70; } }
L_002D9F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002D9F60u) [[unlikely]] return; }
L_002D9F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9F70; } }
L_002D9F68:
    set32(c.r[2], c.r[2].w[0] + 88u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_002D9F70:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_002D9F74:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002D9F80u) [[unlikely]] return; }
L_002D9F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D9F90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002DA380; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002D9FD4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 2;
L_002D9FD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA37C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DA028; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002DA014; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002DA00C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA03C; } }
L_002DA00C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 116u)));  if (t) { goto L_002DA03C; } }
L_002DA014:
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA020u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002DA020u) [[unlikely]] return; }
L_002DA020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DA03C; } }
L_002DA028:
    set32(c.r[3], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 368u)));  if (t) { goto L_002DA03C; } }
L_002DA03C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DA37C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DA05C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 8ull;  if (t) { goto L_002DA060; } }
L_002DA05C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DA060:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA314; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002DA0A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA07Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002DA07Cu) [[unlikely]] return; }
L_002DA07C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30400u)));  goto L_002DA090; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA0A4; } }
L_002DA090:
    set32(c.r[3], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = ld64((c.r[4].w[0] + 144u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_002DA0A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002DA1FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0B4u);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x002DA0B4u) [[unlikely]] return; }
L_002DA0B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002DA26C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[2].d[0] & 65535ull;  goto L_002DA0D8; }
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 65535ull;  if (t) { goto L_002DA0E4; } }
L_002DA0D8:
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_002DA0E4:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002DA0FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  if (t) { goto L_002DA108; } }
L_002DA0FC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 116u)));  goto L_002DA10C; }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002DA108:
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 1;
L_002DA10C:
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[2].d[0] & c.r[5].d[0];  goto L_002DA120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & c.r[5].d[0];  if (t) { goto L_002DA128; } }
L_002DA120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002DA128:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002DA140; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_002DA14C; } }
L_002DA140:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));  goto L_002DA150; }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002DA14C:
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_002DA150:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[5].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002DA174; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002DA174:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[20] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DA1A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA1C4; } }
L_002DA1A8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002DA1B4; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002DA1B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_002DA1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1CCu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002DA1CCu) [[unlikely]] return; }
L_002DA1CC:
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1E8u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA1E8u) [[unlikely]] return; }
L_002DA1E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_002DA268; } }
L_002DA1FC:
    c.f[3] = 0u;
    c.f[0] = ld32((c.r[4].w[0] + 13712u));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[4].w[0] + 13696u);  if (t) { goto L_002DA268; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[4].w[0] + 80u));  goto L_002DA238; }
L_002DA238:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA258u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA258u) [[unlikely]] return; }
L_002DA258:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_002DA268:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002DA26C:
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 13716u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[18].w[0] + 116u)));  goto L_002DA2CC; }
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 128u), c.f[1]);  if (t) { goto L_002DA2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), c.f[2]);  if (t) { goto L_002DA2C4; } }
L_002DA2A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], 0u + 1u);  goto L_002DA2C8; }
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.budget -= 1;
L_002DA2C4:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002DA2C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 1;
L_002DA2CC:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[4].d[0] = c.r[3].d[0] & 65535ull;  goto L_002DA2E0; }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 65535ull;  if (t) { goto L_002DA2EC; } }
L_002DA2E0:
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 3;
L_002DA2EC:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002DA304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_002DA310; } }
L_002DA304:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[18].w[0] + 116u), c.r[4].w[0]);  goto L_002DA314; }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002DA310:
    st32((c.r[18].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 1;
L_002DA314:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DA37C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002DA348; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA340u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006E(c, 61u, depth + 1u); else { c.pc = 0x002D8CA0u; return; } if (c.pc != 0x002DA340u) [[unlikely]] return; }
L_002DA340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_002DA35C; } }
L_002DA348:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA358u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006E(c, 5u, depth + 1u); else { c.pc = 0x002D8110u; return; } if (c.pc != 0x002DA358u) [[unlikely]] return; }
L_002DA358:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_002DA35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA364u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002DA364u) [[unlikely]] return; }
L_002DA364:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA370u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002DA370u) [[unlikely]] return; }
L_002DA370:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002DA37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002DA380:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DA3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002DA6A0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002DA404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3DCu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002DA3DCu) [[unlikely]] return; }
L_002DA3DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30400u)));  goto L_002DA3F0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA404; } }
L_002DA3F0:
    set32(c.r[3], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = ld64((c.r[4].w[0] + 152u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_002DA404:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30404u)));  goto L_002DA438; }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_002DA428; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  goto L_002DA42C; }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002DA428:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_002DA42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA434u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 132u, depth + 1u); else { c.pc = 0x002D9DE0u; return; } if (c.pc != 0x002DA434u) [[unlikely]] return; }
L_002DA434:
    set32(c.r[3], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 1;
L_002DA438:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002DA448; }
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 2;
L_002DA448:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA69C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DA49C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002DA488; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002DA480; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA4B0; } }
L_002DA480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 116u)));  if (t) { goto L_002DA4B0; } }
L_002DA488:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA494u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002DA494u) [[unlikely]] return; }
L_002DA494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DA4B0; } }
L_002DA49C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 368u)));  if (t) { goto L_002DA4B0; } }
L_002DA4B0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DA69C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA4C0u);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x002DA4C0u) [[unlikely]] return; }
L_002DA4C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));  goto L_002DA4F0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 13732u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA4EC; } }
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_002DA57C; } }
L_002DA4EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 1;
L_002DA4F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DA500; }
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 2;
L_002DA500:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 112u)));  goto L_002DA580; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 13712u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA528u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA528u) [[unlikely]] return; }
L_002DA528:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[2] = ld32((c.r[2].w[0] + 13716u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_002DA564; }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA55Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA55Cu) [[unlikely]] return; }
L_002DA55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_002DA57C; } }
L_002DA564:
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA578u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA578u) [[unlikely]] return; }
L_002DA578:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_002DA57C:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_002DA580:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[2].d[0] & 65535ull;  goto L_002DA594; }
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 65535ull;  if (t) { goto L_002DA5A0; } }
L_002DA594:
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_002DA5A0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002DA5B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_002DA5C4; } }
L_002DA5B8:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  goto L_002DA5C8; }
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_002DA5C4:
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 1;
L_002DA5C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];  goto L_002DA5DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (t) { goto L_002DA5E4; } }
L_002DA5DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002DA5E4:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002DA5FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_002DA608; } }
L_002DA5FC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  goto L_002DA60C; }
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_002DA608:
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 1;
L_002DA60C:
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA620u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA620u) [[unlikely]] return; }
L_002DA620:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA638u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA638u) [[unlikely]] return; }
L_002DA638:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_002DA650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[17].w[0]);  if (t) { goto L_002DA660; } }
L_002DA650:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_002DA664; }
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_002DA660:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_002DA664:
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA674u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA674u) [[unlikely]] return; }
L_002DA674:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u - c.r[2].w[0]);  goto L_002DA68C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_002DA69C; } }
L_002DA68C:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DA69C; } }
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 1;
L_002DA69C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002DA6A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DA6B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002DA9E4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DA71C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA6F4u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002DA6F4u) [[unlikely]] return; }
L_002DA6F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002DA708; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA71C; } }
L_002DA708:
    set32(c.r[2], 0u + 2048u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 144u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_002DA71C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002DA734; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA72Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 320u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002DA72Cu) [[unlikely]] return; }
L_002DA72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9E0; } }
L_002DA734:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002DA764; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002DA764:
    set32(c.r[5], c.r[16].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA774u); set32(c.r[6], c.r[5].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002DA774u) [[unlikely]] return; }
L_002DA774:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA7A8u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002DA7A8u) [[unlikely]] return; }
L_002DA7A8:
    ld128((c.r[16].w[0] + 160u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[16].w[0] + 176u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[5]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[5]);
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[3] = ld32((c.r[29].w[0] + 196u));
    c.f[2] = ld32((c.r[29].w[0] + 228u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[4]);
    st32((c.r[29].w[0] + 196u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[21] = ld32((c.r[3].w[0] + 13712u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DA874; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA814u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002DA814u) [[unlikely]] return; }
L_002DA814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA82Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002DA82Cu) [[unlikely]] return; }
L_002DA82C:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA86Cu); st32((c.r[17].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002DA86Cu) [[unlikely]] return; }
L_002DA86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002DA8E8; } }
L_002DA874:
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DA8E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[4].w[0] + 80u));  goto L_002DA8AC; }
L_002DA8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8B4u); set32(c.r[4], ld32((c.r[16].w[0] + 388u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002DA8B4u) [[unlikely]] return; }
L_002DA8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8D8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA8D8u) [[unlikely]] return; }
L_002DA8D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 3;
L_002DA8E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002DA8E8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[21] = ld32((c.r[4].w[0] + 13716u));  if (t) { goto L_002DA964; } }
    set32(c.r[5], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA904u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002DA904u) [[unlikely]] return; }
L_002DA904:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA91Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002DA91Cu) [[unlikely]] return; }
L_002DA91C:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA95Cu); st32((c.r[17].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002DA95Cu) [[unlikely]] return; }
L_002DA95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DA9D8; } }
L_002DA964:
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DA9D4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[4].w[0] + 80u));  goto L_002DA99C; }
L_002DA99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9A4u); set32(c.r[4], ld32((c.r[16].w[0] + 384u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002DA9A4u) [[unlikely]] return; }
L_002DA9A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9C8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DA9C8u) [[unlikely]] return; }
L_002DA9C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
L_002DA9D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DA9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002D7B00u; return; } if (c.pc != 0x002DA9E0u) [[unlikely]] return; }
L_002DA9E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002DA9E4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002DAA00:
    set32(c.r[29], c.r[29].w[0] - 976u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 960u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA34u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002DAA34u) [[unlikely]] return; }
L_002DAA34:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 952u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAA44u) [[unlikely]] return; }
L_002DAA44:
    set32(c.r[2], ld32((c.r[29].w[0] + 952u)));
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 956u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA64u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAA64u) [[unlikely]] return; }
L_002DAA64:
    set32(c.r[2], ld32((c.r[29].w[0] + 944u)));
    set32(c.r[4], c.r[29].w[0] + 936u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 948u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA84u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAA84u) [[unlikely]] return; }
L_002DAA84:
    set32(c.r[2], ld32((c.r[29].w[0] + 936u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 940u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA9Cu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAA9Cu) [[unlikely]] return; }
L_002DAA9C:
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAA8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAAA8u) [[unlikely]] return; }
L_002DAAA8:
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAAB4u) [[unlikely]] return; }
L_002DAAB4:
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAAC0u) [[unlikely]] return; }
L_002DAAC0:
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAACCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DAACCu) [[unlikely]] return; }
L_002DAACC:
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DAAD8u) [[unlikely]] return; }
L_002DAAD8:
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 928u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAAECu) [[unlikely]] return; }
L_002DAAEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 928u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 932u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB04u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAB04u) [[unlikely]] return; }
L_002DAB04:
    st32((c.r[20].w[0] + 540u), c.f[0]);
    set32(c.r[4], c.r[20].w[0] + 20u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[29].w[0] + 960u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB20u); st32((c.r[29].w[0] + 964u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DAB20u) [[unlikely]] return; }
L_002DAB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 536u), c.r[2].w[0]);  if (t) { goto L_002DAB4C; } }
    set32(c.r[4], c.r[29].w[0] + 920u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB38u); set32(c.r[6], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DAB38u) [[unlikely]] return; }
L_002DAB38:
    set32(c.r[2], ld32((c.r[29].w[0] + 920u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 924u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DAD74; } }
L_002DAB4C:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB5Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DAB5Cu) [[unlikely]] return; }
L_002DAB5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 532u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_006F(c, 128u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 912u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAB74u) [[unlikely]] return; }
L_002DAB74:
    set32(c.r[2], ld32((c.r[29].w[0] + 912u)));
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 916u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DAD64; } }
L_002DAB8C:
    set32(c.r[2], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[29].w[0] + 904u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[20].w[0] + 20u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DABACu) [[unlikely]] return; }
L_002DABAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 904u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 908u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABC4u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DABC4u) [[unlikely]] return; }
L_002DABC4:
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABD0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DABD0u) [[unlikely]] return; }
L_002DABD0:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABDCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DABDCu) [[unlikely]] return; }
L_002DABDC:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABECu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DABECu) [[unlikely]] return; }
L_002DABEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DABF4u) [[unlikely]] return; }
L_002DABF4:
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAC00u) [[unlikely]] return; }
L_002DAC00:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC0Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DAC0Cu) [[unlikely]] return; }
L_002DAC0C:
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DAC14:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC20u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DAC20u) [[unlikely]] return; }
L_002DAC20:
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAC14u | kUnwind; return; } goto L_002DAC14; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DAC48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC54u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DAC54u) [[unlikely]] return; }
L_002DAC54:
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 76u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAC48u | kUnwind; return; } goto L_002DAC48; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DAC7C:
    set32(c.r[4], c.r[29].w[0] + 896u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAC8Cu) [[unlikely]] return; }
L_002DAC8C:
    set32(c.r[3], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 900u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 88u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACC0u); st32((c.r[20].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DACC0u) [[unlikely]] return; }
L_002DACC0:
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACCCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DACCCu) [[unlikely]] return; }
L_002DACCC:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DACD8u) [[unlikely]] return; }
L_002DACD8:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACECu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DACECu) [[unlikely]] return; }
L_002DACEC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACF8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DACF8u) [[unlikely]] return; }
L_002DACF8:
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD0Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DAD0Cu) [[unlikely]] return; }
L_002DAD0C:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD18u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAD18u) [[unlikely]] return; }
L_002DAD18:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD2Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DAD2Cu) [[unlikely]] return; }
L_002DAD2C:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD38u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAD38u) [[unlikely]] return; }
L_002DAD38:
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD44u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAD44u) [[unlikely]] return; }
L_002DAD44:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD50u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAD50u) [[unlikely]] return; }
L_002DAD50:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAC7Cu | kUnwind; return; } goto L_002DAC7C; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002DAD64:
    set32(c.r[2], ld32((c.r[20].w[0] + 536u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAB8Cu | kUnwind; return; } goto L_002DAB8C; }
L_002DAD74:
    set32(c.r[4], c.r[29].w[0] + 888u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAD84u) [[unlikely]] return; }
L_002DAD84:
    set32(c.r[2], ld32((c.r[29].w[0] + 888u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 892u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD9Cu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAD9Cu) [[unlikely]] return; }
L_002DAD9C:
    st32((c.r[20].w[0] + 448u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADA8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DADA8u) [[unlikely]] return; }
L_002DADA8:
    st32((c.r[20].w[0] + 452u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DADB4u) [[unlikely]] return; }
L_002DADB4:
    st32((c.r[20].w[0] + 456u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DADC0u) [[unlikely]] return; }
L_002DADC0:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADCCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DADCCu) [[unlikely]] return; }
L_002DADCC:
    st32((c.r[20].w[0] + 460u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DADD8u) [[unlikely]] return; }
L_002DADD8:
    st32((c.r[20].w[0] + 464u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DADECu) [[unlikely]] return; }
L_002DADEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 880u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 884u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE04u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DAE04u) [[unlikely]] return; }
L_002DAE04:
    st32((c.r[20].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DAE10u) [[unlikely]] return; }
L_002DAE10:
    st32((c.r[20].w[0] + 472u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DAE1Cu) [[unlikely]] return; }
L_002DAE1C:
    st32((c.r[20].w[0] + 476u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 872u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAE30u) [[unlikely]] return; }
L_002DAE30:
    set32(c.r[2], ld32((c.r[29].w[0] + 872u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 876u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DAE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DAE4Cu) [[unlikely]] return; }
L_002DAE4C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 480u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAE44u | kUnwind; return; } goto L_002DAE44; } }
    set32(c.r[4], c.r[29].w[0] + 864u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAE78u) [[unlikely]] return; }
L_002DAE78:
    set32(c.r[2], ld32((c.r[29].w[0] + 864u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 868u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DAE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAE94u) [[unlikely]] return; }
L_002DAE94:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 76u), c.f[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAE8Cu | kUnwind; return; } goto L_002DAE8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAEB8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAEB8u) [[unlikely]] return; }
L_002DAEB8:
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAEC4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAEC4u) [[unlikely]] return; }
L_002DAEC4:
    st32((c.r[20].w[0] + 100u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAED0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAED0u) [[unlikely]] return; }
L_002DAED0:
    st32((c.r[20].w[0] + 104u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAEDCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAEDCu) [[unlikely]] return; }
L_002DAEDC:
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DAEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAEECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAEECu) [[unlikely]] return; }
L_002DAEEC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAEE4u | kUnwind; return; } goto L_002DAEE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF10u) [[unlikely]] return; }
L_002DAF10:
    st32((c.r[20].w[0] + 124u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF1Cu) [[unlikely]] return; }
L_002DAF1C:
    st32((c.r[20].w[0] + 128u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF28u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF28u) [[unlikely]] return; }
L_002DAF28:
    st32((c.r[20].w[0] + 132u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF34u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF34u) [[unlikely]] return; }
L_002DAF34:
    st32((c.r[20].w[0] + 136u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF40u) [[unlikely]] return; }
L_002DAF40:
    st32((c.r[20].w[0] + 140u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF4Cu) [[unlikely]] return; }
L_002DAF4C:
    st32((c.r[20].w[0] + 144u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF58u) [[unlikely]] return; }
L_002DAF58:
    st32((c.r[20].w[0] + 148u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF64u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF64u) [[unlikely]] return; }
L_002DAF64:
    st32((c.r[20].w[0] + 152u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF70u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF70u) [[unlikely]] return; }
L_002DAF70:
    st32((c.r[20].w[0] + 156u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF7Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF7Cu) [[unlikely]] return; }
L_002DAF7C:
    st32((c.r[20].w[0] + 160u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF88u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF88u) [[unlikely]] return; }
L_002DAF88:
    st32((c.r[20].w[0] + 164u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAF94u) [[unlikely]] return; }
L_002DAF94:
    st32((c.r[20].w[0] + 168u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 856u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAFA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAFA8u) [[unlikely]] return; }
L_002DAFA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 856u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 860u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAFC0u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAFC0u) [[unlikely]] return; }
L_002DAFC0:
    st32((c.r[20].w[0] + 172u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAFCCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAFCCu) [[unlikely]] return; }
L_002DAFCC:
    st32((c.r[20].w[0] + 176u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAFE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DAFE0u) [[unlikely]] return; }
L_002DAFE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 848u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 852u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAFF8u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DAFF8u) [[unlikely]] return; }
L_002DAFF8:
    st32((c.r[20].w[0] + 180u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB004u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DB004u) [[unlikely]] return; }
L_002DB004:
    st32((c.r[20].w[0] + 184u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 840u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB018u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB018u) [[unlikely]] return; }
L_002DB018:
    set32(c.r[2], ld32((c.r[29].w[0] + 840u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 844u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 832u);
    c.budget -= 6;
L_002DB030:
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB03Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB03Cu) [[unlikely]] return; }
L_002DB03C:
    set32(c.r[3], ld32((c.r[29].w[0] + 832u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 544u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB060u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB060u) [[unlikely]] return; }
L_002DB060:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB06Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB06Cu) [[unlikely]] return; }
L_002DB06C:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB078u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB078u) [[unlikely]] return; }
L_002DB078:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB084u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB084u) [[unlikely]] return; }
L_002DB084:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB090u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB090u) [[unlikely]] return; }
L_002DB090:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 832u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB030u | kUnwind; return; } goto L_002DB030; }
    set32(c.r[4], c.r[29].w[0] + 824u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB0B4u) [[unlikely]] return; }
L_002DB0B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 824u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 828u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0CCu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB0CCu) [[unlikely]] return; }
L_002DB0CC:
    st16((c.r[20].w[0] + 592u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB0D8u) [[unlikely]] return; }
L_002DB0D8:
    st16((c.r[20].w[0] + 594u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB0E4u) [[unlikely]] return; }
L_002DB0E4:
    st16((c.r[20].w[0] + 596u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB0F8u) [[unlikely]] return; }
L_002DB0F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[4], c.r[29].w[0] + 808u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 820u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB118u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB118u) [[unlikely]] return; }
L_002DB118:
    set32(c.r[2], ld32((c.r[29].w[0] + 808u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB134u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB134u) [[unlikely]] return; }
L_002DB134:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 600u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(22ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB12Cu | kUnwind; return; } goto L_002DB12C; } }
    set32(c.r[4], c.r[29].w[0] + 800u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB160u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB160u) [[unlikely]] return; }
L_002DB160:
    set32(c.r[2], ld32((c.r[29].w[0] + 800u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 804u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB17Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB17Cu) [[unlikely]] return; }
L_002DB17C:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 604u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(22ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB174u | kUnwind; return; } goto L_002DB174; } }
    set32(c.r[4], c.r[29].w[0] + 792u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB1A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB1A8u) [[unlikely]] return; }
L_002DB1A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 792u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 796u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB1C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB1C4u) [[unlikely]] return; }
L_002DB1C4:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st16((c.r[3].w[0] + 612u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(22ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB1BCu | kUnwind; return; } goto L_002DB1BC; } }
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB1F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB1F0u) [[unlikely]] return; }
L_002DB1F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 784u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 788u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB20Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB20Cu) [[unlikely]] return; }
L_002DB20C:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 608u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(22ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB204u | kUnwind; return; } goto L_002DB204; } }
    set32(c.r[4], c.r[29].w[0] + 776u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB238u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB238u) [[unlikely]] return; }
L_002DB238:
    set32(c.r[2], ld32((c.r[29].w[0] + 776u)));
    set32(c.r[4], c.r[29].w[0] + 768u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB258u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB258u) [[unlikely]] return; }
L_002DB258:
    set32(c.r[2], ld32((c.r[29].w[0] + 768u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 772u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB274u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB274u) [[unlikely]] return; }
L_002DB274:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 960u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB26Cu | kUnwind; return; } goto L_002DB26C; } }
    set32(c.r[4], c.r[29].w[0] + 760u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB2A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB2A4u) [[unlikely]] return; }
L_002DB2A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 760u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 764u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB2C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB2C0u) [[unlikely]] return; }
L_002DB2C0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 952u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB2B8u | kUnwind; return; } goto L_002DB2B8; } }
    set32(c.r[4], c.r[29].w[0] + 752u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB2F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB2F0u) [[unlikely]] return; }
L_002DB2F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 752u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 756u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB30Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB30Cu) [[unlikely]] return; }
L_002DB30C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 956u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB304u | kUnwind; return; } goto L_002DB304; } }
    set32(c.r[4], c.r[29].w[0] + 744u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB33Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB33Cu) [[unlikely]] return; }
L_002DB33C:
    set32(c.r[2], ld32((c.r[29].w[0] + 744u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 748u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB358u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB358u) [[unlikely]] return; }
L_002DB358:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 964u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB350u | kUnwind; return; } goto L_002DB350; } }
    set32(c.r[4], c.r[29].w[0] + 736u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB388u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB388u) [[unlikely]] return; }
L_002DB388:
    set32(c.r[2], ld32((c.r[29].w[0] + 736u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 740u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB3A4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB3A4u) [[unlikely]] return; }
L_002DB3A4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 968u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB39Cu | kUnwind; return; } goto L_002DB39C; } }
    set32(c.r[4], c.r[29].w[0] + 728u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB3D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB3D4u) [[unlikely]] return; }
L_002DB3D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 728u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 732u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB3F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB3F0u) [[unlikely]] return; }
L_002DB3F0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 1412u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB3E8u | kUnwind; return; } goto L_002DB3E8; } }
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB41Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB41Cu) [[unlikely]] return; }
L_002DB41C:
    set32(c.r[2], ld32((c.r[29].w[0] + 720u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 724u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB434u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB434u) [[unlikely]] return; }
L_002DB434:
    st32((c.r[20].w[0] + 1924u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB440u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB440u) [[unlikely]] return; }
L_002DB440:
    st32((c.r[20].w[0] + 1928u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB44Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB44Cu) [[unlikely]] return; }
L_002DB44C:
    st32((c.r[20].w[0] + 1932u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB458u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB458u) [[unlikely]] return; }
L_002DB458:
    st32((c.r[20].w[0] + 1936u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 712u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB46Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB46Cu) [[unlikely]] return; }
L_002DB46C:
    set32(c.r[2], ld32((c.r[29].w[0] + 712u)));
    set32(c.r[4], c.r[29].w[0] + 704u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 716u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB48Cu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB48Cu) [[unlikely]] return; }
L_002DB48C:
    set32(c.r[2], ld32((c.r[29].w[0] + 704u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 708u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB4A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB4A8u) [[unlikely]] return; }
L_002DB4A8:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1444u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB4A0u | kUnwind; return; } goto L_002DB4A0; } }
    set32(c.r[4], c.r[29].w[0] + 696u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB4D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB4D8u) [[unlikely]] return; }
L_002DB4D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 696u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 700u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB4F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB4F4u) [[unlikely]] return; }
L_002DB4F4:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1448u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB4ECu | kUnwind; return; } goto L_002DB4EC; } }
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB524u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB524u) [[unlikely]] return; }
L_002DB524:
    set32(c.r[2], ld32((c.r[29].w[0] + 688u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 692u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB540u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB540u) [[unlikely]] return; }
L_002DB540:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1464u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB538u | kUnwind; return; } goto L_002DB538; } }
    set32(c.r[4], c.r[29].w[0] + 680u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB570u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB570u) [[unlikely]] return; }
L_002DB570:
    set32(c.r[2], ld32((c.r[29].w[0] + 680u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 684u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB58Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB58Cu) [[unlikely]] return; }
L_002DB58C:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 1488u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB584u | kUnwind; return; } goto L_002DB584; } }
    set32(c.r[4], c.r[29].w[0] + 672u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB5BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB5BCu) [[unlikely]] return; }
L_002DB5BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 676u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB5D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB5D8u) [[unlikely]] return; }
L_002DB5D8:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1452u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB5D0u | kUnwind; return; } goto L_002DB5D0; } }
    set32(c.r[4], c.r[29].w[0] + 664u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB608u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB608u) [[unlikely]] return; }
L_002DB608:
    set32(c.r[2], ld32((c.r[29].w[0] + 664u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 668u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB624u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB624u) [[unlikely]] return; }
L_002DB624:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1456u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB61Cu | kUnwind; return; } goto L_002DB61C; } }
    set32(c.r[4], c.r[29].w[0] + 656u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB654u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB654u) [[unlikely]] return; }
L_002DB654:
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 660u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB670u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB670u) [[unlikely]] return; }
L_002DB670:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1460u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB668u | kUnwind; return; } goto L_002DB668; } }
    set32(c.r[4], c.r[29].w[0] + 648u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB6A0u) [[unlikely]] return; }
L_002DB6A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 648u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB6BCu) [[unlikely]] return; }
L_002DB6BC:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1468u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB6B4u | kUnwind; return; } goto L_002DB6B4; } }
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB6ECu) [[unlikely]] return; }
L_002DB6EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 644u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB708u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB708u) [[unlikely]] return; }
L_002DB708:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1472u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB700u | kUnwind; return; } goto L_002DB700; } }
    set32(c.r[4], c.r[29].w[0] + 632u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB738u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB738u) [[unlikely]] return; }
L_002DB738:
    set32(c.r[2], ld32((c.r[29].w[0] + 632u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 636u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB754u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB754u) [[unlikely]] return; }
L_002DB754:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1476u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB74Cu | kUnwind; return; } goto L_002DB74C; } }
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB784u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB784u) [[unlikely]] return; }
L_002DB784:
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB7A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB7A0u) [[unlikely]] return; }
L_002DB7A0:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1480u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB798u | kUnwind; return; } goto L_002DB798; } }
    set32(c.r[4], c.r[29].w[0] + 616u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB7D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB7D0u) [[unlikely]] return; }
L_002DB7D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 616u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB7ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DB7ECu) [[unlikely]] return; }
L_002DB7EC:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1484u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB7E4u | kUnwind; return; } goto L_002DB7E4; } }
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB81Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB81Cu) [[unlikely]] return; }
L_002DB81C:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 612u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB834u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB834u) [[unlikely]] return; }
L_002DB834:
    st16((c.r[20].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB840u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB840u) [[unlikely]] return; }
L_002DB840:
    st16((c.r[20].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB84Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DB84Cu) [[unlikely]] return; }
L_002DB84C:
    st32((c.r[20].w[0] + 192u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB858u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DB858u) [[unlikely]] return; }
L_002DB858:
    st32((c.r[20].w[0] + 196u), c.f[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DB860:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 600u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[20].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB884u); set32(c.r[16], c.r[2].w[0] + 200u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB884u) [[unlikely]] return; }
L_002DB884:
    set32(c.r[2], ld32((c.r[29].w[0] + 600u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 604u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB89Cu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB89Cu) [[unlikely]] return; }
L_002DB89C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB8A8u) [[unlikely]] return; }
L_002DB8A8:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DB8B4u) [[unlikely]] return; }
L_002DB8B4:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DB8C0u) [[unlikely]] return; }
L_002DB8C0:
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DB8CCu) [[unlikely]] return; }
L_002DB8CC:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DB8D8u) [[unlikely]] return; }
L_002DB8D8:
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB8E4u) [[unlikely]] return; }
L_002DB8E4:
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB8F0u) [[unlikely]] return; }
L_002DB8F0:
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB8FCu) [[unlikely]] return; }
L_002DB8FC:
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB908u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DB908u) [[unlikely]] return; }
L_002DB908:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 32u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB860u | kUnwind; return; } goto L_002DB860; } }
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB928u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB928u) [[unlikely]] return; }
L_002DB928:
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB940u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB940u) [[unlikely]] return; }
L_002DB940:
    st32((c.r[20].w[0] + 380u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB94Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB94Cu) [[unlikely]] return; }
L_002DB94C:
    st32((c.r[20].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB958u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB958u) [[unlikely]] return; }
L_002DB958:
    st32((c.r[20].w[0] + 388u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB964u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB964u) [[unlikely]] return; }
L_002DB964:
    st32((c.r[20].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB970u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB970u) [[unlikely]] return; }
L_002DB970:
    st32((c.r[20].w[0] + 396u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB97Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB97Cu) [[unlikely]] return; }
L_002DB97C:
    st32((c.r[20].w[0] + 400u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB988u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DB988u) [[unlikely]] return; }
L_002DB988:
    st32((c.r[20].w[0] + 404u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 584u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB99Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB99Cu) [[unlikely]] return; }
L_002DB99C:
    set32(c.r[2], ld32((c.r[29].w[0] + 584u)));
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] + 1976u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 588u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB9C0u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DB9C0u) [[unlikely]] return; }
L_002DB9C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 580u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DB9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB9DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x002911A0u; return; } if (c.pc != 0x002DB9DCu) [[unlikely]] return; }
L_002DB9DC:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB9D4u | kUnwind; return; } goto L_002DB9D4; } }
    set32(c.r[4], c.r[29].w[0] + 568u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA10u); set32(c.r[16], c.r[20].w[0] + 2048u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBA10u) [[unlikely]] return; }
L_002DBA10:
    set32(c.r[2], ld32((c.r[29].w[0] + 568u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DBA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA2Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x002911A0u; return; } if (c.pc != 0x002DBA2Cu) [[unlikely]] return; }
L_002DBA2C:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBA24u | kUnwind; return; } goto L_002DBA24; } }
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA60u); set32(c.r[16], c.r[20].w[0] + 2120u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBA60u) [[unlikely]] return; }
L_002DBA60:
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 564u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DBA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA7Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DBA7Cu) [[unlikely]] return; }
L_002DBA7C:
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBA74u | kUnwind; return; } goto L_002DBA74; } }
    set32(c.r[4], c.r[29].w[0] + 552u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBAB0u); set32(c.r[16], c.r[20].w[0] + 2192u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBAB0u) [[unlikely]] return; }
L_002DBAB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 552u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DBAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBACCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DBACCu) [[unlikely]] return; }
L_002DBACC:
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBAC4u | kUnwind; return; } goto L_002DBAC4; } }
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB00u); set32(c.r[16], c.r[20].w[0] + 2264u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBB00u) [[unlikely]] return; }
L_002DBB00:
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 548u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DBB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x002911A0u; return; } if (c.pc != 0x002DBB1Cu) [[unlikely]] return; }
L_002DBB1C:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBB14u | kUnwind; return; } goto L_002DBB14; } }
    set32(c.r[4], c.r[29].w[0] + 536u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB50u); set32(c.r[16], c.r[20].w[0] + 2336u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBB50u) [[unlikely]] return; }
L_002DBB50:
    set32(c.r[2], ld32((c.r[29].w[0] + 536u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 540u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DBB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x002911A0u; return; } if (c.pc != 0x002DBB6Cu) [[unlikely]] return; }
L_002DBB6C:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBB64u | kUnwind; return; } goto L_002DBB64; } }
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBB9Cu) [[unlikely]] return; }
L_002DBB9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 532u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002DBBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBB8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DBBB8u) [[unlikely]] return; }
L_002DBBB8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 408u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBBB0u | kUnwind; return; } goto L_002DBBB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBDCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DBBDCu) [[unlikely]] return; }
L_002DBBDC:
    st32((c.r[20].w[0] + 428u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBE8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DBBE8u) [[unlikely]] return; }
L_002DBBE8:
    st32((c.r[20].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DBBF4u) [[unlikely]] return; }
L_002DBBF4:
    st32((c.r[20].w[0] + 436u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBC00u) [[unlikely]] return; }
L_002DBC00:
    st32((c.r[20].w[0] + 440u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC0Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBC0Cu) [[unlikely]] return; }
L_002DBC0C:
    st32((c.r[20].w[0] + 444u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 520u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBC20u) [[unlikely]] return; }
L_002DBC20:
    set32(c.r[2], ld32((c.r[29].w[0] + 520u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 524u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC38u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBC38u) [[unlikely]] return; }
L_002DBC38:
    st32((c.r[20].w[0] + 1940u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC44u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBC44u) [[unlikely]] return; }
L_002DBC44:
    st32((c.r[20].w[0] + 1944u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC50u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBC50u) [[unlikely]] return; }
L_002DBC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBC6C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBC6C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 1948u), c.f[0]);  goto L_002DBC88; }
    c.f[0] = c.f[1];
    st32((c.r[20].w[0] + 1948u), c.f[0]);
    c.budget -= 2;
L_002DBC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBC90u) [[unlikely]] return; }
L_002DBC90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBCAC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBCAC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 1952u), c.f[0]);  goto L_002DBCC8; }
    c.f[0] = c.f[1];
    st32((c.r[20].w[0] + 1952u), c.f[0]);
    c.budget -= 2;
L_002DBCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBCD0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBCD0u) [[unlikely]] return; }
L_002DBCD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBCEC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBCEC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 1956u), c.f[0]);  goto L_002DBD08; }
    c.f[0] = c.f[1];
    st32((c.r[20].w[0] + 1956u), c.f[0]);
    c.budget -= 2;
L_002DBD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBD10u) [[unlikely]] return; }
L_002DBD10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBD2C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBD2C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 1960u), c.f[0]);  goto L_002DBD48; }
    c.f[0] = c.f[1];
    st32((c.r[20].w[0] + 1960u), c.f[0]);
    c.budget -= 2;
L_002DBD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD50u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBD50u) [[unlikely]] return; }
L_002DBD50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBD6C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBD6C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 1964u), c.f[0]);  goto L_002DBD88; }
    c.f[0] = c.f[1];
    st32((c.r[20].w[0] + 1964u), c.f[0]);
    c.budget -= 2;
L_002DBD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBD90u) [[unlikely]] return; }
L_002DBD90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBDAC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBDAC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 1968u), c.f[0]);  goto L_002DBDC8; }
    c.f[0] = c.f[1];
    st32((c.r[20].w[0] + 1968u), c.f[0]);
    c.budget -= 2;
L_002DBDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDD0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBDD0u) [[unlikely]] return; }
L_002DBDD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBDEC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBDEC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 1972u), c.f[0]);  goto L_002DBE08; }
    c.f[0] = c.f[1];
    st32((c.r[20].w[0] + 1972u), c.f[0]);
    c.budget -= 2;
L_002DBE08:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBE18u) [[unlikely]] return; }
L_002DBE18:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[4], c.r[29].w[0] + 504u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE38u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBE38u) [[unlikely]] return; }
L_002DBE38:
    set32(c.r[2], ld32((c.r[29].w[0] + 504u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 508u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE50u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBE50u) [[unlikely]] return; }
L_002DBE50:
    st32((c.r[20].w[0] + 2408u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE5Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBE5Cu) [[unlikely]] return; }
L_002DBE5C:
    st32((c.r[20].w[0] + 2412u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBE68u) [[unlikely]] return; }
L_002DBE68:
    st32((c.r[20].w[0] + 2416u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE74u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBE74u) [[unlikely]] return; }
L_002DBE74:
    st32((c.r[20].w[0] + 2420u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBE88u) [[unlikely]] return; }
L_002DBE88:
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEA0u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBEA0u) [[unlikely]] return; }
L_002DBEA0:
    st32((c.r[20].w[0] + 2424u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBEACu) [[unlikely]] return; }
L_002DBEAC:
    st32((c.r[20].w[0] + 2428u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEB8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBEB8u) [[unlikely]] return; }
L_002DBEB8:
    st32((c.r[20].w[0] + 2432u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEC4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBEC4u) [[unlikely]] return; }
L_002DBEC4:
    st32((c.r[20].w[0] + 2440u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBED0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBED0u) [[unlikely]] return; }
L_002DBED0:
    st32((c.r[20].w[0] + 2436u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 488u);
    st32((c.r[20].w[0] + 2444u), c.f[0]);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBEE8u) [[unlikely]] return; }
L_002DBEE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF00u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBF00u) [[unlikely]] return; }
L_002DBF00:
    st32((c.r[20].w[0] + 2448u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF0Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DBF0Cu) [[unlikely]] return; }
L_002DBF0C:
    st32((c.r[20].w[0] + 2452u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBF20u) [[unlikely]] return; }
L_002DBF20:
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF38u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DBF38u) [[unlikely]] return; }
L_002DBF38:
    st32((c.r[20].w[0] + 2456u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF44u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DBF44u) [[unlikely]] return; }
L_002DBF44:
    st32((c.r[20].w[0] + 2460u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF50u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DBF50u) [[unlikely]] return; }
L_002DBF50:
    st32((c.r[20].w[0] + 2464u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 472u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBF64u) [[unlikely]] return; }
L_002DBF64:
    set32(c.r[2], ld32((c.r[29].w[0] + 472u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 6;
L_002DBF7C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF8Cu); set32(c.r[5], c.r[2].w[0] + 2480u);  if (depth < kMaxDepth) unit_005C(c, 96u, depth + 1u); else { c.pc = 0x00290EC0u; return; } if (c.pc != 0x002DBF8Cu) [[unlikely]] return; }
L_002DBF8C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBF7Cu | kUnwind; return; } goto L_002DBF7C; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBFACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DBFACu) [[unlikely]] return; }
L_002DBFAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] << 1);
    c.budget -= 6;
L_002DBFC4:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 5);
    c.budget -= 5;
L_002DBFD8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBFE8u); set32(c.r[5], c.r[2].w[0] + 2592u);  if (depth < kMaxDepth) unit_005C(c, 114u, depth + 1u); else { c.pc = 0x002910C0u; return; } if (c.pc != 0x002DBFE8u) [[unlikely]] return; }
L_002DBFE8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBFD8u | kUnwind; return; } goto L_002DBFD8; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_006F(c, 1u, depth);
}

}
