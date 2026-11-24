#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0005[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6,
    0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19,
    0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0005(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00134000;
    case 2u: goto L_00134008;
    case 3u: goto L_00134028;
    case 4u: goto L_0013403C;
    case 5u: goto L_0013406C;
    case 6u: goto L_0013407C;
    case 7u: goto L_00134090;
    case 8u: goto L_0013409C;
    case 9u: goto L_001340AC;
    case 10u: goto L_00134140;
    case 11u: goto L_00134154;
    case 12u: goto L_00134174;
    case 13u: goto L_00134188;
    case 14u: goto L_00134198;
    case 15u: goto L_001341AC;
    case 16u: goto L_001341C4;
    case 17u: goto L_001341D4;
    case 18u: goto L_001341E8;
    case 19u: goto L_001341FC;
    case 20u: goto L_0013420C;
    case 21u: goto L_00134220;
    case 22u: goto L_00134238;
    case 23u: goto L_0013424C;
    case 24u: goto L_0013425C;
    case 25u: goto L_00134270;
    case 26u: goto L_00134280;
    case 27u: goto L_00134294;
    case 28u: goto L_001342A4;
    case 29u: goto L_001342B8;
    case 30u: goto L_001342C8;
    case 31u: goto L_001342D8;
    case 32u: goto L_001342EC;
    case 33u: goto L_00134304;
    case 34u: goto L_00134314;
    case 35u: goto L_00134328;
    case 36u: goto L_00134338;
    case 37u: goto L_00134348;
    case 38u: goto L_00134358;
    case 39u: goto L_0013436C;
    case 40u: goto L_00134398;
    case 41u: goto L_001343CC;
    case 42u: goto L_001343D0;
    case 43u: goto L_00134400;
    case 44u: goto L_00134450;
    case 45u: goto L_00134460;
    case 46u: goto L_001344A0;
    case 47u: goto L_001344B0;
    case 48u: goto L_001344C8;
    case 49u: goto L_001344F8;
    case 50u: goto L_00134590;
    case 51u: goto L_001345C8;
    case 52u: goto L_00134654;
    case 53u: goto L_00134680;
    case 54u: goto L_00134720;
    case 55u: goto L_0013483C;
    case 56u: goto L_001349B4;
    case 57u: goto L_00134A18;
    case 58u: goto L_00134B48;
    case 59u: goto L_00134C3C;
    case 60u: goto L_00134C6C;
    case 61u: goto L_00134C74;
    case 62u: goto L_00134D28;
    case 63u: goto L_00134E00;
    case 64u: goto L_00134E90;
    case 65u: goto L_00134EF8;
    case 66u: goto L_001351D8;
    case 67u: goto L_00135310;
    case 68u: goto L_00135980;
    case 69u: goto L_001359B8;
    case 70u: goto L_00135B18;
    case 71u: goto L_00135C3C;
    case 72u: goto L_00135CB0;
    case 73u: goto L_00135CF8;
    case 74u: goto L_00135D2C;
    case 75u: goto L_00135D68;
    case 76u: goto L_00135DE0;
    case 77u: goto L_00135E38;
    case 78u: goto L_00135F88;
    case 79u: goto L_00136020;
    case 80u: goto L_00136060;
    case 81u: goto L_00136080;
    case 82u: goto L_001360BC;
    case 83u: goto L_001360F0;
    case 84u: goto L_00136138;
    case 85u: goto L_00136150;
    case 86u: goto L_00136200;
    case 87u: goto L_001362A4;
    case 88u: goto L_001362D0;
    case 89u: goto L_00136318;
    case 90u: goto L_00136380;
    case 91u: goto L_001363A8;
    case 92u: goto L_00136420;
    case 93u: goto L_00136450;
    case 94u: goto L_001364D0;
    case 95u: goto L_001364F0;
    case 96u: goto L_00136538;
    case 97u: goto L_00136560;
    case 98u: goto L_00136608;
    case 99u: goto L_00136650;
    case 100u: goto L_00136690;
    case 101u: goto L_001366D8;
    case 102u: goto L_00136720;
    case 103u: goto L_00136768;
    case 104u: goto L_001367F0;
    case 105u: goto L_001368F8;
    case 106u: goto L_00136940;
    case 107u: goto L_00136978;
    case 108u: goto L_001369C0;
    case 109u: goto L_00136A00;
    case 110u: goto L_00136A64;
    case 111u: goto L_00136A9C;
    case 112u: goto L_00136AC4;
    case 113u: goto L_00136B74;
    case 114u: goto L_00136B84;
    case 115u: goto L_00136BD0;
    case 116u: goto L_00136BE8;
    case 117u: goto L_00136CA8;
    case 118u: goto L_00136E78;
    case 119u: goto L_00136F50;
    case 120u: goto L_00136F90;
    case 121u: goto L_00136FD0;
    case 122u: goto L_00136FE0;
    case 123u: goto L_00137020;
    case 124u: goto L_00137038;
    case 125u: goto L_00137048;
    case 126u: goto L_00137058;
    case 127u: goto L_00137068;
    case 128u: goto L_00137090;
    case 129u: goto L_00137168;
    case 130u: goto L_0013721C;
    case 131u: goto L_00137230;
    case 132u: goto L_00137248;
    case 133u: goto L_00137260;
    case 134u: goto L_00137278;
    case 135u: goto L_00137290;
    case 136u: goto L_001372A8;
    case 137u: goto L_001372C0;
    case 138u: goto L_001372D8;
    case 139u: goto L_001372F0;
    case 140u: goto L_00137310;
    case 141u: goto L_001373A4;
    case 142u: goto L_001373A8;
    case 143u: goto L_00137498;
    case 144u: goto L_001375B4;
    case 145u: goto L_001375F4;
    case 146u: goto L_00137620;
    case 147u: goto L_00137660;
    case 148u: goto L_0013769C;
    case 149u: goto L_001376DC;
    case 150u: goto L_00137724;
    case 151u: goto L_00137828;
    case 152u: goto L_001378C8;
    case 153u: goto L_00137910;
    case 154u: goto L_00137960;
    case 155u: goto L_00137978;
    case 156u: goto L_00137A1C;
    case 157u: goto L_00137A5C;
    case 158u: goto L_00137AB4;
    case 159u: goto L_00137B0C;
    case 160u: goto L_00137B54;
    case 161u: goto L_00137B6C;
    case 162u: goto L_00137BA0;
    case 163u: goto L_00137C20;
    case 164u: goto L_00137C74;
    case 165u: goto L_00137C8C;
    case 166u: goto L_00137CA8;
    case 167u: goto L_00137CCC;
    case 168u: goto L_00137DF0;
    default: bad_entry(c, 0x00134000u); return;
    }
L_00134000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134008u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00134008u) [[unlikely]] return; }
L_00134008:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_001340B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[2].w[0] + 24048u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00134090; } }
    c.budget -= 1;
L_00134028:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 52223ull;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0013403C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_001340B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F6F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 13312ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00134088; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013406Cu);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x0013406Cu) [[unlikely]] return; }
L_0013406C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013407Cu);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x0013407Cu) [[unlikely]] return; }
L_0013407C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_001340B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 1;
L_00134088:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[2].w[0] + 24056u));
    c.budget -= 2;
L_00134090:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013409Cu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x0013409Cu) [[unlikely]] return; }
L_0013409C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001340ACu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001340ACu) [[unlikely]] return; }
L_001340AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001343D0; } }
    c.budget -= 1;
