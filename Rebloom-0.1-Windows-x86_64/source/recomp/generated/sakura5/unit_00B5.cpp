#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B5[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0,
    0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0,
    0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F4000;
    case 2u: goto L_003F4010;
    case 3u: goto L_003F4034;
    case 4u: goto L_003F404C;
    case 5u: goto L_003F4060;
    case 6u: goto L_003F4068;
    case 7u: goto L_003F4084;
    case 8u: goto L_003F40F0;
    case 9u: goto L_003F40F8;
    case 10u: goto L_003F40FC;
    case 11u: goto L_003F4120;
    case 12u: goto L_003F41AC;
    case 13u: goto L_003F41C0;
    case 14u: goto L_003F41FC;
    case 15u: goto L_003F4238;
    case 16u: goto L_003F4260;
    case 17u: goto L_003F4268;
    case 18u: goto L_003F42A0;
    case 19u: goto L_003F42B0;
    case 20u: goto L_003F42D0;
    case 21u: goto L_003F4328;
    case 22u: goto L_003F4338;
    case 23u: goto L_003F4340;
    case 24u: goto L_003F4364;
    case 25u: goto L_003F439C;
    case 26u: goto L_003F43AC;
    case 27u: goto L_003F43B4;
    case 28u: goto L_003F43BC;
    case 29u: goto L_003F43CC;
    case 30u: goto L_003F43D4;
    case 31u: goto L_003F43E0;
    case 32u: goto L_003F43F0;
    case 33u: goto L_003F4410;
    case 34u: goto L_003F4444;
    case 35u: goto L_003F446C;
    case 36u: goto L_003F4480;
    case 37u: goto L_003F44C8;
    case 38u: goto L_003F44FC;
    case 39u: goto L_003F4584;
    case 40u: goto L_003F4798;
    case 41u: goto L_003F4860;
    case 42u: goto L_003F48BC;
    case 43u: goto L_003F48E4;
    case 44u: goto L_003F4900;
    case 45u: goto L_003F494C;
    case 46u: goto L_003F49E4;
    case 47u: goto L_003F4A1C;
    case 48u: goto L_003F4A34;
    case 49u: goto L_003F4A94;
    case 50u: goto L_003F4AD0;
    case 51u: goto L_003F4ADC;
    case 52u: goto L_003F4B00;
    case 53u: goto L_003F4B0C;
    case 54u: goto L_003F4B34;
    case 55u: goto L_003F4BC8;
    case 56u: goto L_003F4BF8;
    case 57u: goto L_003F4C08;
    case 58u: goto L_003F4C18;
    case 59u: goto L_003F4C38;
    case 60u: goto L_003F4C68;
    case 61u: goto L_003F4C84;
    case 62u: goto L_003F4C9C;
    case 63u: goto L_003F4CF4;
    case 64u: goto L_003F4D18;
    case 65u: goto L_003F4D44;
    case 66u: goto L_003F4D90;
    case 67u: goto L_003F4DB4;
    case 68u: goto L_003F4DCC;
    case 69u: goto L_003F4DDC;
    case 70u: goto L_003F4DF4;
    case 71u: goto L_003F4E04;
    case 72u: goto L_003F4EC0;
    case 73u: goto L_003F4ED0;
    case 74u: goto L_003F5078;
    case 75u: goto L_003F50FC;
    case 76u: goto L_003F5110;
    case 77u: goto L_003F52D0;
    case 78u: goto L_003F5318;
    case 79u: goto L_003F5350;
    case 80u: goto L_003F53E0;
    case 81u: goto L_003F542C;
    case 82u: goto L_003F5448;
    case 83u: goto L_003F5458;
    case 84u: goto L_003F5470;
    case 85u: goto L_003F547C;
    case 86u: goto L_003F54B0;
    case 87u: goto L_003F54C0;
    case 88u: goto L_003F54E0;
    case 89u: goto L_003F551C;
    case 90u: goto L_003F5534;
    case 91u: goto L_003F5588;
    case 92u: goto L_003F55A0;
    case 93u: goto L_003F55C0;
    case 94u: goto L_003F55E8;
    case 95u: goto L_003F55F4;
    case 96u: goto L_003F5608;
    case 97u: goto L_003F5618;
    case 98u: goto L_003F5630;
    case 99u: goto L_003F5660;
    case 100u: goto L_003F566C;
    case 101u: goto L_003F56B8;
    case 102u: goto L_003F56C8;
    case 103u: goto L_003F56EC;
    case 104u: goto L_003F56FC;
    case 105u: goto L_003F5720;
    case 106u: goto L_003F5738;
    case 107u: goto L_003F5748;
    case 108u: goto L_003F5770;
    case 109u: goto L_003F57C8;
    case 110u: goto L_003F5834;
    case 111u: goto L_003F5880;
    case 112u: goto L_003F5894;
    case 113u: goto L_003F58FC;
    case 114u: goto L_003F5910;
    case 115u: goto L_003F5940;
    case 116u: goto L_003F5958;
    case 117u: goto L_003F5970;
    case 118u: goto L_003F5998;
    case 119u: goto L_003F59B4;
    case 120u: goto L_003F59D0;
    case 121u: goto L_003F59E0;
    case 122u: goto L_003F5A08;
    case 123u: goto L_003F5A24;
    case 124u: goto L_003F5A78;
    case 125u: goto L_003F5AB0;
    case 126u: goto L_003F5AF8;
    case 127u: goto L_003F5B88;
    case 128u: goto L_003F5C0C;
    case 129u: goto L_003F5C20;
    case 130u: goto L_003F5C40;
    case 131u: goto L_003F5C64;
    case 132u: goto L_003F5C88;
    case 133u: goto L_003F5CC0;
    case 134u: goto L_003F5CD4;
    case 135u: goto L_003F5D00;
    case 136u: goto L_003F5D4C;
    case 137u: goto L_003F5D60;
    case 138u: goto L_003F5E10;
    case 139u: goto L_003F5E7C;
    case 140u: goto L_003F5ECC;
    case 141u: goto L_003F5EE0;
    case 142u: goto L_003F5EF4;
    case 143u: goto L_003F5F60;
    case 144u: goto L_003F5F80;
    case 145u: goto L_003F5FB0;
    case 146u: goto L_003F5FC8;
    case 147u: goto L_003F5FE0;
    case 148u: goto L_003F6008;
    case 149u: goto L_003F6024;
    case 150u: goto L_003F6040;
    case 151u: goto L_003F6050;
    case 152u: goto L_003F6078;
    case 153u: goto L_003F6094;
    case 154u: goto L_003F60E8;
    case 155u: goto L_003F6120;
    case 156u: goto L_003F6164;
    case 157u: goto L_003F61F0;
    case 158u: goto L_003F6274;
    case 159u: goto L_003F6288;
    case 160u: goto L_003F6298;
    case 161u: goto L_003F62E0;
    case 162u: goto L_003F62F4;
    case 163u: goto L_003F6320;
    case 164u: goto L_003F6360;
    case 165u: goto L_003F6370;
    case 166u: goto L_003F6420;
    case 167u: goto L_003F648C;
    case 168u: goto L_003F64DC;
    case 169u: goto L_003F64F0;
    case 170u: goto L_003F6504;
    case 171u: goto L_003F6530;
    case 172u: goto L_003F6560;
    case 173u: goto L_003F6578;
    case 174u: goto L_003F6590;
    case 175u: goto L_003F65B8;
    case 176u: goto L_003F65D4;
    case 177u: goto L_003F65F0;
    case 178u: goto L_003F6600;
    case 179u: goto L_003F6620;
    case 180u: goto L_003F6634;
    case 181u: goto L_003F6660;
    case 182u: goto L_003F6688;
    case 183u: goto L_003F6694;
    case 184u: goto L_003F66BC;
    case 185u: goto L_003F6800;
    case 186u: goto L_003F6844;
    case 187u: goto L_003F686C;
    case 188u: goto L_003F6880;
    case 189u: goto L_003F6894;
    case 190u: goto L_003F68E8;
    case 191u: goto L_003F6930;
    case 192u: goto L_003F6960;
    case 193u: goto L_003F6978;
    case 194u: goto L_003F6990;
    case 195u: goto L_003F69B8;
    case 196u: goto L_003F69D4;
    case 197u: goto L_003F69F0;
    case 198u: goto L_003F6A00;
    case 199u: goto L_003F6A8C;
    case 200u: goto L_003F6AA8;
    case 201u: goto L_003F6AE0;
    case 202u: goto L_003F6AF4;
    case 203u: goto L_003F6B30;
    case 204u: goto L_003F6B74;
    case 205u: goto L_003F6B80;
    case 206u: goto L_003F6B98;
    case 207u: goto L_003F6BB0;
    case 208u: goto L_003F6BD8;
    case 209u: goto L_003F6BF4;
    case 210u: goto L_003F6C10;
    case 211u: goto L_003F6C20;
    case 212u: goto L_003F6C78;
    case 213u: goto L_003F6C88;
    case 214u: goto L_003F6CA4;
    case 215u: goto L_003F6CBC;
    case 216u: goto L_003F6CD8;
    case 217u: goto L_003F6D34;
    case 218u: goto L_003F6D8C;
    case 219u: goto L_003F6DA4;
    case 220u: goto L_003F6DC0;
    case 221u: goto L_003F6DDC;
    case 222u: goto L_003F6DF4;
    case 223u: goto L_003F6E4C;
    case 224u: goto L_003F6E94;
    case 225u: goto L_003F6EE0;
    case 226u: goto L_003F6F04;
    case 227u: goto L_003F6F10;
    case 228u: goto L_003F6F34;
    case 229u: goto L_003F6F50;
    case 230u: goto L_003F6F70;
    case 231u: goto L_003F6FA0;
    case 232u: goto L_003F6FD8;
    case 233u: goto L_003F6FEC;
    case 234u: goto L_003F7000;
    case 235u: goto L_003F702C;
    case 236u: goto L_003F7040;
    case 237u: goto L_003F7054;
    case 238u: goto L_003F7090;
    case 239u: goto L_003F70D4;
    case 240u: goto L_003F70E0;
    case 241u: goto L_003F70F8;
    case 242u: goto L_003F7110;
    case 243u: goto L_003F7138;
    case 244u: goto L_003F7154;
    case 245u: goto L_003F7170;
    case 246u: goto L_003F7180;
    case 247u: goto L_003F71D4;
    case 248u: goto L_003F71E4;
    case 249u: goto L_003F7200;
    case 250u: goto L_003F7218;
    case 251u: goto L_003F7238;
    case 252u: goto L_003F7290;
    case 253u: goto L_003F72A8;
    case 254u: goto L_003F72C4;
    case 255u: goto L_003F72E0;
    case 256u: goto L_003F72F8;
    case 257u: goto L_003F7350;
    case 258u: goto L_003F7388;
    case 259u: goto L_003F73D0;
    case 260u: goto L_003F73F4;
    case 261u: goto L_003F7400;
    case 262u: goto L_003F7424;
    case 263u: goto L_003F7444;
    case 264u: goto L_003F7470;
    case 265u: goto L_003F74A8;
    case 266u: goto L_003F74BC;
    case 267u: goto L_003F74D0;
    case 268u: goto L_003F7508;
    case 269u: goto L_003F7520;
    case 270u: goto L_003F7534;
    case 271u: goto L_003F754C;
    case 272u: goto L_003F7560;
    case 273u: goto L_003F758C;
    case 274u: goto L_003F7598;
    case 275u: goto L_003F75B0;
    case 276u: goto L_003F75D0;
    case 277u: goto L_003F75F8;
    case 278u: goto L_003F7614;
    case 279u: goto L_003F7630;
    case 280u: goto L_003F7640;
    case 281u: goto L_003F7664;
    case 282u: goto L_003F7670;
    case 283u: goto L_003F76A0;
    case 284u: goto L_003F76B0;
    case 285u: goto L_003F76C4;
    case 286u: goto L_003F76F0;
    case 287u: goto L_003F7720;
    case 288u: goto L_003F7738;
    case 289u: goto L_003F7750;
    case 290u: goto L_003F7778;
    case 291u: goto L_003F7794;
    case 292u: goto L_003F77B0;
    case 293u: goto L_003F77C0;
    case 294u: goto L_003F77E8;
    case 295u: goto L_003F7850;
    case 296u: goto L_003F7870;
    case 297u: goto L_003F788C;
    case 298u: goto L_003F78C4;
    case 299u: goto L_003F78D8;
    case 300u: goto L_003F78F4;
    case 301u: goto L_003F7980;
    case 302u: goto L_003F79C0;
    case 303u: goto L_003F79D4;
    case 304u: goto L_003F79EC;
    case 305u: goto L_003F7A10;
    case 306u: goto L_003F7A38;
    case 307u: goto L_003F7A54;
    case 308u: goto L_003F7A70;
    case 309u: goto L_003F7A80;
    case 310u: goto L_003F7AA0;
    case 311u: goto L_003F7AB0;
    case 312u: goto L_003F7AE0;
    case 313u: goto L_003F7B3C;
    case 314u: goto L_003F7B48;
    case 315u: goto L_003F7B6C;
    case 316u: goto L_003F7B78;
    case 317u: goto L_003F7B84;
    case 318u: goto L_003F7B94;
    case 319u: goto L_003F7BA0;
    case 320u: goto L_003F7BB0;
    case 321u: goto L_003F7BC0;
    case 322u: goto L_003F7BCC;
    case 323u: goto L_003F7BE8;
    case 324u: goto L_003F7C9C;
    case 325u: goto L_003F7CE0;
    case 326u: goto L_003F7D60;
    case 327u: goto L_003F7E48;
    case 328u: goto L_003F7F14;
    case 329u: goto L_003F7F50;
    default: bad_entry(c, 0x003F4000u); return;
    }
