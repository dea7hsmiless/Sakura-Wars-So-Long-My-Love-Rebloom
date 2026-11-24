#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0106[4096] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8,
    9, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 26, 27, 28, 29, 30, 0, 0, 0, 0, 0, 0,
    31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0, 0, 0, 0, 0, 50, 51, 52, 53, 54, 55, 56, 57,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0,
    61, 62, 63, 0, 0, 0, 0, 0, 64, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    68, 69, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 74, 75, 76, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    81, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89,
    0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0106(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00538160;
    case 2u: goto L_00538164;
    case 3u: goto L_00538168;
    case 4u: goto L_0053816C;
    case 5u: goto L_00538170;
    case 6u: goto L_00538174;
    case 7u: goto L_00538178;
    case 8u: goto L_0053817C;
    case 9u: goto L_00538180;
    case 10u: goto L_00538184;
    case 11u: goto L_00538188;
    case 12u: goto L_00538240;
    case 13u: goto L_00538244;
    case 14u: goto L_00538248;
    case 15u: goto L_0053824C;
    case 16u: goto L_00538250;
    case 17u: goto L_00538254;
    case 18u: goto L_00538258;
    case 19u: goto L_0053825C;
    case 20u: goto L_00538260;
    case 21u: goto L_00538264;
    case 22u: goto L_00538268;
    case 23u: goto L_005382B8;
    case 24u: goto L_005382C0;
    case 25u: goto L_005382D0;
    case 26u: goto L_005382D4;
    case 27u: goto L_005382D8;
    case 28u: goto L_005382DC;
    case 29u: goto L_005382E0;
    case 30u: goto L_005382E4;
    case 31u: goto L_00538300;
    case 32u: goto L_00538304;
    case 33u: goto L_00538308;
    case 34u: goto L_0053830C;
    case 35u: goto L_00538310;
    case 36u: goto L_00538314;
    case 37u: goto L_00538318;
    case 38u: goto L_0053831C;
    case 39u: goto L_00538320;
    case 40u: goto L_00538324;
    case 41u: goto L_00538328;
    case 42u: goto L_0053832C;
    case 43u: goto L_00538330;
    case 44u: goto L_00538334;
    case 45u: goto L_00538338;
    case 46u: goto L_0053833C;
    case 47u: goto L_00538340;
    case 48u: goto L_00538344;
    case 49u: goto L_00538348;
    case 50u: goto L_00538360;
    case 51u: goto L_00538364;
    case 52u: goto L_00538368;
    case 53u: goto L_0053836C;
    case 54u: goto L_00538370;
    case 55u: goto L_00538374;
    case 56u: goto L_00538378;
    case 57u: goto L_0053837C;
    case 58u: goto L_00538380;
    case 59u: goto L_005384E8;
    case 60u: goto L_005384F0;
    case 61u: goto L_00538500;
    case 62u: goto L_00538504;
    case 63u: goto L_00538508;
    case 64u: goto L_00538520;
    case 65u: goto L_00538524;
    case 66u: goto L_00538528;
    case 67u: goto L_005385F0;
    case 68u: goto L_00538600;
    case 69u: goto L_00538604;
    case 70u: goto L_00538608;
    case 71u: goto L_0053860C;
    case 72u: goto L_00538630;
    case 73u: goto L_005386F0;
    case 74u: goto L_00538710;
    case 75u: goto L_00538714;
    case 76u: goto L_00538718;
    case 77u: goto L_0053871C;
    case 78u: goto L_00538720;
    case 79u: goto L_005387D8;
    case 80u: goto L_005387E8;
    case 81u: goto L_00538800;
    case 82u: goto L_00538804;
    case 83u: goto L_00538808;
    case 84u: goto L_00538D00;
    case 85u: goto L_00538EA0;
    case 86u: goto L_00539480;
    case 87u: goto L_005394DC;
    case 88u: goto L_005394EC;
    case 89u: goto L_005394FC;
    case 90u: goto L_0053950C;
    case 91u: goto L_0053951C;
    case 92u: goto L_0053952C;
    case 93u: goto L_0053953C;
    case 94u: goto L_0053954C;
    case 95u: goto L_0053955C;
    case 96u: goto L_0053956C;
    case 97u: goto L_0053957C;
    case 98u: goto L_0053958C;
    case 99u: goto L_0053959C;
    case 100u: goto L_005395AC;
    case 101u: goto L_005395BC;
    case 102u: goto L_005395CC;
    case 103u: goto L_005395E0;
    case 104u: goto L_0053960C;
    case 105u: goto L_0053963C;
    case 106u: goto L_00539674;
    case 107u: goto L_00539690;
    case 108u: goto L_00539780;
    case 109u: goto L_00539824;
    case 110u: goto L_00539DF0;
    case 111u: goto L_00539F20;
    case 112u: goto L_0053A140;
    case 113u: goto L_0053A360;
    case 114u: goto L_0053A460;
    case 115u: goto L_0053A530;
    case 116u: goto L_0053A660;
    case 117u: goto L_0053A790;
    case 118u: goto L_0053A800;
    case 119u: goto L_0053A8D0;
    case 120u: goto L_0053A9A0;
    case 121u: goto L_0053ABE0;
    case 122u: goto L_0053ADB0;
    case 123u: goto L_0053AEB0;
    case 124u: goto L_0053B824;
    case 125u: goto L_0053B910;
    case 126u: goto L_0053B9B0;
    case 127u: goto L_0053BB10;
    case 128u: goto L_0053BC10;
    case 129u: goto L_0053BC80;
    case 130u: goto L_0053BD80;
    case 131u: goto L_0053BE50;
    case 132u: goto L_0053BF50;
    case 133u: goto L_0053BFC0;
    default: bad_entry(c, 0x00538000u); return;
    }