L_001340B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    st32((c.r[29].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[17].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 20));  if (t) { goto L_00134144; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[3].w[0] - 1022u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    set32(c.r[18], c.r[2].w[0] - 1023u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[21].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[6].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], 0u - c.r[3].w[0]);
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134140u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00134140u) [[unlikely]] return; }
L_00134140:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00134144:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134154u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00134154u) [[unlikely]] return; }
L_00134154:
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[21].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24176u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134174u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00134174u) [[unlikely]] return; }
L_00134174:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134188u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00134188u) [[unlikely]] return; }
L_00134188:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134198u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00134198u) [[unlikely]] return; }
L_00134198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24184u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001341ACu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001341ACu) [[unlikely]] return; }
L_001341AC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24192u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001341C4u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001341C4u) [[unlikely]] return; }
L_001341C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001341D4u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x001341D4u) [[unlikely]] return; }
L_001341D4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001341E8u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x001341E8u) [[unlikely]] return; }
L_001341E8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001341FCu);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x001341FCu) [[unlikely]] return; }
L_001341FC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013420Cu);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x0013420Cu) [[unlikely]] return; }
L_0013420C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134220u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00134220u) [[unlikely]] return; }
L_00134220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24200u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134238u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00134238u) [[unlikely]] return; }
L_00134238:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24208u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013424Cu);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x0013424Cu) [[unlikely]] return; }
L_0013424C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013425Cu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x0013425Cu) [[unlikely]] return; }
L_0013425C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24216u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134270u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00134270u) [[unlikely]] return; }
L_00134270:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134280u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00134280u) [[unlikely]] return; }
L_00134280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24224u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134294u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00134294u) [[unlikely]] return; }
L_00134294:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001342A4u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001342A4u) [[unlikely]] return; }
L_001342A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24232u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001342B8u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x001342B8u) [[unlikely]] return; }
L_001342B8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001342C8u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001342C8u) [[unlikely]] return; }
L_001342C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001342D8u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x001342D8u) [[unlikely]] return; }
L_001342D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001342ECu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001342ECu) [[unlikely]] return; }
L_001342EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134304u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00134304u) [[unlikely]] return; }
L_00134304:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134314u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0014E6F0u; return; } if (c.pc != 0x00134314u) [[unlikely]] return; }
L_00134314:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134328u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00134328u) [[unlikely]] return; }
L_00134328:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134338u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00134338u) [[unlikely]] return; }
L_00134338:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134348u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00134348u) [[unlikely]] return; }
L_00134348:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134358u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00134358u) [[unlikely]] return; }
L_00134358:
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013436Cu);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x0013436Cu) [[unlikely]] return; }
L_0013436C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] << 20);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 20));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] << 32;  if (t) { goto L_001343A8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134398u); set32(c.r[5], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_0005(c, 109u, depth + 1u); else { c.pc = 0x00136A00u; return; } if (c.pc != 0x00134398u) [[unlikely]] return; }
L_00134398:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001343BC; } }
    c.budget -= 1;
L_001343A8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[18].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 5;
L_001343BC:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001343CCu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001343CCu) [[unlikely]] return; }
L_001343CC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001343D0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00134400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00134468; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134450u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00134450u) [[unlikely]] return; }
L_00134450:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134460u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00134460u) [[unlikely]] return; }
L_00134460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001346FC; } }
L_00134468:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 20));  if (t) { goto L_001344B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_001346FC; }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001344B8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001344A0u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x001344A0u) [[unlikely]] return; }
L_001344A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001344B0u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0014E6F0u; return; } if (c.pc != 0x001344B0u) [[unlikely]] return; }
L_001344B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001346FC; } }
L_001344B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_00134530; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_001344E8; } }
L_001344C8:
    set32(c.r[2], c.r[7].w[0] >> 11);
    set32(c.r[7], c.r[7].w[0] << 21);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001344C8u | kUnwind; return; } goto L_001344C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_001344E8:
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00134514; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_001344F8:
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001344F8u | kUnwind; return; } goto L_001344F8; } }
L_00134514:
    set32(c.r[2], 0u - c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[7].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[17], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 7;
L_00134530:
    set32(c.r[17], c.r[17].w[0] - 1023u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00134560; } }
    c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_00134560:
    c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 12;
L_00134590:
    set32(c.r[3], c.r[11].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];  if (t) { goto L_001345AC; } }
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[11], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_001345AC:
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[9], c.r[9].w[0] >> 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00134590u | kUnwind; return; } goto L_00134590; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_001345C8:
    c.r[3].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[4], c.r[12].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[10].d[0] = c.r[4].d[0] & c.r[20].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_001345F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];  if (t) { goto L_00134618; } }
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] << 1);  goto L_0013461C; }
L_001345F0:
    set32(c.r[12], c.r[4].w[0] + c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[20].d[0]; c.r[6].d[0] = c.r[12].d[0] & c.r[20].d[0];  if (t) { goto L_00134604; } }
    set32(c.r[2], c.r[11].w[0] + 1u);
    if (c.r[6].d[0] == 0) c.r[11].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_00134604:
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];
    c.budget -= 5;
L_00134618:
    set32(c.r[7], c.r[7].w[0] << 1);
    c.budget -= 1;
L_0013461C:
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[9], c.r[9].w[0] >> 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001345C8u | kUnwind; return; } goto L_001345C8; } }
    c.r[2].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[18].w[0] >> 1);  if (t) { goto L_001346A8; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134654u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00134654u) [[unlikely]] return; }
L_00134654:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_001346A4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00134670; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_001346A4; } }
L_00134670:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134680u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00134680u) [[unlikely]] return; }
L_00134680:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] & 1ull;  if (t) { goto L_001346A0; } }
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];  if (t) { goto L_001346A4; } }
L_001346A0:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001346A4:
    set32(c.r[7], c.r[18].w[0] >> 1);
    c.budget -= 1;
L_001346A8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[7].d[0] | c.r[20].d[0];
    c.r[4].d[0] = c.r[19].d[0] & 1ull;
    set32(c.r[3], c.r[17].w[0] << 20);
    if (c.r[4].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[21].d[0] = c.r[21].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[21].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[21].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 21;
L_001346FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00134720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[11] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[22]);
    st32((c.r[29].w[0] + 32u), c.f[21]);
    set32(c.r[4], c.f[11]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[29].w[0] + 24u), c.f[20]);  if (t) { goto L_00134770; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00134B30; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[29].w[0] + 40u));  if (t) { goto L_00134B34; } }
L_00134770:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3EFF0000u);  if (t) { goto L_00134798; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[11], c.f[11]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00134B30; } }
    c.budget -= 1;
L_00134798:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x23000000u);  if (t) { goto L_001348C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00134B30; } }
    c.f[21] = fp::ee::mul(c.fcr31, c.f[11], c.f[11]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50733ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13152ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22316ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45199ull;
    c.f[9] = c.r[1].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 31;
L_0013483C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53560ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[8] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[9]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[8]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[22]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[11], c.f[12]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[11], c.f[0]);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[10], c.f[0]);  if (t) { goto L_00134B30; } }
L_001348C8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_001349F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[11], c.f[10]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50733ull;
    c.f[1] = c.r[1].w[0];
    c.f[21] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22316ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13152ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45199ull;
    c.f[9] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53560ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[8] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[10]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[8]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001349B4u); c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 75u, depth + 1u); else { c.pc = 0x00135D68u; return; } if (c.pc != 0x001349B4u) [[unlikely]] return; }
L_001349B4:
    c.f[13] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[22]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[13]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[13], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_00134B2C; } }
    c.budget -= 1;
L_001349F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[11]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134A18u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0005(c, 75u, depth + 1u); else { c.pc = 0x00135D68u; return; } if (c.pc != 0x00134A18u) [[unlikely]] return; }
L_00134A18:
    c.f[11] = c.f[0];
    c.f[13] = c.f[11];
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], 0u - 4096u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[11] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[11], c.f[11]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50733ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13152ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22316ull;
    c.f[7] = c.r[1].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[21], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45199ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[13], c.f[11]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53560ull;
    c.f[6] = c.r[1].w[0];
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[8]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[10]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[22]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[13]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[11], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 69;
L_00134B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00134B30:
    c.f[22] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 1;
L_00134B34:
    c.f[21] = ld32((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00134B48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[1] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[6], c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[8].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[5], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[7].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_00134B88; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00136BE8; }
L_00134B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 30));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    set32(c.r[3], c.r[5].w[0] >> 31);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_00134BEC; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00134D18; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00134BD8; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_00134BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_00134D18; } }
L_00134BD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00134D1C; }
L_00134BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.budget -= 1;
L_00134BF0:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_00134C28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00134D18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));  if (t) { goto L_00134D20; } }
L_00134C28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 23));
    c.r[2].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 5;
L_00134C3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00134C7C; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[3].sd[0] < -60ll ? 1ull : 0ull;  if (t) { goto L_00134C58; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00134C7C; } }
L_00134C58:
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[13]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134C6Cu);  if (depth < kMaxDepth) unit_0005(c, 127u, depth + 1u); else { c.pc = 0x00137068u; return; } if (c.pc != 0x00134C6Cu) [[unlikely]] return; }
L_00134C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134C74u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 116u, depth + 1u); else { c.pc = 0x00136BE8u; return; } if (c.pc != 0x00134C74u) [[unlikely]] return; }
L_00134C74:
    c.f[2] = c.f[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00134C7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00134CB0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00134CA0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[0] = c.f[2];  if (t) { goto L_00134D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00134CF8; } }
    c.budget -= 1;