L_003F4000:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4010u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F4010u) [[unlikely]] return; }
L_003F4010:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F40F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F40F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4034u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003F4034u) [[unlikely]] return; }
L_003F4034:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), c.r[4].w[0]);  goto L_003F4054; }
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F404Cu); set32(c.r[6], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x003F404Cu) [[unlikely]] return; }
L_003F404C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 144u), c.r[4].w[0]);
    c.budget -= 2;
L_003F4054:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F40F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003F4060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4068u);  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003F4068u) [[unlikely]] return; }
L_003F4068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_003F40F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], c.r[16].w[0] + 92u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4084u); set32(c.r[6], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 38u, depth + 1u); else { c.pc = 0x0015C3D0u; return; } if (c.pc != 0x003F4084u) [[unlikely]] return; }
L_003F4084:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 44u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 92u));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 100u));
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40F0u); st32((c.r[16].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_00B5(c, 33u, depth + 1u); else { c.pc = 0x003F4410u; return; } if (c.pc != 0x003F40F0u) [[unlikely]] return; }
L_003F40F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F410C; } }
L_003F40F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F40FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_003F410C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003F4288; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F41B8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F41B4; } }
    c.f[2] = ld32((c.r[6].w[0] + 80u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F428C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_003F4200; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F41ACu);  if (depth < kMaxDepth) unit_00B5(c, 33u, depth + 1u); else { c.pc = 0x003F4410u; return; } if (c.pc != 0x003F41ACu) [[unlikely]] return; }
