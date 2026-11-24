#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0023[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 7, 0, 8, 9, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40,
    0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60,
    0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    82, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0,
    186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0,
    212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0,
    0, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0023(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001AC000;
    case 2u: goto L_001AC010;
    case 3u: goto L_001AC018;
    case 4u: goto L_001AC048;
    case 5u: goto L_001AC054;
    case 6u: goto L_001AC068;
    case 7u: goto L_001AC06C;
    case 8u: goto L_001AC074;
    case 9u: goto L_001AC078;
    case 10u: goto L_001AC090;
    case 11u: goto L_001AC0A0;
    case 12u: goto L_001AC0B4;
    case 13u: goto L_001AC0BC;
    case 14u: goto L_001AC0C4;
    case 15u: goto L_001AC0E0;
    case 16u: goto L_001AC184;
    case 17u: goto L_001AC1A0;
    case 18u: goto L_001AC1B4;
    case 19u: goto L_001AC1D0;
    case 20u: goto L_001AC1E4;
    case 21u: goto L_001AC200;
    case 22u: goto L_001AC250;
    case 23u: goto L_001AC280;
    case 24u: goto L_001AC2C4;
    case 25u: goto L_001AC300;
    case 26u: goto L_001AC308;
    case 27u: goto L_001AC310;
    case 28u: goto L_001AC318;
    case 29u: goto L_001AC32C;
    case 30u: goto L_001AC390;
    case 31u: goto L_001AC3AC;
    case 32u: goto L_001AC3C4;
    case 33u: goto L_001AC3D8;
    case 34u: goto L_001AC3E0;
    case 35u: goto L_001AC3E8;
    case 36u: goto L_001AC3FC;
    case 37u: goto L_001AC420;
    case 38u: goto L_001AC464;
    case 39u: goto L_001AC474;
    case 40u: goto L_001AC47C;
    case 41u: goto L_001AC484;
    case 42u: goto L_001AC48C;
    case 43u: goto L_001AC4A0;
    case 44u: goto L_001AC4C0;
    case 45u: goto L_001AC4F0;
    case 46u: goto L_001AC518;
    case 47u: goto L_001AC530;
    case 48u: goto L_001AC550;
    case 49u: goto L_001AC578;
    case 50u: goto L_001AC58C;
    case 51u: goto L_001AC5AC;
    case 52u: goto L_001AC5B8;
    case 53u: goto L_001AC5E0;
    case 54u: goto L_001AC608;
    case 55u: goto L_001AC61C;
    case 56u: goto L_001AC630;
    case 57u: goto L_001AC698;
    case 58u: goto L_001AC6AC;
    case 59u: goto L_001AC6EC;
    case 60u: goto L_001AC6FC;
    case 61u: goto L_001AC70C;
    case 62u: goto L_001AC714;
    case 63u: goto L_001AC71C;
    case 64u: goto L_001AC730;
    case 65u: goto L_001AC750;
    case 66u: goto L_001AC7A4;
    case 67u: goto L_001AC7D0;
    case 68u: goto L_001AC7E4;
    case 69u: goto L_001AC7EC;
    case 70u: goto L_001AC7F4;
    case 71u: goto L_001AC808;
    case 72u: goto L_001AC820;
    case 73u: goto L_001AC878;
    case 74u: goto L_001AC888;
    case 75u: goto L_001AC8B0;
    case 76u: goto L_001AC8C8;
    case 77u: goto L_001AC8E4;
    case 78u: goto L_001AC910;
    case 79u: goto L_001AC930;
    case 80u: goto L_001AC958;
    case 81u: goto L_001AC978;
    case 82u: goto L_001AC980;
    case 83u: goto L_001AC988;
    case 84u: goto L_001AC990;
    case 85u: goto L_001AC9A4;
    case 86u: goto L_001AC9D4;
    case 87u: goto L_001AC9E8;
    case 88u: goto L_001AC9F4;
    case 89u: goto L_001ACA10;
    case 90u: goto L_001ACA8C;
    case 91u: goto L_001ACA9C;
    case 92u: goto L_001ACAA8;
    case 93u: goto L_001ACB18;
    case 94u: goto L_001ACB20;
    case 95u: goto L_001ACB34;
    case 96u: goto L_001ACB48;
    case 97u: goto L_001ACB50;
    case 98u: goto L_001ACB58;
    case 99u: goto L_001ACB60;
    case 100u: goto L_001ACB68;
    case 101u: goto L_001ACB7C;
    case 102u: goto L_001ACB98;
    case 103u: goto L_001ACBB0;
    case 104u: goto L_001ACBC0;
    case 105u: goto L_001ACBD0;
    case 106u: goto L_001ACBE0;
    case 107u: goto L_001ACBF0;
    case 108u: goto L_001ACC08;
    case 109u: goto L_001ACC54;
    case 110u: goto L_001ACC70;
    case 111u: goto L_001ACC78;
    case 112u: goto L_001ACC8C;
    case 113u: goto L_001ACCA0;
    case 114u: goto L_001ACCA8;
    case 115u: goto L_001ACCB8;
    case 116u: goto L_001ACCC8;
    case 117u: goto L_001ACCD8;
    case 118u: goto L_001ACCF0;
    case 119u: goto L_001ACD3C;
    case 120u: goto L_001ACD44;
    case 121u: goto L_001ACD54;
    case 122u: goto L_001ACD5C;
    case 123u: goto L_001ACD64;
    case 124u: goto L_001ACD80;
    case 125u: goto L_001ACDA0;
    case 126u: goto L_001ACDB0;
    case 127u: goto L_001ACDD8;
    case 128u: goto L_001ACE10;
    case 129u: goto L_001ACE64;
    case 130u: goto L_001ACE6C;
    case 131u: goto L_001ACED0;
    case 132u: goto L_001ACF28;
    case 133u: goto L_001ACF3C;
    case 134u: goto L_001ACF54;
    case 135u: goto L_001ACF70;
    case 136u: goto L_001ACF80;
    case 137u: goto L_001ACF90;
    case 138u: goto L_001ACFB0;
    case 139u: goto L_001ACFC0;
    case 140u: goto L_001ACFD0;
    case 141u: goto L_001ACFE0;
    case 142u: goto L_001AD020;
    case 143u: goto L_001AD030;
    case 144u: goto L_001AD0B4;
    case 145u: goto L_001ADD1C;
    case 146u: goto L_001ADD34;
    case 147u: goto L_001ADD90;
    case 148u: goto L_001ADDB8;
    case 149u: goto L_001ADDC8;
    case 150u: goto L_001ADDD0;
    case 151u: goto L_001ADDE0;
    case 152u: goto L_001ADDE8;
    case 153u: goto L_001ADE08;
    case 154u: goto L_001ADE1C;
    case 155u: goto L_001ADE38;
    case 156u: goto L_001ADE60;
    case 157u: goto L_001ADEB0;
    case 158u: goto L_001ADEB8;
    case 159u: goto L_001ADEC0;
    case 160u: goto L_001ADEE0;
    case 161u: goto L_001ADF38;
    case 162u: goto L_001ADF44;
    case 163u: goto L_001AE000;
    case 164u: goto L_001AE014;
    case 165u: goto L_001AE020;
    case 166u: goto L_001AE030;
    case 167u: goto L_001AE040;
    case 168u: goto L_001AE690;
    case 169u: goto L_001AE69C;
    case 170u: goto L_001AE6A4;
    case 171u: goto L_001AE700;
    case 172u: goto L_001AE73C;
    case 173u: goto L_001AE748;
    case 174u: goto L_001AE7A4;
    case 175u: goto L_001AE7CC;
    case 176u: goto L_001AE7DC;
    case 177u: goto L_001AE7F4;
    case 178u: goto L_001AE814;
    case 179u: goto L_001AE858;
    case 180u: goto L_001AE884;
    case 181u: goto L_001AE89C;
    case 182u: goto L_001AE8B0;
    case 183u: goto L_001AE8DC;
    case 184u: goto L_001AE8F0;
    case 185u: goto L_001AE8F8;
    case 186u: goto L_001AE900;
    case 187u: goto L_001AE914;
    case 188u: goto L_001AE938;
    case 189u: goto L_001AE948;
    case 190u: goto L_001AE950;
    case 191u: goto L_001AE97C;
    case 192u: goto L_001AE9BC;
    case 193u: goto L_001AE9E8;
    case 194u: goto L_001AE9F4;
    case 195u: goto L_001AEA40;
    case 196u: goto L_001AEA64;
    case 197u: goto L_001AEA88;
    case 198u: goto L_001AEAA8;
    case 199u: goto L_001AEACC;
    case 200u: goto L_001AEAF0;
    case 201u: goto L_001AEB00;
    case 202u: goto L_001AEB10;
    case 203u: goto L_001AEB20;
    case 204u: goto L_001AEB30;
    case 205u: goto L_001AEB40;
    case 206u: goto L_001AEB50;
    case 207u: goto L_001AEB78;
    case 208u: goto L_001AEBB0;
    case 209u: goto L_001AEC10;
    case 210u: goto L_001AEC70;
    case 211u: goto L_001AEC78;
    case 212u: goto L_001AEC80;
    case 213u: goto L_001AEC94;
    case 214u: goto L_001AECA4;
    case 215u: goto L_001AECAC;
    case 216u: goto L_001AECC0;
    case 217u: goto L_001AECD8;
    case 218u: goto L_001AECF0;
    case 219u: goto L_001AED3C;
    case 220u: goto L_001AED58;
    case 221u: goto L_001AEDA0;
    case 222u: goto L_001AEE18;
    case 223u: goto L_001AEE38;
    case 224u: goto L_001AEE5C;
    case 225u: goto L_001AEEF0;
    case 226u: goto L_001AEF10;
    case 227u: goto L_001AEF18;
    case 228u: goto L_001AEF2C;
    case 229u: goto L_001AEF54;
    case 230u: goto L_001AEF80;
    case 231u: goto L_001AEFA0;
    case 232u: goto L_001AEFA8;
    case 233u: goto L_001AEFBC;
    case 234u: goto L_001AEFE4;
    case 235u: goto L_001AF010;
    case 236u: goto L_001AF04C;
    case 237u: goto L_001AF06C;
    case 238u: goto L_001AF07C;
    case 239u: goto L_001AF124;
    case 240u: goto L_001AF12C;
    case 241u: goto L_001AF140;
    case 242u: goto L_001AF158;
    case 243u: goto L_001AF1B0;
    case 244u: goto L_001AF220;
    case 245u: goto L_001AF26C;
    case 246u: goto L_001AF27C;
    case 247u: goto L_001AF2B0;
    case 248u: goto L_001AF2DC;
    case 249u: goto L_001AF314;
    case 250u: goto L_001AF31C;
    case 251u: goto L_001AF324;
    case 252u: goto L_001AF338;
    case 253u: goto L_001AF378;
    case 254u: goto L_001AF390;
    case 255u: goto L_001AF3A8;
    case 256u: goto L_001AF3C8;
    case 257u: goto L_001AF3E0;
    case 258u: goto L_001AF3E8;
    case 259u: goto L_001AF3F0;
    case 260u: goto L_001AF404;
    case 261u: goto L_001AF42C;
    case 262u: goto L_001AF434;
    case 263u: goto L_001AF43C;
    case 264u: goto L_001AF450;
    case 265u: goto L_001AF468;
    case 266u: goto L_001AF49C;
    case 267u: goto L_001AF4A4;
    case 268u: goto L_001AF4AC;
    case 269u: goto L_001AF4C0;
    case 270u: goto L_001AF4E8;
    case 271u: goto L_001AF4F0;
    case 272u: goto L_001AF4F8;
    case 273u: goto L_001AF50C;
    case 274u: goto L_001AF514;
    case 275u: goto L_001AF51C;
    case 276u: goto L_001AF524;
    case 277u: goto L_001AF538;
    case 278u: goto L_001AF580;
    case 279u: goto L_001AF5A0;
    case 280u: goto L_001AF5A8;
    case 281u: goto L_001AF5CC;
    case 282u: goto L_001AF600;
    case 283u: goto L_001AF624;
    case 284u: goto L_001AF62C;
    case 285u: goto L_001AF670;
    case 286u: goto L_001AF684;
    case 287u: goto L_001AF6C0;
    case 288u: goto L_001AF6D0;
    case 289u: goto L_001AF740;
    case 290u: goto L_001AF758;
    case 291u: goto L_001AF7B0;
    case 292u: goto L_001AF810;
    case 293u: goto L_001AF890;
    case 294u: goto L_001AF8A0;
    case 295u: goto L_001AF8C0;
    case 296u: goto L_001AF8E0;
    case 297u: goto L_001AF920;
    case 298u: goto L_001AF960;
    case 299u: goto L_001AF9D0;
    case 300u: goto L_001AFA00;
    case 301u: goto L_001AFA20;
    case 302u: goto L_001AFA40;
    case 303u: goto L_001AFA60;
    case 304u: goto L_001AFA80;
    case 305u: goto L_001AFAA0;
    case 306u: goto L_001AFAD0;
    case 307u: goto L_001AFAE0;
    case 308u: goto L_001AFB00;
    case 309u: goto L_001AFB20;
    case 310u: goto L_001AFB6C;
    case 311u: goto L_001AFB8C;
    case 312u: goto L_001AFB9C;
    case 313u: goto L_001AFBA4;
    case 314u: goto L_001AFBE8;
    case 315u: goto L_001AFC64;
    case 316u: goto L_001AFC98;
    case 317u: goto L_001AFCBC;
    case 318u: goto L_001AFD00;
    case 319u: goto L_001AFD2C;
    case 320u: goto L_001AFD98;
    case 321u: goto L_001AFDEC;
    case 322u: goto L_001AFE10;
    case 323u: goto L_001AFE70;
    case 324u: goto L_001AFEA4;
    case 325u: goto L_001AFEEC;
    case 326u: goto L_001AFEF4;
    case 327u: goto L_001AFF00;
    default: bad_entry(c, 0x001AC000u); return;
    }