L_00134CA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00134CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00134CF8; } }
L_00134CB0:
    st32((c.r[29].w[0]), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.f[2] = c.r[3].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[2];  if (t) { goto L_00134D18; } }
    c.budget -= 1;
L_00134CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34220000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00134D18; } }
    c.budget -= 1;
L_00134CF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34220000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
L_00134D18:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00134D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 1;
L_00134D20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00134D28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    set32(c.r[2], c.f[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = c.f[13];
    st32((c.r[29].w[0]), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[10].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] ^ c.r[10].d[0];  if (t) { goto L_00134D88; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[13]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00134EF0; } }
    c.budget -= 1;
L_00134D88:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00134EF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 23));  if (t) { goto L_00134E58; } }
    set32(c.r[8], c.r[2].w[0] - 127u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 23));
    c.r[2].d[0] = c.r[8].sd[0] < -126ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] - 127u);  if (t) { goto L_00134DC0; } }
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_00134DCC; } }
L_00134DC0:
    set32(c.r[2], 0u - 126u);
    set32(c.r[4], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 3;
L_00134DCC:
    c.r[9].d[0] = c.r[7].sd[0] < -126ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[2], 0u - 126u);  if (t) { goto L_00134DF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00134DF8; } }
L_00134DF0:
    set32(c.r[4], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 2;
L_00134DF8:
    set32(c.r[4], c.r[8].w[0] - c.r[7].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00134E00:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_00134E48; } }
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00134E00u | kUnwind; return; } goto L_00134E00; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[10].w[0] >> 31);  goto L_00134E5C; }
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00134E00u | kUnwind; return; } goto L_00134E00; } }
    c.budget -= 1;
L_00134E48:
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_00134E78; } }
L_00134E58:
    set32(c.r[2], c.r[10].w[0] >> 31);
    c.budget -= 1;
L_00134E5C:
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 24248u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00134EF0; } }
    c.budget -= 1;
L_00134E78:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00134EB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 2;
L_00134E90:
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00134E90u | kUnwind; return; } goto L_00134E90; } }
    c.r[9].d[0] = c.r[7].sd[0] < -126ll ? 1ull : 0ull;
    c.budget -= 1;
L_00134EB0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[2], 0u - 126u);  if (t) { goto L_00134EE0; } }
    set32(c.r[3], c.r[7].w[0] + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 23);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    c.f[0] = c.r[5].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00134EF0; } }
    c.budget -= 1;
L_00134EE0:
    set32(c.r[4], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    c.f[0] = c.r[5].w[0];
    c.budget -= 4;
L_00134EF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00134EF8:
    set32(c.r[3], c.f[12]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00134F28; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 24300u));  c.pc = t; return; }
L_00134F28:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 23));  if (t) { goto L_00134F50; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[12], c.f[12]);
    c.f[0] = 0u;
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00134F50:
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 64288ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] - 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 23));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);  if (t) { goto L_00135050; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);  goto L_00134FE8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001351D0; } }
    c.f[9] = c.r[4].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29056ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37170000u);
    c.r[1].d[0] = c.r[1].d[0] | 63441ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[9], c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  c.pc = t; return; }
L_00134FE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_00135018; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[2]);  c.pc = t; return; }
L_00135018:
    c.f[9] = c.r[4].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37170000u);
    c.r[1].d[0] = c.r[1].d[0] | 63441ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29056ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[9], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  c.pc = t; return; }
L_00135050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFCF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E170000u);
    c.r[1].d[0] = c.r[1].d[0] | 34966ull;
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E3A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 13092ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E1C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 53326ull;
    c.f[2] = c.r[1].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 23600ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E630000u);
    c.r[1].d[0] = c.r[1].d[0] | 36393ull;
    c.f[5] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 49800ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E920000u);
    c.r[1].d[0] = c.r[1].d[0] | 18725ull;
    c.f[6] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.f[10] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52428ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[7] = c.r[1].w[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[4].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[10], c.f[10]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[8]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.budget -= 52;
    { const bool t = c.r[3].sd[0] <= 0; c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);  if (t) { goto L_00135188; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);  if (t) { goto L_00135148; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[10], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);  c.pc = t; return; }
L_00135148:
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29056ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37170000u);
    c.r[1].d[0] = c.r[1].d[0] | 63441ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[9], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[10], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);  c.pc = t; return; }
L_00135188:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[2]);  if (t) { goto L_001351A0; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[10], c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);  c.pc = t; return; }
L_001351A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29056ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37170000u);
    c.r[1].d[0] = c.r[1].d[0] | 63441ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[9], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[10], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 12;
L_001351D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001351D8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.f[21] = c.f[13];
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[19], c.f[20]);
    set32(c.r[18], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[16].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[19].d[0] & c.r[2].d[0];  if (t) { goto L_00135990; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00135290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);  if (t) { goto L_00135258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 2u);  if (t) { goto L_00135290; } }
L_00135258:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00135294; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));
    set32(c.r[2], 0u + 150u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> (c.r[2].w[0] & 31u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00135294; } }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[2], 0u + 2u);
    set32(c.r[20], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_00135290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00135294:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_001352C0; }
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { c.f[0] = c.f[20];  goto L_00135990; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00135994; } }
L_001352C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001352D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);  if (t) { goto L_00135990; } }
L_001352D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00135308; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));  if (t) { goto L_00135308; } }
    c.f[12] = c.f[20];
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_00135D68; }
L_00135308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135310u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 127u, depth + 1u); else { c.pc = 0x00137068u; return; } if (c.pc != 0x00135310u) [[unlikely]] return; }
L_00135310:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = c.f[0];  if (t) { goto L_00135330; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[5].d[0]; set32(c.r[9], c.r[19].w[0] >> 31);  if (t) { goto L_00135390; } }
L_00135330:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.f[4] = c.f[12];  if (t) { goto L_0013534C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::ee::div(c.fcr31, c.f[0], c.f[4]);
    c.budget -= 5;
L_0013534C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.f[0] = c.f[4];  if (t) { goto L_00135990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00135380; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[4]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[4];  if (t) { goto L_00135990; } }
L_00135380:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[2].d[0]) { c.f[4] = c.f[4] ^ fp::kSign;  goto L_00135388; }
L_00135388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[4];  if (t) { goto L_00135990; } }
L_00135390:
    set32(c.r[2], c.r[9].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D000000u);  if (t) { goto L_001353B8; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[20]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00135994; } }
L_001353B8:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);  if (t) { goto L_001354B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65527ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001353E8; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00135408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 24436u));  if (t) { goto L_00135990; } }
L_001353E8:
    c.r[2].d[0] = c.r[2].d[0] | 7ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 4096u);  if (t) { goto L_00135418; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00135408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 24436u));  if (t) { goto L_00135990; } }
L_00135408:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00135994; } }
    c.budget -= 1;
L_00135418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[20], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x36EC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 42351ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB80000u);
    c.r[1].d[0] = c.r[1].d[0] | 43578ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[12], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB80000u);
    c.r[1].d[0] = c.r[1].d[0] | 43520ull;
    c.f[5] = c.r[1].w[0];
    c.f[6] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[12], c.f[4]);
    c.f[16] = fp::ee::mul(c.fcr31, c.f[12], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[13] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[16], c.f[13]);
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[6] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[16]);
    c.budget -= 37;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (t) { goto L_001356E4; } }
    c.budget -= 1;