L_00538160:
    c.r[23].d[0] = c.sa;
    c.budget -= 1;
L_00538164:
    c.r[23].d[0] = 0ull << 17;
    c.budget -= 1;
L_00538168:
    c.r[23].d[0] = 0ull << (c.r[2].w[0] & 63u);
    c.budget -= 1;
L_0053816C:
    c.r[23].d[0] = c.sa;
    c.budget -= 1;
L_00538170:
    c.r[23].d[0] = c.sa;
    c.budget -= 1;
L_00538174:
    set32(c.r[23], 0u << (c.r[2].w[0] & 31u));
    c.budget -= 1;
L_00538178:
    c.budget -= 1;
L_0053817C:
    c.budget -= 1;
L_00538180:
    if (c.r[2].sd[0] >= 0ll) trap(c, 0x00538180u);
    c.budget -= 1;
L_00538184:
    set32(c.r[23], c.r[2].w[0] + 0u);
    c.budget -= 1;
L_00538188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[23], c.r[2].w[0] + 0u);  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00538240:
    c.pc = 0x00538244u; syscall(c, 0x00538240u); if (c.pc != 0x00538244u) return;
    c.budget -= 1;
L_00538244:
    if (c.r[2].d[0] == 0ull) trap(c, 0x00538244u);
    c.budget -= 1;
L_00538248:
    c.r[26].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053824C:
    if (c.r[2].sd[0] >= 0ll) trap(c, 0x0053824Cu);
    c.budget -= 1;
L_00538250:
    c.r[26].d[0] = 0ull << (c.r[2].w[0] & 63u);
    c.budget -= 1;
L_00538254:
    set32(c.r[26], 0u << 31);
    c.budget -= 1;
L_00538258:
    if (c.r[2].d[0] == 0ull) trap(c, 0x00538258u);
    c.budget -= 1;
L_0053825C:
    c.r[27].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00538260:
    c.r[27].d[0] = 0ull << (c.r[2].w[0] & 63u);
    c.budget -= 1;
L_00538264:
    set32(c.r[27], c.r[2].w[0] + 0u);
    c.budget -= 1;
L_00538268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; mmi::mult(c, 0, c.r[2].w[0], 0u); c.r[27].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005382B8:
    c.budget -= 2;
L_005382C0:
    c.r[5].d[0] = c.r[1].d[0] & 29477ull;
    ldl(c.r[14], (c.r[1].w[0] + 25650u));
    if (0ull == 0ull) trap(c, 0x005382C8u);
    c.budget -= 4;
L_005382D0:
    c.pc = 0x005382D4u; syscall(c, 0x005382D0u); if (c.pc != 0x005382D4u) return;
    c.budget -= 1;
L_005382D4:
    c.r[30].d[0] = 0ull << 0;
    c.budget -= 1;
L_005382D8:
    c.r[30].d[0] = c.sa;
    c.budget -= 1;
L_005382DC:
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 1;
L_005382E0:
    c.r[30].d[0] = c.sa;
    c.budget -= 1;
L_005382E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[30], c.r[2].w[0] + 0u);  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00538300:
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00538304:
    if (c.r[2].sd[0] >= 0ll) trap(c, 0x00538304u);
    c.budget -= 1;