L_001AC000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AC068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC048; } }
L_001AC010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC018u);  if (depth < kMaxDepth) unit_0023(c, 65u, depth + 1u); else { c.pc = 0x001AC750u; return; } if (c.pc != 0x001AC018u) [[unlikely]] return; }
L_001AC018:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    set32(c.r[2], 0u - 16385u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001AC068; } }
L_001AC048:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC054u); set32(c.r[4], c.r[4].w[0] + 4480u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AC054u) [[unlikely]] return; }
L_001AC054:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001AC074; } }
L_001AC068:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AC06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC074u);  if (depth < kMaxDepth) unit_0023(c, 89u, depth + 1u); else { c.pc = 0x001ACA10u; return; } if (c.pc != 0x001AC074u) [[unlikely]] return; }
L_001AC074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001AC078:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 44u);  c.pc = t; return; }
L_001AC0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC0B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 65u, depth + 1u); else { c.pc = 0x001AC750u; return; } if (c.pc != 0x001AC0B4u) [[unlikely]] return; }
L_001AC0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC0BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 53u, depth + 1u); else { c.pc = 0x001AC5E0u; return; } if (c.pc != 0x001AC0BCu) [[unlikely]] return; }
L_001AC0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC0C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 45u, depth + 1u); else { c.pc = 0x001AC4F0u; return; } if (c.pc != 0x001AC0C4u) [[unlikely]] return; }
L_001AC0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC264; } }
L_001AC108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  goto L_001AC120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC264; } }
L_001AC120:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_001AC134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC264; } }
L_001AC134:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_001AC144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC264; } }
L_001AC144:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0])));  goto L_001AC154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC264; } }
L_001AC154:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 104u);  goto L_001AC1DC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 104u);  goto L_001AC1AC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 104u);  goto L_001AC17C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC20C; } }
L_001AC17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC184u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AC184u) [[unlikely]] return; }
L_001AC184:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  goto L_001AC214; }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 227u, depth + 1u); else { c.pc = 0x001A69B0u; return; } if (c.pc != 0x001AC1A0u) [[unlikely]] return; }
L_001AC1A0:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC214; } }
L_001AC1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1B4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AC1B4u) [[unlikely]] return; }
L_001AC1B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  goto L_001AC214; }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 230u, depth + 1u); else { c.pc = 0x001A6AB0u; return; } if (c.pc != 0x001AC1D0u) [[unlikely]] return; }
L_001AC1D0:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC214; } }
L_001AC1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1E4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AC1E4u) [[unlikely]] return; }
L_001AC1E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  goto L_001AC214; }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC200u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x001A6BA0u; return; } if (c.pc != 0x001AC200u) [[unlikely]] return; }
L_001AC200:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC214; } }
L_001AC20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001AC268; } }
L_001AC214:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_001AC228; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC264; } }
L_001AC228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 240u);  goto L_001AC25C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), 0u);  goto L_001AC254; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC250u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC250u) [[unlikely]] return; }
L_001AC250:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_001AC254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC264; } }
L_001AC25C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_001AC264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001AC268:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001AC2AC; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001AC2B8; }
L_001AC2AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC36C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AC2B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC2C4u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001AC2C4u) [[unlikely]] return; }
L_001AC2C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 13;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_001AC354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC300u);  if (depth < kMaxDepth) unit_0021(c, 259u, depth + 1u); else { c.pc = 0x001A7120u; return; } if (c.pc != 0x001AC300u) [[unlikely]] return; }
L_001AC300:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  goto L_001AC338; }
L_001AC308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC310u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AC310u) [[unlikely]] return; }
L_001AC310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC318u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AC318u) [[unlikely]] return; }
L_001AC318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC308u | kUnwind; return; } goto L_001AC308; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC32Cu); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC32Cu) [[unlikely]] return; }
L_001AC32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC308u | kUnwind; return; } goto L_001AC308; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001AC338:
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001AC368; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_001AC354:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
L_001AC368:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AC36C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AC390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3ACu); set32(c.r[4], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_009B(c, 283u, depth + 1u); else { c.pc = 0x0038F1F8u; return; } if (c.pc != 0x001AC3ACu) [[unlikely]] return; }
L_001AC3AC:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC3C4u) [[unlikely]] return; }
L_001AC3C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_001AC434; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), c.r[16].w[0]);  goto L_001AC408; }
L_001AC3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3E0u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AC3E0u) [[unlikely]] return; }
L_001AC3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3E8u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AC3E8u) [[unlikely]] return; }
L_001AC3E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC3D8u | kUnwind; return; } goto L_001AC3D8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3FCu); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC3FCu) [[unlikely]] return; }
L_001AC3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC3D8u | kUnwind; return; } goto L_001AC3D8; } }
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    c.budget -= 1;
L_001AC408:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC420u); set32(c.r[6], 0u + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC420u) [[unlikely]] return; }
L_001AC420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_001AC430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC4D4; } }
L_001AC430:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_001AC434:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC46C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AC45C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AC4A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC47C; } }
L_001AC45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC464u);  if (depth < kMaxDepth) unit_009B(c, 211u, depth + 1u); else { c.pc = 0x0038E5E8u; return; } if (c.pc != 0x001AC464u) [[unlikely]] return; }
L_001AC464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC4A8; } }
L_001AC46C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC474u);  if (depth < kMaxDepth) unit_009D(c, 249u, depth + 1u); else { c.pc = 0x00396FF0u; return; } if (c.pc != 0x001AC474u) [[unlikely]] return; }
L_001AC474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC4A8; } }
L_001AC47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC484u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AC484u) [[unlikely]] return; }
L_001AC484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC48Cu); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AC48Cu) [[unlikely]] return; }
L_001AC48C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC47Cu | kUnwind; return; } goto L_001AC47C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC4A0u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC4A0u) [[unlikely]] return; }
L_001AC4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC47Cu | kUnwind; return; } goto L_001AC47C; } }
L_001AC4A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001AC4D4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC4C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 214u, depth + 1u); else { c.pc = 0x00171B60u; return; } if (c.pc != 0x001AC4C0u) [[unlikely]] return; }
L_001AC4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_001AC4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC4D4; } }
L_001AC4D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AC4D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AC4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC51C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC518u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC518u) [[unlikely]] return; }
L_001AC518:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_001AC51C:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001AC538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC530u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AC530u) [[unlikely]] return; }
L_001AC530:
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001AC538:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC5CC; } }
L_001AC570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC578u); set32(c.r[4], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_009B(c, 283u, depth + 1u); else { c.pc = 0x0038F1F8u; return; } if (c.pc != 0x001AC578u) [[unlikely]] return; }
L_001AC578:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC58Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC58Cu) [[unlikely]] return; }
L_001AC58C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 44u);  goto L_001AC5B0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[4], c.r[4].w[0] - 19072u);
    set32(c.r[5], c.r[5].w[0] - 18960u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC5ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 98u, depth + 1u); else { c.pc = 0x00390B88u; return; } if (c.pc != 0x001AC5ACu) [[unlikely]] return; }