L_001354B0:
    c.r[4].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 50289ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 23));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[3].w[0] - 127u);
    c.r[17].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001354F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 46038ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_001354F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    set32(c.r[8], c.r[3].w[0] - 126u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001354F4:
    c.f[12] = c.r[17].w[0];
    set32(c.r[6], c.r[7].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[1], c.r[1].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 24304u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[1]);
    c.f[16] = fp::ee::sub(c.fcr31, c.f[12], c.f[1]);
    c.f[13] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[16], c.f[13]);
    c.f[0] = c.f[20];
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[5], 0u - 4096u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.f[5] = c.r[2].w[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[7].w[0] << 21);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[1].w[0] + c.r[2].w[0]);
    c.f[15] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[15], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E530000u);
    c.r[1].d[0] = c.r[1].d[0] | 61762ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E6C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12884ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E8B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 41732ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[9] = c.r[1].w[0];
    c.f[14] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EDB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 28087ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[12], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[1].d[0] = c.r[1].d[0] | 39321ull;
    c.f[11] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[15]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[3] = c.r[1].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[20]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[16], c.f[1]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[14], c.f[14]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[13], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[8]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[10]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);
    c.f[14] = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[14], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.f[15] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[15], c.f[3]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[14]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[15]);
    c.f[16] = fp::ee::mul(c.fcr31, c.f[5], c.f[15]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[16], c.f[13]);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.f[8] = c.r[2].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[8], c.f[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F760000u);
    c.r[1].d[0] = c.r[1].d[0] | 14336ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x369D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50079ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F760000u);
    c.r[1].d[0] = c.r[1].d[0] | 14414ull;
    c.f[0] = c.r[1].w[0];
    c.f[7] = fp::ee::sub(c.fcr31, c.f[13], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[1], c.r[1].w[0] + c.r[6].w[0]);
    c.f[3] = ld32((c.r[1].w[0] + 24312u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[8], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[1], c.r[1].w[0] + c.r[6].w[0]);
    c.f[4] = ld32((c.r[1].w[0] + 24320u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[8], c.f[2]);
    c.f[12] = c.r[8].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.f[6] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[12]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 124;
L_001356E4:
    set32(c.r[2], c.r[9].w[0] - 1u);
    set32(c.r[3], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.f[0] = c.f[21];  if (t) { goto L_00135708; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_00135708:
    st32((c.r[29].w[0] + 20u), c.f[0]);
    set32(c.r[2], 0u - 4096u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[8] = fp::ee::mul(c.fcr31, c.f[1], c.f[6]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[7], c.f[8]);
    set32(c.r[7], c.f[4]);
    set32(c.r[5], c.f[4]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 18;
    { const bool t = c.r[4].sd[0] <= 0; c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (t) { goto L_001357B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43010000u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00135778; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);  if (t) { goto L_001357F0; } }
    c.budget -= 1;
L_00135778:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001357F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33380000u);
    c.r[1].d[0] = c.r[1].d[0] | 43579ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[8]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[7], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 23));  if (t) { goto L_001357FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);  if (t) { goto L_001357F0; } }
    c.budget -= 1;
L_001357B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001357E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001357F8; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[8]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 23));  if (t) { goto L_001357FC; } }
L_001357E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0DA20000u);
    c.r[1].d[0] = c.r[1].d[0] | 16991ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.budget -= 4;
L_001357F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_00135990; } }
L_001357F8:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 23));
    c.budget -= 1;
L_001357FC:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00135868; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[3], c.r[3].w[0] - 126u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] >> 23);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], c.r[2].w[0] - 127u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[7].w[0] & 31u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.f[12] = c.r[2].w[0];
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    set32(c.r[2], 0u + 23u);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[8], c.f[12]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.r[5].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[2].w[0] & 31u)));
    set32(c.r[4], 0u - c.r[8].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[7], c.f[8]);
    if (c.r[5].d[0] != 0) c.r[8].d[0] = c.r[4].d[0];
    set32(c.r[7], c.f[0]);
    c.budget -= 24;
L_00135868:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], 0u - 4096u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[12] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29184ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29207ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[12], c.f[8]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x35BF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 48780ull;
    c.f[2] = c.r[1].w[0];
    c.f[16] = fp::ee::mul(c.fcr31, c.f[12], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33310000u);
    c.r[1].d[0] = c.r[1].d[0] | 47947ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[12], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB5DD0000u);
    c.r[1].d[0] = c.r[1].d[0] | 59918ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[7], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBB360000u);
    c.r[1].d[0] = c.r[1].d[0] | 2912ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x388A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 45908ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[16], c.f[13]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[16]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[13], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[8]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[6], c.f[3]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[9], c.f[1]);
    set32(c.r[4], c.f[4]);
    set32(c.r[2], c.r[8].w[0] << 23);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 23));
    c.budget -= 68;
    { const bool t = c.r[3].sd[0] > 0; c.f[12] = c.f[4];  if (t) { goto L_00135988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135980u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 129u, depth + 1u); else { c.pc = 0x00137168u; return; } if (c.pc != 0x00135980u) [[unlikely]] return; }
L_00135980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[0];  if (t) { goto L_0013598C; } }
L_00135988:
    c.f[4] = c.r[4].w[0];
    c.budget -= 1;
L_0013598C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[4]);
    c.budget -= 1;
L_00135990:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00135994:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001359B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.f[1] = c.f[12];
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[18], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 4056ull;
    c.r[16].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_00135A08; } }
    st32((c.r[17].w[0]), c.f[1]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00135D50; } }
    c.budget -= 1;
L_00135A08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[2].d[0] = c.r[2].d[0] | 52195ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);  if (t) { goto L_00135B00; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[3], 0u - 16u);  if (t) { goto L_00135A90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 3968ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4048ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00135A58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17474ull;
    c.f[2] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::sub(c.fcr31, c.f[12], c.f[2]);  if (t) { goto L_00135A78; } }
L_00135A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17407ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2E850000u);
    c.r[1].d[0] = c.r[1].d[0] | 41736ull;
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[12], c.f[2]);
    c.budget -= 8;
L_00135A78:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00135D50; } }
L_00135A90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 3968ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4048ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00135AC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17474ull;
    c.f[2] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[12], c.f[2]);  if (t) { goto L_00135AE8; } }
    c.budget -= 1;
L_00135AC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17407ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2E850000u);
    c.r[1].d[0] = c.r[1].d[0] | 41736ull;
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[12], c.f[2]);
    c.budget -= 8;
L_00135AE8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00135D50; } }
L_00135B00:
    c.r[2].d[0] = c.r[2].d[0] | 3968ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));  goto L_00135C90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135B18u);  if (depth < kMaxDepth) unit_0005(c, 127u, depth + 1u); else { c.pc = 0x00137068u; return; } if (c.pc != 0x00135B18u) [[unlikely]] return; }
L_00135B18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[5] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F220000u);
    c.r[1].d[0] = c.r[1].d[0] | 63876ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 3968ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17474ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[6] = c.r[5].w[0];
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);  if (t) { goto L_00135BA0; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], 0u - 256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25228u)));
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);  if (t) { goto L_00135BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_00135C64; } }
    c.budget -= 1;
L_00135BA0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.budget -= 1;
L_00135BA4:
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] >> 23);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0]));  goto L_00135C68; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17407ull;
    c.f[0] = c.r[1].w[0];
    c.f[5] = c.f[4];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2E850000u);
    c.r[1].d[0] = c.r[1].d[0] | 41736ull;
    c.f[2] = c.r[1].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] >> 23);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 23;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0]));  goto L_00135C68; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2E850000u);
    c.r[1].d[0] = c.r[1].d[0] | 41728ull;
    c.f[0] = c.r[1].w[0];
    c.f[5] = c.f[4];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x248D0000u);
    c.budget -= 5;
L_00135C3C:
    c.r[1].d[0] = c.r[1].d[0] | 12593ull;
    c.f[2] = c.r[1].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 10;
L_00135C64:
    c.f[1] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_00135C68:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_00135C88; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[5].w[0]);  if (t) { goto L_00135D44; } }
    c.budget -= 1;
L_00135C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00135D50; } }
L_00135C90:
    set32(c.r[6], c.r[2].w[0] - 134u);
    set32(c.r[3], c.r[6].w[0] << 23);
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.f[12] = c.r[16].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
L_00135CB0:
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[2], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00135CB0u | kUnwind; return; } goto L_00135CB0; } }
    c.f[1] = 0u;
    c.f[0] = c.f[12];
    st32((c.r[29].w[0] + 8u), c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[7], 0u + 3u);  if (t) { goto L_00135D14; } }
    set32(c.r[2], c.r[29].w[0] + 8u);
    c.budget -= 2;
L_00135CF8:
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00135CF8u | kUnwind; return; } goto L_00135CF8; } }
L_00135D14:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 24440u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135D2Cu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0005(c, 78u, depth + 1u); else { c.pc = 0x00135F88u; return; } if (c.pc != 0x00135D2Cu) [[unlikely]] return; }
L_00135D2C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00135D50; } }
    c.f[1] = ld32((c.r[17].w[0]));
    set32(c.r[2], 0u - c.r[5].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 4;
L_00135D44:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_00135D50:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00135D68:
    set32(c.r[3], c.f[12]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_00135DA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 23));  if (t) { goto L_00135DB0; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[12]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 4;
L_00135DA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00135DB0:
    set32(c.r[7], c.r[7].w[0] - 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[7].d[0] & 1ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_00135DE0:
    set32(c.r[3], c.r[8].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] >> 1);  goto L_00135E00; }
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 1);
    c.budget -= 4;
