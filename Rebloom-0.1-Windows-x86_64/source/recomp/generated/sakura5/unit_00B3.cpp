#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B3[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003EC000;
    case 2u: goto L_003EC00C;
    case 3u: goto L_003EC040;
    case 4u: goto L_003EC044;
    case 5u: goto L_003EC050;
    case 6u: goto L_003EC070;
    case 7u: goto L_003EC0D4;
    case 8u: goto L_003EC0E4;
    case 9u: goto L_003EC170;
    case 10u: goto L_003EC1D4;
    case 11u: goto L_003EC1E0;
    case 12u: goto L_003EC274;
    case 13u: goto L_003EC2A4;
    case 14u: goto L_003EC2F4;
    case 15u: goto L_003EC318;
    case 16u: goto L_003EC344;
    case 17u: goto L_003EC380;
    case 18u: goto L_003EC3B0;
    case 19u: goto L_003EC3F0;
    case 20u: goto L_003EC400;
    case 21u: goto L_003EC420;
    case 22u: goto L_003EC478;
    case 23u: goto L_003EC48C;
    case 24u: goto L_003EC4A0;
    case 25u: goto L_003EC4E8;
    case 26u: goto L_003EC4F0;
    case 27u: goto L_003EC4F8;
    case 28u: goto L_003EC520;
    case 29u: goto L_003EC528;
    case 30u: goto L_003EC548;
    case 31u: goto L_003EC560;
    case 32u: goto L_003EC570;
    case 33u: goto L_003EC580;
    case 34u: goto L_003EC5A0;
    case 35u: goto L_003EC634;
    case 36u: goto L_003EC650;
    case 37u: goto L_003EC65C;
    case 38u: goto L_003EC6B4;
    case 39u: goto L_003EC6C4;
    case 40u: goto L_003EC784;
    case 41u: goto L_003EC790;
    case 42u: goto L_003EC7A4;
    case 43u: goto L_003EC7AC;
    case 44u: goto L_003EC7F4;
    case 45u: goto L_003EC800;
    case 46u: goto L_003EC814;
    case 47u: goto L_003EC968;
    case 48u: goto L_003EC978;
    case 49u: goto L_003EC9A0;
    case 50u: goto L_003EC9C8;
    case 51u: goto L_003ECA20;
    case 52u: goto L_003ECA50;
    case 53u: goto L_003ECA60;
    case 54u: goto L_003ECA84;
    case 55u: goto L_003ECAA8;
    case 56u: goto L_003ECADC;
    case 57u: goto L_003ECAF0;
    case 58u: goto L_003ECB10;
    case 59u: goto L_003ECB24;
    case 60u: goto L_003ECBD0;
    case 61u: goto L_003ECBFC;
    case 62u: goto L_003ECC08;
    case 63u: goto L_003ECC20;
    case 64u: goto L_003ECC40;
    case 65u: goto L_003ECC74;
    case 66u: goto L_003ECC90;
    case 67u: goto L_003ECCB0;
    case 68u: goto L_003ECCD8;
    case 69u: goto L_003ECCF4;
    case 70u: goto L_003ECD10;
    case 71u: goto L_003ECD20;
    case 72u: goto L_003ECE50;
    case 73u: goto L_003ECE60;
    case 74u: goto L_003ECE8C;
    case 75u: goto L_003ECEDC;
    case 76u: goto L_003ECF08;
    case 77u: goto L_003ECF84;
    case 78u: goto L_003ECFA4;
    case 79u: goto L_003ED008;
    case 80u: goto L_003ED010;
    case 81u: goto L_003ED040;
    case 82u: goto L_003ED050;
    case 83u: goto L_003ED078;
    case 84u: goto L_003ED08C;
    case 85u: goto L_003ED0A0;
    case 86u: goto L_003ED0F0;
    case 87u: goto L_003ED18C;
    case 88u: goto L_003ED1A8;
    case 89u: goto L_003ED1B0;
    case 90u: goto L_003ED1C0;
    case 91u: goto L_003ED204;
    case 92u: goto L_003ED228;
    case 93u: goto L_003ED238;
    case 94u: goto L_003ED244;
    case 95u: goto L_003ED250;
    case 96u: goto L_003ED25C;
    case 97u: goto L_003ED280;
    case 98u: goto L_003ED290;
    case 99u: goto L_003ED2DC;
    case 100u: goto L_003ED320;
    case 101u: goto L_003ED328;
    case 102u: goto L_003ED330;
    case 103u: goto L_003ED33C;
    case 104u: goto L_003ED348;
    case 105u: goto L_003ED350;
    case 106u: goto L_003ED358;
    case 107u: goto L_003ED368;
    case 108u: goto L_003ED378;
    case 109u: goto L_003ED390;
    case 110u: goto L_003ED398;
    case 111u: goto L_003ED3C4;
    case 112u: goto L_003ED3E0;
    case 113u: goto L_003ED450;
    case 114u: goto L_003ED45C;
    case 115u: goto L_003ED470;
    case 116u: goto L_003ED47C;
    case 117u: goto L_003ED490;
    case 118u: goto L_003ED4A8;
    case 119u: goto L_003ED4B8;
    case 120u: goto L_003ED588;
    case 121u: goto L_003ED5A0;
    case 122u: goto L_003ED5B8;
    case 123u: goto L_003ED5D0;
    case 124u: goto L_003ED5F8;
    case 125u: goto L_003ED608;
    case 126u: goto L_003ED618;
    case 127u: goto L_003ED634;
    case 128u: goto L_003ED64C;
    case 129u: goto L_003ED664;
    case 130u: goto L_003ED68C;
    case 131u: goto L_003ED6A0;
    case 132u: goto L_003ED6B0;
    case 133u: goto L_003ED6C0;
    case 134u: goto L_003ED6EC;
    case 135u: goto L_003ED714;
    case 136u: goto L_003ED758;
    case 137u: goto L_003ED780;
    case 138u: goto L_003ED78C;
    case 139u: goto L_003ED7B8;
    case 140u: goto L_003ED800;
    case 141u: goto L_003ED80C;
    case 142u: goto L_003ED838;
    case 143u: goto L_003ED880;
    case 144u: goto L_003ED88C;
    case 145u: goto L_003ED8C4;
    case 146u: goto L_003ED900;
    case 147u: goto L_003ED90C;
    case 148u: goto L_003ED944;
    case 149u: goto L_003ED980;
    case 150u: goto L_003ED9AC;
    case 151u: goto L_003ED9D4;
    case 152u: goto L_003EDA10;
    case 153u: goto L_003EDA3C;
    case 154u: goto L_003EDA64;
    case 155u: goto L_003EDAD8;
    case 156u: goto L_003EDAE8;
    case 157u: goto L_003EDB0C;
    case 158u: goto L_003EDB18;
    case 159u: goto L_003EDB2C;
    case 160u: goto L_003EDB40;
    case 161u: goto L_003EDB6C;
    case 162u: goto L_003EDB84;
    case 163u: goto L_003EDB9C;
    case 164u: goto L_003EDBC4;
    case 165u: goto L_003EDBD4;
    case 166u: goto L_003EDBE4;
    case 167u: goto L_003EDC04;
    case 168u: goto L_003EDC1C;
    case 169u: goto L_003EDC34;
    case 170u: goto L_003EDC58;
    case 171u: goto L_003EDC70;
    case 172u: goto L_003EDC88;
    case 173u: goto L_003EDCAC;
    case 174u: goto L_003EDCD0;
    case 175u: goto L_003EDD00;
    case 176u: goto L_003EDD14;
    case 177u: goto L_003EDD48;
    case 178u: goto L_003EDD58;
    case 179u: goto L_003EDDD0;
    case 180u: goto L_003EDDEC;
    case 181u: goto L_003EDE20;
    case 182u: goto L_003EDE84;
    case 183u: goto L_003EE6D0;
    case 184u: goto L_003EE70C;
    case 185u: goto L_003EE720;
    case 186u: goto L_003EE780;
    case 187u: goto L_003EE8F0;
    case 188u: goto L_003EE914;
    case 189u: goto L_003EE984;
    case 190u: goto L_003EE994;
    case 191u: goto L_003EE9A4;
    case 192u: goto L_003EE9B4;
    case 193u: goto L_003EE9D0;
    case 194u: goto L_003EEA28;
    case 195u: goto L_003EEA40;
    case 196u: goto L_003EEACC;
    case 197u: goto L_003EEAE0;
    case 198u: goto L_003EEB08;
    case 199u: goto L_003EEB18;
    case 200u: goto L_003EEB28;
    case 201u: goto L_003EEB38;
    case 202u: goto L_003EEB54;
    case 203u: goto L_003EEB68;
    case 204u: goto L_003EED48;
    case 205u: goto L_003EED90;
    case 206u: goto L_003EEDD8;
    case 207u: goto L_003EEDF0;
    case 208u: goto L_003EEE54;
    case 209u: goto L_003EEE78;
    case 210u: goto L_003EEEA0;
    case 211u: goto L_003EEEFC;
    case 212u: goto L_003EEF28;
    case 213u: goto L_003EEF68;
    case 214u: goto L_003EEFA0;
    case 215u: goto L_003EEFC0;
    case 216u: goto L_003EEFF0;
    case 217u: goto L_003EF000;
    case 218u: goto L_003EF024;
    case 219u: goto L_003EF034;
    case 220u: goto L_003EF074;
    case 221u: goto L_003EF0A0;
    case 222u: goto L_003EF0F4;
    case 223u: goto L_003EF134;
    case 224u: goto L_003EF174;
    case 225u: goto L_003EF1B4;
    case 226u: goto L_003EF1F4;
    case 227u: goto L_003EF218;
    case 228u: goto L_003EF258;
    case 229u: goto L_003EF298;
    case 230u: goto L_003EF2D8;
    case 231u: goto L_003EF318;
    case 232u: goto L_003EF358;
    case 233u: goto L_003EF37C;
    case 234u: goto L_003EF3A0;
    case 235u: goto L_003EF3B4;
    case 236u: goto L_003EF410;
    case 237u: goto L_003EF440;
    case 238u: goto L_003EF450;
    case 239u: goto L_003EF4E0;
    case 240u: goto L_003EF524;
    case 241u: goto L_003EF5DC;
    case 242u: goto L_003EF600;
    case 243u: goto L_003EF658;
    case 244u: goto L_003EF678;
    case 245u: goto L_003EF690;
    case 246u: goto L_003EF6A4;
    case 247u: goto L_003EF6E0;
    case 248u: goto L_003EF730;
    case 249u: goto L_003EF744;
    case 250u: goto L_003EF794;
    case 251u: goto L_003EF7C0;
    case 252u: goto L_003EF800;
    case 253u: goto L_003EF814;
    case 254u: goto L_003EF82C;
    case 255u: goto L_003EF850;
    case 256u: goto L_003EF878;
    case 257u: goto L_003EF894;
    case 258u: goto L_003EF8B0;
    case 259u: goto L_003EF8C0;
    case 260u: goto L_003EF8F0;
    case 261u: goto L_003EF918;
    case 262u: goto L_003EF95C;
    case 263u: goto L_003EF970;
    case 264u: goto L_003EF9B0;
    case 265u: goto L_003EFA64;
    case 266u: goto L_003EFA98;
    case 267u: goto L_003EFAB0;
    case 268u: goto L_003EFB28;
    case 269u: goto L_003EFB5C;
    case 270u: goto L_003EFB80;
    case 271u: goto L_003EFB98;
    case 272u: goto L_003EFBB0;
    case 273u: goto L_003EFBC8;
    case 274u: goto L_003EFD70;
    case 275u: goto L_003EFDB8;
    case 276u: goto L_003EFE80;
    case 277u: goto L_003EFEEC;
    case 278u: goto L_003EFF00;
    case 279u: goto L_003EFF24;
    case 280u: goto L_003EFF40;
    case 281u: goto L_003EFFA0;
    case 282u: goto L_003EFFC0;
    default: bad_entry(c, 0x003EC000u); return;
    }