L_00538308:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053830C:
    c.r[30].d[0] = c.sa;
    c.budget -= 1;
L_00538310:
    c.r[30].d[0] = c.r[2].d[0] & 0ull;
    c.budget -= 1;
L_00538314:
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00538318:
    c.budget -= 1;
L_0053831C:
    c.budget -= 1;
L_00538320:
    mmi::mult(c, 0, c.r[2].w[0], 0u);
    c.r[31].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00538324:
    if (c.r[2].sd[0] >= 0ll) trap(c, 0x00538324u);
    c.budget -= 1;
L_00538328:
    c.r[31].d[0] = 0ull << 7;
    c.budget -= 1;
L_0053832C:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00538330:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00538334:
    if (c.r[2].sd[0] >= 0ll) trap(c, 0x00538334u);
    c.budget -= 1;
L_00538338:
    c.budget -= 1;
L_0053833C:
    c.budget -= 1;
L_00538340:
    c.r[31].d[0] = c.sa;
    c.budget -= 1;
L_00538344:
    set32(c.r[31], 0u << 12);
    c.budget -= 1;
L_00538348:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[31], c.r[2].w[0] + 0u);  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00538360:
    c.r[31].d[0] = 0ull << 16;
    c.budget -= 1;
L_00538364:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00538368:
    mmi::mult(c, 0, c.r[2].w[0], 0u);
    c.r[31].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0053836C:
    if (c.r[2].sd[0] >= 0ll) trap(c, 0x0053836Cu);
    c.budget -= 1;
L_00538370:
    if (c.r[2].sd[0] >= 0ll) trap(c, 0x00538370u);
    c.budget -= 1;
L_00538374:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00538378:
    c.budget -= 1;
L_0053837C:
    c.budget -= 1;
L_00538380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005384E8:
    c.budget -= 2;
L_005384F0:
    c.r[5].d[0] = c.r[1].d[0] & 29477ull;
    ldl(c.r[14], (c.r[1].w[0] + 25650u));
    if (0ull == 0ull) trap(c, 0x005384F8u);
    c.budget -= 4;
L_00538500:
    if (c.r[2].d[0] == c.r[1].d[0]) trap(c, 0x00538500u);
    c.budget -= 1;
L_00538504:
    set32(c.r[13], c.r[1].w[0] << 11);
    c.budget -= 1;