L_00135E00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00135DE0u | kUnwind; return; } goto L_00135DE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & 1ull;  if (t) { goto L_00135E14; } }
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00135E14:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[3], c.r[7].w[0] << 23);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[5].w[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00135E38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    st32((c.r[29].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[5], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31FF0000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 39321ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_00135E88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00135F80; } }
L_00135E88:
    c.f[4] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xAD470000u);
    c.r[1].d[0] = c.r[1].d[0] | 55118ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x310F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 29941ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB4930000u);
    c.r[1].d[0] = c.r[1].d[0] | 62075ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37D00000u);
    c.r[1].d[0] = c.r[1].d[0] | 3328ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBAB60000u);
    c.r[1].d[0] = c.r[1].d[0] | 2912ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 31;
    { const bool t = c.r[4].d[0] != 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);  if (t) { goto L_00135F30; } }
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[12], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);  if (t) { goto L_00135F80; } }
L_00135F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E900000u);
    c.f[5] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (t) { goto L_00135F50; } }
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[5] = c.r[3].w[0];
    c.budget -= 2;
L_00135F50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[12], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 12;
L_00135F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00135F88:
    set32(c.r[2], c.r[6].w[0] - 3u);
    set32(c.r[10], c.r[6].w[0] + 4u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] - 432u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[10].d[0];
    st64((c.r[29].w[0] + 392u), c.r[23].d[0]);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    st32((c.r[29].w[0] + 324u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[23].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] << 2);
    if (c.r[2].d[0] != 0) c.r[23].d[0] = 0ull;
    st64((c.r[29].w[0] + 368u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[20], c.r[20].w[0] + c.r[8].w[0]);
    set32(c.r[20], ld32((c.r[20].w[0] + 25400u)));
    set32(c.r[2], c.r[23].w[0] << 3);
    st64((c.r[29].w[0] + 352u), c.r[18].d[0]);
    set32(c.r[18], c.r[7].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[20].w[0]);
    st64((c.r[29].w[0] + 344u), c.r[17].d[0]);
    set32(c.r[17], c.r[6].w[0] - 8u);
    st64((c.r[29].w[0] + 400u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 336u), c.r[16].d[0]);
    set32(c.r[5], c.r[23].w[0] - c.r[18].w[0]);
    st64((c.r[29].w[0] + 360u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 376u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 384u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 408u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 416u), c.f[20]);
    st32((c.r[29].w[0] + 320u), c.r[4].w[0]);
    c.budget -= 34;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[29].w[0] + 328u), c.r[9].w[0]);  if (t) { goto L_00136048; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 4;
L_00136020:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { st32((c.r[3].w[0]), 0u);  goto L_00136034; }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 3;
L_00136034:
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136020u | kUnwind; return; } goto L_00136020; } }
L_00136048:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001360B8; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_00136060:
    c.f[2] = 0u;
    c.budget -= 3;
    if (c.r[18].sd[0] < 0) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001360A4; }
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_00136080:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136080u | kUnwind; return; } goto L_00136080; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001360A4:
    st32((c.r[7].w[0]), c.f[2]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136060u | kUnwind; return; } goto L_00136060; } }
L_001360B8:
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001360BC:
    set32(c.r[19], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; c.f[20] = ld32((c.r[2].w[0]));  if (t) { goto L_0013612C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[3], c.r[2].w[0] - 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[3] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
L_001360F0:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[4]);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001360F0u | kUnwind; return; } goto L_001360F0; } }
L_0013612C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 129u, depth + 1u); else { c.pc = 0x00137168u; return; } if (c.pc != 0x00136138u) [[unlikely]] return; }
L_00136138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[1].w[0];
    c.f[20] = c.f[0];
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136150u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[12]);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x00136150u) [[unlikely]] return; }
L_00136150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[21], c.f[0]);
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[17].sd[0] <= 0; c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (t) { goto L_001361B0; } }
    set32(c.r[3], c.r[19].w[0] - 4u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], c.r[29].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[2].w[0] & 31u)));
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[21], c.r[21].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[4].w[0] & 31u)));  if (t) { goto L_001361DC; } }
L_001361B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);  if (t) { goto L_001361C8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_001361DC; } }
    c.budget -= 1;
L_001361C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[22], 0u + 2u);  goto L_001361DC; }
L_001361DC:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_001362A8; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00136234; } }
    set32(c.r[8], 0u + 256u);
    set32(c.r[4], 0u + 255u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00136200:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00136218; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - c.r[5].w[0]);  if (t) { goto L_00136220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_0013621C; } }
L_00136218:
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0013621C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00136220:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136200u | kUnwind; return; } goto L_00136200; } }
L_00136234:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_00136284; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00136258; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[19].w[0] - 4u);  goto L_00136270; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00136284; } }
L_00136258:
    set32(c.r[2], c.r[19].w[0] - 4u);
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_0013627C; } }
    c.budget -= 1;
L_00136270:
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 3;
L_0013627C:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_00136284:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_001362A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[12], c.f[20]);  if (t) { goto L_001362A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001362A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 129u, depth + 1u); else { c.pc = 0x00137168u; return; } if (c.pc != 0x001362A4u) [[unlikely]] return; }
L_001362A4:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 1;
L_001362A8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[16].w[0] - 1u);  if (t) { goto L_001363F8; } }
    c.r[2].d[0] = c.r[6].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001362EC; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
L_001362D0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001362D0u | kUnwind; return; } goto L_001362D0; } }
L_001362EC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 1u);  if (t) { goto L_001363F0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_00136334; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[2].w[0] - 4u);
    c.budget -= 4;
L_00136318:
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136318u | kUnwind; return; } goto L_00136318; } }
L_00136334:
    set32(c.r[9], c.r[16].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001360BCu | kUnwind; return; } goto L_001360BC; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], c.r[18].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[23].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[2].w[0] + c.r[5].w[0]);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
L_00136380:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[6].w[0]);
    c.f[2] = 0u;
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] < 0; st32((c.r[8].w[0]), c.f[0]);  if (t) { goto L_001363C8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_001363A8:
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001363A8u | kUnwind; return; } goto L_001363A8; } }
L_001363C8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0]), c.f[2]);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136380u | kUnwind; return; } goto L_00136380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001360BCu | kUnwind; return; } goto L_001360BC; } }
    c.budget -= 1;
L_001363F0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 2;
L_001363F8:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[20];  if (t) { goto L_00136448; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 8u);  if (t) { goto L_001364C0; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00136420:
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136420u | kUnwind; return; } goto L_00136420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001364C0; } }
    c.budget -= 1;
L_00136448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136450u); set32(c.r[4], 0u - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0005(c, 129u, depth + 1u); else { c.pc = 0x00137168u; return; } if (c.pc != 0x00136450u) [[unlikely]] return; }
L_00136450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[1].w[0];
    c.f[20] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + c.r[19].w[0]);  if (t) { goto L_001364B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + c.r[19].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { goto L_001364C0; } }
    c.budget -= 1;
L_001364B8:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 2;
L_001364C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001364D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 129u, depth + 1u); else { c.pc = 0x00137168u; return; } if (c.pc != 0x001364D0u) [[unlikely]] return; }
L_001364D0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.f[2] = c.f[0];  if (t) { goto L_0013651C; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_001364F0:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] >= 0; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001364F0u | kUnwind; return; } goto L_001364F0; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013651C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_001365B0; } }
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[12], c.r[2].w[0] + 25416u);
    set32(c.r[11], c.r[29].w[0] + 160u);
    c.budget -= 5;
L_00136538:
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] < 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00136598; } }
    set32(c.r[7], c.r[16].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0013659C; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 4;
L_00136560:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_0013659C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00136560u | kUnwind; return; } goto L_00136560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_001365A0; } }
    c.budget -= 1;
L_00136598:
    set32(c.r[7], c.r[16].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_0013659C:
    set32(c.r[2], c.r[7].w[0] << 2);
    c.budget -= 1;
L_001365A0:
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] >= 0; st32((c.r[2].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136538u | kUnwind; return; } goto L_00136538; } }
L_001365B0:
    set32(c.r[5], ld32((c.r[29].w[0] + 324u)));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 324u)));  goto L_001365D8; }
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_00136638; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 7ull;  if (t) { goto L_001365F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 336u));  if (t) { goto L_001367BC; } }
L_001365D8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[21].d[0] & 7ull;  if (t) { goto L_001366C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 336u));  if (t) { goto L_001367BC; } }
    c.budget -= 1;