L_001AC5AC:
    set32(c.r[4], c.r[16].w[0] + 44u);
    c.budget -= 1;
L_001AC5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC5B8u);  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00390158u; return; } if (c.pc != 0x001AC5B8u) [[unlikely]] return; }
L_001AC5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_001AC5C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC5CC; } }
L_001AC5C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AC5CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC620; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC608u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC608u) [[unlikely]] return; }
L_001AC608:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC61Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC61Cu) [[unlikely]] return; }
L_001AC61C:
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 1;
L_001AC620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC6BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_001AC66C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001AC73C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC70C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_001AC66C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AC73C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC690; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC73C; } }
L_001AC690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC698u);  if (depth < kMaxDepth) unit_009B(c, 211u, depth + 1u); else { c.pc = 0x0038E5E8u; return; } if (c.pc != 0x001AC698u) [[unlikely]] return; }
L_001AC698:
    set32(c.r[7], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 207u, depth + 1u); else { c.pc = 0x0038E560u; return; } if (c.pc != 0x001AC6ACu) [[unlikely]] return; }
L_001AC6AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001AC738; } }
L_001AC6BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AC73C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC6E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC73C; } }
L_001AC6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6ECu);  if (depth < kMaxDepth) unit_009D(c, 249u, depth + 1u); else { c.pc = 0x00396FF0u; return; } if (c.pc != 0x001AC6ECu) [[unlikely]] return; }
L_001AC6EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6FCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 181u, depth + 1u); else { c.pc = 0x0038E298u; return; } if (c.pc != 0x001AC6FCu) [[unlikely]] return; }
L_001AC6FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001AC738; } }
L_001AC70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC714u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AC714u) [[unlikely]] return; }
L_001AC714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC71Cu); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AC71Cu) [[unlikely]] return; }
L_001AC71C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC70Cu | kUnwind; return; } goto L_001AC70C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC730u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC730u) [[unlikely]] return; }
L_001AC730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC70Cu | kUnwind; return; } goto L_001AC70C; } }
L_001AC738:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AC73C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001AC7BC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001AC790; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001AC814; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC7E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001AC790:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AC810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC7A4u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_009B(c, 210u, depth + 1u); else { c.pc = 0x0038E5D0u; return; } if (c.pc != 0x001AC7A4u) [[unlikely]] return; }
L_001AC7A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 8193u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001AC810; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001AC7BC:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AC810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC7D0u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_009B(c, 182u, depth + 1u); else { c.pc = 0x0038E2B0u; return; } if (c.pc != 0x001AC7D0u) [[unlikely]] return; }
L_001AC7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 4097u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001AC810; } }
L_001AC7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC7ECu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AC7ECu) [[unlikely]] return; }
L_001AC7EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC7F4u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AC7F4u) [[unlikely]] return; }
L_001AC7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC7E4u | kUnwind; return; } goto L_001AC7E4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC808u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC808u) [[unlikely]] return; }
L_001AC808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC7E4u | kUnwind; return; } goto L_001AC7E4; } }
L_001AC810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001AC814:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  goto L_001AC8D0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_001AC890; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_001AC858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC8EC; } }
L_001AC858:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  goto L_001AC880; }
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC878u); set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC878u) [[unlikely]] return; }
L_001AC878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AC8F8; } }
L_001AC880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC888u); set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  if (depth < kMaxDepth) unit_009D(c, 217u, depth + 1u); else { c.pc = 0x00396978u; return; } if (c.pc != 0x001AC888u) [[unlikely]] return; }
L_001AC888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC8F4; } }
L_001AC890:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 16u)));  goto L_001AC8B8; }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC8B0u); set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  if (depth < kMaxDepth) unit_009C(c, 419u, depth + 1u); else { c.pc = 0x00393338u; return; } if (c.pc != 0x001AC8B0u) [[unlikely]] return; }
L_001AC8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC8F4; } }
L_001AC8B8:
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC8C8u); set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  if (depth < kMaxDepth) unit_009D(c, 230u, depth + 1u); else { c.pc = 0x00396B98u; return; } if (c.pc != 0x001AC8C8u) [[unlikely]] return; }
L_001AC8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC8F4; } }
L_001AC8D0:
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC8E4u); set32(c.r[5], ld32((c.r[5].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC8E4u) [[unlikely]] return; }
L_001AC8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC8F4; } }
L_001AC8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001AC8FC; } }
L_001AC8F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AC8F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001AC8FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AC910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC9B0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001AC930:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 28u)));  goto L_001AC964; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_001AC950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC980; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_001AC950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC958u); set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_009D(c, 205u, depth + 1u); else { c.pc = 0x003967D0u; return; } if (c.pc != 0x001AC958u) [[unlikely]] return; }
L_001AC958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_001AC9B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_001AC964:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC978u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_009D(c, 223u, depth + 1u); else { c.pc = 0x00396AD8u; return; } if (c.pc != 0x001AC978u) [[unlikely]] return; }
L_001AC978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC9AC; } }
L_001AC980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC988u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AC988u) [[unlikely]] return; }
L_001AC988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC990u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AC990u) [[unlikely]] return; }
L_001AC990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC980u | kUnwind; return; } goto L_001AC980; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC9A4u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC9A4u) [[unlikely]] return; }
L_001AC9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC980u | kUnwind; return; } goto L_001AC980; } }
L_001AC9AC:
    set32(c.r[17], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_001AC9B0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC930u | kUnwind; return; } goto L_001AC930; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_001AC9E0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC9D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 215u, depth + 1u); else { c.pc = 0x00396920u; return; } if (c.pc != 0x001AC9D4u) [[unlikely]] return; }