L_00538508:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[13].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00538520:
    c.r[13].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00538524:
    set32(c.r[13], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 1;
L_00538528:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[13].d[0] = c.r[1].d[0] << 14;  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005385F0:
    ldr(c.r[9], (c.r[19].w[0] + 24941u));
    ldr(c.r[20], (c.r[3].w[0] + 26996u));
    ldl(c.r[4], (c.r[11].w[0] + 11877u));
    c.budget -= 4;
L_00538600:
    mmi::mult(c, 0, c.r[2].w[0], c.r[1].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00538604:
    if (c.r[2].sd[0] >= c.r[1].sd[0]) trap(c, 0x00538604u);
    c.budget -= 1;
L_00538608:
    c.r[16].d[0] = c.r[1].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 1;
L_0053860C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[16].d[0] = c.sa;  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00538630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[16].d[0] = c.r[2].d[0] & c.r[1].d[0];  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005386F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[19].d[0] = c.r[2].d[0] & c.r[1].d[0];  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00538710:
    mmi::mult(c, 0, c.r[2].w[0], c.r[1].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00538714:
    if (c.r[2].d[0] == c.r[1].d[0]) trap(c, 0x00538714u);
    c.budget -= 1;
L_00538718:
    c.r[19].d[0] = c.r[1].d[0] << 61;
    c.budget -= 1;
L_0053871C:
    c.r[19].d[0] = c.r[1].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 1;
L_00538720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; if (c.r[2].sd[0] >= c.r[1].sd[0]) trap(c, 0x00538724u);  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_0106[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005387D8:
    mmi::psllh(c.r[14], c.r[21], 9u);
    c.r[8].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(25460ll);
    c.r[14].d[0] = c.r[1].d[0] + static_cast<std::uint64_t>(29810ll);
    c.sa = 0u & 15u;
    c.budget -= 4;
L_005387E8:
    mmi::psllh(c.r[12], c.r[22], 13u);
    ldr(c.r[9], (c.r[19].w[0] + 25134u));
    c.budget -= 6;
L_00538800:
    c.pc = 0x00538804u; syscall(c, 0x00538800u); if (c.pc != 0x00538804u) return;
    c.budget -= 1;
L_00538804:
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00538808:
    c.budget -= 2;
    {
    const std::uint32_t dst0 = c.r[2].w[0];
    c.pc = dst0; syscall(c, 0x0053880Cu); if (c.pc != dst0) return;
    c.pc = dst0; if (dst0 - 0x00538000u < 16384u) { entry = entries_0106[(dst0 - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth);
    }
L_00538D00:
    c.r[22].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(24915ll);
    c.r[20].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(24900ll);
    mmi::madd(c, 1, c.r[19].w[0], c.r[5].w[0]);
    c.r[10].d[0] = c.lo.d[1];
    ldr(c.r[15], (c.r[19].w[0] + 26995u));
    c.r[14].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(18720ll);
    set32(c.r[10], 0u + 8303u);
    c.r[13].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(24903ll);
    c.r[12].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(26950ll);
    ld128((c.r[1].w[0] + 8250u) & ~15u, c.r[5]);
    set32(c.r[24], c.r[3].w[0] + 9518u);
    ld128((c.r[10].w[0] + 8202u) & ~15u, c.r[19]);
    ldr(c.r[5], (c.r[11].w[0] + 29811u));
    c.r[12].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(26950ll);
    set32(c.r[26], c.r[1].w[0] + 8224u);
    c.budget -= 17;
    { c.r[12].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(20512ll);  c.pc = 0x0881E094u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00538EA0:
    c.budget -= 12;
    { const bool t = 0ll < 0;  if (t) { goto L_00538ECC; } }
    goto L_00538ED0;
L_00538ECC:
    c.budget -= 1;
L_00538ED0:
    set32(c.r[1], 0u << 0);
    c.budget -= 4;
    {  c.pc = 0x00000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00539480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 31984u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 27868u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] - 27840u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] - 27812u), c.r[6].w[0]);
    st32((c.r[3].w[0] - 27784u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 27700u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] - 27672u), c.r[6].w[0]);
    set32(c.r[4], 0u + 8u);
    st32((c.r[5].w[0] - 27588u), c.r[6].w[0]);
    st32((c.r[3].w[0] - 27560u), c.r[6].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005394DCu); st32((c.r[2].w[0] - 27504u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x005394DCu) [[unlikely]] return; }
L_005394DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005394ECu); st32((c.r[3].w[0] - 27216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x005394ECu) [[unlikely]] return; }
L_005394EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005394FCu); st32((c.r[3].w[0] - 27212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x005394FCu) [[unlikely]] return; }
L_005394FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053950Cu); st32((c.r[3].w[0] - 27208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0014FD50u; return; } if (c.pc != 0x0053950Cu) [[unlikely]] return; }
L_0053950C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053951Cu); st32((c.r[3].w[0] - 27204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x0053951Cu) [[unlikely]] return; }
L_0053951C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053952Cu); st32((c.r[3].w[0] - 27200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0014FD50u; return; } if (c.pc != 0x0053952Cu) [[unlikely]] return; }
L_0053952C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053953Cu); st32((c.r[3].w[0] - 27196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0053953Cu) [[unlikely]] return; }
L_0053953C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053954Cu); st32((c.r[3].w[0] - 27192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x0053954Cu) [[unlikely]] return; }
L_0053954C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053955Cu); st32((c.r[3].w[0] - 27188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x0053955Cu) [[unlikely]] return; }
L_0053955C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053956Cu); st32((c.r[3].w[0] - 27184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0014FD50u; return; } if (c.pc != 0x0053956Cu) [[unlikely]] return; }
L_0053956C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053957Cu); st32((c.r[3].w[0] - 27180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x0053957Cu) [[unlikely]] return; }
L_0053957C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053958Cu); st32((c.r[3].w[0] - 27176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0014FD50u; return; } if (c.pc != 0x0053958Cu) [[unlikely]] return; }
L_0053958C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053959Cu); st32((c.r[3].w[0] - 27172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x0053959Cu) [[unlikely]] return; }
L_0053959C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005395ACu); st32((c.r[3].w[0] - 27168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0014FD50u; return; } if (c.pc != 0x005395ACu) [[unlikely]] return; }
L_005395AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005395BCu); st32((c.r[3].w[0] - 27164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x005395BCu) [[unlikely]] return; }
L_005395BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005395CCu); st32((c.r[3].w[0] - 27160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0014FD50u; return; } if (c.pc != 0x005395CCu) [[unlikely]] return; }
L_005395CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 27156u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005395E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4368u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 27056u);  if (t) { goto L_00539644; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053960Cu); set32(c.r[4], c.r[4].w[0] + 4368u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0053960Cu) [[unlikely]] return; }
L_0053960C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 4368u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053963C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00539630; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053963C; } }
L_00539630:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053963Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0053963Cu) [[unlikely]] return; }
L_0053963C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0053964C; } }
L_00539644:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0053964C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 27056u);
    set32(c.r[5], c.r[5].w[0] - 22512u);
    set32(c.r[6], c.r[6].w[0] + 27040u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539674u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0008(c, 160u, depth + 1u); else { c.pc = 0x00141F10u; return; } if (c.pc != 0x00539674u) [[unlikely]] return; }