L_001365F0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = 0u;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[29].w[0] + 160u);  if (t) { goto L_00136624; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00136608:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136608u | kUnwind; return; } goto L_00136608; } }
L_00136624:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[30].w[0]), c.f[2]);  if (t) { goto L_001367B4; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_001367B4; } }
L_00136638:
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[29].w[0] + 160u);  if (t) { goto L_0013666C; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_00136650:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136650u | kUnwind; return; } goto L_00136650; } }
L_0013666C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[30].w[0]), c.f[2]);  if (t) { goto L_0013667C; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[30].w[0]), c.f[0]);
    c.budget -= 2;
L_0013667C:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);  if (t) { goto L_001366AC; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 2;
L_00136690:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136690u | kUnwind; return; } goto L_00136690; } }
L_001366AC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[30].w[0] + 4u), c.f[2]);  if (t) { goto L_001367B4; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] + 4u), c.f[0]);  if (t) { goto L_001367B4; } }
L_001366C0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00136708; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 156u);
    c.budget -= 3;
L_001366D8:
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[3], c.r[3].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001366D8u | kUnwind; return; } goto L_001366D8; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_00136708:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_00136750; }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 156u);
    c.budget -= 4;
L_00136720:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136720u | kUnwind; return; } goto L_00136720; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00136750:
    c.f[2] = 0u;
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_00136784; } }
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00136768:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00136768u | kUnwind; return; } goto L_00136768; } }
L_00136784:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.f[0] = ld32((c.r[29].w[0] + 160u));  if (t) { goto L_00136798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 164u));  if (t) { goto L_001367A8; } }
    c.budget -= 1;
L_00136798:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 4;
L_001367A8:
    st32((c.r[30].w[0] + 8u), c.f[2]);
    st32((c.r[30].w[0]), c.f[0]);
    st32((c.r[30].w[0] + 4u), c.f[1]);
    c.budget -= 3;
L_001367B4:
    c.r[2].d[0] = c.r[21].d[0] & 7ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 336u));
    c.budget -= 2;
L_001367BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 344u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 352u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 360u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 368u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 376u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 384u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 392u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 400u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 408u));
    c.f[20] = ld32((c.r[29].w[0] + 416u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_001367F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    st32((c.r[29].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[5], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31FF0000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.f[3] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);  goto L_00136834; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_001368EC; } }
    c.f[3] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 1;
L_00136834:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2F2E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 51666ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB2D70000u);
    c.r[1].d[0] = c.r[1].d[0] | 12084ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[3], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x36380000u);
    c.r[1].d[0] = c.r[1].d[0] | 61210ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9500000u);
    c.r[1].d[0] = c.r[1].d[0] | 3329ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C080000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 25;
    { const bool t = c.r[4].d[0] != 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_001368B8; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBE2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);  if (t) { goto L_001368EC; } }
L_001368B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBE2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[13], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[13]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    c.budget -= 13;
L_001368EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001368F8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] | c.r[3].d[0];  c.pc = t; return; }
L_00136940:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00136978:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    set32(c.r[5], 0u - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  c.pc = t; return; }
L_001369C0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    set32(c.r[5], 0u - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 31);  c.pc = t; return; }
L_00136A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[17].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00136AA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00136BD4; }
    c.r[5].d[0] = 0ull | 34464ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136A64u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00136A64u) [[unlikely]] return; }
L_00136A64:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[7].d[0] & c.r[17].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 15536ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 20));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] - 54u);  if (t) { goto L_00136AA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[2].w[0] + 25520u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136A9Cu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00136A9Cu) [[unlikely]] return; }
L_00136A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00136BD4; } }
    c.budget -= 1;
L_00136AA8:
    set32(c.r[2], 0u + 2047u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);  if (t) { goto L_00136AD0; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136AC4u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00136AC4u) [[unlikely]] return; }
L_00136AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00136BD4; } }
    c.budget -= 1;
L_00136AD0:
    c.r[2].d[0] = c.r[3].sd[0] < 2047ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00136AF0; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[2].w[0] + 25528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00136B68; } }
    c.budget -= 1;
L_00136AF0:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[2].d[0] = c.r[3].sd[0] < -53ll ? 1ull : 0ull;  goto L_00136B30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x800F0000u);
    set32(c.r[5], c.r[3].w[0] << 20);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00136BD4; } }
L_00136B30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 54u);  goto L_00136B90; }
    c.r[2].d[0] = 0ull | 50000ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00136B60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[2].w[0] + 25528u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00136B68; } }
    c.budget -= 1;
L_00136B60:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[2].w[0] + 25520u));
    c.budget -= 2;
L_00136B68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136B74u);  if (depth < kMaxDepth) unit_0005(c, 105u, depth + 1u); else { c.pc = 0x001368F8u; return; } if (c.pc != 0x00136B74u) [[unlikely]] return; }
L_00136B74:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136B84u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00136B84u) [[unlikely]] return; }
L_00136B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00136BD4; } }
    c.budget -= 1;
L_00136B90:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x800F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 20);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 62016ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136BD0u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00136BD0u) [[unlikely]] return; }
L_00136BD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00136BD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00136BE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[13] = c.f[12];
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.f[13]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x507F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00136C50; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00136C38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 25548u));
    c.f[0] = ld32((c.r[3].w[0] + 25564u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00136E60; } }
L_00136C38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 25548u));
    c.f[1] = ld32((c.r[3].w[0] + 25564u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_00136E60; } }
L_00136C50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x30FF0000u);  if (t) { goto L_00136CA0; } }
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00136D84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[13];  if (t) { goto L_00136E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::mul(c.fcr31, c.f[13], c.f[13]);  if (t) { goto L_00136D88; } }
L_00136CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136CA8u);  if (depth < kMaxDepth) unit_0005(c, 127u, depth + 1u); else { c.pc = 0x00137068u; return; } if (c.pc != 0x00136CA8u) [[unlikely]] return; }
L_00136CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F970000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[13] = c.f[0];  if (t) { goto L_00136D28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F2F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00136D00; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[13], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[1].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[13], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[13] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00136D84; } }
L_00136D00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[13], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);
    c.f[13] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00136D84; } }
    c.budget -= 1;
L_00136D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x401B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_00136D70; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[13], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[13] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00136D84; } }
    c.budget -= 1;
L_00136D70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::ee::div(c.fcr31, c.f[0], c.f[13]);
    c.budget -= 5;
L_00136D84:
    c.f[12] = fp::ee::mul(c.fcr31, c.f[13], c.f[13]);
    c.budget -= 1;
L_00136D88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 25568u);
    c.f[7] = ld32((c.r[2].w[0] + 40u));
    c.f[4] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.f[5] = ld32((c.r[2].w[0] + 36u));
    c.f[6] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    c.f[8] = ld32((c.r[2].w[0] + 16u));
    c.f[7] = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    c.f[9] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[10] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[7]);
    c.f[11] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[8] = fp::ee::mul(c.fcr31, c.f[0], c.f[8]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[8]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[3]);
    c.f[9] = fp::ee::mul(c.fcr31, c.f[0], c.f[9]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[10]);
    c.f[11] = fp::ee::add(c.fcr31, c.f[11], c.f[9]);
    c.budget -= 35;
    { const bool t = c.r[3].sd[0] >= 0; c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[11]);  if (t) { goto L_00136E28; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[13], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (t) { goto L_00136E60; } }
    c.budget -= 1;
L_00136E28:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 25552u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[1].w[0] + 25536u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[13], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[13]);
    c.budget -= 13;
    { const bool t = c.r[17].sd[0] >= 0; c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_00136E60; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_00136E60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00136E78:
    set32(c.r[3], c.f[12]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[6].w[0] >> 23);
    set32(c.r[5], c.r[3].w[0] - 127u);
    c.r[2].d[0] = c.r[5].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_00136F48; } }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  goto L_00136EF0; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00136F40; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_00136ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_00136F40; } }