L_003F41AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F41FC; } }
L_003F41B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F41B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F41C0u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003F41C0u) [[unlikely]] return; }
L_003F41C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F4288; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F41FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F41FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 33u, depth + 1u); else { c.pc = 0x003F4410u; return; } if (c.pc != 0x003F41FCu) [[unlikely]] return; }
L_003F41FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003F4200:
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003F422C; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[3].w[0] + 12u));  goto L_003F4240; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F422C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4238u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B5(c, 41u, depth + 1u); else { c.pc = 0x003F4860u; return; } if (c.pc != 0x003F4238u) [[unlikely]] return; }
L_003F4238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 76u));  if (t) { goto L_003F4280; } }
L_003F4240:
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_003F4270; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4260u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B5(c, 41u, depth + 1u); else { c.pc = 0x003F4860u; return; } if (c.pc != 0x003F4260u) [[unlikely]] return; }
L_003F4260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4268u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 77u, depth + 1u); else { c.pc = 0x003F52D0u; return; } if (c.pc != 0x003F4268u) [[unlikely]] return; }
L_003F4268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F427C; } }
L_003F4270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F427C:
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 1;
L_003F4280:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.budget -= 2;
L_003F4288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F428C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F42A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3C50u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 276u, depth); }
L_003F42B0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F42D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003F43F4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));  goto L_003F4320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F43F0; } }
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_003F4320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4328u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x003F4328u) [[unlikely]] return; }
L_003F4328:
    set32(c.r[5], ld32((c.r[20].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4338u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x001615D0u; return; } if (c.pc != 0x003F4338u) [[unlikely]] return; }
L_003F4338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4340u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003F4340u) [[unlikely]] return; }
L_003F4340:
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 248ull;
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4364u); st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003F4364u) [[unlikely]] return; }
L_003F4364:
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 199ull;
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] | 24ull;
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st64((c.r[3].w[0] + 16u), 0ull);
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F439Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003F439Cu) [[unlikely]] return; }
L_003F439C:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43ACu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003F43ACu) [[unlikely]] return; }
L_003F43AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43B4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003F43B4u) [[unlikely]] return; }
L_003F43B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003F43BCu) [[unlikely]] return; }
L_003F43BC:
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 333u, depth + 1u); else { c.pc = 0x0015AE30u; return; } if (c.pc != 0x003F43CCu) [[unlikely]] return; }
L_003F43CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43D4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003F43D4u) [[unlikely]] return; }
L_003F43D4:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003F43E0u) [[unlikely]] return; }
L_003F43E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43F0u); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x003F43F0u) [[unlikely]] return; }
L_003F43F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003F43F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F4410:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4444u); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F4444u) [[unlikely]] return; }
L_003F4444:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = c.r[3].w[0];
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F446Cu); set32(c.r[4], ld32((c.r[2].w[0] + 104u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F446Cu) [[unlikely]] return; }
L_003F446C:
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003F44A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F4480:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4480u | kUnwind; return; } goto L_003F4480; } }
L_003F44A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_003F44BC; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_003F44BC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F4570; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F44C8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_003F44F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F44F0; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 2;
L_003F44F0:
    set32(c.r[20], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F44FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F44FCu) [[unlikely]] return; }
L_003F44FC:
    c.f[3] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.f[2] = ld32((c.r[20].w[0] + 80u));
    c.f[1] = 0u;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F4540; } }
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 2;
L_003F4540:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_003F4560; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_003F4560:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F44C8u | kUnwind; return; } goto L_003F44C8; } }
    c.budget -= 1;
L_003F4570:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003F4830; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003F4584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003F4608; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003F4624; } }
L_003F4608:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_003F4624:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[7], c.r[4].w[0] << 24);
    c.f[1] = ld32((c.r[3].w[0] + 76u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003F4664; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003F467C; } }
L_003F4664:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003F467C:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[4].w[0] << 16);
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];  if (t) { goto L_003F46BC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003F46D8; } }
L_003F46BC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_003F46D8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[4].w[0] << 8);
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];  if (t) { goto L_003F4718; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003F4734; } }
L_003F4718:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003F4734:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F47D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_003F4790; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[20], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_003F47A8; } }
    c.budget -= 1;
L_003F4790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4798u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F4798u) [[unlikely]] return; }
L_003F4798:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_003F47A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[4].w[0]);  if (t) { goto L_003F4810; } }
L_003F47D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 14;
L_003F4810:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4584u | kUnwind; return; } goto L_003F4584; } }
    c.budget -= 1;
L_003F4830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F4860:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003F48C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003F48C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F48BCu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_00B5(c, 80u, depth + 1u); else { c.pc = 0x003F53E0u; return; } if (c.pc != 0x003F48BCu) [[unlikely]] return; }
L_003F48BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  if (t) { goto L_003F48E8; } }
L_003F48C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003F48C8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 264u), 0u);
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F48E4u); st32((c.r[29].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003F48E4u) [[unlikely]] return; }
L_003F48E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_003F48E8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_003F495C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4900u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003F4900u) [[unlikely]] return; }
L_003F4900:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 128u)));  goto L_003F4950; }
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[16] = 0u;
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[13] = ld32((c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.f[14] = ld32((c.r[3].w[0] + 4u));
    c.f[15] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F494Cu); c.f[19] = c.f[16];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003F494Cu) [[unlikely]] return; }
L_003F494C:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_003F4950:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_003F52A0; } }
L_003F495C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_003F499C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_003F49A0; }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_003F499C:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003F49A0:
    c.budget -= 2;
    if (c.r[4].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_003F49CC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F49C8; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_003F49C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003F49CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F4AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F49E4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003F49E4u) [[unlikely]] return; }
L_003F49E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F4AB8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003F4AB8; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003F4A1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A34u); set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003F4A34u) [[unlikely]] return; }
L_003F4A34:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F4A98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[16] = 0u;
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[19] = c.f[16];
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[13] = ld32((c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.f[14] = ld32((c.r[4].w[0] + 4u));
    c.f[15] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A94u); set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003F4A94u) [[unlikely]] return; }
L_003F4A94:
    c.budget -= 1;
L_003F4A98:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4A1Cu | kUnwind; return; } goto L_003F4A1C; } }
L_003F4AB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4AD0u); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F4AD0u) [[unlikely]] return; }
L_003F4AD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4ADCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F4ADCu) [[unlikely]] return; }
L_003F4ADC:
    c.f[20] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F4B18; } }
L_003F4AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B00u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F4B00u) [[unlikely]] return; }
L_003F4B00:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B0Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F4B0Cu) [[unlikely]] return; }
L_003F4B0C:
    c.f[20] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 3;