L_00539674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00539690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = ld64((c.r[3].w[0] - 1616u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[5].w[0] + 10048u), c.r[6].d[0]);
    c.f[0] = ld32((c.r[3].w[0] - 1608u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1600u));
    st32((c.r[4].w[0] + 10056u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1596u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1592u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10060u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10064u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10068u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1584u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1580u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1576u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10072u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10076u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10080u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1568u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1564u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10084u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10088u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10092u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1552u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1548u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1544u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10096u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10100u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 57;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 10104u), c.f[0]);  c.pc = t; return; }
L_00539780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = ld64((c.r[3].w[0] - 1536u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[5].w[0] + 10112u), c.r[6].d[0]);
    c.f[0] = ld32((c.r[3].w[0] - 1528u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1520u));
    st32((c.r[4].w[0] + 10120u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1516u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1512u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10124u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10128u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10132u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1504u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1500u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1496u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10136u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10140u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10144u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1488u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1480u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 41;
L_00539824:
    st32((c.r[3].w[0] + 10148u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10152u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10156u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1472u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1468u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1464u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10160u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10164u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10168u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1456u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1452u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1448u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10172u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10176u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10180u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1436u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1432u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10184u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10188u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10192u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1424u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1420u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10196u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10200u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10204u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1408u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1404u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1400u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10208u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10212u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10216u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1392u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1388u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1384u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10220u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10224u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10228u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1376u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1372u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1368u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10232u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10236u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10240u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1356u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1352u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10244u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10248u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10252u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1344u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1340u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1336u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10256u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10260u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10264u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1324u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1320u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10268u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10272u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10276u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1312u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10280u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10284u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10288u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1296u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1292u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1288u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10292u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10296u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10300u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1280u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1276u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10304u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10308u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10312u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1260u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1256u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10316u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10320u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10324u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1248u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1244u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1240u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10328u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10332u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10336u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10340u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10344u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10348u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1212u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1208u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10352u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10356u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10360u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1196u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10364u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10368u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10372u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1184u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10376u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10380u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10384u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1168u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10388u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10392u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10396u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1152u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10400u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10404u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10408u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = ld64((c.r[3].w[0] - 1136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[5].w[0] + 10416u), c.r[6].d[0]);
    c.f[0] = ld32((c.r[3].w[0] - 1128u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1120u));
    st32((c.r[4].w[0] + 10424u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10428u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10432u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10436u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1096u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10440u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10444u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10448u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1084u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1080u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10452u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10456u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10460u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1072u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1064u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10464u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10468u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10472u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = ld64((c.r[3].w[0] - 1056u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[5].w[0] + 10480u), c.r[6].d[0]);
    c.f[0] = ld32((c.r[3].w[0] - 1048u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1040u));
    st32((c.r[4].w[0] + 10488u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1036u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1032u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10492u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10496u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10500u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1020u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10504u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10508u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10512u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 1008u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 1004u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 1000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10516u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10520u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10524u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 992u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 988u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 984u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10528u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10532u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 368;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 10536u), c.f[0]);  c.pc = t; return; }
L_00539DF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 960u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 956u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 952u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13208u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13212u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13216u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 944u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 940u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 936u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13228u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13232u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13236u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 928u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 924u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 920u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13248u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13252u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13256u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 912u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 908u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 904u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13268u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13272u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13276u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 896u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 892u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 888u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13288u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13292u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13296u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 13308u), c.f[2]);
    st32((c.r[4].w[0] + 13312u), c.f[1]);
    c.budget -= 73;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 13316u), c.f[0]);  c.pc = t; return; }
L_00539F20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 880u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 876u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 872u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13496u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13500u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13504u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 864u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 860u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 856u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13516u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13520u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13524u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 848u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 844u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 840u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13536u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13540u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13544u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 832u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 828u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 824u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13556u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13560u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13564u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 816u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 812u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 808u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13576u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13580u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13584u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 800u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 792u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13596u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13600u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13604u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 784u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 780u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 776u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13616u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13620u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13624u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 764u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 760u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13636u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13640u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13644u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 752u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 748u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 744u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13656u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13660u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13664u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 736u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 732u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 728u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13676u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13680u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13684u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 13696u), c.f[2]);
    st32((c.r[4].w[0] + 13700u), c.f[1]);
    c.budget -= 133;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 13704u), c.f[0]);  c.pc = t; return; }