L_00136ED8:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00136F40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00136F40; } }
L_00136EF0:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_00136F48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00136F40; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[2].d[0] = ~(0ull | c.r[6].d[0]);  if (t) { goto L_00136F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ~(0ull | c.r[6].d[0]);
    c.budget -= 4;
L_00136F3C:
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_00136F40:
    c.f[12] = c.r[4].w[0];
    c.f[0] = c.r[4].w[0];
    c.budget -= 2;
L_00136F48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00136F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00136F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 4056ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00136FD8; } }
    c.f[13] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136FD0u);  if (depth < kMaxDepth) unit_0005(c, 77u, depth + 1u); else { c.pc = 0x00135E38u; return; } if (c.pc != 0x00136FD0u) [[unlikely]] return; }
L_00136FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0013705C; } }
L_00136FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136FE0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x001359B8u; return; } if (c.pc != 0x00136FE0u) [[unlikely]] return; }
L_00136FE0:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00137028; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00137008; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_00137018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00137050; } }
L_00137008:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_00137040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00137050; } }
L_00137018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137020u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0005(c, 77u, depth + 1u); else { c.pc = 0x00135E38u; return; } if (c.pc != 0x00137020u) [[unlikely]] return; }
L_00137020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0013705C; } }
L_00137028:
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137038u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0005(c, 104u, depth + 1u); else { c.pc = 0x001367F0u; return; } if (c.pc != 0x00137038u) [[unlikely]] return; }
L_00137038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_00137058; } }
L_00137040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137048u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0005(c, 77u, depth + 1u); else { c.pc = 0x00135E38u; return; } if (c.pc != 0x00137048u) [[unlikely]] return; }
L_00137048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_00137058; } }
L_00137050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137058u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0005(c, 104u, depth + 1u); else { c.pc = 0x001367F0u; return; } if (c.pc != 0x00137058u) [[unlikely]] return; }
L_00137058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0013705C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00137068:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    st32((c.r[29].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00137090:
    set32(c.r[3], c.f[12]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[6].w[0] >> 23);
    set32(c.r[5], c.r[3].w[0] - 127u);
    c.r[2].d[0] = c.r[5].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_00137160; } }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  goto L_00137108; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00137158; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_001370F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00137158; } }
L_001370F0:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_00137158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137158; } }
L_00137108:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_00137160; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00137158; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = ~(0ull | c.r[6].d[0]);  if (t) { goto L_00137154; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ~(0ull | c.r[6].d[0]);
    c.budget -= 4;
L_00137154:
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_00137158:
    c.f[12] = c.r[4].w[0];
    c.f[0] = c.r[4].w[0];
    c.budget -= 2;
L_00137160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00137168:
    set32(c.r[6], c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 8u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], c.r[2].w[0] >> 23);
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.f[0] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_00137220; } }
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[13] = c.f[12];  if (t) { goto L_001371C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137214; } }
L_001371C0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[2].d[0] = 0ull | 50000ull;  if (t) { goto L_001371E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x807F0000u);
    set32(c.r[3], c.r[5].w[0] << 23);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[12];  if (t) { goto L_00137220; } }
L_001371E8:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[13] = c.f[12];  if (t) { goto L_00137208; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137214; } }
L_00137208:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0DA20000u);
    c.r[1].d[0] = c.r[1].d[0] | 16991ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 3;
L_00137214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013721Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 119u, depth + 1u); else { c.pc = 0x00136F50u; return; } if (c.pc != 0x0013721Cu) [[unlikely]] return; }
L_0013721C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 1;
L_00137220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00137230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132A88u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 274u, depth); }
L_00137248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132EA8u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 284u, depth); }
L_00137260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001334B0u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 351u, depth); }
L_00137278:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134720u | kUnwind; return; } goto L_00134720; }
L_00137290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134B48u | kUnwind; return; } goto L_00134B48; }
L_001372A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134D28u | kUnwind; return; } goto L_00134D28; }
L_001372C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134EF8u | kUnwind; return; } goto L_00134EF8; }
L_001372D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001351D8u | kUnwind; return; } goto L_001351D8; }
L_001372F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00135D68u | kUnwind; return; } goto L_00135D68; }
L_00137310:
    set32(c.r[3], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00137430; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  goto L_001373B8; }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[3], ld32((c.r[6].w[0])));  if (t) { goto L_00137340; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00137344; } }
L_00137340:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.budget -= 1;
L_00137344:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  if (t) { goto L_00137360; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00137364; } }
L_00137360:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    c.budget -= 1;
L_00137364:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[3], ld32((c.r[6].w[0])));  if (t) { goto L_00137384; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00137384:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[6], ld32((c.r[6].w[0] + 4u)));  if (t) { goto L_001373A4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001373A4:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 1;
L_001373A8:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_001373B8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);  if (t) { goto L_001373C8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001373C8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  if (t) { goto L_001373E8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001373E8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[3], ld32((c.r[6].w[0])));  if (t) { goto L_0013740C; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00137410; } }
L_0013740C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.budget -= 1;
L_00137410:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[6], ld32((c.r[6].w[0] + 4u)));  if (t) { goto L_00137428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001373A4u | kUnwind; return; } goto L_001373A4; } }
L_00137428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001373A8u | kUnwind; return; } goto L_001373A8; } }
L_00137430:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[3], ld32((c.r[6].w[0])));  if (t) { goto L_00137444; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00137448; } }
L_00137444:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.budget -= 1;
L_00137448:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[6], ld32((c.r[6].w[0] + 4u)));  if (t) { goto L_00137464; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00137468; } }
L_00137464:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    c.budget -= 1;
L_00137468:
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_0013748C; } }
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  c.pc = t; return; }
L_0013748C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  c.pc = t; return; }
L_00137498:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], 0u + 320u);
    st64((c.r[29].w[0] + 208u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[23].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2080u)));
    st32((c.r[29].w[0] + 64u), c.r[7].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[7].d[0] & 8ull;
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 27;
    { const bool t = c.r[12].d[0] != 0ull; st32((c.r[2].w[0] + 1740u), 0u);  if (t) { goto L_00137514; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_00137980; } }
L_00137514:
    set32(c.r[3], ld32((c.r[17].w[0] + 388u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] ^ 2ull;  if (t) { goto L_0013772C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_0013753C; }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_00137570; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0013753C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[9], 0u + 16u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), 0u);  if (t) { goto L_00137958; } }
L_00137570:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001375FC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[6], ld32((c.r[30].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[9], 0u + 8u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[20].w[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001375B4u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x001375B4u) [[unlikely]] return; }
L_001375B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[6], ld32((c.r[30].w[0] + 8u)));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[9], 0u + 8u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[20].w[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001375F4u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x001375F4u) [[unlikely]] return; }
L_001375F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0013797C; } }
L_001375FC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00137714; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137620u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0005(c, 140u, depth + 1u); else { c.pc = 0x00137310u; return; } if (c.pc != 0x00137620u) [[unlikely]] return; }
L_00137620:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[9], 0u + 8u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137660u); c.r[11].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137660u) [[unlikely]] return; }
L_00137660:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[9], 0u + 8u);
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[19].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013769Cu); c.r[11].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x0013769Cu) [[unlikely]] return; }
L_0013769C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[9], 0u + 8u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001376DCu); c.r[11].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x001376DCu) [[unlikely]] return; }
L_001376DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[9], 0u + 8u);
    st32((c.r[29].w[0] + 24u), c.r[19].w[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 16u), c.r[19].w[0]);  if (t) { goto L_00137958; } }
L_00137714:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137724u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 179u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00137724u) [[unlikely]] return; }
L_00137724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0013797C; } }
L_0013772C:
    set32(c.r[7], ld32((c.r[17].w[0] + 472u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 488u)));
    c.r[23].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 476u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 492u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    st32((c.r[29].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00137778; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013777C; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.r[2].d[0] = c.r[23].d[0] ^ c.r[2].d[0];
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00137778:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013777C:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[30].w[0])));  goto L_00137790; }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001377CC; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.budget -= 1;
L_00137790:
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), 0u);  if (t) { goto L_0013794C; } }
L_001377CC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0013789C; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[5], c.r[19].w[0] << 3);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[29].w[0] + 48u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[9], 0u + 8u);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137828u); c.r[11].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137828u) [[unlikely]] return; }
L_00137828:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00137850; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[30].w[0] + 8u)));  if (t) { goto L_00137854; } }
    set32(c.r[19], 0u + 1u);
    c.r[2].d[0] = c.r[23].d[0] ^ c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;  if (t) { goto L_00137854; } }