L_003F4B18:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B34u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003F4B34u) [[unlikely]] return; }
L_003F4B34:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 128u)));  goto L_003F4BCC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.f[16] = 0u;
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[7], ld32((c.r[17].w[0] + 60u)));
    c.f[19] = c.f[16];
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.f[13] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[14] = ld32((c.r[2].w[0] + 4u));
    c.f[15] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BC8u); set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003F4BC8u) [[unlikely]] return; }
L_003F4BC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_003F4BCC:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_003F52A4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));  goto L_003F4BFC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BF8u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0018(c, 130u, depth + 1u); else { c.pc = 0x00181230u; return; } if (c.pc != 0x003F4BF8u) [[unlikely]] return; }
L_003F4BF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_003F4BFC:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C08u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003F4C08u) [[unlikely]] return; }
L_003F4C08:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003F4CD0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F4C18:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F4C40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.f[12] = c.f[21];
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C38u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003F4C38u) [[unlikely]] return; }
L_003F4C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F4C88; } }
L_003F4C40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003F4C70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C68u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003F4C68u) [[unlikely]] return; }
L_003F4C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F4C88; } }
L_003F4C70:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C84u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B5(c, 98u, depth + 1u); else { c.pc = 0x003F5630u; return; } if (c.pc != 0x003F4C84u) [[unlikely]] return; }
L_003F4C84:
    c.budget -= 1;
L_003F4C88:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C9Cu); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B5(c, 93u, depth + 1u); else { c.pc = 0x003F55C0u; return; } if (c.pc != 0x003F4C9Cu) [[unlikely]] return; }
L_003F4C9C:
    c.f[21] = fp::ee::sub(c.fcr31, c.f[21], c.f[20]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F4CB8; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_003F4CB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4C18u | kUnwind; return; } goto L_003F4C18; } }
    c.budget -= 1;
L_003F4CD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_003F4D10; }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CF4u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F4CF4u) [[unlikely]] return; }
L_003F4CF4:
    c.f[21] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F4D28; } }
L_003F4D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D18u); set32(c.r[16], ld32((c.r[17].w[0] + 40u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F4D18u) [[unlikely]] return; }
L_003F4D18:
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_003F4D28:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.f[20] = ld32((c.r[17].w[0] + 84u));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003F52A0; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F4D44:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] << 1);  if (t) { goto L_003F4D68; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F4DE0; } }
    c.budget -= 1;
L_003F4D68:
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_003F4D98; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D90u); set32(c.r[6], c.r[3].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003F4D90u) [[unlikely]] return; }
L_003F4D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F4DB8; } }
L_003F4D98:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DB4u); set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003F4DB4u) [[unlikely]] return; }
L_003F4DB4:
    c.budget -= 1;
L_003F4DB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DCCu); set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003F4DCCu) [[unlikely]] return; }
L_003F4DCC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DDCu); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003F4DDCu) [[unlikely]] return; }
L_003F4DDC:
    c.budget -= 1;
L_003F4DE0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DF4u); c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003F4DF4u) [[unlikely]] return; }
L_003F4DF4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E04u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F4E04u) [[unlikely]] return; }
L_003F4E04:
    set32(c.r[5], ld32((c.r[17].w[0] + 136u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[3], 0u + 1u);
    c.f[6] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[5], c.r[5].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 188u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[4].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.f[4] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[3] = c.r[4].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 184u), c.f[7]);
    st32((c.r[29].w[0] + 180u), c.f[5]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 30;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F4FD0; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_003F4FA0; } }
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4EC0u); st32((c.r[29].w[0] + 156u), c.f[3]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x003F4EC0u) [[unlikely]] return; }
L_003F4EC0:
    c.f[22] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4ED0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x003F4ED0u) [[unlikely]] return; }
L_003F4ED0:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F4F40; } }
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[2]);  if (t) { goto L_003F5020; } }
    c.budget -= 1;
L_003F4F40:
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[3], c.r[4].w[0] << 1);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[2]);  if (t) { goto L_003F5020; } }
L_003F4FA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[5]);
    st32((c.r[3].w[0] + 8u), c.f[7]);
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[3].w[0] + 24u), c.f[0]);
    st32((c.r[3].w[0] + 28u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.f[2]);  if (t) { goto L_003F5020; } }
L_003F4FD0:
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0]), c.f[1]);
    set32(c.r[4], c.r[3].w[0] << 3);
    st32((c.r[5].w[0] + 4u), c.f[5]);
    st32((c.r[5].w[0] + 8u), c.f[7]);
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    c.budget -= 20;
L_003F5020:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F50E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5050; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F5160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5160; } }
L_003F5050:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_003F5070; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 284u), c.f[0]);  if (t) { goto L_003F5090; } }
    c.budget -= 1;
L_003F5070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5078u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F5078u) [[unlikely]] return; }
L_003F5078:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 60u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.budget -= 6;
L_003F5090:
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 64u));
    set32(c.r[5], c.r[5].w[0] << 4);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.f[1] = ld32((c.r[5].w[0] + 72u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[1]);  if (t) { goto L_003F5160; } }
L_003F50E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 284u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F50FCu); set32(c.r[7], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_00B5(c, 88u, depth + 1u); else { c.pc = 0x003F54E0u; return; } if (c.pc != 0x003F50FCu) [[unlikely]] return; }
L_003F50FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 276u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5110u); set32(c.r[7], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00B5(c, 88u, depth + 1u); else { c.pc = 0x003F54E0u; return; } if (c.pc != 0x003F5110u) [[unlikely]] return; }
L_003F5110:
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    set32(c.r[4], c.r[3].w[0] << 3);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 16u), c.f[1]);
    c.budget -= 20;
L_003F5160:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_003F5280; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    mmi::div(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5280; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5280; } }
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[9], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[2] = ld32((c.r[9].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    set32(c.r[7], c.r[5].w[0] << 3);
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[4], 0u + 2u);
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 32u));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 35;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003F5238; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003F5238; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F5278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5278; } }
L_003F5238:
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 16u), c.f[1]);
    c.budget -= 16;
L_003F5278:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_003F5280:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4D44u | kUnwind; return; } goto L_003F4D44; } }
    c.budget -= 1;
L_003F52A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003F52A4:
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_003F52D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_003F5304; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_003F5304:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F53C0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
L_003F5318:
    c.f[3] = ld32((c.r[19].w[0] + 76u));
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    c.f[2] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5350u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F5350u) [[unlikely]] return; }
L_003F5350:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003F5360; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F5360:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 24);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 48u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 19;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_003F53B4; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_003F53B4:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5318u | kUnwind; return; } goto L_003F5318; }
L_003F53C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F53E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F54C0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003F5434; }
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F542Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003F542Cu) [[unlikely]] return; }
L_003F542C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003F545C; } }
L_003F5434:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_003F5450; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5448u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003F5448u) [[unlikely]] return; }
L_003F5448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5458; } }
L_003F5450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5458u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003F5458u) [[unlikely]] return; }
L_003F5458:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003F545C:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5470u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003F5470u) [[unlikely]] return; }
L_003F5470:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F547Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003F547Cu) [[unlikely]] return; }
L_003F547C:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[3].w[0] + 64u));
    c.f[1] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54B0u); st32((c.r[29].w[0] + 104u), c.f[2]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003F54B0u) [[unlikely]] return; }