L_0053A140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 720u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 716u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13832u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13836u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13840u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 700u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 696u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13852u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13856u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13860u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 688u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 684u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 680u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13872u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13876u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13880u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 672u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 668u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13892u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13896u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13900u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 656u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 652u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13912u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13916u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13920u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 640u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 636u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13932u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13936u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13940u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 624u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 620u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 616u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13952u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13956u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13960u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 608u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 604u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13972u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13976u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13980u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 592u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 588u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 584u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13992u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 13996u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14000u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 576u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 572u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 568u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14012u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14016u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14020u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 14032u), c.f[2]);
    st32((c.r[4].w[0] + 14036u), c.f[1]);
    c.budget -= 133;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14040u), c.f[0]);  c.pc = t; return; }
L_0053A360:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 560u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 556u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 552u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14168u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14172u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14176u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 544u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 540u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 536u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14188u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14192u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14196u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 528u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 524u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 520u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14208u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14212u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14216u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 512u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 508u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 504u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14228u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14232u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14236u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 14248u), c.f[2]);
    st32((c.r[4].w[0] + 14252u), c.f[1]);
    c.budget -= 61;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14256u), c.f[0]);  c.pc = t; return; }
L_0053A460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 496u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 492u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 488u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14328u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14332u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14336u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 480u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 476u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 472u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14348u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14352u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14356u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 464u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 460u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 456u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14368u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14372u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14376u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 14388u), c.f[2]);
    st32((c.r[4].w[0] + 14392u), c.f[1]);
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14396u), c.f[0]);  c.pc = t; return; }
L_0053A530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 448u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 444u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14440u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14444u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14448u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 432u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 428u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 424u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14460u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14464u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14468u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 412u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 408u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14480u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14484u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14488u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 400u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 396u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 392u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14500u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14504u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14508u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 384u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 380u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 376u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14520u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14524u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14528u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 14540u), c.f[2]);
    st32((c.r[4].w[0] + 14544u), c.f[1]);
    c.budget -= 73;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14548u), c.f[0]);  c.pc = t; return; }
L_0053A660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 368u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 364u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14648u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14652u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14656u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 352u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 348u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 344u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14668u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14672u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14676u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 336u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 332u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14688u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14692u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14696u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 320u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 316u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 312u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14708u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14712u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14716u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 300u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 296u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14728u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14732u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14736u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 14748u), c.f[2]);
    st32((c.r[4].w[0] + 14752u), c.f[1]);
    c.budget -= 73;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14756u), c.f[0]);  c.pc = t; return; }
L_0053A790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 168u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 15496u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 15500u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 15504u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 15516u), c.f[2]);
    st32((c.r[4].w[0] + 15520u), c.f[1]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 15524u), c.f[0]);  c.pc = t; return; }
L_0053A800:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 152u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16168u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16172u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16176u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16188u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16192u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16196u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16208u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16212u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16216u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 16228u), c.f[2]);
    st32((c.r[4].w[0] + 16232u), c.f[1]);
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16236u), c.f[0]);  c.pc = t; return; }
L_0053A8D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 104u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16344u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16348u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16352u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 88u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16364u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16368u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16372u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16384u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16388u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16392u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 16404u), c.f[2]);
    st32((c.r[4].w[0] + 16408u), c.f[1]);
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16412u), c.f[0]);  c.pc = t; return; }
L_0053A9A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16548u), 0u);
    set32(c.r[5], c.r[5].w[0] + 17517u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[4].w[0] + 16544u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16552u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 17523u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16560u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16556u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 17529u);
    st32((c.r[3].w[0] + 16564u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], 0u - 1u);
    st32((c.r[3].w[0] + 16576u), c.r[4].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16580u), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16584u), c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17533u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16588u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 17543u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16592u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16604u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16596u), c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 17556u);
    st32((c.r[3].w[0] + 16600u), c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] + 17585u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[3].w[0] + 16608u), c.r[7].w[0]);
    set32(c.r[10], c.r[10].w[0] + 17589u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16612u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16616u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16620u), c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17566u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16624u), c.r[4].w[0]);
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[8].w[0] + 16628u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16632u), c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] + 17579u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16640u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[8].w[0] + 16652u), c.r[9].w[0]);
    st32((c.r[3].w[0] + 16644u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16648u), c.r[7].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[9].w[0] + 16676u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 16656u), c.r[3].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[9], c.r[9].w[0] + 17596u);
    st32((c.r[8].w[0] + 16660u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[6].w[0] + 16684u), c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[8].w[0] + 16672u), c.r[10].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[6].w[0] + 16688u), 0u);
    st32((c.r[8].w[0] + 16680u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[6].w[0] + 16692u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 16700u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], c.r[8].w[0] + 17604u);
    set32(c.r[9], c.r[9].w[0] + 17600u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 16708u), c.r[8].w[0]);
    st32((c.r[6].w[0] + 16696u), c.r[9].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 16712u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[6].w[0] + 16704u), c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16716u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 17610u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16720u), c.r[6].w[0]);
    set32(c.r[5], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16724u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 17619u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 16736u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 17626u);
    st32((c.r[4].w[0] + 16728u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16744u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16732u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 16748u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16752u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 17633u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 16740u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 16756u), c.r[5].w[0]);
    set32(c.r[4], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 16760u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 144;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16764u), c.r[7].w[0]);  c.pc = t; return; }