L_001AC9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (t) { goto L_001AC9EC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_001AC9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC9E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 215u, depth + 1u); else { c.pc = 0x00396920u; return; } if (c.pc != 0x001AC9E8u) [[unlikely]] return; }
L_001AC9E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_001AC9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC9F4u);  if (depth < kMaxDepth) unit_009D(c, 208u, depth + 1u); else { c.pc = 0x00396890u; return; } if (c.pc != 0x001AC9F4u) [[unlikely]] return; }
L_001AC9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ACA10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001ACD68; }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001ACD64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ACD64; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_001ACC4C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_001ACA7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACD64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_001ACA7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_001ACAA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA8Cu); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_009C(c, 210u, depth + 1u); else { c.pc = 0x00391AF0u; return; } if (c.pc != 0x001ACA8Cu) [[unlikely]] return; }
L_001ACA8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACD64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_009C(c, 206u, depth + 1u); else { c.pc = 0x00391A48u; return; } if (c.pc != 0x001ACA9Cu) [[unlikely]] return; }
L_001ACA9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_001ACAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACAA8u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_009C(c, 142u, depth + 1u); else { c.pc = 0x00391088u; return; } if (c.pc != 0x001ACAA8u) [[unlikely]] return; }
L_001ACAA8:
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001ACD64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 257u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ACB58; } }
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ACB58; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ACB58; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_001ACB2C; }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_001ACB08; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACB58; } }
L_001ACB04:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001ACB08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB18u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACB18u) [[unlikely]] return; }
L_001ACB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB20u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_000F(c, 316u, depth + 1u); else { c.pc = 0x0015FE70u; return; } if (c.pc != 0x001ACB20u) [[unlikely]] return; }
L_001ACB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001ACB84; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_001ACB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB34u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_009E(c, 113u, depth + 1u); else { c.pc = 0x00398978u; return; } if (c.pc != 0x001ACB34u) [[unlikely]] return; }
L_001ACB34:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB48u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACB48u) [[unlikely]] return; }
L_001ACB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB50u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_000F(c, 316u, depth + 1u); else { c.pc = 0x0015FE70u; return; } if (c.pc != 0x001ACB50u) [[unlikely]] return; }
L_001ACB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] << 1);  if (t) { goto L_001ACB84; } }
L_001ACB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB60u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001ACB60u) [[unlikely]] return; }
L_001ACB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB68u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001ACB68u) [[unlikely]] return; }
L_001ACB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACB58u | kUnwind; return; } goto L_001ACB58; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB7Cu); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACB7Cu) [[unlikely]] return; }
L_001ACB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACB58u | kUnwind; return; } goto L_001ACB58; } }
L_001ACB84:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACB98u) [[unlikely]] return; }
L_001ACB98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_001ACBF8; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACBB0u) [[unlikely]] return; }
L_001ACBB0:
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 309u, depth + 1u); else { c.pc = 0x0015FCC0u; return; } if (c.pc != 0x001ACBC0u) [[unlikely]] return; }
L_001ACBC0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACBF8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001ACBD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBE0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACBE0u) [[unlikely]] return; }
L_001ACBE0:
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 309u, depth + 1u); else { c.pc = 0x0015FCC0u; return; } if (c.pc != 0x001ACBF0u) [[unlikely]] return; }
L_001ACBF0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_001ACBF8:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACC08u) [[unlikely]] return; }
L_001ACC08:
    c.r[3].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACBD0u | kUnwind; return; } goto L_001ACBD0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACD64; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001ACD64; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_001ACC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC54u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_009C(c, 142u, depth + 1u); else { c.pc = 0x00391088u; return; } if (c.pc != 0x001ACC54u) [[unlikely]] return; }
L_001ACC54:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACD64; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACC70u) [[unlikely]] return; }
L_001ACC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC78u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_0010(c, 9u, depth + 1u); else { c.pc = 0x00160120u; return; } if (c.pc != 0x001ACC78u) [[unlikely]] return; }
L_001ACC78:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC8Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 113u, depth + 1u); else { c.pc = 0x00398978u; return; } if (c.pc != 0x001ACC8Cu) [[unlikely]] return; }
L_001ACC8C:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCA0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACCA0u) [[unlikely]] return; }
L_001ACCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCA8u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_000F(c, 316u, depth + 1u); else { c.pc = 0x0015FE70u; return; } if (c.pc != 0x001ACCA8u) [[unlikely]] return; }
L_001ACCA8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001ACCE0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001ACCB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCC8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACCC8u) [[unlikely]] return; }
L_001ACCC8:
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 309u, depth + 1u); else { c.pc = 0x0015FCC0u; return; } if (c.pc != 0x001ACCD8u) [[unlikely]] return; }
L_001ACCD8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_001ACCE0:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACCF0u) [[unlikely]] return; }
L_001ACCF0:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACCB8u | kUnwind; return; } goto L_001ACCB8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_001ACD30; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 8;
L_001ACD30:
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACD3Cu) [[unlikely]] return; }
L_001ACD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD44u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00160310u; return; } if (c.pc != 0x001ACD44u) [[unlikely]] return; }
L_001ACD44:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACD54u) [[unlikely]] return; }
L_001ACD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD5Cu); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_0010(c, 24u, depth + 1u); else { c.pc = 0x00160470u; return; } if (c.pc != 0x001ACD5Cu) [[unlikely]] return; }
L_001ACD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD64u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_009C(c, 206u, depth + 1u); else { c.pc = 0x00391A48u; return; } if (c.pc != 0x001ACD64u) [[unlikely]] return; }
L_001ACD64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001ACD68:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001ACD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001ACD94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 240u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001ACDA0; } }
L_001ACD94:
    set32(c.r[4], c.r[4].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDA0u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x001ACDA0u) [[unlikely]] return; }
L_001ACDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ACDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] << 48;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ACDD8; } }
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDD8u); st32((c.r[16].w[0]), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0022(c, 338u, depth + 1u); else { c.pc = 0x001AB660u; return; } if (c.pc != 0x001ACDD8u) [[unlikely]] return; }
L_001ACDD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[6], c.r[6].w[0] + 10468u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 88u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    c.r[4].d[0] = c.r[2].d[0] | 17476ull;
    st32((c.r[5].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE10u); st32((c.r[5].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001ACE10u) [[unlikely]] return; }
L_001ACE10:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[4].w[0] >> 8);
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE64u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x001ACE64u) [[unlikely]] return; }
L_001ACE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE6Cu); st32((c.r[16].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x001ACE6Cu) [[unlikely]] return; }
L_001ACE6C:
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[6], 0u - 1u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], 0u + 127u);
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ACF54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[5], c.r[5].w[0] + 10468u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[17].w[0] + 88u);
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[3].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACF28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACF28u) [[unlikely]] return; }
L_001ACF28:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001ACF40; }
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACF3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 344u, depth + 1u); else { c.pc = 0x001AB730u; return; } if (c.pc != 0x001ACF3Cu) [[unlikely]] return; }
L_001ACF3C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001ACF40:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001ACF58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACF54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001ACF54u) [[unlikely]] return; }
L_001ACF54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ACF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ACF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.f[12]);  c.pc = t; return; }
L_001ACF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.f[12]);  c.pc = t; return; }
L_001ACF90:
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_001ACFB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_001ACFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[5].w[0]);  c.pc = t; return; }
L_001ACFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_001ACFE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_001ACFF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD010; } }
L_001ACFF8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_001AD008; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD010; } }
L_001AD008:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001AD010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_001AD030:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
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
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 27;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_001AE6AC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AE6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0B4u); set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001AD0B4u) [[unlikely]] return; }
L_001AD0B4:
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.f[8] = ld32((c.r[19].w[0] + 28u));
    c.f[24] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[4].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 9;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001AD0E8; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001AD100; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001AD0E8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001AD100:
    c.f[0] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[4].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_001AD120; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_001AD13C; } }
L_001AD120:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_001AD13C:
    c.f[1] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_001AD15C; } }
    c.f[2] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001AD178; } }
L_001AD15C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_001AD178:
    c.f[2] = ld32((c.r[28].w[0] - 32700u));
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);  if (t) { goto L_001AD194; } }
    c.f[3] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_001AD1B0; } }
L_001AD194:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_001AD1B0:
    c.f[3] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], c.r[4].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);  if (t) { goto L_001AD1D4; } }
    c.f[4] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[4]);  if (t) { goto L_001AD1F0; } }
L_001AD1D4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[4] = c.r[3].w[0];
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_001AD1F0:
    c.f[4] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[4].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);  if (t) { goto L_001AD210; } }
    c.f[5] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[6] = fp::cvt_s_w(c.f[5]);  if (t) { goto L_001AD22C; } }
L_001AD210:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[5] = c.r[3].w[0];
    c.f[6] = fp::cvt_s_w(c.f[5]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[6]);
    c.budget -= 7;
L_001AD22C:
    c.f[5] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[6]);  if (t) { goto L_001AD24C; } }
    c.f[6] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[7] = fp::cvt_s_w(c.f[6]);  if (t) { goto L_001AD268; } }
L_001AD24C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[6] = c.r[3].w[0];
    c.f[7] = fp::cvt_s_w(c.f[6]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[7]);
    c.budget -= 7;
L_001AD268:
    c.f[6] = ld32((c.r[28].w[0] - 32700u));
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[7]);  if (t) { goto L_001AD284; } }
    c.f[7] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[9] = fp::cvt_s_w(c.f[7]);  if (t) { goto L_001AD2A0; } }
L_001AD284:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[7] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[7]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[9]);
    c.budget -= 7;
L_001AD2A0:
    c.f[7] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], c.r[4].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[9]);  if (t) { goto L_001AD2C4; } }
    c.f[9] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD2E0; } }
L_001AD2C4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD2E0:
    c.f[9] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[4].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[28] = fp::ee::mul(c.fcr31, c.f[9], c.f[10]);  if (t) { goto L_001AD300; } }
    c.f[9] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD31C; } }
L_001AD300:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD31C:
    c.f[9] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[27] = fp::ee::mul(c.fcr31, c.f[9], c.f[10]);  if (t) { goto L_001AD33C; } }
    c.f[9] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD358; } }
L_001AD33C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD358:
    c.f[9] = ld32((c.r[28].w[0] - 32700u));
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[26] = fp::ee::mul(c.fcr31, c.f[9], c.f[10]);  if (t) { goto L_001AD374; } }
    c.f[9] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD390; } }
L_001AD374:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD390:
    c.f[9] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], c.r[4].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[25] = fp::ee::mul(c.fcr31, c.f[9], c.f[10]);  if (t) { goto L_001AD3B4; } }
    c.f[9] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD3D0; } }
L_001AD3B4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD3D0:
    c.f[9] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[4].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[31] = fp::ee::mul(c.fcr31, c.f[9], c.f[10]);  if (t) { goto L_001AD3F0; } }
    c.f[9] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD40C; } }
L_001AD3F0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD40C:
    c.f[9] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[30] = fp::ee::mul(c.fcr31, c.f[9], c.f[10]);  if (t) { goto L_001AD42C; } }
    c.f[9] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD448; } }