L_003F54B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54C0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003F54C0u) [[unlikely]] return; }
L_003F54C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F54E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F551Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003F551Cu) [[unlikely]] return; }
L_003F551C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 108u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5534u); set32(c.r[8], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0015C690u; return; } if (c.pc != 0x003F5534u) [[unlikely]] return; }
L_003F5534:
    c.f[3] = ld32((c.r[19].w[0] + 100u));
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[4] = 0u;
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[2] = ld32((c.r[19].w[0] + 96u));
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5588u); set32(c.r[4], ld32((c.r[19].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003F5588u) [[unlikely]] return; }
L_003F5588:
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F55A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 290u, depth + 1u); else { c.pc = 0x003C6D80u; return; } if (c.pc != 0x003F55A0u) [[unlikely]] return; }
L_003F55A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F55C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F55E8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003F55E8u) [[unlikely]] return; }
L_003F55E8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F55F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003F55F4u) [[unlikely]] return; }
L_003F55F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = ld32((c.r[2].w[0] + 84u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5608u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F5608u) [[unlikely]] return; }
L_003F5608:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5618u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003F5618u) [[unlikely]] return; }
L_003F5618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F5630:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5660u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F5660u) [[unlikely]] return; }
L_003F5660:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F566Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F566Cu) [[unlikely]] return; }
L_003F566C:
    c.f[3] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = c.r[18].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 15;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[20];  goto L_003F56C0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 132u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003F56B8u) [[unlikely]] return; }
L_003F56B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003F574C; } }
L_003F56C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56C8u);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003F56C8u) [[unlikely]] return; }
L_003F56C8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], c.r[19].w[0] + 1u);  if (t) { goto L_003F56F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56ECu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x003F56ECu) [[unlikely]] return; }
L_003F56EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (t) { goto L_003F5700; } }
L_003F56F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003F56FCu) [[unlikely]] return; }
L_003F56FC:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 1;
L_003F5700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[19].w[0] << 4);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5720u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F5720u) [[unlikely]] return; }
L_003F5720:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], c.r[18].w[0] << 4);
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5738u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F5738u) [[unlikely]] return; }
L_003F5738:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5748u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003F5748u) [[unlikely]] return; }
L_003F5748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003F574C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F5770:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 16u), c.f[20]);  if (t) { goto L_003F5850; } }
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[20], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { goto L_003F5850; } }
    c.f[21] = ld32((c.r[29].w[0] + 164u));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 168u));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003F57C8:
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 108u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F5838; } }
    st32((c.r[29].w[0]), 0u);
    c.f[16] = 0u;
    set32(c.r[2], ld32((c.r[21].w[0] + 140u)));
    c.f[13] = ld32((c.r[20].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 124u)));
    c.f[14] = ld32((c.r[20].w[0] + 4u));
    c.f[15] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5834u); c.f[19] = c.f[16];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003F5834u) [[unlikely]] return; }
L_003F5834:
    c.budget -= 1;
L_003F5838:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 88u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F57C8u | kUnwind; return; } goto L_003F57C8; } }
L_003F5850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F5880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F5894u) [[unlikely]] return; }
L_003F5894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 11616u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 104u), 0u);  goto L_003F58CC; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F5900; } }
L_003F58CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F58FCu); st32((c.r[16].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_00B5(c, 137u, depth + 1u); else { c.pc = 0x003F5D60u; return; } if (c.pc != 0x003F58FCu) [[unlikely]] return; }
L_003F58FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F5900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F5910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F5958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5940u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F5940u) [[unlikely]] return; }
L_003F5940:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F595C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5958u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F5958u) [[unlikely]] return; }
L_003F5958:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F595C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5998u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F5998u) [[unlikely]] return; }
L_003F5998:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F59B8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F59B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 111u, depth + 1u); else { c.pc = 0x003F5880u; return; } if (c.pc != 0x003F59B4u) [[unlikely]] return; }
L_003F59B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F59B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F59D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 30u);  c.pc = t; return; }
L_003F59E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A08u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003F5A08u) [[unlikely]] return; }
L_003F5A08:
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F5A58; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003F5A24:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 16u));  goto L_003F5A40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003F5A58; } }
L_003F5A40:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5A24u | kUnwind; return; } goto L_003F5A24; } }
    c.budget -= 1;
L_003F5A58:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F5A88; }
    c.f[12] = ld32((c.r[16].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A78u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003F5A78u) [[unlikely]] return; }
L_003F5A78:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 124u), c.f[0]);
    st32((c.r[16].w[0] + 124u), c.f[1]);
    c.budget -= 3;
L_003F5A84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F5A88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F5AB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003F5C9C; } }
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[2] = ld32((c.r[17].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], ld32((c.r[17].w[0] + 112u)));  if (t) { goto L_003F5BA0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_003F5AF8:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[17].w[0] + 124u));  goto L_003F5B28; }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { goto L_003F5C20; } }
L_003F5B28:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 124u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F5B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), 0u);  if (t) { goto L_003F5B60; } }
    c.budget -= 1;
L_003F5B58:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 2;
L_003F5B60:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F5B80; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003F5C9C; } }
L_003F5B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5B88u);  if (depth < kMaxDepth) unit_00B5(c, 137u, depth + 1u); else { c.pc = 0x003F5D60u; return; } if (c.pc != 0x003F5B88u) [[unlikely]] return; }
L_003F5B88:
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[2] = ld32((c.r[17].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[17].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5AF8u | kUnwind; return; } goto L_003F5AF8; }
    c.budget -= 1;
L_003F5BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 120u), c.f[1]);
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 120u));  goto L_003F5BF4; }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { goto L_003F5C20; } }
L_003F5BF4:
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.f[14] = ld32((c.r[2].w[0] + 20u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C0Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003F5C0Cu) [[unlikely]] return; }
L_003F5C0C:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C20u); set32(c.r[6], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003F5C20u) [[unlikely]] return; }
L_003F5C20:
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C40u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F5C40u) [[unlikely]] return; }
L_003F5C40:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C64u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F5C64u) [[unlikely]] return; }
L_003F5C64:
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C88u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F5C88u) [[unlikely]] return; }
L_003F5C88:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.budget -= 5;
L_003F5C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F5CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003F5CD4u) [[unlikely]] return; }
L_003F5CD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F5CF4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003F5CF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F5D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F5D50; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[8].w[0] + 48u)));  goto L_003F5D3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5D4C; } }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    c.budget -= 1;
L_003F5D3C:
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D4Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003F5D4Cu) [[unlikely]] return; }
L_003F5D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F5D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F5D60:
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = 0u;
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[4].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[4].w[0] + 92u), c.f[1]);
    set32(c.r[6], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 120u), c.f[1]);
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 96u), c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[3]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5E04; } }
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.budget -= 8;
L_003F5E04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F5E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F5E84; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 116u)));  goto L_003F5E30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F5ED0; } }
L_003F5E30:
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F5ECC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5ECC; } }
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E7Cu); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_00B5(c, 137u, depth + 1u); else { c.pc = 0x003F5D60u; return; } if (c.pc != 0x003F5E7Cu) [[unlikely]] return; }
L_003F5E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5ECC; } }
L_003F5E84:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003F5ECC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5ECC; } }
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5ECCu); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_00B5(c, 137u, depth + 1u); else { c.pc = 0x003F5D60u; return; } if (c.pc != 0x003F5ECCu) [[unlikely]] return; }
L_003F5ECC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F5ED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F5EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F5EF4u) [[unlikely]] return; }
L_003F5EF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 11680u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003F5F2C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F5F64; } }
L_003F5F2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F60u); st32((c.r[16].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_00B5(c, 165u, depth + 1u); else { c.pc = 0x003F6370u; return; } if (c.pc != 0x003F5F60u) [[unlikely]] return; }
L_003F5F60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F5F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F5F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F5FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5FB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F5FB0u) [[unlikely]] return; }
L_003F5FB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F5FCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5FC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F5FC8u) [[unlikely]] return; }
L_003F5FC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F5FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5FE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6008u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F6008u) [[unlikely]] return; }
L_003F6008:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F6028; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6024u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 141u, depth + 1u); else { c.pc = 0x003F5EE0u; return; } if (c.pc != 0x003F6024u) [[unlikely]] return; }
L_003F6024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F6028:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 50u);  c.pc = t; return; }
L_003F6050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6078u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003F6078u) [[unlikely]] return; }
L_003F6078:
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F60C8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003F6094:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 16u));  goto L_003F60B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003F60C8; } }
L_003F60B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6094u | kUnwind; return; } goto L_003F6094; } }
    c.budget -= 1;