L_003EC000:
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC00Cu);  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x003EC00Cu) [[unlikely]] return; }
L_003EC00C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = c.r[17].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 13;
L_003EC040:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003EC044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003EC050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EC070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003EC39C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  goto L_003EC31C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003EC0C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_003EC0E8; } }
L_003EC0C0:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EC0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0D4u);  if (depth < kMaxDepth) unit_00B3(c, 31u, depth + 1u); else { c.pc = 0x003EC560u; return; } if (c.pc != 0x003EC0D4u) [[unlikely]] return; }
L_003EC0D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EC0E4; } }
L_003EC0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0E4u);  if (depth < kMaxDepth) unit_00B3(c, 32u, depth + 1u); else { c.pc = 0x003EC570u; return; } if (c.pc != 0x003EC0E4u) [[unlikely]] return; }
L_003EC0E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003EC0E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003EC3A0; }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.f[1] = ld32((c.r[16].w[0] + 248u));
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);  if (t) { goto L_003EC20C; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 68u));  goto L_003EC18C; }
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 64u), c.f[3]);  goto L_003EC318; }
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003EC150; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.f[0]);  if (t) { goto L_003EC318; } }
L_003EC150:
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_003EC174; }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC170u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 53u, depth + 1u); else { c.pc = 0x003ECA60u; return; } if (c.pc != 0x003EC170u) [[unlikely]] return; }
L_003EC170:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_003EC174:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EC318; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003EC318; } }
L_003EC18C:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 64u), c.f[3]);  goto L_003EC318; }
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003EC1B4; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.f[0]);  if (t) { goto L_003EC318; } }
L_003EC1B4:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 252u)));  goto L_003EC1D8; }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC1D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 53u, depth + 1u); else { c.pc = 0x003ECA60u; return; } if (c.pc != 0x003EC1D4u) [[unlikely]] return; }
L_003EC1D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 252u)));
    c.budget -= 1;
L_003EC1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC1E0u);  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x003EC1E0u) [[unlikely]] return; }
L_003EC1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EC318; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003EC318; } }
L_003EC20C:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 68u));  goto L_003EC2AC; }
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 64u), c.f[3]);  goto L_003EC318; }
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003EC254; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.f[0]);  if (t) { goto L_003EC318; } }
L_003EC254:
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 68u));  goto L_003EC278; }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC274u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 53u, depth + 1u); else { c.pc = 0x003ECA60u; return; } if (c.pc != 0x003EC274u) [[unlikely]] return; }
L_003EC274:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.budget -= 1;
L_003EC278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 2u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003EC318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC2A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 34u, depth + 1u); else { c.pc = 0x003EC5A0u; return; } if (c.pc != 0x003EC2A4u) [[unlikely]] return; }
L_003EC2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EC318; } }
L_003EC2AC:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 64u), c.f[3]);  goto L_003EC318; }
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003EC2D4; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.f[0]);  if (t) { goto L_003EC318; } }
L_003EC2D4:
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 68u));  goto L_003EC2F8; }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC2F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 53u, depth + 1u); else { c.pc = 0x003ECA60u; return; } if (c.pc != 0x003EC2F4u) [[unlikely]] return; }
L_003EC2F4:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.budget -= 1;
L_003EC2F8:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003EC318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC318u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 34u, depth + 1u); else { c.pc = 0x003EC5A0u; return; } if (c.pc != 0x003EC318u) [[unlikely]] return; }
L_003EC318:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003EC31C:
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003EC394; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EC390; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC344u); c.f[13] = ld32((c.r[16].w[0] + 84u));  if (depth < kMaxDepth) unit_000E(c, 187u, depth + 1u); else { c.pc = 0x001594F0u; return; } if (c.pc != 0x003EC344u) [[unlikely]] return; }
L_003EC344:
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[16].w[0] + 88u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 84u), c.f[1]);  if (t) { goto L_003EC390; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC380u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x003EC380u) [[unlikely]] return; }
L_003EC380:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003EC390:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003EC394:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003EC39C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003EC3A0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EC3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EC410; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EC3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003EC414; } }
L_003EC3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC3F0u);  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003EC3F0u) [[unlikely]] return; }
L_003EC3F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EC410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC400u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 33u, depth + 1u); else { c.pc = 0x003EC580u; return; } if (c.pc != 0x003EC400u) [[unlikely]] return; }
L_003EC400:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003EC410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EC414:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EC420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EC48C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[17].w[0] + 112u);  goto L_003EC480; }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EC47C; } }
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[6], c.r[17].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC478u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003EC478u) [[unlikely]] return; }
L_003EC478:
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 1;
L_003EC47C:
    set32(c.r[6], c.r[17].w[0] + 112u);
    c.budget -= 1;