L_001AD42C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD448:
    c.f[9] = ld32((c.r[28].w[0] - 32700u));
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[29] = fp::ee::mul(c.fcr31, c.f[9], c.f[10]);  if (t) { goto L_001AD464; } }
    c.f[9] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD480; } }
L_001AD464:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD480:
    c.f[9] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.f[25] = fp::ee::sub(c.fcr31, c.f[25], c.f[3]);
    c.f[9] = fp::ee::mul(c.fcr31, c.f[9], c.f[10]);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[9], c.f[7]);
    c.f[26] = fp::ee::sub(c.fcr31, c.f[26], c.f[2]);
    c.f[27] = fp::ee::sub(c.fcr31, c.f[27], c.f[1]);
    c.f[28] = fp::ee::sub(c.fcr31, c.f[28], c.f[0]);
    c.f[29] = fp::ee::sub(c.fcr31, c.f[29], c.f[6]);
    c.f[30] = fp::ee::sub(c.fcr31, c.f[30], c.f[5]);
    c.f[31] = fp::ee::sub(c.fcr31, c.f[31], c.f[4]);
    c.budget -= 13;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[29].w[0] + 160u), c.f[9]);  if (t) { goto L_001AD4C0; } }
    c.f[9] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[9] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD4DC; } }
L_001AD4C0:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[9]);
    c.budget -= 7;
L_001AD4DC:
    c.f[25] = fp::ee::div(c.fcr31, c.f[25], c.f[9]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001AD504; } }
    c.f[9] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[9] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD520; } }
L_001AD504:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[9]);
    c.budget -= 7;
L_001AD520:
    c.f[26] = fp::ee::div(c.fcr31, c.f[26], c.f[9]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001AD548; } }
    c.f[9] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[9] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD564; } }
L_001AD548:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[9]);
    c.budget -= 7;
L_001AD564:
    c.f[27] = fp::ee::div(c.fcr31, c.f[27], c.f[9]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001AD58C; } }
    c.f[9] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[9] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD5A8; } }
L_001AD58C:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[9]);
    c.budget -= 7;
L_001AD5A8:
    c.f[28] = fp::ee::div(c.fcr31, c.f[28], c.f[9]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001AD5D0; } }
    c.f[9] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD5EC; } }
L_001AD5D0:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::cvt_s_w(c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_001AD5EC:
    c.f[9] = ld32((c.r[29].w[0] + 160u));
    c.f[9] = fp::ee::div(c.fcr31, c.f[9], c.f[10]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[29].w[0] + 160u), c.f[9]);  if (t) { goto L_001AD614; } }
    c.f[9] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[9] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD630; } }
L_001AD614:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[9]);
    c.budget -= 7;
L_001AD630:
    c.f[29] = fp::ee::div(c.fcr31, c.f[29], c.f[9]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001AD658; } }
    c.f[9] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[9] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD674; } }
L_001AD658:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[9]);
    c.budget -= 7;
L_001AD674:
    c.f[30] = fp::ee::div(c.fcr31, c.f[30], c.f[9]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001AD69C; } }
    c.f[9] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[9] = fp::cvt_s_w(c.f[9]);  if (t) { goto L_001AD6B8; } }
L_001AD69C:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[9]);
    c.budget -= 7;
L_001AD6B8:
    c.f[31] = fp::ee::div(c.fcr31, c.f[31], c.f[9]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 216u), 0u);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    c.f[9] = c.r[3].w[0];
    c.f[10] = fp::ee::mul(c.fcr31, c.f[9], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[28]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[25]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[26]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[27]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[9] = c.r[2].w[0];
    c.f[21] = fp::ee::add(c.fcr31, c.f[6], c.f[29]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[7], c.f[0]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[5], c.f[30]);
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[10]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[23] = fp::ee::add(c.fcr31, c.f[4], c.f[31]);  if (t) { goto L_001AD73C; } }
    c.f[0] = fp::cvt_w_s(c.f[10]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AD758; } }
L_001AD73C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[10], c.f[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AD758:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001AD798; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AD7B0; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_001AD798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_001AD7B0:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001AD7EC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AD808; } }
L_001AD7EC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AD808:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001AD844; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AD860; } }
L_001AD844:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AD860:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[29].w[0] + 248u), c.f[2]);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 236u), c.f[8]);
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 244u), 0u);  if (t) { goto L_001AD8B4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AD8D0; } }
L_001AD8B4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AD8D0:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001AD910; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AD928; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_001AD910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_001AD928:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001AD964; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AD980; } }
L_001AD964:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AD980:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001AD9BC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AD9D8; } }
L_001AD9BC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AD9D8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[29].w[0] + 252u), c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 260u), 0u);
    st32((c.r[29].w[0] + 264u), 0u);
    st32((c.r[29].w[0] + 272u), 0u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    st32((c.r[29].w[0] + 268u), c.f[2]);
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 256u), c.f[24]);  if (t) { goto L_001ADA30; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001ADA4C; } }
L_001ADA30:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001ADA4C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001ADA94; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001ADAAC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_001ADA94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_001ADAAC:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001ADAF0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001ADB0C; } }
L_001ADAF0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001ADB0C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001ADB50; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001ADB6C; } }
L_001ADB50:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001ADB6C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 276u), c.r[4].w[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[19].w[0] + 20u));
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    st32((c.r[29].w[0] + 284u), c.f[8]);
    st32((c.r[29].w[0] + 288u), 0u);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[3]);
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 280u), c.f[24]);  if (t) { goto L_001ADBC0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001ADBDC; } }
L_001ADBC0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001ADBDC:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001ADC1C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001ADC34; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_001ADC1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_001ADC34:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001ADC70; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001ADC8C; } }
L_001ADC70:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001ADC8C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001ADCC8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001ADCE4; } }
L_001ADCC8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001ADCE4:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ADD0C; } }
    c.r[2].d[0] = c.r[3].d[0] << 32;
    st32((c.r[28].w[0] - 31436u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
L_001ADD0C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD1Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001ADD1Cu) [[unlikely]] return; }
L_001ADD1C:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD34u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001ADD34u) [[unlikely]] return; }
L_001ADD34:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], 0u + 257u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_001ADDB0; }
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADDAC; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADDAC; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADDAC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ADDAC; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_001ADD88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADDAC; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001ADD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD90u);  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001ADD90u) [[unlikely]] return; }
L_001ADD90:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001ADDBC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ADDC0; } }
L_001ADDAC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001ADDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDB8u);  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001ADDB8u) [[unlikely]] return; }
L_001ADDB8:
    set32(c.r[18], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_001ADDBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ADDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDC8u);  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x001ADDC8u) [[unlikely]] return; }
L_001ADDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001ADDD0u) [[unlikely]] return; }
L_001ADDD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDE0u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001ADDE0u) [[unlikely]] return; }
L_001ADDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001ADDE8u) [[unlikely]] return; }
L_001ADDE8:
    set32(c.r[5], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[2], 0u - 65u);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001ADE08u) [[unlikely]] return; }
L_001ADE08:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[20], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001ADE1Cu) [[unlikely]] return; }
L_001ADE1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[20], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001ADE38u) [[unlikely]] return; }
L_001ADE38:
    set32(c.r[5], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[20].d[0] & 7ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 248ull;
    st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE60u); st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001ADE60u) [[unlikely]] return; }
L_001ADE60:
    set32(c.r[3], c.r[21].w[0] - 1u);
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 14;
    set32(c.r[5], ld32((c.r[17].w[0] + 352u)));
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.r[3].d[0] = c.r[3].d[0] | 10ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 85u));
    c.r[3].d[0] = c.r[3].d[0] & 199ull;
    st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 85u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADEB0u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x001ADEB0u) [[unlikely]] return; }
L_001ADEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADEB8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001ADEB8u) [[unlikely]] return; }
L_001ADEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADEC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001ADEC0u) [[unlikely]] return; }
L_001ADEC0:
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADEE0u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001ADEE0u) [[unlikely]] return; }
L_001ADEE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[4].w[0] - 3312u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] - 3308u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 3300u));
    c.f[1] = ld32((c.r[4].w[0] - 3304u));
    st32((c.r[29].w[0] + 196u), c.f[2]);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF38u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x001ADF38u) [[unlikely]] return; }
L_001ADF38:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF44u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001ADF44u) [[unlikely]] return; }
L_001ADF44:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], 0u + 257u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 1u);  goto L_001ADFF8; }
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADFF4; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADFF4; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADFF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ADFF4; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 48u)));  goto L_001ADF98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADFF4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_001ADF98:
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[18], 0u + 1u);  goto L_001ADFF8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001ADFE8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001ADFE8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001ADFF8; } }
L_001ADFE8:
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADFF8; } }
L_001ADFF4:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001ADFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE000u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x001AE000u) [[unlikely]] return; }
L_001AE000:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001AE694; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE014u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x001AE014u) [[unlikely]] return; }
L_001AE014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001AE678; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_001AE020:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE030u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0016D820u; return; } if (c.pc != 0x001AE030u) [[unlikely]] return; }
L_001AE030:
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE040u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x001AE040u) [[unlikely]] return; }
L_001AE040:
    c.f[7] = ld32((c.r[29].w[0] + 280u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[8] = ld32((c.r[29].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[9] = ld32((c.r[29].w[0] + 232u));
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[24]);
    c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[24]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[24]);
    st32((c.r[29].w[0] + 280u), c.f[7]);
    st32((c.r[29].w[0] + 256u), c.f[8]);
    c.f[7] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[29].w[0] + 232u), c.f[9]);
    c.f[8] = c.r[3].w[0];
    c.f[9] = fp::ee::mul(c.fcr31, c.f[8], c.f[7]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = ld32((c.r[29].w[0] + 172u));
    c.f[7] = c.f[0];
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[25]);
    st32((c.r[29].w[0] + 164u), c.f[7]);
    c.f[7] = c.f[1];
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[26]);
    st32((c.r[29].w[0] + 168u), c.f[7]);
    c.f[7] = c.f[2];
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[27]);
    st32((c.r[29].w[0] + 172u), c.f[7]);
    c.f[7] = ld32((c.r[29].w[0] + 176u));
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    c.f[4] = c.f[21];
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[28]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[3], c.f[24]);
    st32((c.r[29].w[0] + 176u), c.f[7]);
    c.f[5] = c.f[22];
    c.f[6] = c.f[23];
    c.f[8] = c.r[2].w[0];
    c.f[7] = ld32((c.r[29].w[0] + 160u));
    c.f[3] = c.f[20];
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[29]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[7]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[30]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[31]);
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[9]));
    c.budget -= 45;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 208u), c.f[10]);  if (t) { goto L_001AE104; } }
    c.f[7] = fp::cvt_w_s(c.f[9]);
    set32(c.r[3], c.f[7]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE120; } }