L_0053ABE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] - 16u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17768u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17772u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17776u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17788u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17792u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17796u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17808u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17812u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17816u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17828u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17832u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17836u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17848u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17852u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17856u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17868u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17872u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17876u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[5] = ld32((c.r[3].w[0] + 1056u));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 176u));
    st32((c.r[4].w[0] + 17896u), c.f[3]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[6].w[0] + 184u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 180u));
    st32((c.r[5].w[0] + 17888u), c.f[5]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17944u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 17948u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 192u));
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[5].w[0] + 17952u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 17968u), c.f[0]);
    st32((c.r[3].w[0] + 17964u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[6].w[0] + 200u));
    st32((c.r[3].w[0] + 17984u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[7].w[0] + 17892u), c.f[4]);
    st32((c.r[4].w[0] + 17988u), c.f[4]);
    st32((c.r[3].w[0] + 17992u), c.f[3]);
    c.budget -= 115;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 17972u), c.f[0]);  c.pc = t; return; }
L_0053ADB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 272u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 276u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 280u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18504u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18508u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18512u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 288u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 292u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 296u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18524u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18528u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18532u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 312u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18544u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18548u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18552u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 320u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 324u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18564u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18568u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 18572u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 18584u), c.f[2]);
    st32((c.r[4].w[0] + 18588u), c.f[1]);
    c.budget -= 61;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 18592u), c.f[0]);  c.pc = t; return; }
L_0053AEB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 336u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 340u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 344u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19000u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19004u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19008u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 352u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 356u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19028u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19032u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19036u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 368u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 372u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 376u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19056u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19060u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19064u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 384u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 388u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 392u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19084u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19088u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19092u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 400u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 404u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 408u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19112u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19116u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19120u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 420u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 424u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19140u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19144u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19148u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 432u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 436u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19168u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19172u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19176u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 448u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 452u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 456u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19196u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19200u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19204u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 464u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 468u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 472u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19224u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19228u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19232u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 480u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 488u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19252u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19256u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19260u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 496u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 500u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 504u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19280u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19284u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19288u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 512u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 516u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 520u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19308u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19312u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19316u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 528u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 532u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 536u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19336u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19340u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19344u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 544u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 548u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 552u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19364u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19368u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19372u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 564u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 568u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19392u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19396u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19400u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 576u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 580u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 584u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19420u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19424u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19428u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 592u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 596u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19448u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19452u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19456u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 608u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 612u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 616u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19476u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19480u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19484u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 624u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 628u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19504u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19508u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19512u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 640u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 644u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19532u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19536u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19540u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 656u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 660u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19560u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19564u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19568u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 672u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 676u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 680u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19588u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19592u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19596u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 688u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 692u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 696u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19616u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19620u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19624u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19644u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19648u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19652u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 720u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 724u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 728u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19672u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19676u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19680u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 736u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 740u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 744u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19700u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19704u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19708u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 752u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 760u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19728u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19732u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19736u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 772u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 776u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19756u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19760u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19764u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 784u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 788u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 792u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19784u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19788u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19792u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 800u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 804u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 808u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19812u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19816u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19820u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 816u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 820u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 824u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19840u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19844u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19848u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 832u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 836u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 840u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19868u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19872u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19876u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 848u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 852u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 856u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19896u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19900u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19904u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 864u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 868u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 872u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19924u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19928u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19932u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 880u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 884u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 888u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19952u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19956u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19960u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 896u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 900u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 904u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19980u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19984u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 19988u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 912u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 916u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 920u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20008u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20012u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20016u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 928u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 932u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 936u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20036u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20040u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20044u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 944u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 948u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 952u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20064u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20068u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20072u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 960u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 964u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 968u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20092u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20096u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20100u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 976u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 980u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 984u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20120u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20124u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20128u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 992u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 996u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20148u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20152u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20156u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1008u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1012u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20176u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20180u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20184u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1028u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1032u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20204u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20208u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20212u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1040u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1044u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1048u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20232u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20236u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20240u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1060u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1064u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20260u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20264u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20268u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1072u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1076u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1080u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20288u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20292u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20296u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1092u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1096u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20316u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20320u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20324u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20344u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20348u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20352u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1124u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20372u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20376u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20380u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1140u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 605;
L_0053B824:
    c.f[0] = ld32((c.r[3].w[0] + 1144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20400u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20404u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20408u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1152u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20428u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20432u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20436u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1168u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1172u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20456u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20460u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20464u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1184u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20484u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20488u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20492u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1204u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1208u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20512u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 20516u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 56;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20520u), c.f[0]);  c.pc = t; return; }