L_003F60C8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F60F8; }
    c.f[12] = ld32((c.r[16].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F60F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60E8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003F60E8u) [[unlikely]] return; }
L_003F60E8:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 124u), c.f[0]);
    st32((c.r[16].w[0] + 124u), c.f[1]);
    c.budget -= 3;
L_003F60F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F60F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003F62C8; } }
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[2] = ld32((c.r[17].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], ld32((c.r[17].w[0] + 112u)));  if (t) { goto L_003F6208; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_003F6164:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[17].w[0] + 124u));  goto L_003F6194; }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { goto L_003F6288; } }
L_003F6194:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 124u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F61C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), 0u);  if (t) { goto L_003F61C8; } }
L_003F61C0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 2;
L_003F61C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F61E8; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003F62C8; } }
L_003F61E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61F0u);  if (depth < kMaxDepth) unit_00B5(c, 165u, depth + 1u); else { c.pc = 0x003F6370u; return; } if (c.pc != 0x003F61F0u) [[unlikely]] return; }
L_003F61F0:
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[2] = ld32((c.r[17].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[17].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6164u | kUnwind; return; } goto L_003F6164; }
    c.budget -= 1;
L_003F6208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 120u), c.f[1]);
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 120u));  goto L_003F625C; }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { goto L_003F6288; } }
L_003F625C:
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.f[14] = ld32((c.r[2].w[0] + 20u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6274u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003F6274u) [[unlikely]] return; }
L_003F6274:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6288u); set32(c.r[6], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003F6288u) [[unlikely]] return; }
L_003F6288:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6298u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F6298u) [[unlikely]] return; }
L_003F6298:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.budget -= 12;
L_003F62C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F62E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003F62F4u) [[unlikely]] return; }
L_003F62F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F6314; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003F6314:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F6364; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[4].w[0] + 48u);  goto L_003F6358; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6360; } }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_003F6358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6360u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003F6360u) [[unlikely]] return; }
L_003F6360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F6364:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F6370:
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = 0u;
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[4].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[4].w[0] + 92u), c.f[1]);
    set32(c.r[6], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 120u), c.f[1]);
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 96u), c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[3]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F6414; } }
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.budget -= 8;
L_003F6414:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F6420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F6494; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 116u)));  goto L_003F6440; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F64E0; } }
L_003F6440:
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F64DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F64DC; } }
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F648Cu); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_00B5(c, 165u, depth + 1u); else { c.pc = 0x003F6370u; return; } if (c.pc != 0x003F648Cu) [[unlikely]] return; }
L_003F648C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F64DC; } }
L_003F6494:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003F64DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F64DC; } }
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F64DCu); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_00B5(c, 165u, depth + 1u); else { c.pc = 0x003F6370u; return; } if (c.pc != 0x003F64DCu) [[unlikely]] return; }
L_003F64DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F64E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F64F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6504u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F6504u) [[unlikely]] return; }
L_003F6504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 11744u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F6578; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6560u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F6560u) [[unlikely]] return; }
L_003F6560:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F657C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F6578u) [[unlikely]] return; }
L_003F6578:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F657C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F65B8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F65B8u) [[unlikely]] return; }
L_003F65B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F65D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F65D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 169u, depth + 1u); else { c.pc = 0x003F64F0u; return; } if (c.pc != 0x003F65D4u) [[unlikely]] return; }
L_003F65D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F65D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F65F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 206u);  c.pc = t; return; }
L_003F6600:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003F6620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003F6634u) [[unlikely]] return; }
L_003F6634:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F6654; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003F6654:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F67E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6688u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003F6688u) [[unlikely]] return; }
L_003F6688:
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6694u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x003F6694u) [[unlikely]] return; }
L_003F6694:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[11].d[0] = 0ull + 0ull;
    c.f[3] = 0u;
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003F67A8; } }
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_003F66BC:
    set32(c.r[5], ld32((c.r[9].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.f[2] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F66D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F66D8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_003F6798; }
    c.budget -= 2;
    if (c.r[10].d[0] != 0ull) { c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);  goto L_003F6710; }
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.f[3]);  if (t) { goto L_003F6790; } }
L_003F6710:
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[7] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[5] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[4]);
    st32((c.r[16].w[0] + 56u), c.f[6]);
    c.budget -= 32;
L_003F6790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 1u);  if (t) { goto L_003F67A8; } }
L_003F6798:
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[3].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[3] = c.f[2];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F66BCu | kUnwind; return; } goto L_003F66BC; } }
L_003F67A8:
    c.budget -= 2;
    if (c.r[11].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F67EC; }
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[3] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[3]);
    c.budget -= 14;
L_003F67E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F67EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F686C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003F6858; }
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6844u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003F6844u) [[unlikely]] return; }
L_003F6844:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F686C; } }
L_003F6858:
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F686Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003F686Cu) [[unlikely]] return; }
L_003F686C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F6894u) [[unlikely]] return; }
L_003F6894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 11808u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F690C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F68E8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003F68E8u) [[unlikely]] return; }
L_003F68E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F691C; } }
L_003F6908:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F690C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003F691C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F6978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6960u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F6960u) [[unlikely]] return; }
L_003F6960:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F697C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6978u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F6978u) [[unlikely]] return; }
L_003F6978:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F697C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69B8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F69B8u) [[unlikely]] return; }
L_003F69B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F69D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 188u, depth + 1u); else { c.pc = 0x003F6880u; return; } if (c.pc != 0x003F69D4u) [[unlikely]] return; }
L_003F69D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F69D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F69F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 615u);  c.pc = t; return; }
L_003F6A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F6ACC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 7u);  goto L_003F6A40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6AC8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_003F6A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[3].w[0] + 176u), 0u);
    st32((c.r[3].w[0] + 180u), 0u);
    st32((c.r[3].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6A8Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003F6A8Cu) [[unlikely]] return; }