L_001AE104:
    c.f[7] = fp::ee::sub(c.fcr31, c.f[9], c.f[8]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[7] = fp::cvt_w_s(c.f[7]);
    set32(c.r[3], c.f[7]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE120:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[7] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[7]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = fp::ee::sub(c.fcr31, c.f[7], c.f[2]);  goto L_001AE160; }
    c.f[2] = fp::cvt_w_s(c.f[7]);
    set32(c.r[3], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE178; } }
    c.f[2] = fp::ee::sub(c.fcr31, c.f[7], c.f[2]);
    c.budget -= 1;
L_001AE160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_001AE178:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001AE1B4; } }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE1D0; } }
L_001AE1B4:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE1D0:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001AE20C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE228; } }
L_001AE20C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE228:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 228u), c.r[4].w[0]);  if (t) { goto L_001AE264; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE280; } }
L_001AE264:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE280:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001AE2C0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE2D8; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_001AE2C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_001AE2D8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001AE314; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE330; } }
L_001AE314:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE330:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001AE36C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE388; } }
L_001AE36C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE388:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 252u), c.r[4].w[0]);  if (t) { goto L_001AE3CC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE3E8; } }
L_001AE3CC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE3E8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001AE430; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE448; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_001AE430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_001AE448:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001AE48C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE4A8; } }
L_001AE48C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE4A8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001AE4EC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE508; } }
L_001AE4EC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE508:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 276u), c.r[4].w[0]);  if (t) { goto L_001AE544; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE560; } }
L_001AE544:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE560:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001AE5A0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE5B8; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_001AE5A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_001AE5B8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001AE5F4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE610; } }
L_001AE5F4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE610:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001AE64C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001AE668; } }
L_001AE64C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001AE668:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 4;
L_001AE678:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE020u | kUnwind; return; } goto L_001AE020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE690u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x001AE690u) [[unlikely]] return; }
L_001AE690:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AE694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE69Cu);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x001AE69Cu) [[unlikely]] return; }
L_001AE69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE6A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x001AE6A4u) [[unlikely]] return; }
L_001AE6A4:
    st32((c.r[28].w[0] - 31436u), c.r[16].w[0]);
    c.budget -= 1;
L_001AE6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001AE6AC:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001AE700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AEA10; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AEA14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE73Cu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001AE73Cu) [[unlikely]] return; }
L_001AE73C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE748u); set32(c.r[16], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001AE748u) [[unlikely]] return; }
L_001AE748:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], 0u + 257u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_001AE7C4; }
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AE7C0; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AE7C0; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AE7C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AE7C0; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_001AE79C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE7C0; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001AE79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE7A4u);  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001AE7A4u) [[unlikely]] return; }
L_001AE7A4:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001AE7D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0])));  if (t) { goto L_001AE7D4; } }
L_001AE7C0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001AE7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE7CCu);  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001AE7CCu) [[unlikely]] return; }
L_001AE7CC:
    set32(c.r[17], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_001AE7D0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001AE7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE7DCu); set32(c.r[18], 0u + 64u);  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001AE7DCu) [[unlikely]] return; }
L_001AE7DC:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_001AE80C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE7F4u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001AE7F4u) [[unlikely]] return; }
L_001AE7F4:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AE808; } }
    set32(c.r[18], 0u + 16u);
    c.budget -= 1;
L_001AE808:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001AE80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE814u);  if (depth < kMaxDepth) unit_0023(c, 10u, depth + 1u); else { c.pc = 0x001AC090u; return; } if (c.pc != 0x001AE814u) [[unlikely]] return; }
L_001AE814:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AE8F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AE8F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 72u);  goto L_001AE8A8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 72u);  goto L_001AE850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE8F0; } }
    set32(c.r[4], 0u + 72u);
    c.budget -= 1;
L_001AE850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE858u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AE858u) [[unlikely]] return; }
L_001AE858:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  goto L_001AE888; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 12290ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE884u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x001AE884u) [[unlikely]] return; }
L_001AE884:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001AE888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEA10; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE89Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0022(c, 323u, depth + 1u); else { c.pc = 0x001AB530u; return; } if (c.pc != 0x001AE89Cu) [[unlikely]] return; }
L_001AE89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[18].w[0]);  if (t) { goto L_001AE920; } }
    set32(c.r[4], 0u + 72u);
    c.budget -= 1;
L_001AE8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8B0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AE8B0u) [[unlikely]] return; }
L_001AE8B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  goto L_001AE8E0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 12290ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8DCu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x001AE8DCu) [[unlikely]] return; }
L_001AE8DC:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001AE8E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AE91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEA10; } }
L_001AE8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8F8u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AE8F8u) [[unlikely]] return; }
L_001AE8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE900u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AE900u) [[unlikely]] return; }
L_001AE900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE8F0u | kUnwind; return; } goto L_001AE8F0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE914u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE914u) [[unlikely]] return; }
L_001AE914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE8F0u | kUnwind; return; } goto L_001AE8F0; } }
L_001AE91C:
    mmi::divu(c, 0, c.r[16].w[0], c.r[18].w[0]);
    c.budget -= 1;
L_001AE920:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE938u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001AE938u) [[unlikely]] return; }
L_001AE938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AEA10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001AE9A4; } }
L_001AE948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE950u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AE950u) [[unlikely]] return; }
L_001AE950:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_001AE980; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 12290ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE97Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x001AE97Cu) [[unlikely]] return; }
L_001AE97C:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_001AE980:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEA10; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001AE9A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE948u | kUnwind; return; } goto L_001AE948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 16u);  if (t) { goto L_001AE9C0; } }
L_001AE9BC:
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_001AE9C0:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE9BCu | kUnwind; return; } goto L_001AE9BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9E8u); st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001AE9E8u) [[unlikely]] return; }
L_001AE9E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9F4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001AE9F4u) [[unlikely]] return; }
L_001AE9F4:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.f[0]);  if (t) { goto L_001AEA14; } }
L_001AEA10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AEA14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AEA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AEAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001AEA8C; } }
L_001AEA64:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001AEA8C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AEA88u) [[unlikely]] return; }
L_001AEA88:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001AEA8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEA64u | kUnwind; return; } goto L_001AEA64; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEAA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AEAA8u) [[unlikely]] return; }
L_001AEAA8:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 2;
L_001AEAB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001AEAD4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEACCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AEACCu) [[unlikely]] return; }
L_001AEACC:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_001AEAD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AEAF0:
    set32(c.r[25], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 88u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + c.r[25].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEA40u | kUnwind; return; } goto L_001AEA40; }
L_001AEB00:
    set32(c.r[25], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 88u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + c.r[25].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AD020u | kUnwind; return; } goto L_001AD020; }
L_001AEB10:
    set32(c.r[25], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 88u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + c.r[25].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACFE0u | kUnwind; return; } goto L_001ACFE0; }
L_001AEB20:
    set32(c.r[25], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 88u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + c.r[25].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACFD0u | kUnwind; return; } goto L_001ACFD0; }
L_001AEB30:
    set32(c.r[25], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 88u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + c.r[25].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE700u | kUnwind; return; } goto L_001AE700; }
L_001AEB40:
    set32(c.r[25], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 88u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + c.r[25].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACED0u | kUnwind; return; } goto L_001ACED0; }