L_0053B910:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1216u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1220u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21464u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21468u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21472u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1240u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21484u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21488u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21492u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 21504u), c.f[2]);
    st32((c.r[4].w[0] + 21508u), c.f[1]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 21512u), c.f[0]);  c.pc = t; return; }
L_0053B9B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1248u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1252u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1256u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21752u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21756u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21760u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1268u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21772u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21776u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21780u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1280u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1284u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1288u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21792u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21796u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21800u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1296u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1300u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21812u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21816u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21820u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1312u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1316u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1320u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21832u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21836u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21840u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1332u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1336u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21852u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21856u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 21860u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 21872u), c.f[2]);
    st32((c.r[4].w[0] + 21876u), c.f[1]);
    c.budget -= 85;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 21880u), c.f[0]);  c.pc = t; return; }
L_0053BB10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1368u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1372u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1376u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22552u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22556u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22560u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1384u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1388u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1392u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22572u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22576u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22580u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1400u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1404u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1408u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22592u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22596u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22600u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1420u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1424u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22612u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22616u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22620u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 22632u), c.f[2]);
    st32((c.r[4].w[0] + 22636u), c.f[1]);
    c.budget -= 61;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 22640u), c.f[0]);  c.pc = t; return; }
L_0053BC10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1432u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1436u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22872u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22876u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22880u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 22892u), c.f[2]);
    st32((c.r[4].w[0] + 22896u), c.f[1]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 22900u), c.f[0]);  c.pc = t; return; }
L_0053BC80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1448u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1452u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1456u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22920u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22924u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22928u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1464u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1468u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1472u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22940u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22944u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22948u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1480u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1488u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22960u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22964u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22968u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1496u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1500u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1504u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22980u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22984u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 22988u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 23000u), c.f[2]);
    st32((c.r[4].w[0] + 23004u), c.f[1]);
    c.budget -= 61;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 23008u), c.f[0]);  c.pc = t; return; }
L_0053BD80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1512u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1516u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1520u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23080u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23084u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23088u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1528u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1532u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1536u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23100u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23104u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1544u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1548u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1552u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23120u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23124u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23128u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 23140u), c.f[2]);
    st32((c.r[4].w[0] + 23144u), c.f[1]);
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 23148u), c.f[0]);  c.pc = t; return; }
L_0053BE50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1584u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1588u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1592u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23208u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23212u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23216u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1604u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1608u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23228u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23232u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23236u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1616u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1620u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1624u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23248u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23252u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23256u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 1632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1636u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1640u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23268u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23272u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23276u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 23288u), c.f[2]);
    st32((c.r[4].w[0] + 23292u), c.f[1]);
    c.budget -= 61;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 23296u), c.f[0]);  c.pc = t; return; }
L_0053BF50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1648u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1652u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1656u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23352u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23356u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23360u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 23372u), c.f[2]);
    st32((c.r[4].w[0] + 23376u), c.f[1]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 23380u), c.f[0]);  c.pc = t; return; }
L_0053BFC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1664u));
    set32(c.r[6], c.r[6].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1668u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1672u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23400u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23404u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 23408u), c.f[0]);
    c.budget -= 16;
    [[clang::musttail]] return unit_0107(c, 1u, depth);
}

}