L_003EC480:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC48Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003EC48Cu) [[unlikely]] return; }
L_003EC48C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EC4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EC540; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  goto L_003EC510; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003EC4E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003EC550; } }
L_003EC4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC4E8u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003EC4E8u) [[unlikely]] return; }
L_003EC4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC4F0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003EC4F0u) [[unlikely]] return; }
L_003EC4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC4F8u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 272u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x003EC4F8u) [[unlikely]] return; }
L_003EC4F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003EC54C; } }
L_003EC510:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC520u); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003EC520u) [[unlikely]] return; }
L_003EC520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC528u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 272u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x003EC528u) [[unlikely]] return; }
L_003EC528:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003EC54C; } }
L_003EC540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC548u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003EC548u) [[unlikely]] return; }
L_003EC548:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_003EC54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003EC550:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EC560:
    c.f[12] = ld32((c.r[4].w[0] + 64u));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 4;
    { set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00158EB0u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 150u, depth); }
L_003EC570:
    c.f[12] = ld32((c.r[4].w[0] + 64u));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 4;
    { set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00158EE0u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 151u, depth); }
L_003EC580:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003EC5A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EC6BC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003EC6A0; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003EC5E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003EC6C8; } }
L_003EC5E4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EC6C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 1u);  goto L_003EC698; }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EC67C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003EC654; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EC650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC634u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003EC634u) [[unlikely]] return; }
L_003EC634:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[12] = c.f[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC650u); set32(c.r[4], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC650u) [[unlikely]] return; }
L_003EC650:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EC654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC65Cu);  if (depth < kMaxDepth) unit_00B3(c, 33u, depth + 1u); else { c.pc = 0x003EC580u; return; } if (c.pc != 0x003EC65Cu) [[unlikely]] return; }
L_003EC65C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003EC984; } }
L_003EC67C:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { st32((c.r[17].w[0] + 48u), 0u);  goto L_003EC6C4; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EC6C4; } }
L_003EC698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003EC6C4; } }
L_003EC6A0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EC6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC6B4u);  if (depth < kMaxDepth) unit_00B3(c, 24u, depth + 1u); else { c.pc = 0x003EC4A0u; return; } if (c.pc != 0x003EC6B4u) [[unlikely]] return; }
L_003EC6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EC6C4; } }
L_003EC6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC6C4u);  if (depth < kMaxDepth) unit_00B3(c, 24u, depth + 1u); else { c.pc = 0x003EC4A0u; return; } if (c.pc != 0x003EC6C4u) [[unlikely]] return; }
L_003EC6C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003EC6C8:
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003EC710; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003EC718; } }
L_003EC710:
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003EC718:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.f[20] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_003EC734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0])));  if (t) { goto L_003EC81C; } }
L_003EC734:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 76u)));  goto L_003EC7B4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  goto L_003EC76C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003EC82C; } }
L_003EC76C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC784u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003EC784u) [[unlikely]] return; }
L_003EC784:
    st32((c.r[17].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC790u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x003EC790u) [[unlikely]] return; }
L_003EC790:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 252u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC7A4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x003EC7A4u) [[unlikely]] return; }
L_003EC7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC7ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 49u, depth + 1u); else { c.pc = 0x003EC9A0u; return; } if (c.pc != 0x003EC7ACu) [[unlikely]] return; }
L_003EC7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_003EC830; } }
L_003EC7B4:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 20u)));  goto L_003EC7DC; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003EC82C; } }
L_003EC7DC:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC7F4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003EC7F4u) [[unlikely]] return; }
L_003EC7F4:
    st32((c.r[17].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC800u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 296u, depth + 1u); else { c.pc = 0x0016F350u; return; } if (c.pc != 0x003EC800u) [[unlikely]] return; }
L_003EC800:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 252u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC814u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 149u, depth + 1u); else { c.pc = 0x00158EA0u; return; } if (c.pc != 0x003EC814u) [[unlikely]] return; }
L_003EC814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EC82C; } }
L_003EC81C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003EC984; } }
L_003EC82C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003EC830:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 240u)));  goto L_003EC8A4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.f[0] = ld32((c.r[17].w[0] + 244u));  goto L_003EC864; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EC860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_003EC868; } }
L_003EC860:
    c.f[0] = ld32((c.r[17].w[0] + 244u));
    c.budget -= 1;
L_003EC864:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_003EC868:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_003EC888; }
    st32((c.r[17].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_003EC888:
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 68u), c.f[1]);  if (t) { goto L_003EC914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.f[20]);  if (t) { goto L_003EC914; } }
L_003EC8A4:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.f[0] = ld32((c.r[17].w[0] + 244u));  goto L_003EC8C8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EC8C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_003EC8CC; } }
L_003EC8C4:
    c.f[0] = ld32((c.r[17].w[0] + 244u));
    c.budget -= 1;
L_003EC8C8:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_003EC8CC:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_003EC8FC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
L_003EC8FC:
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 68u), c.f[1]);  if (t) { goto L_003EC914; } }
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 1;
L_003EC914:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[17].w[0] + 92u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 13;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  goto L_003EC950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 240u)));  if (t) { goto L_003EC97C; } }
L_003EC950:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  goto L_003EC970; }
    c.f[12] = ld32((c.r[17].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC968u); set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x003EC968u) [[unlikely]] return; }
L_003EC968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EC978; } }
L_003EC970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC978u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 151u, depth + 1u); else { c.pc = 0x00158EE0u; return; } if (c.pc != 0x003EC978u) [[unlikely]] return; }
L_003EC978:
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 1;
L_003EC97C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 2;
L_003EC984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EC9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EC9D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC9C8u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x003EC9C8u) [[unlikely]] return; }
L_003EC9C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003EC9D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003ECA0C; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ECA08; } }
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003ECA08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003ECA0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ECA20:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ECA40; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 244u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 244u), c.f[0]);
    c.budget -= 5;
L_003ECA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003ECA50:
    st32((c.r[4].w[0] + 244u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 248u), 0u);  c.pc = t; return; }
L_003ECA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003ECAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA84u); set32(c.r[4], ld32((c.r[16].w[0] + 252u)));  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x003ECA84u) [[unlikely]] return; }
L_003ECA84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 252u)));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[5], c.r[16].w[0] + 176u);
    set32(c.r[7], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECAA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 292u, depth + 1u); else { c.pc = 0x00166850u; return; } if (c.pc != 0x003ECAA8u) [[unlikely]] return; }
L_003ECAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ECADC; } }
L_003ECAB0:
    c.f[0] = c.r[5].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[5], c.r[16].w[0] + 176u);
    set32(c.r[7], ld32((c.r[2].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECADCu); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 292u, depth + 1u); else { c.pc = 0x00166850u; return; } if (c.pc != 0x003ECADCu) [[unlikely]] return; }
L_003ECADC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_003ECAF4; }
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECAF0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x003ECAF0u) [[unlikely]] return; }
L_003ECAF0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003ECAF4:
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ECB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003ECB24u) [[unlikely]] return; }
L_003ECB24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 11168u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 27;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003ECBC0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003ECBB0; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ECBC0; } }
L_003ECBB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003ECBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ECBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003ECC20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 11168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBFCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 64u, depth + 1u); else { c.pc = 0x003ECC40u; return; } if (c.pc != 0x003ECBFCu) [[unlikely]] return; }
L_003ECBFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003ECC08u) [[unlikely]] return; }
L_003ECC08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003ECC24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003ECC20u) [[unlikely]] return; }
L_003ECC20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003ECC24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ECC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  goto L_003ECC7C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 164u), 0u);  goto L_003ECC78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ECC74u) [[unlikely]] return; }
L_003ECC74:
    st32((c.r[16].w[0] + 164u), 0u);
    c.budget -= 1;