L_001AEB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] << 48;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AEB78; } }
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB78u); st32((c.r[16].w[0]), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0022(c, 338u, depth + 1u); else { c.pc = 0x001AB660u; return; } if (c.pc != 0x001AEB78u) [[unlikely]] return; }
L_001AEB78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10528u);
    set32(c.r[6], c.r[6].w[0] + 10552u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 24u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    c.r[4].d[0] = c.r[2].d[0] | 17495ull;
    st32((c.r[5].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBB0u); st32((c.r[5].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001AEBB0u) [[unlikely]] return; }
L_001AEBB0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AEC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AECD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10528u);
    set32(c.r[5], c.r[5].w[0] + 10552u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[17].w[0] + 24u);
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[3].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEC9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC70u); set32(c.r[4], c.r[4].w[0] + 4528u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AEC70u) [[unlikely]] return; }
L_001AEC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC78u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AEC78u) [[unlikely]] return; }
L_001AEC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC80u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AEC80u) [[unlikely]] return; }
L_001AEC80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEC70u | kUnwind; return; } goto L_001AEC70; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC94u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AEC94u) [[unlikely]] return; }
L_001AEC94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEC70u | kUnwind; return; } goto L_001AEC70; } }
L_001AEC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECA4u);  if (depth < kMaxDepth) unit_0023(c, 225u, depth + 1u); else { c.pc = 0x001AEEF0u; return; } if (c.pc != 0x001AECA4u) [[unlikely]] return; }
L_001AECA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 230u, depth + 1u); else { c.pc = 0x001AEF80u; return; } if (c.pc != 0x001AECACu) [[unlikely]] return; }
L_001AECAC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001AECC4; }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 344u, depth + 1u); else { c.pc = 0x001AB730u; return; } if (c.pc != 0x001AECC0u) [[unlikely]] return; }
L_001AECC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001AECC4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001AECDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001AECD8u) [[unlikely]] return; }
L_001AECD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AECDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AECF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const bool t = c.r[20].d[0] == 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001AED7C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 254u, depth + 1u); else { c.pc = 0x00172250u; return; } if (c.pc != 0x001AED3Cu) [[unlikely]] return; }
L_001AED3C:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001AED50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_001AED60; } }
L_001AED50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 254u, depth + 1u); else { c.pc = 0x00172250u; return; } if (c.pc != 0x001AED58u) [[unlikely]] return; }
L_001AED58:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001AED60:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = c.r[19].d[0] + 0ull;  goto L_001AED68; }
L_001AED68:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = c.r[18].d[0] + 0ull;  goto L_001AED7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AED7C; } }
L_001AED7C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AEEBC; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001AED94; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_001AEDB0; }
L_001AED94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEEBC; } }
L_001AEDA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001AEDC0; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_001AEDB0:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEDA0u | kUnwind; return; } goto L_001AEDA0; } }
L_001AEDC0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 32u);  goto L_001AEE10; }
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_001AEDF0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
L_001AEDF0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_001AEE04; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001AEE08; } }
L_001AEE04:
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_001AEE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_001AEE50; } }
L_001AEE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001AEE18u) [[unlikely]] return; }
L_001AEE18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001AEE2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AEEBC; } }
L_001AEE2C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE38u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001AEE38u) [[unlikely]] return; }
L_001AEE38:
    st32((c.r[16].w[0]), c.r[20].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 6;
L_001AEE50:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001AEE74; } }
L_001AEE5C:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AEE7C; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 2;
L_001AEE74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEE5Cu | kUnwind; return; } goto L_001AEE5C; } }
L_001AEE7C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[16].w[0] + 20u), c.r[4].w[0]);  goto L_001AEE9C; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0] + 24u), c.r[5].w[0]);  goto L_001AEE94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_001AEEB8; } }
L_001AEE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 20u), c.r[16].w[0]);  if (t) { goto L_001AEEB8; } }
L_001AEE9C:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 20u), c.r[16].w[0]);  goto L_001AEEB4; }
    st32((c.r[21].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_001AEEB4:
    st32((c.r[4].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_001AEEB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AEEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001AEEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AEF58; } }
L_001AEF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 282u, depth + 1u); else { c.pc = 0x001AF600u; return; } if (c.pc != 0x001AEF18u) [[unlikely]] return; }
L_001AEF18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_001AEF34; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF2Cu); set32(c.r[4], c.r[4].w[0] + 4576u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AEF2Cu) [[unlikely]] return; }
L_001AEF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AEF64; } }
L_001AEF34:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  goto L_001AEF48; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_001AEF48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AEF54u) [[unlikely]] return; }
L_001AEF54:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AEF58:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEF10u | kUnwind; return; } goto L_001AEF10; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AEF64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AEF80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AEFE8; } }
L_001AEFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEFA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 285u, depth + 1u); else { c.pc = 0x001AF670u; return; } if (c.pc != 0x001AEFA8u) [[unlikely]] return; }
L_001AEFA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_001AEFC4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEFBCu); set32(c.r[4], c.r[4].w[0] + 4608u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AEFBCu) [[unlikely]] return; }
L_001AEFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AEFF4; } }
L_001AEFC4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  goto L_001AEFD8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_001AEFD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEFE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AEFE4u) [[unlikely]] return; }
L_001AEFE4:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AEFE8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEFA0u | kUnwind; return; } goto L_001AEFA0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AEFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AF010:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF04Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001AF04Cu) [[unlikely]] return; }
L_001AF04C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001AF060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF280; } }
L_001AF060:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF06Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001AF06Cu) [[unlikely]] return; }
L_001AF06C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[8], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ~(c.r[8].d[0] | 0ull);  if (t) { goto L_001AF114; } }
L_001AF07C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[22].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[20].w[0] + c.r[4].w[0]);  if (t) { goto L_001AF110; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  goto L_001AF114; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AF110; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001AF0F8; } }
    st32((c.r[3].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 1;
L_001AF0F8:
    st32((c.r[21].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_001AF280; } }
L_001AF110:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_001AF114:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[2].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF07Cu | kUnwind; return; } goto L_001AF07C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_001AF208; } }
L_001AF124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF12Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 255u, depth + 1u); else { c.pc = 0x00172270u; return; } if (c.pc != 0x001AF12Cu) [[unlikely]] return; }
L_001AF12C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 255u, depth + 1u); else { c.pc = 0x00172270u; return; } if (c.pc != 0x001AF140u) [[unlikely]] return; }
L_001AF140:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF158u); c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0014(c, 255u, depth + 1u); else { c.pc = 0x00172270u; return; } if (c.pc != 0x001AF158u) [[unlikely]] return; }
L_001AF158:
    c.r[1].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_001AF16C; }
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 2;
L_001AF16C:
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 20u)));  goto L_001AF208; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF204; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF204; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x001AF1B0u) [[unlikely]] return; }
L_001AF1B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001AF204; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[19].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[22].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001AF1EC; } }
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 1;
L_001AF1EC:
    st32((c.r[21].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_001AF280; } }
L_001AF204:
    set32(c.r[18], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_001AF208:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF124u | kUnwind; return; } goto L_001AF124; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF220u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 214u, depth + 1u); else { c.pc = 0x00171B60u; return; } if (c.pc != 0x001AF220u) [[unlikely]] return; }
L_001AF220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001AF258; } }
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 16u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001AF24C; } }
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 1;
L_001AF24C:
    st32((c.r[21].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_001AF280; } }
L_001AF258:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001AF26C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF26Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AF26Cu) [[unlikely]] return; }
L_001AF26C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF27Cu); set32(c.r[4], c.r[4].w[0] + 4656u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AF27Cu) [[unlikely]] return; }
L_001AF27C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001AF2B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AF2EC; } }
L_001AF2DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001AF2FC; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_001AF2EC:
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF2DCu | kUnwind; return; } goto L_001AF2DC; } }
L_001AF2FC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_001AF344; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF314u); set32(c.r[4], c.r[4].w[0] + 4704u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AF314u) [[unlikely]] return; }
L_001AF314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF31Cu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AF31Cu) [[unlikely]] return; }
L_001AF31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF324u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AF324u) [[unlikely]] return; }
L_001AF324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF314u | kUnwind; return; } goto L_001AF314; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF338u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF338u) [[unlikely]] return; }
L_001AF338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF314u | kUnwind; return; } goto L_001AF314; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001AF344:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_001AF4D8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[19].w[0] + 4u)));  goto L_001AF41C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_001AF370; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF514; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_001AF370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF378u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AF378u) [[unlikely]] return; }
L_001AF378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_001AF540; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF41C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001AF390:
    set32(c.r[20], ld32((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  goto L_001AF41C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 254u, depth + 1u); else { c.pc = 0x00172250u; return; } if (c.pc != 0x001AF3A8u) [[unlikely]] return; }
L_001AF3A8:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AF418; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x001AF3C8u) [[unlikely]] return; }
L_001AF3C8:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  goto L_001AF410; }
L_001AF3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3E8u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AF3E8u) [[unlikely]] return; }
L_001AF3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3F0u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AF3F0u) [[unlikely]] return; }
L_001AF3F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF3E0u | kUnwind; return; } goto L_001AF3E0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF404u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF404u) [[unlikely]] return; }
L_001AF404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF3E0u | kUnwind; return; } goto L_001AF3E0; } }
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_001AF410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001AF424; } }
L_001AF418:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_001AF41C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF390u | kUnwind; return; } goto L_001AF390; }
L_001AF424:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_001AF544; }
L_001AF42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF434u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AF434u) [[unlikely]] return; }
L_001AF434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF43Cu); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AF43Cu) [[unlikely]] return; }
L_001AF43C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF42Cu | kUnwind; return; } goto L_001AF42C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF450u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF450u) [[unlikely]] return; }
L_001AF450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF42Cu | kUnwind; return; } goto L_001AF42C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF4D8; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_001AF468:
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_001AF4D8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AF4D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  goto L_001AF4CC; }
L_001AF49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4A4u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AF4A4u) [[unlikely]] return; }
L_001AF4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4ACu); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AF4ACu) [[unlikely]] return; }
L_001AF4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF49Cu | kUnwind; return; } goto L_001AF49C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4C0u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF4C0u) [[unlikely]] return; }
L_001AF4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF49Cu | kUnwind; return; } goto L_001AF49C; } }
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_001AF4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001AF4E0; } }
L_001AF4D4:
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_001AF4D8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF468u | kUnwind; return; } goto L_001AF468; }
L_001AF4E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001AF540; } }
L_001AF4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4F0u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AF4F0u) [[unlikely]] return; }
L_001AF4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4F8u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AF4F8u) [[unlikely]] return; }
L_001AF4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF4E8u | kUnwind; return; } goto L_001AF4E8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF50Cu); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF50Cu) [[unlikely]] return; }
L_001AF50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF4E8u | kUnwind; return; } goto L_001AF4E8; } }
L_001AF514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF51Cu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AF51Cu) [[unlikely]] return; }
L_001AF51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF524u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AF524u) [[unlikely]] return; }
L_001AF524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF514u | kUnwind; return; } goto L_001AF514; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF538u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF538u) [[unlikely]] return; }
L_001AF538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF514u | kUnwind; return; } goto L_001AF514; } }
L_001AF540:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_001AF544:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_001AF558; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
L_001AF558:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_001AF570; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001AF574; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_001AF570:
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_001AF574:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AF580u) [[unlikely]] return; }
L_001AF580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AF5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_001AF5BC; } }
L_001AF5A8:
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 20u)));  goto L_001AF5BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF5EC; } }
L_001AF5BC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF5A8u | kUnwind; return; } goto L_001AF5A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_001AF5E0; } }
L_001AF5CC:
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 20u)));  goto L_001AF5E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF5EC; } }
L_001AF5E0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF5CCu | kUnwind; return; } goto L_001AF5CC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AF5EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[16], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 254u, depth + 1u); else { c.pc = 0x00172250u; return; } if (c.pc != 0x001AF624u) [[unlikely]] return; }
L_001AF624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001AF650; } }
L_001AF62C:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 20u)));  goto L_001AF650; }
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AF64C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AF65C; } }
L_001AF64C:
    set32(c.r[17], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_001AF650:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF62Cu | kUnwind; return; } goto L_001AF62C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AF670:
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001AF6A8; } }
L_001AF684:
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 20u)));  goto L_001AF6A8; }
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AF6A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AF6B4; } }
L_001AF6A4:
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 1;
L_001AF6A8:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF684u | kUnwind; return; } goto L_001AF684; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF6B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF6C0:
    set32(c.r[25], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 24u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + c.r[25].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEC10u | kUnwind; return; } goto L_001AEC10; }