L_003F6A8C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6AA8u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x003F6AA8u) [[unlikely]] return; }
L_003F6AA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6AC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003F6AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F6ACC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6AF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F6AF4u) [[unlikely]] return; }
L_003F6AF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 11872u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F6B98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], c.r[3].w[0] + 11872u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003F6B78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B74u);  if (depth < kMaxDepth) unit_00B5(c, 227u, depth + 1u); else { c.pc = 0x003F6F10u; return; } if (c.pc != 0x003F6B74u) [[unlikely]] return; }
L_003F6B74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F6B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F6B80u) [[unlikely]] return; }
L_003F6B80:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F6B9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F6B98u) [[unlikely]] return; }
L_003F6B98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F6B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6BD8u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F6BD8u) [[unlikely]] return; }
L_003F6BD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F6BF8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6BF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 201u, depth + 1u); else { c.pc = 0x003F6AE0u; return; } if (c.pc != 0x003F6BF4u) [[unlikely]] return; }
L_003F6BF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F6BF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 616u);  c.pc = t; return; }
L_003F6C20:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6EA4; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_003F6E8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C78u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003F6C78u) [[unlikely]] return; }
L_003F6C78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[22].w[0] + 56u), c.r[2].w[0]);  goto L_003F6C8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x003F6C88u) [[unlikely]] return; }
L_003F6C88:
    st32((c.r[22].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_003F6C8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6E88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[17].w[0] << 5);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6CA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F6CA4u) [[unlikely]] return; }
L_003F6CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[22].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003F6E88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[17].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6CBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F6CBCu) [[unlikely]] return; }
L_003F6CBC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[22].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003F6E88; } }
    set32(c.r[21], ld32((c.r[22].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003F6E80; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F6CD8:
    set32(c.r[3], ld32((c.r[22].w[0] + 44u)));
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_003F6D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F6D04; } }
L_003F6D00:
    set32(c.r[2], c.r[21].w[0] + 32u);
    c.budget -= 1;
L_003F6D04:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[21].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[21].w[0] + 12u), 0u);
    st32((c.r[21].w[0] + 16u), 0u);
    st32((c.r[21].w[0] + 20u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[21].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D34u); st32((c.r[21].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003F6D34u) [[unlikely]] return; }
L_003F6D34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 16096u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 16100u));
    c.f[4] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 16104u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[29].w[0] + 180u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 16108u));
    st32((c.r[29].w[0] + 184u), c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[4]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D8Cu); st32((c.r[29].w[0] + 184u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003F6D8Cu) [[unlikely]] return; }
L_003F6D8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6DA4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F6DA4u) [[unlikely]] return; }
L_003F6DA4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6DC0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F6DC0u) [[unlikely]] return; }
L_003F6DC0:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6DDCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F6DDCu) [[unlikely]] return; }
L_003F6DDC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6DF4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003F6DF4u) [[unlikely]] return; }
L_003F6DF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 16080u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[6] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[5] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 16084u));
    c.f[4] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 16088u));
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 16092u));
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[4]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E4Cu); st32((c.r[29].w[0] + 168u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003F6E4Cu) [[unlikely]] return; }
L_003F6E4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6E68; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003F6E68:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6CD8u | kUnwind; return; } goto L_003F6CD8; } }
L_003F6E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003F6EA8; } }
L_003F6E88:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003F6E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E94u);  if (depth < kMaxDepth) unit_00B5(c, 227u, depth + 1u); else { c.pc = 0x003F6F10u; return; } if (c.pc != 0x003F6E94u) [[unlikely]] return; }
L_003F6E94:
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003F6EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003F6EA8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003F6EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F6F08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F04u);  if (depth < kMaxDepth) unit_00B5(c, 227u, depth + 1u); else { c.pc = 0x003F6F10u; return; } if (c.pc != 0x003F6F04u) [[unlikely]] return; }
L_003F6F04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F6F08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F6F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6F38; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003F6F34u) [[unlikely]] return; }
L_003F6F34:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003F6F38:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_003F6F58; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003F6F50u) [[unlikely]] return; }
L_003F6F50:
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 2;
L_003F6F58:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F6F78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F6F70u) [[unlikely]] return; }
L_003F6F70:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003F6F78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F6FF0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FD8u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x003F6FD8u) [[unlikely]] return; }
L_003F6FD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FECu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003F6FECu) [[unlikely]] return; }
L_003F6FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F6FF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F7030; }
    set32(c.r[4], ld32((c.r[5].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F702Cu); set32(c.r[5], ld32((c.r[5].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 225u, depth + 1u); else { c.pc = 0x00159A80u; return; } if (c.pc != 0x003F702Cu) [[unlikely]] return; }
L_003F702C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F7030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7054u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F7054u) [[unlikely]] return; }
L_003F7054:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 11936u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F70F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], c.r[3].w[0] + 11936u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003F70D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70D4u);  if (depth < kMaxDepth) unit_00B5(c, 261u, depth + 1u); else { c.pc = 0x003F7400u; return; } if (c.pc != 0x003F70D4u) [[unlikely]] return; }
L_003F70D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F70D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F70E0u) [[unlikely]] return; }
L_003F70E0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F70FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F70F8u) [[unlikely]] return; }
L_003F70F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F70FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7138u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F7138u) [[unlikely]] return; }
L_003F7138:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F7158; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7154u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 236u, depth + 1u); else { c.pc = 0x003F7040u; return; } if (c.pc != 0x003F7154u) [[unlikely]] return; }
L_003F7154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F7158:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F7170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 617u);  c.pc = t; return; }
L_003F7180:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F7398; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[23].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F7380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71D4u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003F71D4u) [[unlikely]] return; }
L_003F71D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  goto L_003F71E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x003F71E4u) [[unlikely]] return; }
L_003F71E4:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003F71E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F737C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[23].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7200u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F7200u) [[unlikely]] return; }
L_003F7200:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003F737C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003F7368; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F7218:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003F7238u) [[unlikely]] return; }
L_003F7238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 16128u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[6] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 16132u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 16136u));
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 16140u));
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[4]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7290u); st32((c.r[29].w[0] + 168u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003F7290u) [[unlikely]] return; }
L_003F7290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72A8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F72A8u) [[unlikely]] return; }
L_003F72A8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72C4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F72C4u) [[unlikely]] return; }
L_003F72C4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72E0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F72E0u) [[unlikely]] return; }
L_003F72E0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003F72F8u) [[unlikely]] return; }
L_003F72F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 16112u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[6] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.f[5] = ld32((c.r[18].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 16116u));
    c.f[4] = ld32((c.r[18].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 16120u));
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 16124u));
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[4]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7350u); st32((c.r[29].w[0] + 152u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003F7350u) [[unlikely]] return; }
L_003F7350:
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[3].d[0] = c.r[22].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7218u | kUnwind; return; } goto L_003F7218; } }
    c.budget -= 1;
L_003F7368:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003F7398; } }
L_003F737C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F7380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7388u);  if (depth < kMaxDepth) unit_00B5(c, 261u, depth + 1u); else { c.pc = 0x003F7400u; return; } if (c.pc != 0x003F7388u) [[unlikely]] return; }
L_003F7388:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003F7398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F73D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F73F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73F4u);  if (depth < kMaxDepth) unit_00B5(c, 261u, depth + 1u); else { c.pc = 0x003F7400u; return; } if (c.pc != 0x003F73F4u) [[unlikely]] return; }
L_003F73F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F73F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F7428; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7424u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003F7424u) [[unlikely]] return; }
L_003F7424:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003F7428:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F744C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7444u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7444u) [[unlikely]] return; }
L_003F7444:
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003F744C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F74C0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74A8u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x003F74A8u) [[unlikely]] return; }
L_003F74A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74BCu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003F74BCu) [[unlikely]] return; }
L_003F74BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F74C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F74D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F750C; }
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7508u); set32(c.r[5], ld32((c.r[5].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 222u, depth + 1u); else { c.pc = 0x00159A30u; return; } if (c.pc != 0x003F7508u) [[unlikely]] return; }
L_003F7508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F750C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F7534u) [[unlikely]] return; }
L_003F7534:
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[25], c.r[25].w[0] + 12000u);
    st32((c.r[16].w[0] + 4u), c.r[25].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F754Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F754Cu) [[unlikely]] return; }