L_003ECC78:
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_003ECC7C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003ECC98; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003ECC90u) [[unlikely]] return; }
L_003ECC90:
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003ECC98:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ECCB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECCD8u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003ECCD8u) [[unlikely]] return; }
L_003ECCD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003ECCF8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECCF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 58u, depth + 1u); else { c.pc = 0x003ECB10u; return; } if (c.pc != 0x003ECCF4u) [[unlikely]] return; }
L_003ECCF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003ECCF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003ECD10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 103u);  c.pc = t; return; }
L_003ECD20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003ED0DC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 192u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], ld32((c.r[6].w[0])));  if (t) { goto L_003ECE30; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    st32((c.r[17].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 6;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 140u)));  goto L_003ECD88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_003ECD8C; } }
L_003ECD88:
    st32((c.r[17].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 1;
L_003ECD8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_003ED0C8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 196u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_003ED0CC; }
    set32(c.r[5], ld32((c.r[6].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003ED0C8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ED0C8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003ED0C8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ED0C8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 228u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_003ECE18; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_003ECE08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003ECE34; } }
L_003ECE08:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 136u), c.r[2].w[0]);  goto L_003ECE30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), 0u);  if (t) { goto L_003ECE30; } }
L_003ECE18:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003ECE2C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_003ECE30; } }
L_003ECE2C:
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_003ECE30:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003ECE34:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE50u); set32(c.r[5], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003ECE50u) [[unlikely]] return; }
L_003ECE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_003ED0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 234u, depth + 1u); else { c.pc = 0x003EF3A0u; return; } if (c.pc != 0x003ECE60u) [[unlikely]] return; }
L_003ECE60:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE8Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003ECE8Cu) [[unlikely]] return; }
L_003ECE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_003ED0C8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 200u)));
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[3].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[3].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[17].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 16;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 164u), 0u);  goto L_003ECEEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECEDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 239u, depth + 1u); else { c.pc = 0x003EF4E0u; return; } if (c.pc != 0x003ECEDCu) [[unlikely]] return; }
L_003ECEDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_003ECEF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ED0C8; } }
L_003ECEEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003ECEF0:
    set32(c.r[3], ld32((c.r[3].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003ECF50; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.budget -= 2;
L_003ECF08:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ED0C8; } }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 96u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECF08u | kUnwind; return; } goto L_003ECF08; } }
    c.budget -= 1;
L_003ECF50:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 140u)));  goto L_003ECF7C; }
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 6;
L_003ECF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECF84u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003ECF84u) [[unlikely]] return; }
L_003ECF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECFA4u); set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003ECFA4u) [[unlikely]] return; }
L_003ECFA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ED0C0; } }
    c.f[0] = ld32((c.r[4].w[0] + 180u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ED0C0; } }
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ED0C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 1;
L_003ED008:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003ED068; } }
L_003ED010:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ED038; } }
    c.f[1] = ld32((c.r[17].w[0] + 124u));
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ED068; } }
L_003ED038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 236u, depth + 1u); else { c.pc = 0x003EF410u; return; } if (c.pc != 0x003ED040u) [[unlikely]] return; }
L_003ED040:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED050u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 112u, depth + 1u); else { c.pc = 0x003ED3E0u; return; } if (c.pc != 0x003ED050u) [[unlikely]] return; }
L_003ED050:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED010u | kUnwind; return; } goto L_003ED010; } }
L_003ED068:
    set32(c.r[16], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003ED098; } }
    c.budget -= 1;
L_003ED078:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 84u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED08Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 187u, depth + 1u); else { c.pc = 0x003EE8F0u; return; } if (c.pc != 0x003ED08Cu) [[unlikely]] return; }
L_003ED08C:
    set32(c.r[16], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED078u | kUnwind; return; } goto L_003ED078; } }
L_003ED098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED0A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 237u, depth + 1u); else { c.pc = 0x003EF440u; return; } if (c.pc != 0x003ED0A0u) [[unlikely]] return; }
L_003ED0A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = ld32((c.r[4].w[0] + 180u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED008u | kUnwind; return; } goto L_003ED008; }
    c.budget -= 1;
L_003ED0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ED0D8; } }
L_003ED0C8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003ED0CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003ED0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003ED0DC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003ED0F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003ED25C; } }
    st32((c.r[18].w[0] + 80u), c.f[12]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_003ED1E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003ED178; }
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ED1DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003ED178:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_003ED19C; }
    set32(c.r[16], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED18Cu); c.f[12] = ld32((c.r[4].w[0] + 96u));  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003ED18Cu) [[unlikely]] return; }
L_003ED18C:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ED1DC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003ED19C:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003ED1D8; } }
L_003ED1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED1B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 236u, depth + 1u); else { c.pc = 0x003EF410u; return; } if (c.pc != 0x003ED1B0u) [[unlikely]] return; }
L_003ED1B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED1C0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 112u, depth + 1u); else { c.pc = 0x003ED3E0u; return; } if (c.pc != 0x003ED1C0u) [[unlikely]] return; }
L_003ED1C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED1A8u | kUnwind; return; } goto L_003ED1A8; } }
L_003ED1D8:
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 1;
L_003ED1DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003ED1E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003ED254; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[2].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED204u); set32(c.r[6], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003ED204u) [[unlikely]] return; }
L_003ED204:
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 48u);
    st32((c.r[18].w[0] + 72u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED228u); set32(c.r[6], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003ED228u) [[unlikely]] return; }
L_003ED228:
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED238u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003ED238u) [[unlikely]] return; }
L_003ED238:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED244u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003ED244u) [[unlikely]] return; }
L_003ED244:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED250u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003ED250u) [[unlikely]] return; }
L_003ED250:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003ED254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED25Cu);  if (depth < kMaxDepth) unit_00B3(c, 237u, depth + 1u); else { c.pc = 0x003EF440u; return; } if (c.pc != 0x003ED25Cu) [[unlikely]] return; }
L_003ED25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003ED280:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECC40u | kUnwind; return; } goto L_003ECC40; }
L_003ED290:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003ED3C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_003ED2D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003ED3C8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003ED2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED2DCu);  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003ED2DCu) [[unlikely]] return; }
L_003ED2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_003ED2F8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003ED3C4; } }
L_003ED2F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ED328; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003ED328; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED320u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003ED320u) [[unlikely]] return; }
L_003ED320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003ED328u) [[unlikely]] return; }
L_003ED328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED330u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003ED330u) [[unlikely]] return; }
L_003ED330:
    set32(c.r[4], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED33Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003ED33Cu) [[unlikely]] return; }
L_003ED33C:
    set32(c.r[5], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED348u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x003ED348u) [[unlikely]] return; }
L_003ED348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED350u); set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003ED350u) [[unlikely]] return; }
L_003ED350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED358u);  if (depth < kMaxDepth) unit_0013(c, 149u, depth + 1u); else { c.pc = 0x0016DBD0u; return; } if (c.pc != 0x003ED358u) [[unlikely]] return; }
L_003ED358:
    set32(c.r[18], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003ED388; } }
    c.f[12] = ld32((c.r[17].w[0] + 80u));
    c.budget -= 1;
L_003ED368:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED378u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003EE9D0u; return; } if (c.pc != 0x003ED378u) [[unlikely]] return; }
L_003ED378:
    set32(c.r[18], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.f[12] = ld32((c.r[17].w[0] + 80u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED368u | kUnwind; return; } goto L_003ED368; }
    c.budget -= 1;
L_003ED388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED390u);  if (depth < kMaxDepth) unit_0013(c, 151u, depth + 1u); else { c.pc = 0x0016DBF0u; return; } if (c.pc != 0x003ED390u) [[unlikely]] return; }
L_003ED390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED398u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003ED398u) [[unlikely]] return; }
L_003ED398:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003ED3C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003ED3C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3C4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003ED3C4u) [[unlikely]] return; }
L_003ED3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003ED3C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003ED3E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003ED424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EDDA0; } }
L_003ED424:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[3].w[0] + 16u));  goto L_003ED538; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[16].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED450u); set32(c.r[6], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003ED450u) [[unlikely]] return; }
L_003ED450:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED45Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003ED45Cu) [[unlikely]] return; }
L_003ED45C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED470u); set32(c.r[6], c.r[6].w[0] + 25856u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003ED470u) [[unlikely]] return; }
L_003ED470:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED47Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003ED47Cu) [[unlikely]] return; }
L_003ED47C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED490u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003ED490u) [[unlikely]] return; }
L_003ED490:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4A8u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003ED4A8u) [[unlikely]] return; }
L_003ED4A8:
    set32(c.r[5], c.r[16].w[0] + 224u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003ED4B8u) [[unlikely]] return; }