L_001AF6D0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0])));  goto L_001AF6E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF7A0; } }
L_001AF6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20300ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));  goto L_001AF720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF7A0; } }
L_001AF720:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_001AF734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AF7A0; } }
L_001AF734:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001AF780; } }
L_001AF740:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), c.r[5].w[0]);  if (t) { goto L_001AF76C; } }
L_001AF758:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_001AF76C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF758u | kUnwind; return; } goto L_001AF758; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001AF780:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[8].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF740u | kUnwind; return; } goto L_001AF740; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001AF7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF7B0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0])));  goto L_001AF7C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF808; } }
L_001AF7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20300ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_001AF800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF808; } }
L_001AF800:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001AF808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF810:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0])));  goto L_001AF820; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF884; } }
L_001AF820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20300ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_001AF860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF884; } }
L_001AF860:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] << 4);  goto L_001AF87C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF884; } }
L_001AF87C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 2;
L_001AF884:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF8A0u);  if (depth < kMaxDepth) unit_0023(c, 295u, depth + 1u); else { c.pc = 0x001AF8C0u; return; } if (c.pc != 0x001AF8A0u) [[unlikely]] return; }
L_001AF8A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AF8AC; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_001AF8AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AF8C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AF8CC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_001AF8CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF8E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001AF8EC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_001AF8EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AF918; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] << 4);  goto L_001AF910; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF918; } }
L_001AF910:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 2;
L_001AF918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF920:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_001AF930; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF94C; } }
L_001AF930:
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  goto L_001AF944; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AF94C; } }
L_001AF944:
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001AF94C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF960:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AF9C0; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[2] = ld32((c.r[5].w[0] + 24u));  goto L_001AF97C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF9C0; } }
L_001AF97C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[2]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 17;
L_001AF9C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF9D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[11].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFAA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] - 3284u), c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] - 3296u), c.f[13]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] - 3292u), c.f[14]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 3288u), c.f[15]);  c.pc = t; return; }
L_001AFAD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 3296u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00164500u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 57u, depth); }
L_001AFAE0:
    set32(c.r[2], c.r[4].w[0] >> 4);
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001AFB00:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 54u);  c.pc = t; return; }
L_001AFB20:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 16973u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB6Cu); mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]); c.r[16].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0018(c, 178u, depth + 1u); else { c.pc = 0x00182370u; return; } if (c.pc != 0x001AFB6Cu) [[unlikely]] return; }
L_001AFB6C:
    set32(c.r[3], c.r[16].w[0] + 54u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 8u)));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB8Cu); set32(c.r[4], c.r[16].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001AFB8Cu) [[unlikely]] return; }
L_001AFB8C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] << 2);  if (t) { goto L_001AFBB4; } }
L_001AFB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFBA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001AFBA4u) [[unlikely]] return; }
L_001AFBA4:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 4;
L_001AFBB4:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFB9Cu | kUnwind; return; } goto L_001AFB9C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001AFC80; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001AFBE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001AFC90; } }
L_001AFBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] >> 1);  if (t) { goto L_001AFC50; } }
L_001AFBE8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 4u)));  goto L_001AFC20; }
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], c.r[21].w[0] + c.r[5].w[0]);  if (t) { goto L_001AFC08; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 2;
L_001AFC08:
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_001AFC4C; } }
L_001AFC20:
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], c.r[21].w[0] + c.r[5].w[0]);  if (t) { goto L_001AFC34; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 2;
L_001AFC34:
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_001AFC4C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001AFC50:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] & 1ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFBE8u | kUnwind; return; } goto L_001AFBE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFC8C; } }
L_001AFC64:
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_001AFC80:
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFC64u | kUnwind; return; } goto L_001AFC64; }
L_001AFC8C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AFC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_001AFCAC; } }
L_001AFC98:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 288u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
L_001AFCAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFC98u | kUnwind; return; } goto L_001AFC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001AFCCC; } }
L_001AFCBC:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 312u)));
    st32((c.r[3].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 4;
L_001AFCCC:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  goto L_001AFCE8; }
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFCBCu | kUnwind; return; } goto L_001AFCBC; }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 1;
L_001AFCE8:
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_001AFED8; } }
L_001AFD00:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] - c.r[22].w[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[3].w[0] + 54u);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);  if (t) { goto L_001AFD84; } }
L_001AFD2C:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[3].w[0] + 288u);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001AFD84; }
    set32(c.r[3], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] - 1u);  if (t) { goto L_001AFD60; } }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[6].w[0]), 0u);  goto L_001AFD80; }
L_001AFD60:
    c.r[1].d[0] = c.r[4].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AFD80; } }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AFD80; } }
    st32((c.r[6].w[0]), 0u);
    c.budget -= 1;
L_001AFD80:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001AFD84:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFD2Cu | kUnwind; return; } goto L_001AFD2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_001AFE50; } }
L_001AFD98:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_001AFDC4; } }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[23].d[0] = 0ull + 0ull;  goto L_001AFE2C; }
L_001AFDC4:
    c.r[1].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_001AFE50; }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AFE4C; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFE2C; } }
L_001AFDEC:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 288u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_001AFE28; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFE10u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001AFE10u) [[unlikely]] return; }
L_001AFE10:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_001AFE38; } }
L_001AFE28:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_001AFE2C:
    c.r[2].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[23].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFDECu | kUnwind; return; } goto L_001AFDEC; }
L_001AFE38:
    c.r[2].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AFE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0024(c, 2u, depth); } }
L_001AFE4C:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_001AFE50:
    c.r[2].d[0] = c.r[30].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[30].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFD98u | kUnwind; return; } goto L_001AFD98; }
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001AFE90; } }
L_001AFE70:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 3u);
    c.budget -= 8;
L_001AFE90:
    c.r[2].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFE70u | kUnwind; return; } goto L_001AFE70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001AFEC4; } }
L_001AFEA4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[2].w[0] + 288u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_001AFEC4; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_001AFED0; } }
L_001AFEC4:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFEA4u | kUnwind; return; } goto L_001AFEA4; }
L_001AFED0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_001AFED8:
    c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFD00u | kUnwind; return; } goto L_001AFD00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFEECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001AFEECu) [[unlikely]] return; }
L_001AFEEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001AFF04; } }
L_001AFEF4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFF00u); set32(c.r[4], ld32((c.r[2].w[0] + 312u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001AFF00u) [[unlikely]] return; }
L_001AFF00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001AFF04:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFEF4u | kUnwind; return; } goto L_001AFEF4; }
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[10], 0u + 40u);
    set32(c.r[9], c.r[17].w[0] >> 8);
    set32(c.r[8], c.r[17].w[0] >> 16);
    set32(c.r[7], c.r[17].w[0] >> 24);
    set32(c.r[6], c.r[16].w[0] >> 8);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[2].w[0] >> 8);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[2].w[0] >> 16);
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[2].w[0] >> 24);
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 54u);
    st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] >> 16);
    st8((c.r[21].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] >> 24);
    st8((c.r[21].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 24u);
    st8((c.r[21].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 14u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[21].w[0] + 15u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 18u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[21].w[0] + 19u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[21].w[0] + 21u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[21].w[0] + 22u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[21].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[21].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[21].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[21].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 27u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 29u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 30u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 31u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 35u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 38u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 39u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.budget -= 60;
    [[clang::musttail]] return unit_0024(c, 1u, depth);
}

}