L_00137850:
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    c.budget -= 1;
L_00137854:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[19].w[0] << 3);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[8], 0u + 8u);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    set32(c.r[9], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), 0u);  if (t) { goto L_00137958; } }
L_0013789C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00137968; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001378C8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0005(c, 140u, depth + 1u); else { c.pc = 0x00137310u; return; } if (c.pc != 0x001378C8u) [[unlikely]] return; }
L_001378C8:
    set32(c.r[16], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[9], 0u + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137910u); c.r[11].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137910u) [[unlikely]] return; }
L_00137910:
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] + 4u);
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    if (c.r[23].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 15;
L_0013794C:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 16u);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
L_00137958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137960u); c.r[11].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137960u) [[unlikely]] return; }
L_00137960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0013797C; } }
L_00137968:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137978u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 179u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00137978u) [[unlikely]] return; }
L_00137978:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0013797C:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 1;
L_00137980:
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00137B6C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00137A64; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[19], 0u + 1u);  if (t) { goto L_001379DC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 16u);  if (t) { goto L_00137A54; } }
L_001379DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 460u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[6], ld32((c.r[30].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[9], 0u + 8u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137A1Cu); st32((c.r[29].w[0] + 24u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137A1Cu) [[unlikely]] return; }
L_00137A1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8u);
    set32(c.r[6], ld32((c.r[30].w[0] + 12u)));
    c.budget -= 14;
L_00137A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137A5Cu); set32(c.r[5], ld32((c.r[4].w[0] + 460u)));  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137A5Cu) [[unlikely]] return; }
L_00137A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));  if (t) { goto L_00137B70; } }
L_00137A64:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00137ABC; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 476u)));  goto L_00137A7C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 492u)));
    c.budget -= 1;
L_00137A7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137AB4u); set32(c.r[9], 0u + 16u);  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137AB4u) [[unlikely]] return; }
L_00137AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));  if (t) { goto L_00137B70; } }
L_00137ABC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00137B5C; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 476u)));  goto L_00137AD4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 492u)));
    c.budget -= 1;
L_00137AD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[9], 0u + 8u);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137B0Cu); c.r[11].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137B0Cu) [[unlikely]] return; }
L_00137B0C:
    set32(c.r[2], ld32((c.r[30].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 476u)));  goto L_00137B1C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 492u)));
    c.budget -= 1;
L_00137B1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[8], 0u + 8u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137B54u); set32(c.r[9], 0u + 8u);  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00137DF0u; return; } if (c.pc != 0x00137B54u) [[unlikely]] return; }
L_00137B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));  if (t) { goto L_00137B70; } }
L_00137B5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137B6Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 179u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00137B6Cu) [[unlikely]] return; }
L_00137B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.budget -= 1;
L_00137B70:
    c.r[30].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00137BA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[3].d[0] = c.r[21].d[0] & 1ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 20;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00137BECu);  goto L_00137BF0; }
L_00137BF0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.hi.d[0];
    c.r[23].d[0] = c.lo.d[0];
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[23].w[0] << 4);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[22].w[0] << 4);  if (t) { goto L_00137C50; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[17], c.r[16].w[0] + 1752u);
    set32(c.r[18], c.r[16].w[0] + 1748u);
    set32(c.r[19], c.r[16].w[0] + 1744u);
    set32(c.r[20], c.r[16].w[0] + 1736u);
    c.budget -= 5;
L_00137C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 54272ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00137C20u | kUnwind; return; } goto L_00137C20; } }
    set32(c.r[2], 0u + 320u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00137CE4; } }
L_00137C50:
    set32(c.r[2], c.r[8].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00137C84; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137C74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 179u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00137C74u) [[unlikely]] return; }
L_00137C74:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_00137DC0; } }
L_00137C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137C8Cu); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 143u, depth + 1u); else { c.pc = 0x00137498u; return; } if (c.pc != 0x00137C8Cu) [[unlikely]] return; }
L_00137C8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[17], c.r[16].w[0] + 1752u);
    set32(c.r[18], c.r[16].w[0] + 1748u);
    set32(c.r[19], c.r[16].w[0] + 1744u);
    set32(c.r[20], c.r[16].w[0] + 1736u);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    c.budget -= 7;
L_00137CA8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00137CA8u | kUnwind; return; } goto L_00137CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137CCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 114u, depth + 1u); else { c.pc = 0x00139E48u; return; } if (c.pc != 0x00137CCCu) [[unlikely]] return; }
L_00137CCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[3], 0u + 320u);
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00137CE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[30].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 2080u)));  goto L_00137D14; }
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 320u);  if (t) { goto L_00137D10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[30].w[0]);  if (t) { goto L_00137D24; } }
L_00137D10:
    set32(c.r[2], ld32((c.r[16].w[0] + 2080u)));
    c.budget -= 1;
L_00137D14:
    set32(c.r[3], 0u + 320u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_00137D24:
    set32(c.r[2], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[7], 0u + 320u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u + 3u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 388u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00137D80; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[6], 0u + 384u);
    set32(c.r[5], ld32((c.r[16].w[0] + 464u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[23].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_00137DBC; } }
L_00137D80:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 480u)));  goto L_00137D8C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    c.budget -= 1;
L_00137D8C:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[6], 0u + 384u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2080u)));
    set32(c.r[5], 0u + 320u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[23].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[7].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 12;
L_00137DBC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00137DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00137DF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    set32(c.r[3], c.r[15].w[0] + 1740u);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    set32(c.r[2], 0u + 320u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[14].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    set32(c.r[19], ld32((c.r[15].w[0] + 2080u)));
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[30], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[15].w[0] + 2096u)));
    st32((c.r[29].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 1));
    st32((c.r[29].w[0]), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 28u);
    set32(c.r[2], c.r[2].w[0] + 1440u);
    set32(c.r[25], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[15].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    mmi::mult(c, 0, c.r[25].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[24], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[10], c.r[10].w[0] + c.r[6].w[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] + 184u);
    set32(c.r[4], c.r[4].w[0] + 72u);
    set32(c.r[13], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 41;
    { const bool t = c.r[24].d[0] == 0ull; set32(c.r[12], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_00137EA4; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 1));
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_00137EAC; } }
L_00137EA4:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 1));
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_00137EAC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[11], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 4));
    set32(c.r[2], 0u + 320u);
    set32(c.r[9], ld32((c.r[5].w[0])));
    mmi::mult(c, 0, c.r[22].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 4));
    set32(c.r[8], c.r[25].w[0] << 2);
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[6], 0u + 384u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], c.r[10].w[0] - c.r[5].w[0]);
    set32(c.r[19], c.r[9].w[0] + c.r[8].w[0]);
    c.r[10].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[12].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[20], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[23].w[0] << 4);
    set32(c.r[7], c.r[15].w[0] + c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[7].w[0] + 1448u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[30].d[0] & 1ull;
    st32((c.r[2].w[0] + 1464u), c.r[20].w[0]);
    c.budget -= 37;
    { const bool t = c.r[10].d[0] == 0ull; st32((c.r[12].w[0]), c.r[4].w[0]);  if (t) { goto L_00137F78; } }
    set32(c.r[2], c.r[14].w[0] << (c.r[24].w[0] & 31u));
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[12].w[0] + 8u), c.r[14].w[0]);  goto L_00137FAC; }
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[24].w[0] & 31u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[24].w[0] & 31u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[14].w[0] - c.r[2].w[0]);
    st32((c.r[12].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00137FB0; } }
L_00137F78:
    set32(c.r[2], c.r[14].w[0] << (c.r[24].w[0] & 31u));
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[12].w[0] + 8u), c.r[14].w[0]);  goto L_00137FAC; }
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[24].w[0] & 31u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[24].w[0] & 31u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[14].w[0] - c.r[2].w[0]);
    st32((c.r[12].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00137FB0; } }
L_00137FAC:
    st32((c.r[12].w[0] + 12u), 0u);
    c.budget -= 1;
L_00137FB0:
    set32(c.r[2], ld32((c.r[15].w[0] + 2172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[11].w[0] << 4);  if (t) { goto L_00137FF8; } }
    set32(c.r[6], ld32((c.r[15].w[0] + 2080u)));
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 1536u);
    set32(c.r[5], c.r[11].w[0] << 4);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[25].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[4].w[0] + c.r[15].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 1440u)));
    set32(c.r[4], c.r[5].w[0] + 768u);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[12].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0] + 24u), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_0006(c, 2u, depth); } }
L_00137FF8:
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 2;
    [[clang::musttail]] return unit_0006(c, 1u, depth);
}

}