L_003ED4B8:
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[5] = ld32((c.r[29].w[0] + 184u));
    c.f[4] = ld32((c.r[29].w[0] + 136u));
    c.f[7] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[3] = 0u;
    c.f[4] = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[6] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 176u), c.f[7]);
    st32((c.r[29].w[0] + 184u), c.f[5]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[4]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 184u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[29].w[0] + 180u), c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 180u), c.f[1]);  if (t) { goto L_003ED554; } }
L_003ED538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    st32((c.r[29].w[0] + 184u), c.f[2]);
    c.budget -= 7;
L_003ED554:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 6u);  goto L_003ED750; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = ld32((c.r[16].w[0] + 36u));  goto L_003ED6B8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003ED620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED588u); c.f[12] = ld32((c.r[16].w[0] + 24u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED588u) [[unlikely]] return; }
L_003ED588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED5A0u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED5A0u) [[unlikely]] return; }
L_003ED5A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED5B8u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED5B8u) [[unlikely]] return; }
L_003ED5B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED5D0u); c.f[23] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED5D0u) [[unlikely]] return; }
L_003ED5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[23]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED5F8u); st32((c.r[29].w[0] + 168u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003ED5F8u) [[unlikely]] return; }
L_003ED5F8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED608u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003ED608u) [[unlikely]] return; }
L_003ED608:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED618u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003ED618u) [[unlikely]] return; }
L_003ED618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_003EDAA0; } }
L_003ED620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[20] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED634u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED634u) [[unlikely]] return; }
L_003ED634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED64Cu); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED64Cu) [[unlikely]] return; }
L_003ED64C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED664u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED664u) [[unlikely]] return; }
L_003ED664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[22]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED68Cu); st32((c.r[29].w[0] + 168u), c.f[21]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003ED68Cu) [[unlikely]] return; }
L_003ED68C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED6A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003ED6A0u) [[unlikely]] return; }
L_003ED6A0:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED6B0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003ED6B0u) [[unlikely]] return; }
L_003ED6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EDA9C; } }
L_003ED6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED6C0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED6C0u) [[unlikely]] return; }
L_003ED6C0:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[20], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED6ECu); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED6ECu) [[unlikely]] return; }
L_003ED6EC:
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[20].w[0] + 28u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED714u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED714u) [[unlikely]] return; }
L_003ED714:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[22]);
    st32((c.r[18].w[0] + 40u), c.f[21]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003EDA9C; } }
L_003ED750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED758u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003ED758u) [[unlikely]] return; }
L_003ED758:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 44u)));  goto L_003ED784; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003EC000u < 16384u) { entry = entries_00B3[(t - 0x003EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003ED780:
    set32(c.r[20], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003ED784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED78Cu); c.f[12] = ld32((c.r[20].w[0] + 36u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED78Cu) [[unlikely]] return; }
L_003ED78C:
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED7B8u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED7B8u) [[unlikely]] return; }
L_003ED7B8:
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[3]);
    st32((c.r[18].w[0] + 40u), c.f[21]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003EDA9C; } }
L_003ED800:
    set32(c.r[20], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED80Cu); c.f[12] = ld32((c.r[20].w[0] + 36u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED80Cu) [[unlikely]] return; }
L_003ED80C:
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED838u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED838u) [[unlikely]] return; }
L_003ED838:
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[3]);
    st32((c.r[18].w[0] + 40u), c.f[21]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003EDA9C; } }
L_003ED880:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED88Cu); c.f[12] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED88Cu) [[unlikely]] return; }
L_003ED88C:
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED8C4u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED8C4u) [[unlikely]] return; }
L_003ED8C4:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[22]);
    st32((c.r[18].w[0] + 40u), c.f[21]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003EDA9C; } }
L_003ED900:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED90Cu); c.f[12] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED90Cu) [[unlikely]] return; }
L_003ED90C:
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED944u); c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED944u) [[unlikely]] return; }
L_003ED944:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[22]);
    st32((c.r[18].w[0] + 40u), c.f[21]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003EDA9C; } }
L_003ED980:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED9ACu); c.f[21] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED9ACu) [[unlikely]] return; }
L_003ED9AC:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED9D4u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003ED9D4u) [[unlikely]] return; }
L_003ED9D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[22]);
    st32((c.r[18].w[0] + 40u), c.f[21]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003EDA9C; } }
L_003EDA10:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDA3Cu); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EDA3Cu) [[unlikely]] return; }
L_003EDA3C:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDA64u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EDA64u) [[unlikely]] return; }
L_003EDA64:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[22]);
    st32((c.r[18].w[0] + 40u), c.f[21]);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 14;
L_003EDA9C:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003EDAA0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 44u)));  goto L_003EDAEC; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003EDAE8; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 124u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAD8u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003EDAD8u) [[unlikely]] return; }
L_003EDAD8:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAE8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EDAE8u) [[unlikely]] return; }
L_003EDAE8:
    set32(c.r[5], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003EDAEC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EDBEC; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB0Cu); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003EDB0Cu) [[unlikely]] return; }
L_003EDB0C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB18u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EDB18u) [[unlikely]] return; }
L_003EDB18:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB2Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EDB2Cu) [[unlikely]] return; }
L_003EDB2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[2].w[0] + 140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB40u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003EDB40u) [[unlikely]] return; }
L_003EDB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_003EDBC8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB6Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EDB6Cu) [[unlikely]] return; }
L_003EDB6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB84u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EDB84u) [[unlikely]] return; }
L_003EDB84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB9Cu); c.f[23] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EDB9Cu) [[unlikely]] return; }
L_003EDB9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[23]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBC4u); st32((c.r[29].w[0] + 168u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EDBC4u) [[unlikely]] return; }
L_003EDBC4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_003EDBC8:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EDBD4u) [[unlikely]] return; }
L_003EDBD4:
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003EDBE4u) [[unlikely]] return; }
L_003EDBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_003EDC48; } }
L_003EDBEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EDC44; } }
    c.f[12] = ld32((c.r[5].w[0] + 132u));
    c.f[13] = ld32((c.r[5].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDC04u) [[unlikely]] return; }
L_003EDC04:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[22] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 124u));
    c.f[13] = ld32((c.r[2].w[0] + 128u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC1Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDC1Cu) [[unlikely]] return; }
L_003EDC1C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 116u));
    c.f[13] = ld32((c.r[2].w[0] + 120u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDC34u) [[unlikely]] return; }
L_003EDC34:
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[21]);
    st32((c.r[18].w[0] + 24u), c.f[22]);
    st32((c.r[18].w[0] + 28u), c.f[20]);
    c.budget -= 4;
L_003EDC44:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003EDC48:
    c.f[12] = ld32((c.r[2].w[0] + 164u));
    c.f[13] = ld32((c.r[2].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC58u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDC58u) [[unlikely]] return; }
L_003EDC58:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[22] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 156u));
    c.f[13] = ld32((c.r[2].w[0] + 160u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC70u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDC70u) [[unlikely]] return; }
L_003EDC70:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.f[13] = ld32((c.r[2].w[0] + 152u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDC88u) [[unlikely]] return; }
L_003EDC88:
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[21]);
    st32((c.r[18].w[0] + 8u), c.f[22]);
    st32((c.r[18].w[0] + 12u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 40u));
    c.f[13] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDCACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDCACu) [[unlikely]] return; }
L_003EDCAC:
    st32((c.r[18].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[18].w[0] + 64u));  goto L_003EDCD8; }
    c.f[12] = ld32((c.r[3].w[0] + 48u));
    c.f[13] = ld32((c.r[3].w[0] + 52u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDCD0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDCD0u) [[unlikely]] return; }