L_003F754C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F75B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 12000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F758Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 26u, depth + 1u); else { c.pc = 0x003C42B0u; return; } if (c.pc != 0x003F758Cu) [[unlikely]] return; }
L_003F758C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F7598u) [[unlikely]] return; }
L_003F7598:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F75B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F75B0u) [[unlikely]] return; }
L_003F75B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F75B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F75D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75F8u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F75F8u) [[unlikely]] return; }
L_003F75F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F7618; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7614u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 269u, depth + 1u); else { c.pc = 0x003F7520u; return; } if (c.pc != 0x003F7614u) [[unlikely]] return; }
L_003F7614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F7618:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F7630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 650u);  c.pc = t; return; }
L_003F7640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[4].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F7668; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7664u);  if (depth < kMaxDepth) unit_00A9(c, 25u, depth + 1u); else { c.pc = 0x003C4290u; return; } if (c.pc != 0x003F7664u) [[unlikely]] return; }
L_003F7664:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F7668:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7670:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003F768C; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003F768C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F76A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), 0u);  c.pc = t; return; }
L_003F76B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F76C4u) [[unlikely]] return; }
L_003F76C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12064u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F76F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F7738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7720u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F7720u) [[unlikely]] return; }
L_003F7720:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F773C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F7738u) [[unlikely]] return; }
L_003F7738:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F773C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7778u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F7778u) [[unlikely]] return; }
L_003F7778:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F7798; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7794u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 284u, depth + 1u); else { c.pc = 0x003F76B0u; return; } if (c.pc != 0x003F7794u) [[unlikely]] return; }
L_003F7794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F7798:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F77B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 618u);  c.pc = t; return; }
L_003F77C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F785C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F77E8u); set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003F77E8u) [[unlikely]] return; }
L_003F77E8:
    set32(c.r[7], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F7860; }
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F7814; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 32u)));  if (t) { goto L_003F783C; } }
L_003F7814:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_003F782C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 140u)));  if (t) { goto L_003F783C; } }
L_003F782C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003F783C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 2;
L_003F783C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F785C; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7850u); set32(c.r[6], ld32((c.r[7].w[0] + 8u)));  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x003F7850u) [[unlikely]] return; }
L_003F7850:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F785C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F7860:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F788Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F788Cu) [[unlikely]] return; }
L_003F788C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 12128u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F7950; }
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F78C4u) [[unlikely]] return; }
L_003F78C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003F794C; } }
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003F78D8:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 96u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0] + 112u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78F4u); st32((c.r[2].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_00B5(c, 329u, depth + 1u); else { c.pc = 0x003F7F50u; return; } if (c.pc != 0x003F78F4u) [[unlikely]] return; }
L_003F78F4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F78D8u | kUnwind; return; } goto L_003F78D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F794C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F794C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F794C; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_003F7960; } }
L_003F794C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F7950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003F7960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F7980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F79EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 12128u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_003F79C4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003F79C0u) [[unlikely]] return; }
L_003F79C0:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_003F79C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79D4u); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F79D4u) [[unlikely]] return; }
L_003F79D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F79F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F79ECu) [[unlikely]] return; }
L_003F79EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F79F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7A10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7A38u); set32(c.r[4], 0u + 188u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F7A38u) [[unlikely]] return; }
L_003F7A38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F7A58; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7A54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 296u, depth + 1u); else { c.pc = 0x003F7870u; return; } if (c.pc != 0x003F7A54u) [[unlikely]] return; }
L_003F7A54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F7A58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F7A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 619u);  c.pc = t; return; }
L_003F7A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
L_003F7AA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7AB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003F7AB0u) [[unlikely]] return; }
L_003F7AB0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7AA0u | kUnwind; return; } goto L_003F7AA0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F7AE0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003F7F24; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_003F7F1C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B3Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003F7B3Cu) [[unlikely]] return; }
L_003F7B3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B48u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x003F7B48u) [[unlikely]] return; }
L_003F7B48:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_003F7BC4; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B6Cu); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003F7B6Cu) [[unlikely]] return; }
L_003F7B6C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B78u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003F7B78u) [[unlikely]] return; }
L_003F7B78:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B84u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003F7B84u) [[unlikely]] return; }
L_003F7B84:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B94u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003F7B94u) [[unlikely]] return; }
L_003F7B94:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7BA0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003F7BA0u) [[unlikely]] return; }
L_003F7BA0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7BB0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F7BB0u) [[unlikely]] return; }
L_003F7BB0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7BC0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003F7BC0u) [[unlikely]] return; }
L_003F7BC0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F7BC4:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_003F7BCC:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[21], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 80u);  if (t) { goto L_003F7CA8; } }
    c.budget -= 1;
L_003F7BE8:
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F7C00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F7C00:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F7C40; } }
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[20]);  if (t) { goto L_003F7CA8; } }
L_003F7C40:
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F7C88; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F7C80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003F7CA8; } }
    c.budget -= 1;
L_003F7C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_003F7C90; } }
L_003F7C88:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_003F7C90:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C9Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 329u, depth + 1u); else { c.pc = 0x003F7F50u; return; } if (c.pc != 0x003F7C9Cu) [[unlikely]] return; }
L_003F7C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7BE8u | kUnwind; return; } goto L_003F7BE8; } }
    c.budget -= 1;
L_003F7CA8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7BCCu | kUnwind; return; } goto L_003F7BCC; } }
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 152u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CE0u); st32((c.r[20].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x003F7CE0u) [[unlikely]] return; }
L_003F7CE0:
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = 0u;
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[20].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 16;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  goto L_003F7E28; }
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[6] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F7F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.budget -= 6;
L_003F7D60:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F7D98; } }
    c.f[4] = c.f[3];
    c.budget -= 1;
L_003F7D98:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F7DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[5];  if (t) { goto L_003F7DC0; } }
    c.budget -= 1;
L_003F7DB0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F7DC0; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_003F7DC0:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.f[4]);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7D60u | kUnwind; return; } goto L_003F7D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7F08; } }
L_003F7E28:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F7F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.budget -= 6;
L_003F7E48:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F7E80; } }
    c.f[4] = c.f[3];
    c.budget -= 2;
L_003F7E80:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F7E98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[5];  if (t) { goto L_003F7EA8; } }
    c.budget -= 1;
L_003F7E98:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F7EA8; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_003F7EA8:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.f[4]);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7E48u | kUnwind; return; } goto L_003F7E48; } }
L_003F7F08:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F14u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 154u, depth + 1u); else { c.pc = 0x00161600u; return; } if (c.pc != 0x003F7F14u) [[unlikely]] return; }
L_003F7F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003F7F28; } }
L_003F7F1C:
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003F7F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003F7F28:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003F7F50:
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[7].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 100u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[7].w[0] + 84u), c.f[0]);
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0] + 96u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 25;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[7].w[0] + 80u);  if (t) { goto L_003F7FE4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[3].w[0] + 4u));  goto L_003F7FDC; }
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00B6(c, 1u, depth); } }
L_003F7FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00B6(c, 1u, depth); } }
L_003F7FE4:
    set32(c.r[5], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 7;
    [[clang::musttail]] return unit_00B6(c, 1u, depth);
}

}