L_003EDCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.f[0]);  if (t) { goto L_003EDCEC; } }
L_003EDCD8:
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.budget -= 5;
L_003EDCEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 100u));
    c.f[13] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 179u, depth + 1u); else { c.pc = 0x003EDDD0u; return; } if (c.pc != 0x003EDD00u) [[unlikely]] return; }
L_003EDD00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD14u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EDD14u) [[unlikely]] return; }
L_003EDD14:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003EDD40; }
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.f[0]);  if (t) { goto L_003EDD5C; } }
L_003EDD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD48u);  if (depth < kMaxDepth) unit_00B3(c, 210u, depth + 1u); else { c.pc = 0x003EEEA0u; return; } if (c.pc != 0x003EDD48u) [[unlikely]] return; }
L_003EDD48:
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD58u); c.f[12] = ld32((c.r[2].w[0] + 204u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EDD58u) [[unlikely]] return; }
L_003EDD58:
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.budget -= 1;
L_003EDD5C:
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 176u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 156u)));  goto L_003EDD88; }
    st32((c.r[2].w[0] + 84u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 2;
L_003EDD88:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 156u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 6;
L_003EDDA0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EDDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDECu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_00A9(c, 275u, depth + 1u); else { c.pc = 0x003C6AE0u; return; } if (c.pc != 0x003EDDECu) [[unlikely]] return; }
L_003EDDEC:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[20], c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EDE20:
    set32(c.r[8], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[8].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[7].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  goto L_003EDE5C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[6], c.r[3].w[0] - 1u);  goto L_003EDE78; }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003EDE5C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 16u));  if (t) { goto L_003EDF40; } }
L_003EDE78:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003EDF30; } }
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003EDE84:
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[9].w[0])));
    set32(c.r[11], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.f[0] = ld32((c.r[11].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003EDEA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EDEA8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);  goto L_003EDF1C; }
    c.f[7] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[11].w[0] + 16u));
    c.f[6] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[11].w[0] + 8u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[1]);
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[3] = ld32((c.r[11].w[0] + 12u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[3]);  if (t) { goto L_003EDF40; } }
L_003EDF1C:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDE84u | kUnwind; return; } goto L_003EDE84; } }
    c.budget -= 1;
L_003EDF30:
    c.f[0] = ld32((c.r[11].w[0] + 16u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[2] = ld32((c.r[11].w[0] + 8u));
    c.f[3] = ld32((c.r[11].w[0] + 12u));
    c.budget -= 4;
L_003EDF40:
    set32(c.r[3], ld32((c.r[8].w[0] + 72u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_003EE1EC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[6] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    c.f[4] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  goto L_003EDF8C; }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003EDFA4; } }
L_003EDF8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003EDFA4:
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
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  goto L_003EDFE4; }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003EDFFC; } }
L_003EDFE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003EDFFC:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];  if (t) { goto L_003EE03C; } }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003EE058; } }
L_003EE03C:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_003EE058:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];  if (t) { goto L_003EE098; } }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[4], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003EE0B4; } }
L_003EE098:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[4], c.f[4]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003EE0B4:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[2], c.r[5].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[2].w[0] >> 1);  goto L_003EE0D8; }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003EE0F0; } }
L_003EE0D8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 6;
L_003EE0F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);  if (t) { goto L_003EE11C; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003EE138; } }
L_003EE11C:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003EE138:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[5].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);  if (t) { goto L_003EE168; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003EE184; } }
L_003EE168:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003EE184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[5].w[0] >> 16);
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);  if (t) { goto L_003EE1B4; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003EE1D0; } }
L_003EE1B4:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003EE1D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32897ull;
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);  if (t) { goto L_003EE48C; } }
L_003EE1EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EE48C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[6] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    c.f[4] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  goto L_003EE230; }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003EE248; } }
L_003EE230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003EE248:
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
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  goto L_003EE288; }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003EE2A0; } }
L_003EE288:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003EE2A0:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];  if (t) { goto L_003EE2E0; } }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003EE2FC; } }
L_003EE2E0:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_003EE2FC:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];  if (t) { goto L_003EE33C; } }
    c.f[4] = fp::cvt_w_s(c.f[5]);
    set32(c.r[4], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003EE358; } }
L_003EE33C:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[4], c.f[4]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003EE358:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[2], c.r[5].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[2].w[0] >> 1);  goto L_003EE37C; }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003EE394; } }
L_003EE37C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 6;
L_003EE394:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);  if (t) { goto L_003EE3C0; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003EE3DC; } }
L_003EE3C0:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003EE3DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[5].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);  if (t) { goto L_003EE40C; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003EE428; } }
L_003EE40C:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003EE428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    set32(c.r[2], c.r[5].w[0] >> 16);
    c.r[4].d[0] = c.r[4].d[0] | 32897ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);  if (t) { goto L_003EE458; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_003EE474; } }
L_003EE458:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_003EE474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32897ull;
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 6;
L_003EE48C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  goto L_003EE568; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EE4B0; } }
    c.f[0] = c.f[4];
    c.budget -= 1;
L_003EE4B0:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003EE4CC; }
    c.f[0] = c.f[4];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003EE4CC:
    c.f[4] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EE4E4; } }
    c.f[1] = c.f[4];
    c.budget -= 1;
L_003EE4E4:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003EE500; }
    c.f[1] = c.f[4];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003EE500:
    c.f[4] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EE518; } }
    c.f[2] = c.f[4];
    c.budget -= 1;
L_003EE518:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003EE534; }
    c.f[2] = c.f[4];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003EE534:
    c.f[4] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EE54C; } }
    c.f[3] = c.f[4];
    c.budget -= 1;
L_003EE54C:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EE564; } }
    c.f[3] = c.f[4];
    c.budget -= 1;
L_003EE564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_003EE568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);  goto L_003EE59C; }
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EE5B4; } }
L_003EE59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003EE5B4:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);  goto L_003EE5F0; }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EE608; } }
L_003EE5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003EE608:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_003EE644; } }
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EE660; } }
L_003EE644:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003EE660:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_003EE69C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EE6B8; } }
L_003EE69C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003EE6B8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  c.pc = t; return; }
L_003EE6D0:
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
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE70Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003EE70Cu) [[unlikely]] return; }
L_003EE70C:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE720u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003EE720u) [[unlikely]] return; }
L_003EE720:
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EE780:
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003EE8AC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003EE85C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003EE808; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003EE7B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 72u)));  if (t) { goto L_003EE8E8; } }
L_003EE7B8:
    set32(c.r[8], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 208u)));  goto L_003EE7E8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE8E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 1;
L_003EE7E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003EE7FC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EE8E4; } }
L_003EE7FC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EE8E4; } }
L_003EE808:
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 44u)));  goto L_003EE828; }
    st32((c.r[5].w[0] + 72u), 0u);
    set32(c.r[8], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 2;
L_003EE828:
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EE8E4; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_003EE854; }
    set32(c.r[2], ld32((c.r[8].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EE8E4; } }
L_003EE854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EE8E4; } }
L_003EE85C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EE874; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_003EE874:
    set32(c.r[8], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EE8E4; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_003EE8A4; }
    set32(c.r[2], ld32((c.r[8].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EE8E4; } }
L_003EE8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EE8E4; } }
L_003EE8AC:
    set32(c.r[8], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EE8E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[8].w[0] + 1u);  goto L_003EE8E0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EE8E4; } }
L_003EE8E0:
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_003EE8E4:
    set32(c.r[5], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 1;
L_003EE8E8:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE6D0u | kUnwind; return; } goto L_003EE6D0; }
L_003EE8F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE914u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003EEDF0u; return; } if (c.pc != 0x003EE914u) [[unlikely]] return; }
L_003EE914:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003EE9B8; }
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 11;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 92u));  goto L_003EE970; }
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EE96C; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.f[0]);  if (t) { goto L_003EE974; } }
L_003EE96C:
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    c.budget -= 1;
L_003EE970:
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 1;
L_003EE974:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE984u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EE984u) [[unlikely]] return; }
L_003EE984:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE994u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EE994u) [[unlikely]] return; }
L_003EE994:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE9A4u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EE9A4u) [[unlikely]] return; }
L_003EE9A4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE9B4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EE9B4u) [[unlikely]] return; }
L_003EE9B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EE9B8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EE9D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 192u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_003EEA48; } }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[6].w[0] + 204u));  goto L_003EEA30; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 136u);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA28u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00B3(c, 183u, depth + 1u); else { c.pc = 0x003EE6D0u; return; } if (c.pc != 0x003EEA28u) [[unlikely]] return; }
L_003EEA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003EEA60; } }
L_003EEA30:
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA40u); st32((c.r[16].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00B3(c, 186u, depth + 1u); else { c.pc = 0x003EE780u; return; } if (c.pc != 0x003EEA40u) [[unlikely]] return; }
L_003EEA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EEA5C; } }
L_003EEA48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 5;
L_003EEA5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003EEA60:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003EEAE8; }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_003EEAA8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 48u), c.f[1]);  goto L_003EEAA4; }
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003EEAA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003EEAA8:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 164u)));  goto L_003EEAD4; }
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEACCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B3(c, 247u, depth + 1u); else { c.pc = 0x003EF6E0u; return; } if (c.pc != 0x003EEACCu) [[unlikely]] return; }
L_003EEACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_003EEAFC; } }
L_003EEAD4:
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAE0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003EEAE0u) [[unlikely]] return; }
L_003EEAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EEAF8; } }
L_003EEAE8:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 4;
L_003EEAF8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_003EEAFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB08u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EEB08u) [[unlikely]] return; }
L_003EEB08:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB18u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EEB18u) [[unlikely]] return; }
L_003EEB18:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB28u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EEB28u) [[unlikely]] return; }
L_003EEB28:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB38u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EEB38u) [[unlikely]] return; }
L_003EEB38:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003EEB5C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB54u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00B3(c, 215u, depth + 1u); else { c.pc = 0x003EEFC0u; return; } if (c.pc != 0x003EEB54u) [[unlikely]] return; }
L_003EEB54:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003EEB5C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB68u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003EEDF0u; return; } if (c.pc != 0x003EEB68u) [[unlikely]] return; }
L_003EEB68:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_003EEB7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EED90; } }
L_003EEB7C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 52u));  goto L_003EECFC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003EEBC8; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003EEBE0; } }
L_003EEBC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003EEBE0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[3].w[0] << 24);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003EEC20; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003EEC38; } }
L_003EEC20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003EEC38:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 16);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_003EEC78; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003EEC94; } }
L_003EEC78:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003EEC94:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 8);
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_003EECD4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003EECF0; } }
L_003EECD4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003EECF0:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];  if (t) { goto L_003EED90; } }
L_003EECFC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 96u));  goto L_003EED70; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = ld32((c.r[17].w[0] + 96u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EED6C; } }
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = ld32((c.r[16].w[0] + 52u));  goto L_003EED88; }
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_003EED48:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 52u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EED48u | kUnwind; return; } goto L_003EED48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EED84; } }
L_003EED6C:
    c.f[1] = ld32((c.r[17].w[0] + 96u));
    c.budget -= 1;
L_003EED70:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EED84; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_003EED84:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_003EED88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 181u, depth + 1u); else { c.pc = 0x003EDE20u; return; } if (c.pc != 0x003EED90u) [[unlikely]] return; }
L_003EED90:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[6], ld32((c.r[17].w[0] + 120u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[15] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[17] = ld32((c.r[29].w[0] + 136u));
    c.f[18] = ld32((c.r[29].w[0] + 128u));
    c.f[19] = ld32((c.r[29].w[0] + 140u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDD8u); c.f[16] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 154u, depth + 1u); else { c.pc = 0x0016DC20u; return; } if (c.pc != 0x003EEDD8u) [[unlikely]] return; }
L_003EEDD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003EEDF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EEE70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_003EEE4C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 56u));  goto L_003EEE2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003EEE94; } }
L_003EEE2C:
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 56u), c.f[1]);  if (t) { goto L_003EEE90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003EEE90; } }
L_003EEE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE54u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003EEE54u) [[unlikely]] return; }
L_003EEE54:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EEE90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003EEE90; } }
L_003EEE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE78u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003EEE78u) [[unlikely]] return; }
L_003EEE78:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EEE90; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_003EEE90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EEE94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003EEF8C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003EEF4C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003EEF0C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003EEEE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003EEFB0; } }
L_003EEEE8:
    set32(c.r[3], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEEFCu); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003EEEFCu) [[unlikely]] return; }
L_003EEEFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003EEFAC; } }
L_003EEF0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF28u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003EEF28u) [[unlikely]] return; }
L_003EEF28:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EEFAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  if (t) { goto L_003EEFAC; } }
L_003EEF4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF68u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003EEF68u) [[unlikely]] return; }
L_003EEF68:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EEFAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  if (t) { goto L_003EEFAC; } }
L_003EEF8C:
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEFA0u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003EEFA0u) [[unlikely]] return; }
L_003EEFA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003EEFAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EEFB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEFC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEFF0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003EEFF0u) [[unlikely]] return; }
L_003EEFF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF000u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003EF000u) [[unlikely]] return; }
L_003EF000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[21] = c.f[0];
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF024u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003EF024u) [[unlikely]] return; }
L_003EF024:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF034u); set32(c.r[5], c.r[5].w[0] + 25904u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003EF034u) [[unlikely]] return; }
L_003EF034:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_003EF058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_003EF058:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003EF098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF074u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 134u, depth + 1u); else { c.pc = 0x00137278u; return; } if (c.pc != 0x003EF074u) [[unlikely]] return; }
L_003EF074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003EF380; } }
L_003EF098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0A0u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003EF0A0u) [[unlikely]] return; }
L_003EF0A0:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[22], c.f[21]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);  goto L_003EF220; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  goto L_003EF0FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0F4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF0F4u) [[unlikely]] return; }
L_003EF0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF0FC:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);  goto L_003EF13C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC66A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF134u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF134u) [[unlikely]] return; }
L_003EF134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF13C:
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  goto L_003EF17C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC65D0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF174u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF174u) [[unlikely]] return; }
L_003EF174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF17C:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);  goto L_003EF1BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC66A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF1B4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF1B4u) [[unlikely]] return; }
L_003EF1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF1BC:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003EF1FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6730000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF1F4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF1F4u) [[unlikely]] return; }
L_003EF1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF218; } }
L_003EF1FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF218u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF218u) [[unlikely]] return; }
L_003EF218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF220:
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  goto L_003EF260; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF258u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF258u) [[unlikely]] return; }
L_003EF258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF260:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);  goto L_003EF2A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6A70000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 63488ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF298u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF298u) [[unlikely]] return; }
L_003EF298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF2A0:
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  goto L_003EF2E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6D20000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF2D8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF2D8u) [[unlikely]] return; }
L_003EF2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF2E0:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);  goto L_003EF320; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6B70000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF318u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF318u) [[unlikely]] return; }
L_003EF318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF320:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003EF360; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF358u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF358u) [[unlikely]] return; }
L_003EF358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF37C; } }
L_003EF360:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF37Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003EF37Cu) [[unlikely]] return; }
L_003EF37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EF380:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EF3A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EF400; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF3B4:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_003EF3D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 88u), 0u);  if (t) { goto L_003EF3E8; } }
L_003EF3D0:
    set32(c.r[6], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[7].w[0] + 96u);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 6;
L_003EF3E8:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 80u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF3B4u | kUnwind; return; } goto L_003EF3B4; } }
L_003EF400:
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 156u), 0u);  c.pc = t; return; }
L_003EF410:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EF430; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 160u), 0u);  goto L_003EF430; }
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 84u), 0u);
    c.budget -= 2;
L_003EF430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EF440:
    set32(c.r[6], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003EF4D8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 80u)));
    c.budget -= 1;
L_003EF450:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EF4C8; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003EF470; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 88u)));
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_003EF470:
    set32(c.r[5], ld32((c.r[6].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003EF488; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 84u)));
    st32((c.r[5].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_003EF488:
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003EF4B0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EF4A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_003EF4B0; } }
L_003EF4A8:
    st32((c.r[4].w[0] + 156u), 0u);
    c.budget -= 2;
L_003EF4B0:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[6].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 160u), c.r[5].w[0]);  if (t) { goto L_003EF4D0; } }
L_003EF4C8:
    set32(c.r[6], ld32((c.r[6].w[0] + 88u)));
    c.budget -= 2;
L_003EF4D0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF450u | kUnwind; return; } goto L_003EF450; }
L_003EF4D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EF4E0:
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
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EF5BC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EF560; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF524:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[20].w[0] + 92u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 92u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF524u | kUnwind; return; } goto L_003EF524; } }
    c.budget -= 1;
L_003EF560:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
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
    st32((c.r[20].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 116u), c.f[0]);  if (t) { goto L_003EF6B4; } }
L_003EF5BC:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF5DCu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003EF5DCu) [[unlikely]] return; }
L_003EF5DC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003EF5F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EF6B4; } }
L_003EF5F0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003EF670; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_003EF600:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = ld32((c.r[20].w[0] + 92u));
    c.f[15] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 92u));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.f[16] = ld32((c.r[2].w[0] + 12u));
    c.f[17] = ld32((c.r[2].w[0] + 16u));
    c.f[18] = ld32((c.r[2].w[0] + 20u));
    c.f[19] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003EF658u) [[unlikely]] return; }
L_003EF658:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF600u | kUnwind; return; } goto L_003EF600; } }
    c.budget -= 1;
L_003EF670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF678u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003EF678u) [[unlikely]] return; }
L_003EF678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 164u), c.r[2].w[0]);  goto L_003EF694; }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF690u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x003EF690u) [[unlikely]] return; }
L_003EF690:
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_003EF694:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF6A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003EF6A4u) [[unlikely]] return; }
L_003EF6A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_003EF6B4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003EF6E0:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[4] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = 0u;
    set32(c.r[4], ld32((c.r[6].w[0] + 64u)));
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
L_003EF730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003EF744u) [[unlikely]] return; }
L_003EF744:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF794u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EF794u) [[unlikely]] return; }
L_003EF794:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EF7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EF82C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), 0u);  goto L_003EF804; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF800u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003EF800u) [[unlikely]] return; }
L_003EF800:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 1;
L_003EF804:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF814u); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003EF814u) [[unlikely]] return; }
L_003EF814:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EF830; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF82Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003EF82Cu) [[unlikely]] return; }
L_003EF82C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EF830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EF850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF878u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003EF878u) [[unlikely]] return; }
L_003EF878:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003EF898; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF894u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 248u, depth + 1u); else { c.pc = 0x003EF730u; return; } if (c.pc != 0x003EF894u) [[unlikely]] return; }
L_003EF894:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EF898:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EF8B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 104u);  c.pc = t; return; }
L_003EF8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8F0u); set32(c.r[5], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003EF8F0u) [[unlikely]] return; }
L_003EF8F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003EF984; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EF948; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF918:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 224u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF918u | kUnwind; return; } goto L_003EF918; } }
    c.budget -= 1;
L_003EF948:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF95Cu); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003EF95Cu) [[unlikely]] return; }
L_003EF95C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003EF970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF970u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003EF970u) [[unlikely]] return; }
L_003EF970:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003EF994; } }
L_003EF984:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003EF994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EF9B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003EFE64; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_003EFA0C; }
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 84u));  goto L_003EFB40; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003EFA0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003EFA2C; } }
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EFB3C; } }
L_003EFA2C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EFB3C; } }
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EFB3C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EFB18; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_003EFA64:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EFB00; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EFB00; } }
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_003EFA98:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EFAF0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 13u, depth + 1u); else { c.pc = 0x003F0210u; return; } if (c.pc != 0x003EFAB0u) [[unlikely]] return; }
L_003EFAB0:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003EFB00; } }
    c.budget -= 1;
L_003EFAF0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 224u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFA98u | kUnwind; return; } goto L_003EFA98; } }
L_003EFB00:
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFA64u | kUnwind; return; } goto L_003EFA64; }
L_003EFB18:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB28u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003EFB28u) [[unlikely]] return; }
L_003EFB28:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), c.f[0]);  if (t) { goto L_003EFB48; } }
L_003EFB3C:
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.budget -= 1;
L_003EFB40:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.budget -= 2;
L_003EFB48:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003EFE58; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EFB5C:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EFE40; } }
    set32(c.r[5], c.r[4].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB80u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EFB80u) [[unlikely]] return; }
L_003EFB80:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB98u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EFB98u) [[unlikely]] return; }
L_003EFB98:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFBB0u); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003EFBB0u) [[unlikely]] return; }
L_003EFBB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFBC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003EFBC8u) [[unlikely]] return; }
L_003EFBC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[7], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    set32(c.r[3], ld32((c.r[7].w[0] + 176u)));
    c.f[1] = ld32((c.r[7].w[0] + 196u));
    c.f[2] = ld32((c.r[7].w[0] + 200u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 176u), c.r[3].w[0]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], ld32((c.r[7].w[0] + 180u)));
    set32(c.r[5], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[6], c.f[2]);
    set32(c.r[3], ld32((c.r[7].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[7].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 220u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EFC80; } }
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 208u));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 212u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 212u), c.f[0]);
    c.budget -= 10;
L_003EFC80:
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003EFCD8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.f[1] = ld32((c.r[5].w[0] + 224u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EFCD8; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 212u));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[5].w[0] + 216u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[3].w[0] + 212u), c.f[0]);
    c.budget -= 10;
L_003EFCD8:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003EFDA8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003EFD60; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003EFD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EFDF0; } }
    c.budget -= 1;
L_003EFD10:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 208u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    st32((c.r[3].w[0] + 208u), c.f[1]);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EFDF0; } }
    st32((c.r[3].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003EFDF0; } }
L_003EFD60:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFD70u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003EFD70u) [[unlikely]] return; }
L_003EFD70:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EFDF0; } }
    st32((c.r[3].w[0] + 212u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003EFDF0; } }
L_003EFDA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFDB8u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003EFDB8u) [[unlikely]] return; }
L_003EFDB8:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EFDF0; } }
    st32((c.r[3].w[0] + 212u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 8;
L_003EFDF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.f[0] = 0u;
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 212u);  if (t) { goto L_003EFE28; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 7;
L_003EFE28:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[3].w[0] + 32u), c.f[0]);
    c.budget -= 6;
L_003EFE40:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 224u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFB5Cu | kUnwind; return; } goto L_003EFB5C; } }
L_003EFE58:
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.budget -= 3;
L_003EFE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EFE80:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[21] = ld32((c.r[29].w[0] + 164u));
    c.f[22] = ld32((c.r[29].w[0] + 168u));
    c.f[23] = ld32((c.r[29].w[0] + 172u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = ld32((c.r[29].w[0] + 160u));  if (t) { [[clang::musttail]] return unit_00B4(c, 9u, depth); } }
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFEECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x003EFEECu) [[unlikely]] return; }
L_003EFEEC:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 68u)));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003EFF00u) [[unlikely]] return; }
L_003EFF00:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00B4(c, 4u, depth); } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EFF24:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B4(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF40u); set32(c.r[4], c.r[3].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003EFF40u) [[unlikely]] return; }
L_003EFF40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.f[3] = ld32((c.r[2].w[0] + 16016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[3].w[0] + 16024u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[4].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[7].w[0] + 48u);
    c.f[2] = ld32((c.r[2].w[0] + 16020u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[6] = ld32((c.r[7].w[0] + 120u));
    c.f[5] = ld32((c.r[7].w[0] + 116u));
    c.f[4] = ld32((c.r[7].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 16028u));
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[4]);
    st32((c.r[29].w[0] + 148u), c.f[5]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFFA0u); st32((c.r[29].w[0] + 152u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003EFFA0u) [[unlikely]] return; }
L_003EFFA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[4], c.r[2].w[0] + 48u);
    set32(c.r[7], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFFC0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003EFFC0u) [[unlikely]] return; }
L_003EFFC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.f[3] = ld32((c.r[2].w[0] + 16000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[3].w[0] + 16008u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[7], c.r[4].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[7].w[0] + 48u);
    c.f[2] = ld32((c.r[2].w[0] + 16004u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[6] = ld32((c.r[7].w[0] + 168u));
    c.f[5] = ld32((c.r[7].w[0] + 164u));
    c.f[4] = ld32((c.r[7].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 16012u));
    c.budget -= 16;
    [[clang::musttail]] return unit_00B4(c, 1u, depth);
}

}
