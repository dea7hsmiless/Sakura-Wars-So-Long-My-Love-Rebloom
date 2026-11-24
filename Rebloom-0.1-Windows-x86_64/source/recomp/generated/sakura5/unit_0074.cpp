#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0074[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0074(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F0000;
    case 2u: goto L_002F0030;
    case 3u: goto L_002F0054;
    case 4u: goto L_002F006C;
    case 5u: goto L_002F009C;
    case 6u: goto L_002F00B8;
    case 7u: goto L_002F00F4;
    case 8u: goto L_002F0124;
    case 9u: goto L_002F012C;
    case 10u: goto L_002F0160;
    case 11u: goto L_002F0194;
    case 12u: goto L_002F01C4;
    case 13u: goto L_002F01F8;
    case 14u: goto L_002F0234;
    case 15u: goto L_002F0290;
    case 16u: goto L_002F02A0;
    case 17u: goto L_002F02D0;
    case 18u: goto L_002F0350;
    case 19u: goto L_002F0368;
    case 20u: goto L_002F0390;
    case 21u: goto L_002F03E0;
    case 22u: goto L_002F0584;
    case 23u: goto L_002F05B8;
    case 24u: goto L_002F05E8;
    case 25u: goto L_002F0614;
    case 26u: goto L_002F06DC;
    case 27u: goto L_002F06F4;
    case 28u: goto L_002F0700;
    case 29u: goto L_002F0860;
    case 30u: goto L_002F0914;
    case 31u: goto L_002F092C;
    case 32u: goto L_002F09D4;
    case 33u: goto L_002F0A64;
    case 34u: goto L_002F0A74;
    case 35u: goto L_002F0A7C;
    case 36u: goto L_002F0AAC;
    case 37u: goto L_002F0ABC;
    case 38u: goto L_002F0AC4;
    case 39u: goto L_002F0AEC;
    case 40u: goto L_002F0B38;
    case 41u: goto L_002F0B48;
    case 42u: goto L_002F0B50;
    case 43u: goto L_002F0B84;
    case 44u: goto L_002F0B94;
    case 45u: goto L_002F0B9C;
    case 46u: goto L_002F0BCC;
    case 47u: goto L_002F0BDC;
    case 48u: goto L_002F0BE4;
    case 49u: goto L_002F0C0C;
    case 50u: goto L_002F0D6C;
    case 51u: goto L_002F0D84;
    case 52u: goto L_002F0D94;
    case 53u: goto L_002F0DAC;
    case 54u: goto L_002F0DC8;
    case 55u: goto L_002F0E30;
    case 56u: goto L_002F0E70;
    case 57u: goto L_002F1000;
    case 58u: goto L_002F1004;
    case 59u: goto L_002F1044;
    case 60u: goto L_002F10A0;
    case 61u: goto L_002F10E0;
    case 62u: goto L_002F1150;
    case 63u: goto L_002F11B4;
    case 64u: goto L_002F11BC;
    case 65u: goto L_002F123C;
    case 66u: goto L_002F124C;
    case 67u: goto L_002F12C0;
    case 68u: goto L_002F12E0;
    case 69u: goto L_002F1330;
    case 70u: goto L_002F1340;
    case 71u: goto L_002F1370;
    case 72u: goto L_002F13A4;
    case 73u: goto L_002F13B8;
    case 74u: goto L_002F13E0;
    case 75u: goto L_002F1430;
    case 76u: goto L_002F1450;
    case 77u: goto L_002F1490;
    case 78u: goto L_002F14A0;
    case 79u: goto L_002F14C0;
    case 80u: goto L_002F14D0;
    case 81u: goto L_002F14E0;
    case 82u: goto L_002F1510;
    case 83u: goto L_002F1530;
    case 84u: goto L_002F1550;
    case 85u: goto L_002F1590;
    case 86u: goto L_002F1688;
    case 87u: goto L_002F169C;
    case 88u: goto L_002F16D0;
    case 89u: goto L_002F16FC;
    case 90u: goto L_002F1744;
    case 91u: goto L_002F1758;
    case 92u: goto L_002F17C0;
    case 93u: goto L_002F17EC;
    case 94u: goto L_002F1824;
    case 95u: goto L_002F185C;
    case 96u: goto L_002F1880;
    case 97u: goto L_002F18C0;
    case 98u: goto L_002F18F0;
    case 99u: goto L_002F1920;
    case 100u: goto L_002F1950;
    case 101u: goto L_002F195C;
    case 102u: goto L_002F19B0;
    case 103u: goto L_002F19BC;
    case 104u: goto L_002F1A00;
    case 105u: goto L_002F1A1C;
    case 106u: goto L_002F1A40;
    case 107u: goto L_002F1A80;
    case 108u: goto L_002F1AB0;
    case 109u: goto L_002F1AE4;
    case 110u: goto L_002F1B04;
    case 111u: goto L_002F1B10;
    case 112u: goto L_002F1B50;
    case 113u: goto L_002F1B78;
    case 114u: goto L_002F1B84;
    case 115u: goto L_002F1BF0;
    case 116u: goto L_002F1C10;
    case 117u: goto L_002F1C50;
    case 118u: goto L_002F1C5C;
    case 119u: goto L_002F1C68;
    case 120u: goto L_002F1C80;
    case 121u: goto L_002F1CA0;
    case 122u: goto L_002F1CB0;
    case 123u: goto L_002F1CC0;
    case 124u: goto L_002F1D20;
    case 125u: goto L_002F1D40;
    case 126u: goto L_002F1D70;
    case 127u: goto L_002F1D8C;
    case 128u: goto L_002F1DAC;
    case 129u: goto L_002F1DC8;
    case 130u: goto L_002F1DE4;
    case 131u: goto L_002F1E00;
    case 132u: goto L_002F1E14;
    case 133u: goto L_002F1E20;
    case 134u: goto L_002F1E34;
    case 135u: goto L_002F1E54;
    case 136u: goto L_002F1E64;
    case 137u: goto L_002F1E6C;
    case 138u: goto L_002F1E90;
    case 139u: goto L_002F1E98;
    case 140u: goto L_002F1EB8;
    case 141u: goto L_002F1ED4;
    case 142u: goto L_002F1EF4;
    case 143u: goto L_002F1F10;
    case 144u: goto L_002F1F2C;
    case 145u: goto L_002F1F68;
    case 146u: goto L_002F1FA0;
    case 147u: goto L_002F2000;
    case 148u: goto L_002F20FC;
    case 149u: goto L_002F2134;
    case 150u: goto L_002F21E8;
    case 151u: goto L_002F221C;
    case 152u: goto L_002F2264;
    case 153u: goto L_002F2274;
    case 154u: goto L_002F22D0;
    case 155u: goto L_002F2310;
    case 156u: goto L_002F2320;
    case 157u: goto L_002F2350;
    case 158u: goto L_002F2394;
    case 159u: goto L_002F23C8;
    case 160u: goto L_002F2424;
    case 161u: goto L_002F2478;
    case 162u: goto L_002F2488;
    case 163u: goto L_002F24AC;
    case 164u: goto L_002F24E4;
    case 165u: goto L_002F2530;
    case 166u: goto L_002F2570;
    case 167u: goto L_002F25D8;
    case 168u: goto L_002F2608;
    case 169u: goto L_002F2644;
    case 170u: goto L_002F2660;
    case 171u: goto L_002F26A0;
    case 172u: goto L_002F26BC;
    case 173u: goto L_002F26DC;
    case 174u: goto L_002F26E8;
    case 175u: goto L_002F270C;
    case 176u: goto L_002F2740;
    case 177u: goto L_002F2754;
    case 178u: goto L_002F2774;
    case 179u: goto L_002F2790;
    case 180u: goto L_002F27C0;
    case 181u: goto L_002F27D4;
    case 182u: goto L_002F27F4;
    case 183u: goto L_002F2810;
    case 184u: goto L_002F283C;
    case 185u: goto L_002F2850;
    case 186u: goto L_002F2870;
    case 187u: goto L_002F288C;
    case 188u: goto L_002F28B4;
    case 189u: goto L_002F295C;
    case 190u: goto L_002F29A0;
    case 191u: goto L_002F2A04;
    case 192u: goto L_002F2A58;
    case 193u: goto L_002F2AC8;
    case 194u: goto L_002F2B20;
    case 195u: goto L_002F2C30;
    case 196u: goto L_002F2C38;
    case 197u: goto L_002F2C48;
    case 198u: goto L_002F2CA4;
    case 199u: goto L_002F2D30;
    case 200u: goto L_002F2E58;
    case 201u: goto L_002F2E60;
    case 202u: goto L_002F2E70;
    case 203u: goto L_002F2EB0;
    case 204u: goto L_002F2F30;
    case 205u: goto L_002F2F88;
    case 206u: goto L_002F2F9C;
    case 207u: goto L_002F3080;
    case 208u: goto L_002F30F4;
    case 209u: goto L_002F3104;
    case 210u: goto L_002F310C;
    case 211u: goto L_002F316C;
    case 212u: goto L_002F317C;
    case 213u: goto L_002F3184;
    case 214u: goto L_002F31A0;
    case 215u: goto L_002F31B0;
    case 216u: goto L_002F31C0;
    case 217u: goto L_002F3220;
    case 218u: goto L_002F324C;
    case 219u: goto L_002F3284;
    case 220u: goto L_002F32A0;
    case 221u: goto L_002F32BC;
    case 222u: goto L_002F32CC;
    case 223u: goto L_002F3300;
    case 224u: goto L_002F3328;
    case 225u: goto L_002F3380;
    case 226u: goto L_002F33C0;
    case 227u: goto L_002F3410;
    case 228u: goto L_002F3438;
    case 229u: goto L_002F344C;
    case 230u: goto L_002F345C;
    case 231u: goto L_002F3468;
    case 232u: goto L_002F3488;
    case 233u: goto L_002F34C0;
    case 234u: goto L_002F3608;
    case 235u: goto L_002F3638;
    case 236u: goto L_002F369C;
    case 237u: goto L_002F36EC;
    case 238u: goto L_002F37B8;
    case 239u: goto L_002F37E8;
    case 240u: goto L_002F384C;
    case 241u: goto L_002F389C;
    case 242u: goto L_002F3950;
    case 243u: goto L_002F3990;
    case 244u: goto L_002F39D0;
    case 245u: goto L_002F39DC;
    case 246u: goto L_002F39FC;
    case 247u: goto L_002F3A18;
    case 248u: goto L_002F3A28;
    case 249u: goto L_002F3A40;
    case 250u: goto L_002F3A9C;
    case 251u: goto L_002F3AB8;
    case 252u: goto L_002F3AE0;
    case 253u: goto L_002F3B20;
    case 254u: goto L_002F3B90;
    case 255u: goto L_002F3BAC;
    case 256u: goto L_002F3BCC;
    case 257u: goto L_002F3BEC;
    case 258u: goto L_002F3C10;
    case 259u: goto L_002F3CE4;
    case 260u: goto L_002F3D08;
    case 261u: goto L_002F3D48;
    case 262u: goto L_002F3D88;
    case 263u: goto L_002F3DB8;
    case 264u: goto L_002F3E2C;
    case 265u: goto L_002F3E60;
    case 266u: goto L_002F3E98;
    case 267u: goto L_002F3EA8;
    case 268u: goto L_002F3EFC;
    case 269u: goto L_002F3F0C;
    case 270u: goto L_002F3F1C;
    case 271u: goto L_002F3F4C;
    case 272u: goto L_002F3F68;
    case 273u: goto L_002F3F78;
    case 274u: goto L_002F3F90;
    case 275u: goto L_002F3FC8;
    case 276u: goto L_002F3FE0;
    default: bad_entry(c, 0x002F0000u); return;
    }
L_002F0000:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 488u));  goto L_002F00A4; }
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[22] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0030u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002F0030u) [[unlikely]] return; }
L_002F0030:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[23]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 488u));  goto L_002F0058; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0084; } }
    goto L_002F0058;
L_002F0054:
    c.budget -= 1;
L_002F0058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[22] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F006Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002F006Cu) [[unlikely]] return; }
L_002F006C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[23]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 6;
L_002F0084:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F009Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F009Cu) [[unlikely]] return; }
L_002F009C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002F0124; } }
L_002F00A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[22] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00B8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002F00B8u) [[unlikely]] return; }
L_002F00B8:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[23]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 488u));  goto L_002F00E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F010C; } }
L_002F00E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[22] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00F4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002F00F4u) [[unlikely]] return; }
L_002F00F4:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[23]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 6;
L_002F010C:
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0124u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0124u) [[unlikely]] return; }
L_002F0124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F012Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002F012Cu) [[unlikely]] return; }
L_002F012C:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 1u);  if (t) { goto L_002F0140; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002F0140:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_002F0154; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 2;
L_002F0154:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0160u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F0160u) [[unlikely]] return; }
L_002F0160:
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[5], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 320u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0194u); st32((c.r[29].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002F0194u) [[unlikely]] return; }
L_002F0194:
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[6], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01C4u); st32((c.r[29].w[0] + 348u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F01C4u) [[unlikely]] return; }
L_002F01C4:
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[5], c.r[29].w[0] + 510u);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    set32(c.r[6], c.r[29].w[0] + 508u);
    st32((c.r[29].w[0] + 392u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 384u);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[29].w[0] + 384u), c.f[2]);
    st32((c.r[29].w[0] + 388u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01F8u); st32((c.r[29].w[0] + 396u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002F01F8u) [[unlikely]] return; }
L_002F01F8:
    set32(c.r[2], 0u + 1u);
    c.r[9].d[0] = c.r[17].d[0] << 48;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[10].d[0] = c.r[16].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 510u)));
    c.r[2].d[0] = c.r[2].d[0] | 8487ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 508u)));
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 506u);
    c.r[11].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0234u); set32(c.r[6], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_0074(c, 20u, depth + 1u); else { c.pc = 0x002F0390u; return; } if (c.pc != 0x002F0234u) [[unlikely]] return; }
L_002F0234:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 506u)));  goto L_002F0244; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0310; } }
L_002F0244:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_002F0254; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002F0254:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 504u)));
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_002F0274; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002F0274:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0290u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0073(c, 332u, depth + 1u); else { c.pc = 0x002EF990u; return; } if (c.pc != 0x002F0290u) [[unlikely]] return; }
L_002F0290:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F02A0u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002F02A0u) [[unlikely]] return; }
L_002F02A0:
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[6], c.r[29].w[0] + 304u);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[29].w[0] + 304u), c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F02D0u); st32((c.r[29].w[0] + 316u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F02D0u) [[unlikely]] return; }
L_002F02D0:
    c.f[3] = ld32((c.r[29].w[0] + 244u));
    c.f[2] = ld32((c.r[29].w[0] + 248u));
    c.f[1] = ld32((c.r[29].w[0] + 252u));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[20].w[0]), c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[3]);
    st32((c.r[20].w[0] + 8u), c.f[2]);
    st32((c.r[20].w[0] + 12u), c.f[1]);
    set32(c.r[2], ld32((c.r[21].w[0] + 124u)));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002F0310; }
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_002F0310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[24] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_002F0350:
    set32(c.r[7], ld32((c.r[4].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF30000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] | 65535ull;  if (t) { goto L_002F0378; } }
L_002F0368:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 4;
L_002F0378:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0368u | kUnwind; return; } goto L_002F0368; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0390:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 380u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 376u), c.r[6].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F03E0u); st32((c.r[29].w[0] + 372u), c.r[11].w[0]);  if (depth < kMaxDepth) unit_0074(c, 18u, depth + 1u); else { c.pc = 0x002F0350u; return; } if (c.pc != 0x002F03E0u) [[unlikely]] return; }
L_002F03E0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_002F0400; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002F0400:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[19].w[0] - c.r[3].w[0]);
    c.r[19].d[0] = c.r[4].d[0] << 48;
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_002F0434; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002F0434:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[23], ld32((c.r[21].w[0] + 124u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 120u)));
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 122u)));
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { const bool t = c.r[23].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_002F046C; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] >= 0) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002F0470; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F046C:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002F0470:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002F0480; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F0480:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { c.r[17].d[0] = c.r[3].d[0] << 48;  goto L_002F0510; }
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = c.r[18].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] - c.r[5].w[0]);
    set32(c.r[7], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] + 0ull;  goto L_002F04B0; }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002F04B0:
    c.r[16].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_002F04D8; }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002F04D8:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;  goto L_002F04F8; }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[6].d[0] = c.r[4].d[0] + 0ull;  goto L_002F04F0; }
L_002F04F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_002F0508; } }
L_002F04F8:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = c.r[5].d[0] + 0ull;  goto L_002F0500; }
L_002F0500:
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.budget -= 2;
L_002F0508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002F0558; } }
L_002F0510:
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_002F0524; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002F0524:
    c.r[16].d[0] = c.r[4].d[0] << 48;
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_002F0540; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002F0540:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002F0550; }
L_002F0550:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_002F0558:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    st16((c.r[29].w[0] + 352u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (t) { goto L_002F080C; } }
L_002F0584:
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[20].d[0] = c.r[4].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_002F07E8; } }
L_002F05B8:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[2], c.r[20].w[0] + 1u);  goto L_002F07E0; }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));  goto L_002F0804; }
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { goto L_002F07C4; } }
L_002F05E8:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002F0608; }
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[2], c.r[19].w[0] + 1u);  goto L_002F07BC; }
    c.r[1].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F07DC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002F0608:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0614u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F0614u) [[unlikely]] return; }
L_002F0614:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F0640; }
    set32(c.r[3], ld32((c.r[21].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F0638; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0640; } }
L_002F0638:
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F0640:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F07B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 8;
    if (c.r[2].d[0] == c.r[3].d[0]) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  goto L_002F0688; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F07B8; } }
L_002F0688:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F07B8; } }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_002F06B4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F07B8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002F06B4:
    set32(c.r[30], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[18].d[0] = c.r[20].d[0] << 48;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_002F0780; } }
L_002F06DC:
    c.r[22].d[0] = c.r[19].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002F0754; } }
L_002F06F4:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0700u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F0700u) [[unlikely]] return; }
L_002F0700:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F072C; }
    set32(c.r[3], ld32((c.r[21].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F0724; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F072C; } }
L_002F0724:
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F072C:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[22].w[0] + 1u);  goto L_002F074C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_002F076C; } }
L_002F074C:
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 2;
L_002F0754:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[22].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F06F4u | kUnwind; return; } goto L_002F06F4; }
L_002F076C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002F0798; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_002F0780:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F06DCu | kUnwind; return; } goto L_002F06DC; }
L_002F0798:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002F07B8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 376u)));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));  if (t) { goto L_002F0828; } }
L_002F07B8:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002F07BC:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 2;
L_002F07C4:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[18].d[0] = c.r[19].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F05E8u | kUnwind; return; } goto L_002F05E8; } }
L_002F07DC:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002F07E0:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 2;
L_002F07E8:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[20].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F05B8u | kUnwind; return; } goto L_002F05B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));
    c.budget -= 1;
L_002F0804:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[29].w[0] + 352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F080C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0584u | kUnwind; return; } goto L_002F0584; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F0828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_002F0860:
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[20]);
    st32((c.r[29].w[0] + 268u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 180u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 264u), c.r[8].w[0]);  if (t) { goto L_002F08E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);  goto L_002F08CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F1110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 1;
L_002F08CC:
    c.r[2].d[0] = c.r[2].d[0] | 14ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  goto L_002F08E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F1110; } }
L_002F08E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_002F08E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002F1110; }
    c.f[20] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 366u);
    set32(c.r[6], c.r[29].w[0] + 362u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0914u); set32(c.r[19], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002F0914u) [[unlikely]] return; }
L_002F0914:
    c.r[7].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 364u);
    set32(c.r[6], c.r[29].w[0] + 360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F092Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002F092Cu) [[unlikely]] return; }
L_002F092C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 366u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 364u)));
    set32(c.r[2], c.r[8].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_002F094C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));  if (t) { goto L_002F0950; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_002F094C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    c.budget -= 1;
L_002F0950:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[2], c.r[7].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_002F096C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_002F0974; } }
L_002F096C:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[20].d[0] = c.r[5].d[0] << 48;
    c.budget -= 2;
L_002F0974:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F09A0; } }
    c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F09B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002F09B0; } }
L_002F09A0:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F09B0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002F09B0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 124u)));  goto L_002F0A30; }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    c.r[19].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 7;
L_002F09D4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 366u)));
    c.r[18].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 364u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[7].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] ^ c.r[8].d[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = c.r[5].d[0] ^ c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st16((c.r[29].w[0] + 364u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = c.r[6].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st16((c.r[29].w[0] + 366u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[29].w[0] + 362u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 23;
L_002F0A30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 178u)));  goto L_002F0AD0; }
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A64u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0A64u) [[unlikely]] return; }
L_002F0A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002F0A74; } }
L_002F0A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A74u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0A74u) [[unlikely]] return; }
L_002F0A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A7Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002F0A7Cu) [[unlikely]] return; }
L_002F0A7C:
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = 0u;
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0AB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AACu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0AACu) [[unlikely]] return; }
L_002F0AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002F0ABC; } }
L_002F0AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0ABCu);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0ABCu) [[unlikely]] return; }
L_002F0ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AC4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002F0AC4u) [[unlikely]] return; }
L_002F0AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F0BE8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 178u)));
    c.budget -= 1;
L_002F0AD0:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002F0AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0AEC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002F0AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AECu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002F0AECu) [[unlikely]] return; }
L_002F0AEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002F0B00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 1304u)));  if (t) { goto L_002F0B00; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F0B00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 84u));  goto L_002F0B5C; }
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B38u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0B38u) [[unlikely]] return; }
L_002F0B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002F0B48; } }
L_002F0B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B48u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0B48u) [[unlikely]] return; }
L_002F0B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B50u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002F0B50u) [[unlikely]] return; }
L_002F0B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F0BA0; } }
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.budget -= 1;
L_002F0B5C:
    c.f[0] = 0u;
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B84u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0B84u) [[unlikely]] return; }
L_002F0B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002F0B94; } }
L_002F0B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B94u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0B94u) [[unlikely]] return; }
L_002F0B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B9Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002F0B9Cu) [[unlikely]] return; }
L_002F0B9C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F0BA0:
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0BCCu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0BCCu) [[unlikely]] return; }
L_002F0BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002F0BDC; } }
L_002F0BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0BDCu);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F0BDCu) [[unlikely]] return; }
L_002F0BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0BE4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002F0BE4u) [[unlikely]] return; }
L_002F0BE4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F0BE8:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[7], c.r[29].w[0] + 320u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 358u);
    set32(c.r[6], c.r[29].w[0] + 356u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C0Cu); st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002F0C0Cu) [[unlikely]] return; }
L_002F0C0C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 358u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], c.r[5].w[0] - c.r[22].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_002F0C5C; } }
    c.r[9].d[0] = c.r[2].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[9].sd[0] >= 0) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));  goto L_002F0C40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002F0C78; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_002F0C40:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + c.r[22].w[0]);  goto L_002F0C7C; }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[9].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);  if (t) { goto L_002F0C78; } }
L_002F0C5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[9].d[0] = c.r[2].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.budget -= 7;
L_002F0C78:
    set32(c.r[2], c.r[5].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_002F0C7C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_002F0CC0; } }
    c.r[10].d[0] = c.r[2].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[10].sd[0] >= 0) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));  goto L_002F0CA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002F0CDC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_002F0CA4:
    c.r[2].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 356u)));  goto L_002F0CE0; }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);  if (t) { goto L_002F0CDC; } }
L_002F0CC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[10].d[0] = c.r[2].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.budget -= 7;
L_002F0CDC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 356u)));
    c.budget -= 1;
L_002F0CE0:
    set32(c.r[2], c.r[4].w[0] - c.r[23].w[0]);
    c.r[11].d[0] = c.r[2].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.budget -= 5;
    if (c.r[11].sd[0] >= 0) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));  goto L_002F0D00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_002F0D18; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));
    c.budget -= 1;
L_002F0D00:
    c.r[2].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0D18; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[11].d[0] = c.r[2].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.budget -= 3;
L_002F0D18:
    set32(c.r[2], c.r[4].w[0] + c.r[23].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    if (c.r[4].sd[0] >= 0) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));  goto L_002F0D38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F0D50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));
    c.budget -= 1;
L_002F0D38:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0D50; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 3;
L_002F0D50:
    set32(c.r[7], ld32((c.r[29].w[0] + 268u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[4].d[0]);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 62u, depth + 1u); else { c.pc = 0x002F1150u; return; } if (c.pc != 0x002F0D6Cu) [[unlikely]] return; }
L_002F0D6C:
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D84u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002F0D84u) [[unlikely]] return; }
L_002F0D84:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D94u); st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002F0D94u) [[unlikely]] return; }
L_002F0D94:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[20] = c.f[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0DACu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002F0DACu) [[unlikely]] return; }
L_002F0DAC:
    c.f[20] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0DC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002F0DC8u) [[unlikely]] return; }
L_002F0DC8:
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 366u)));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    st16((c.r[29].w[0] + 208u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    st16((c.r[29].w[0] + 224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 304u), c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 332u), c.f[0]);  if (t) { goto L_002F10F4; } }
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.budget -= 1;
L_002F0E30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[5], c.r[29].w[0] + 354u);
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    set32(c.r[7], c.r[29].w[0] + 320u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 320u), c.f[4]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E70u); st32((c.r[29].w[0] + 328u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002F0E70u) [[unlikely]] return; }
L_002F0E70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 354u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] - c.r[22].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002F0EC0; } }
    c.r[21].d[0] = c.r[3].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[21].sd[0] >= 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));  goto L_002F0EA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002F0EDC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_002F0EA4:
    c.r[3].d[0] = c.r[21].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] + c.r[22].w[0]);  goto L_002F0EE0; }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[21].d[0] = c.r[3].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);  if (t) { goto L_002F0EDC; } }
L_002F0EC0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[21].d[0] = c.r[3].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 7;
L_002F0EDC:
    set32(c.r[3], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_002F0EE0:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002F0F24; } }
    c.r[20].d[0] = c.r[3].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[20].sd[0] >= 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));  goto L_002F0F08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002F0F40; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_002F0F08:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));  goto L_002F0F44; }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[20].d[0] = c.r[3].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_002F0F40; } }
L_002F0F24:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[20].d[0] = c.r[3].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 7;
L_002F0F40:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));
    c.budget -= 1;
L_002F0F44:
    set32(c.r[3], c.r[5].w[0] - c.r[23].w[0]);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 5;
    if (c.r[19].sd[0] >= 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));  goto L_002F0F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002F0F7C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));
    c.budget -= 1;
L_002F0F64:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F0F7C; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 3;
L_002F0F7C:
    set32(c.r[3], c.r[5].w[0] + c.r[23].w[0]);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 5;
    if (c.r[18].sd[0] >= 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));  goto L_002F0F9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002F0FB4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));
    c.budget -= 1;
L_002F0F9C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F0FB4; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_002F0FB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 240u)));
    c.r[3].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 224u)));  goto L_002F1050; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 366u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 364u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 366u)));  goto L_002F1008; }
    c.r[9].d[0] = c.r[20].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 268u)));
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[11].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1004u); st64((c.r[29].w[0]), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0074(c, 62u, depth + 1u); else { c.pc = 0x002F1150u; return; } if (c.pc != 0x002F1004u) [[unlikely]] return; }
    goto L_002F1004;
L_002F1000:
    st64((c.r[29].w[0]), c.r[18].d[0]);
    c.budget -= 1;
L_002F1004:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 366u)));
    c.budget -= 1;
L_002F1008:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 364u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 354u)));  goto L_002F1048; }
    c.r[9].d[0] = c.r[21].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 268u)));
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[11].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1044u); st64((c.r[29].w[0]), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0074(c, 62u, depth + 1u); else { c.pc = 0x002F1150u; return; } if (c.pc != 0x002F1044u) [[unlikely]] return; }
L_002F1044:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 354u)));
    c.budget -= 1;
L_002F1048:
    st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 224u)));
    c.budget -= 2;
L_002F1050:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 208u)));  goto L_002F10EC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));  goto L_002F10A4; }
    c.r[11].d[0] = c.r[18].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 268u)));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[11].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10A0u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 62u, depth + 1u); else { c.pc = 0x002F1150u; return; } if (c.pc != 0x002F10A0u) [[unlikely]] return; }
L_002F10A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    c.budget -= 1;
L_002F10A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));  goto L_002F10E4; }
    c.r[11].d[0] = c.r[19].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 268u)));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[11].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10E0u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 62u, depth + 1u); else { c.pc = 0x002F1150u; return; } if (c.pc != 0x002F10E0u) [[unlikely]] return; }
L_002F10E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));
    c.budget -= 1;
L_002F10E4:
    st16((c.r[29].w[0] + 224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 208u)));
    c.budget -= 2;
L_002F10EC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[29].w[0] + 208u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F10F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 208u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[29].w[0] + 320u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0E30u | kUnwind; return; } goto L_002F0E30; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F1110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002F1150:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].d[0] = c.r[10].d[0] << 48;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[11].d[0] << 48;
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 188u), c.r[7].w[0]);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[23].d[0] = ~(c.r[17].d[0] | 0ull);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { goto L_002F127C; } }
L_002F11B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F1258; } }
L_002F11BC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_002F11D4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 120u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
L_002F11D4:
    c.r[4].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 120u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    mmi::mult(c, 0, c.r[21].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], c.r[22].w[0] + 1u);  goto L_002F1250; }
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F122C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_002F1220; }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002F124C; } }
L_002F1220:
    c.r[3].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002F124C; } }
L_002F122C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002F1244; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F123Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 312u, depth + 1u); else { c.pc = 0x00266A70u; return; } if (c.pc != 0x002F123Cu) [[unlikely]] return; }
L_002F123C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F124C; } }
L_002F1244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F124Cu);  if (depth < kMaxDepth) unit_0051(c, 315u, depth + 1u); else { c.pc = 0x00266AF0u; return; } if (c.pc != 0x002F124Cu) [[unlikely]] return; }
L_002F124C:
    set32(c.r[3], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_002F1250:
    c.r[22].d[0] = c.r[3].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 2;
L_002F1258:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[22].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[22].d[0] << 48;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F11BCu | kUnwind; return; } goto L_002F11BC; }
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 3;
L_002F127C:
    c.r[21].d[0] = c.r[16].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.r[1].d[0] = c.r[30].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F11B4u | kUnwind; return; } goto L_002F11B4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002F12C0:
    set32(c.r[10], ld32((c.r[4].w[0] + 76u)));
    c.r[6].d[0] = c.r[6].d[0] << 48;
    set32(c.r[8], ld32((c.r[4].w[0] + 72u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 9u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 3u);  if (t) { goto L_002F1318; } }
L_002F12E0:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002F1314; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[10].w[0] + 4u)));  goto L_002F1304; }
    set32(c.r[3], ld32((c.r[10].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002F1310; } }
L_002F1304:
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[10].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002F1310:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002F1314:
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.budget -= 1;
L_002F1318:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F12E0u | kUnwind; return; } goto L_002F12E0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1330:
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F1358; } }
L_002F1340:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] >> 44;
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    st16((c.r[6].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 6;
L_002F1358:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1340u | kUnwind; return; } goto L_002F1340; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F1398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F13C8; } }
L_002F1398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13A4u); c.r[4].d[0] = c.r[2].d[0] | 27328ull;  if (depth < kMaxDepth) unit_0074(c, 121u, depth + 1u); else { c.pc = 0x002F1CA0u; return; } if (c.pc != 0x002F13A4u) [[unlikely]] return; }
L_002F13A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  goto L_002F13BC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 112u, depth + 1u); else { c.pc = 0x002F1B50u; return; } if (c.pc != 0x002F13B8u) [[unlikely]] return; }
L_002F13B8:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_002F13BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002F13C8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F13C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F13E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002F1438; }
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F1434; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1434; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_002F1434; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1430u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1430u) [[unlikely]] return; }
L_002F1430:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_002F1434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F1438:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F1450:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 80u)));  goto L_002F146C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F1484; } }
L_002F146C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002F1484; }
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_002F1484; } }
L_002F1484:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1490:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF260u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 295u, depth); }
L_002F14A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F14E4; } }
L_002F14C0:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 315u, depth + 1u); else { c.pc = 0x00266AF0u; return; } if (c.pc != 0x002F14D0u) [[unlikely]] return; }
L_002F14D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002F14E0u) [[unlikely]] return; }
L_002F14E0:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F14E4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F14C0u | kUnwind; return; } goto L_002F14C0; }
    st32((c.r[18].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F1510:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F1530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F1560; } }
L_002F1550:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 4u)));  goto L_002F1560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F16BC; } }
L_002F1560:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1550u | kUnwind; return; } goto L_002F1550; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002F1608; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 178u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002F1588; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1590; } }
L_002F1588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1590u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002F1590u) [[unlikely]] return; }
L_002F1590:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  goto L_002F15A8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F1678; } }
L_002F15A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  goto L_002F15C8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1040ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 4;
L_002F15C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 164u)));  goto L_002F15E8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2064ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 4;
L_002F15E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));  goto L_002F167C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F1678; } }
L_002F1608:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002F1620; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F1678; } }
L_002F1620:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F16BC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 6ull;  goto L_002F164C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 192ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 6ull;
    c.budget -= 4;
L_002F164C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 14ull;  goto L_002F1664; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 320ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 14ull;
    c.budget -= 4;
L_002F1664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1678; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 576ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002F1678:
    set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));
    c.budget -= 1;
L_002F167C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1688u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002F1688u) [[unlikely]] return; }
L_002F1688:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), 0u);  goto L_002F16A4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F169Cu); set32(c.r[4], c.r[4].w[0] + 29296u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002F169Cu) [[unlikely]] return; }
L_002F169C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F16BC; } }
L_002F16A4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_002F16BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F16D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 180u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F1700; } }
L_002F16FC:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_002F1700:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F171C; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F16FCu | kUnwind; return; } goto L_002F16FC; }
L_002F171C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002F193C; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_002F1734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F1738; } }
L_002F1734:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F1738:
    set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1744u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002F1744u) [[unlikely]] return; }
L_002F1744:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[5].d[0];  if (t) { goto L_002F179C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_002F176C; } }
L_002F1758:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_002F176C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F1774; } }
L_002F176C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1758u | kUnwind; return; } goto L_002F1758; }
L_002F1774:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F1938; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002F1938; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002F1938; } }
L_002F179C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_002F189C; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 178u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002F17B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F17C4; } }
L_002F17B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17C0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002F17C0u) [[unlikely]] return; }
L_002F17C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F17C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F1938; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 164u)));  goto L_002F1808; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 104u, depth + 1u); else { c.pc = 0x002F1A00u; return; } if (c.pc != 0x002F17ECu) [[unlikely]] return; }
L_002F17EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1804; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 1025u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002F1804:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_002F1808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 164u)));  goto L_002F1840; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1824u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0074(c, 104u, depth + 1u); else { c.pc = 0x002F1A00u; return; } if (c.pc != 0x002F1824u) [[unlikely]] return; }
L_002F1824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F183C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 2049u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002F183C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_002F1840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002F1878; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F185Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0074(c, 104u, depth + 1u); else { c.pc = 0x002F1A00u; return; } if (c.pc != 0x002F185Cu) [[unlikely]] return; }
L_002F185C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1874; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 4097u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002F1874:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002F1878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 100u, depth + 1u); else { c.pc = 0x002F1950u; return; } if (c.pc != 0x002F1880u) [[unlikely]] return; }
L_002F1880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1938; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002F1938; } }
L_002F189C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002F1938; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 168u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[5].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 6ull;  goto L_002F18DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 102u, depth + 1u); else { c.pc = 0x002F19B0u; return; } if (c.pc != 0x002F18C0u) [[unlikely]] return; }
L_002F18C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F18D8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002F18D8:
    c.r[3].d[0] = c.r[16].d[0] & 6ull;
    c.budget -= 1;
L_002F18DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 14ull;  goto L_002F190C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18F0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0074(c, 102u, depth + 1u); else { c.pc = 0x002F19B0u; return; } if (c.pc != 0x002F18F0u) [[unlikely]] return; }
L_002F18F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1908; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 257u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002F1908:
    c.r[3].d[0] = c.r[16].d[0] & 14ull;
    c.budget -= 1;
L_002F190C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F1938; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1920u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0074(c, 102u, depth + 1u); else { c.pc = 0x002F19B0u; return; } if (c.pc != 0x002F1920u) [[unlikely]] return; }
L_002F1920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1938; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 513u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002F1938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002F193C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F1950:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F199C; } }
L_002F195C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1998; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 178u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002F1998; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F198C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1998; } }
L_002F198C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F19A8; } }
L_002F1998:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002F199C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F195Cu | kUnwind; return; } goto L_002F195C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F19A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F19B0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002F19E4; } }
L_002F19BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[6].w[0] + 4u)));  goto L_002F19E4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F19E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F19F0; } }
L_002F19E0:
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 1;
L_002F19E4:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F19BCu | kUnwind; return; } goto L_002F19BC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F19F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F1A60; } }
L_002F1A1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 4u)));  goto L_002F1A60; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 178u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002F1A5C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A40u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002F1A40u) [[unlikely]] return; }
L_002F1A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1A5C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 1304u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002F1A5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F1A6C; } }
L_002F1A5C:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002F1A60:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1A1Cu | kUnwind; return; } goto L_002F1A1C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1A80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002F1B24; } }
L_002F1AB0:
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_002F1B24; }
    st32((c.r[3].w[0] + 172u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1B20; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 178u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002F1B20; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1AE4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002F1AE4u) [[unlikely]] return; }
L_002F1AE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F1B20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002F1B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F1B04u) [[unlikely]] return; }
L_002F1B04:
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B10u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x002F1B10u) [[unlikely]] return; }
L_002F1B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F1B30; } }
L_002F1B20:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002F1B24:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1AB0u | kUnwind; return; } goto L_002F1AB0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F1B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F1B70; } }
    set32(c.r[5], c.r[5].w[0] + 52u);
    c.budget -= 1;
L_002F1B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002F1B78u) [[unlikely]] return; }
L_002F1B78:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 345u, depth + 1u); else { c.pc = 0x001B6230u; return; } if (c.pc != 0x002F1B84u) [[unlikely]] return; }
L_002F1B84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30368u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30388u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 27268u), 0u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 27272u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st32((c.r[3].w[0] + 27276u), 0u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29360u);
    st32((c.r[2].w[0] + 27280u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BF0u); st32((c.r[2].w[0] + 27264u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002F1BF0u) [[unlikely]] return; }
L_002F1BF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F1C80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30368u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 30388u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29392u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C50u); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002F1C50u) [[unlikely]] return; }
L_002F1C50:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 347u, depth + 1u); else { c.pc = 0x001B62E0u; return; } if (c.pc != 0x002F1C5Cu) [[unlikely]] return; }
L_002F1C5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002F1C68u) [[unlikely]] return; }
L_002F1C68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002F1C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002F1CB0u; return; } if (c.pc != 0x002F1C80u) [[unlikely]] return; }
L_002F1C80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F1C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1CA0:
    c.budget -= 2;
    { set32(c.r[5], c.r[31].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2F10u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 408u, depth); }
L_002F1CB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2F30u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 409u, depth); }
L_002F1CC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 612u)));
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D20u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002F1D20u) [[unlikely]] return; }
L_002F1D20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);  goto L_002F1D48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.r[6].d[0] = c.r[2].d[0] | 27136ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D40u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x002F1D40u) [[unlikely]] return; }
L_002F1D40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 2;
L_002F1D48:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[3].w[0] + 27264u), c.r[4].w[0]);  if (t) { goto L_002F1F74; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D70u); set32(c.r[18], c.r[2].w[0] + 452u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002F1D70u) [[unlikely]] return; }
L_002F1D70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_002F1DF8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1D8Cu) [[unlikely]] return; }
L_002F1D8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[21].d[0] != 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_002F1DE8; }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1DE8; } }
L_002F1DAC:
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002F1DE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002F1DC8u) [[unlikely]] return; }
L_002F1DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1DE4; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1DE4u) [[unlikely]] return; }
L_002F1DE4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002F1DE8:
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1DACu | kUnwind; return; } goto L_002F1DAC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_002F1DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E00u);  if (depth < kMaxDepth) unit_0074(c, 69u, depth + 1u); else { c.pc = 0x002F1330u; return; } if (c.pc != 0x002F1E00u) [[unlikely]] return; }
L_002F1E00:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E14u); set32(c.r[7], c.r[16].w[0] + 62u);  if (depth < kMaxDepth) unit_0074(c, 207u, depth + 1u); else { c.pc = 0x002F3080u; return; } if (c.pc != 0x002F1E14u) [[unlikely]] return; }
L_002F1E14:
    set32(c.r[17], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F1E20u) [[unlikely]] return; }
L_002F1E20:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[7], c.r[17].w[0] + 672u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E34u); set32(c.r[6], c.r[16].w[0] + 66u);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002F1E34u) [[unlikely]] return; }
L_002F1E34:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E54u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0074(c, 204u, depth + 1u); else { c.pc = 0x002F2F30u; return; } if (c.pc != 0x002F1E54u) [[unlikely]] return; }
L_002F1E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 27268u)));  if (t) { goto L_002F1E78; } }
L_002F1E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 146u, depth + 1u); else { c.pc = 0x002F1FA0u; return; } if (c.pc != 0x002F1E6Cu) [[unlikely]] return; }
L_002F1E6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 27268u)));
    c.budget -= 3;
L_002F1E78:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1E64u | kUnwind; return; } goto L_002F1E64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 27276u)));  if (t) { goto L_002F1EA4; } }
L_002F1E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 146u, depth + 1u); else { c.pc = 0x002F1FA0u; return; } if (c.pc != 0x002F1E98u) [[unlikely]] return; }
L_002F1E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 27276u)));
    c.budget -= 3;
L_002F1EA4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1E90u | kUnwind; return; } goto L_002F1E90; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EB8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002F1EB8u) [[unlikely]] return; }
L_002F1EB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);  goto L_002F1F40; }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1ED4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1ED4u) [[unlikely]] return; }
L_002F1ED4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[21].d[0] != 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_002F1F30; }
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1F30; } }
L_002F1EF4:
    set32(c.r[17], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[21].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002F1F30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002F1F10u) [[unlikely]] return; }
L_002F1F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1F2C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1F2Cu) [[unlikely]] return; }
L_002F1F2C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002F1F30:
    c.r[3].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1EF4u | kUnwind; return; } goto L_002F1EF4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 1;
L_002F1F40:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 27264u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002F1F78; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);  goto L_002F1F6C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1F68u) [[unlikely]] return; }
L_002F1F68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 1;
L_002F1F6C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 27264u), 0u);
    c.budget -= 2;
L_002F1F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002F1F78:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F1FA0:
    set32(c.r[29], c.r[29].w[0] - 704u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 14u));
    set32(c.r[18], ld32((c.r[4].w[0] + 52u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    set32(c.r[22], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 316u), c.r[5].w[0]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2000u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F2000u) [[unlikely]] return; }
L_002F2000:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[19].d[0] = 0ull + 0ull;  goto L_002F202C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F2024; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F202C; } }
L_002F2024:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F202C:
    set32(c.r[21], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[22].d[0] == 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_002F203C; }
    set32(c.r[30], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 1;
L_002F203C:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);  goto L_002F2A5C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[21].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002F20D8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[21].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F20A4; } }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);  goto L_002F2080; }
    c.r[2].d[0] = c.r[30].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2A58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.budget -= 1;
L_002F2080:
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2A58; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F28B4; } }
L_002F20A4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));  goto L_002F20BC; }
    c.r[2].d[0] = c.r[30].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2A58; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    c.budget -= 1;
L_002F20BC:
    c.r[3].d[0] = c.r[23].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st16((c.r[19].w[0] + 14u), static_cast<std::uint16_t>(c.r[23].w[0]));  goto L_002F28B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2A58; } }
L_002F20D8:
    set32(c.r[5], c.r[29].w[0] + 688u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 1304u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F20FCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 332u, depth + 1u); else { c.pc = 0x002EF990u; return; } if (c.pc != 0x002F20FCu) [[unlikely]] return; }
L_002F20FC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 56u)));  goto L_002F2448; }
    c.r[2].d[0] = c.r[23].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 60u)));  goto L_002F23B0; }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 60u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 62u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2134u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 194u, depth + 1u); else { c.pc = 0x002F2B20u; return; } if (c.pc != 0x002F2134u) [[unlikely]] return; }
L_002F2134:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  goto L_002F2150; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F23E0; } }
L_002F2150:
    c.r[8].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = c.r[17].d[0] << 48;
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = c.r[2].d[0] & 4ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 608u)));
    c.r[5].d[0] = c.r[2].d[0] & 8ull;
    c.r[7].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[5], 0u - c.r[7].w[0]);
    set32(c.r[18], c.r[4].w[0] + 688u);
    c.r[7].d[0] = c.r[5].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], 0u - c.r[5].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], c.r[18].w[0] + 16u);
    st16((c.r[29].w[0] + 288u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F21E8u); st16((c.r[29].w[0] + 272u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F21E8u) [[unlikely]] return; }
L_002F21E8:
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    set32(c.r[5], c.r[29].w[0] + 464u);
    st32((c.r[29].w[0] + 472u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 332u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 464u), c.f[2]);
    st32((c.r[29].w[0] + 468u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F221Cu); st32((c.r[29].w[0] + 476u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002F221Cu) [[unlikely]] return; }
L_002F221C:
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.f[2] = ld32((c.r[29].w[0] + 416u));
    c.f[1] = ld32((c.r[29].w[0] + 420u));
    st32((c.r[29].w[0] + 664u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 428u));
    st32((c.r[29].w[0] + 656u), c.f[2]);
    st32((c.r[29].w[0] + 660u), c.f[1]);
    st32((c.r[29].w[0] + 668u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 432u);  goto L_002F2258; }
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 672u), c.f[0]);  if (t) { goto L_002F2294; } }
L_002F2258:
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2264u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002F2264u) [[unlikely]] return; }
L_002F2264:
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2274u); st128((c.r[29].w[0] + 640u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002F2274u) [[unlikely]] return; }
L_002F2274:
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = 0u;
    c.f[3] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 672u), c.f[0]);
    c.budget -= 8;
L_002F2294:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 288u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 56u)));  goto L_002F22F8; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 272u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 66u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F22F4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22D0u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F22D0u) [[unlikely]] return; }
L_002F22D0:
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.f[2] = ld32((c.r[29].w[0] + 400u));
    c.f[1] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[29].w[0] + 592u), c.f[2]);
    st32((c.r[29].w[0] + 596u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 604u), c.f[0]);  if (t) { goto L_002F2340; } }
L_002F22F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_002F22F8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 288u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 272u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 1304u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2310u); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0073(c, 332u, depth + 1u); else { c.pc = 0x002EF990u; return; } if (c.pc != 0x002F2310u) [[unlikely]] return; }
L_002F2310:
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2320u); set32(c.r[6], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F2320u) [[unlikely]] return; }
L_002F2320:
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    c.f[2] = ld32((c.r[29].w[0] + 384u));
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    st32((c.r[29].w[0] + 592u), c.f[2]);
    st32((c.r[29].w[0] + 596u), c.f[1]);
    st32((c.r[29].w[0] + 604u), c.f[0]);
    c.budget -= 8;
L_002F2340:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2350u); set32(c.r[6], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F2350u) [[unlikely]] return; }
L_002F2350:
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 612u), c.f[1]);
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 380u));
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 620u), c.f[1]);
    st32((c.r[29].w[0] + 624u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 60u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 62u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2394u); set32(c.r[9], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0074(c, 199u, depth + 1u); else { c.pc = 0x002F2D30u; return; } if (c.pc != 0x002F2394u) [[unlikely]] return; }
L_002F2394:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);  goto L_002F23E4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F23E0; } }
L_002F23B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 62u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F23C8u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0074(c, 194u, depth + 1u); else { c.pc = 0x002F2B20u; return; } if (c.pc != 0x002F23C8u) [[unlikely]] return; }
L_002F23C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F23E0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002F23E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 1;
L_002F23E4:
    c.r[2].d[0] = c.r[30].d[0] & c.r[3].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 68u)));  goto L_002F2400; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 4;
L_002F2400:
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2444; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 212u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2424u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002F2424u) [[unlikely]] return; }
L_002F2424:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2444; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002F2444:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_002F2448:
    set32(c.r[2], 0u + 116u);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[4].w[0] + 1316u)));  if (t) { goto L_002F24F8; } }
    c.r[2].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 80u)));  goto L_002F24FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2478u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2478u) [[unlikely]] return; }
L_002F2478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F24F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], ld32((c.r[19].w[0])));  if (t) { goto L_002F24F0; } }
L_002F2488:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[30], ld32((c.r[30].w[0] + 4u)));  goto L_002F24F0; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 178u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002F24EC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24ACu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002F24ACu) [[unlikely]] return; }
L_002F24AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F24EC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], 0u + 20003u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F24EC; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 5000u);
    c.r[2].d[0] = c.r[23].d[0] << 48;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24E4u); set32(c.r[7], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0063(c, 154u, depth + 1u); else { c.pc = 0x002AD890u; return; } if (c.pc != 0x002F24E4u) [[unlikely]] return; }
L_002F24E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F24F8; } }
L_002F24EC:
    set32(c.r[30], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 1;
L_002F24F0:
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { set32(c.r[3], ld32((c.r[30].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2488u | kUnwind; return; } goto L_002F2488; }
L_002F24F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 1;
L_002F24FC:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { c.r[2].d[0] = c.r[21].d[0] & 128ull;  goto L_002F2540; }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], 0u + 116u);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[21].d[0] & 16ull;  goto L_002F2678; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2530u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2530u) [[unlikely]] return; }
L_002F2530:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F2674; } }
    c.r[2].d[0] = c.r[21].d[0] & 128ull;
    c.budget -= 1;
L_002F2540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2674; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F2674; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[30], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_002F266C; } }
L_002F2570:
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 180u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[30], ld32((c.r[30].w[0] + 4u)));  goto L_002F266C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F2668; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 688u);
    set32(c.r[5], ld32((c.r[5].w[0] + 608u)));
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[5].w[0] + 688u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[5]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 560u), c.f[0]);
    st32((c.r[29].w[0] + 532u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F25D8u); st32((c.r[29].w[0] + 548u), 0u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F25D8u) [[unlikely]] return; }
L_002F25D8:
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 360u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    set32(c.r[6], c.r[29].w[0] + 688u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 484u), 0u);
    st32((c.r[29].w[0] + 480u), c.f[2]);
    st32((c.r[29].w[0] + 488u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2608u); st32((c.r[29].w[0] + 492u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002F2608u) [[unlikely]] return; }
L_002F2608:
    c.f[3] = ld32((c.r[29].w[0] + 336u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[29].w[0] + 500u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    set32(c.r[4], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 496u), c.f[3]);
    set32(c.r[5], c.r[29].w[0] + 480u);
    st32((c.r[29].w[0] + 504u), c.f[2]);
    st32((c.r[29].w[0] + 508u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32156u));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2644u); st32((c.r[29].w[0] + 512u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x002F2644u) [[unlikely]] return; }
L_002F2644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2668; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2660u); set32(c.r[7], 0u + 10000u);  if (depth < kMaxDepth) unit_0063(c, 159u, depth + 1u); else { c.pc = 0x002ADA20u; return; } if (c.pc != 0x002F2660u) [[unlikely]] return; }
L_002F2660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2674; } }
L_002F2668:
    set32(c.r[30], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 1;
L_002F266C:
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2570u | kUnwind; return; } goto L_002F2570; }
L_002F2674:
    c.r[2].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 1;
L_002F2678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F28B4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1100u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26A0u); st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F26A0u) [[unlikely]] return; }
L_002F26A0:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26BCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F26BCu) [[unlikely]] return; }
L_002F26BC:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26DCu); set32(c.r[7], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F26DCu) [[unlikely]] return; }
L_002F26DC:
    set32(c.r[30], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002F2890; } }
L_002F26E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[30], ld32((c.r[30].w[0] + 4u)));  goto L_002F2890; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 178u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002F288C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F270Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002F270Cu) [[unlikely]] return; }
L_002F270C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F288C; } }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  goto L_002F279C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 56u)));  goto L_002F2744; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2740u);  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002F2740u) [[unlikely]] return; }
L_002F2740:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_002F2744:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2754u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2754u) [[unlikely]] return; }
L_002F2754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2798; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2774u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2774u) [[unlikely]] return; }
L_002F2774:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F2798; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2790u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 154u, depth + 1u); else { c.pc = 0x002AD890u; return; } if (c.pc != 0x002F2790u) [[unlikely]] return; }
L_002F2790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F288C; } }
L_002F2798:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002F279C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  goto L_002F281C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 56u)));  goto L_002F27C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27C0u);  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002F27C0u) [[unlikely]] return; }
L_002F27C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_002F27C4:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27D4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F27D4u) [[unlikely]] return; }
L_002F27D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2818; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27F4u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F27F4u) [[unlikely]] return; }
L_002F27F4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F2818; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2810u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0063(c, 154u, depth + 1u); else { c.pc = 0x002AD890u; return; } if (c.pc != 0x002F2810u) [[unlikely]] return; }
L_002F2810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F288C; } }
L_002F2818:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002F281C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F288C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 56u)));  goto L_002F2840; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F283Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002F283Cu) [[unlikely]] return; }
L_002F283C:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_002F2840:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2850u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2850u) [[unlikely]] return; }
L_002F2850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F288C; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2870u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2870u) [[unlikely]] return; }
L_002F2870:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F288C; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F288Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 154u, depth + 1u); else { c.pc = 0x002AD890u; return; } if (c.pc != 0x002F288Cu) [[unlikely]] return; }
L_002F288C:
    set32(c.r[30], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 1;
L_002F2890:
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { set32(c.r[3], ld32((c.r[30].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F26E8u | kUnwind; return; } goto L_002F26E8; }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002F28B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F28B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002F28B4u) [[unlikely]] return; }
L_002F28B4:
    st16((c.r[19].w[0] + 14u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.budget -= 1;
L_002F28B8:
    c.r[4].d[0] = c.r[23].d[0] << 48;
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F2A58; } }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[18], 0u + 1u);  goto L_002F28F0; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[18].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
L_002F28F0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[21].d[0] = c.r[3].d[0] << 48;
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[23].d[0] & 4ull;
    set32(c.r[30], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);  if (t) { goto L_002F295C; } }
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002F2930; }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[23].d[0] & 1ull;  goto L_002F2960; }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002F2930:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[7], 0u + 8u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F295Cu); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 204u, depth + 1u); else { c.pc = 0x002F2F30u; return; } if (c.pc != 0x002F295Cu) [[unlikely]] return; }
L_002F295C:
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 1;
L_002F2960:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[23].d[0] & 8ull;  goto L_002F29A4; }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F29A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29A0u); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 204u, depth + 1u); else { c.pc = 0x002F2F30u; return; } if (c.pc != 0x002F29A0u) [[unlikely]] return; }
L_002F29A0:
    c.r[2].d[0] = c.r[23].d[0] & 8ull;
    c.budget -= 1;
L_002F29A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[23].d[0] & 2ull;  goto L_002F2A08; }
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002F29D8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F2A04; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002F29D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 4u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A04u); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 204u, depth + 1u); else { c.pc = 0x002F2F30u; return; } if (c.pc != 0x002F2A04u) [[unlikely]] return; }
L_002F2A04:
    c.r[2].d[0] = c.r[23].d[0] & 2ull;
    c.budget -= 1;
L_002F2A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2A58; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 122u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F2A58; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A58u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 204u, depth + 1u); else { c.pc = 0x002F2F30u; return; } if (c.pc != 0x002F2A58u) [[unlikely]] return; }
L_002F2A58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 1;
L_002F2A5C:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 27268u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[2].w[0])));  goto L_002F2A94; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 27268u), c.r[3].w[0]);  if (t) { goto L_002F2AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 27272u), 0u);  if (t) { goto L_002F2AB0; } }
L_002F2A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 27276u), c.r[3].w[0]);  if (t) { goto L_002F2AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 27280u), 0u);
    c.budget -= 3;
L_002F2AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 27264u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2AC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002F2AC8u) [[unlikely]] return; }
L_002F2AC8:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002F2AE8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 6;
L_002F2AE8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 704u);  c.pc = t; return; }
L_002F2B20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] << 48;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[2].w[0] - c.r[7].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[7].d[0] = c.r[2].d[0] << 48;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[2], ld32((c.r[5].w[0] + 124u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_002F2BCC; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002F2B98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F2B98:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[7].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 120u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { goto L_002F2BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] << 48;  if (t) { goto L_002F2BC8; } }
L_002F2BC0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.budget -= 2;
L_002F2BC8:
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 1;
L_002F2BCC:
    c.r[4].d[0] = c.r[8].d[0] << 48;
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002F2BEC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F2BEC:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 122u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_002F2C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_002F2C18; } }
L_002F2C10:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] << 48;
    c.budget -= 2;
L_002F2C18:
    c.r[22].d[0] = c.r[7].d[0] << 48;
    c.r[23].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);  if (t) { goto L_002F2CE0; } }
L_002F2C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_002F2CC0; } }
L_002F2C38:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F2C48u) [[unlikely]] return; }
L_002F2C48:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F2C74; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F2C6C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2C74; } }
L_002F2C6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F2C74:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 551ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_002F2CFC; } }
L_002F2C90:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_002F2CB8; }
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CA4u); set32(c.r[5], ld32((c.r[2].w[0] + 1304u)));  if (depth < kMaxDepth) unit_0074(c, 104u, depth + 1u); else { c.pc = 0x002F1A00u; return; } if (c.pc != 0x002F2CA4u) [[unlikely]] return; }
L_002F2CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2CB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F2CF8; } }
L_002F2CB4:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002F2CB8:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 2;
L_002F2CC0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2C38u | kUnwind; return; } goto L_002F2C38; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_002F2CE0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = c.r[19].d[0] << 48;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2C30u | kUnwind; return; } goto L_002F2C30; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F2CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002F2CFC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002F2D30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30244u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 30244u), c.r[2].w[0]);  if (t) { goto L_002F2D78; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 30244u), c.r[2].w[0]);
    c.budget -= 2;
L_002F2D78:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[7].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[2], ld32((c.r[5].w[0] + 124u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_002F2DF4; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002F2DC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F2DC0:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[7].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 120u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { goto L_002F2DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] << 48;  if (t) { goto L_002F2DF0; } }
L_002F2DE8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.budget -= 2;
L_002F2DF0:
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 1;
L_002F2DF4:
    c.r[4].d[0] = c.r[8].d[0] << 48;
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002F2E14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F2E14:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 122u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_002F2E38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_002F2E40; } }
L_002F2E38:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] << 48;
    c.budget -= 2;
L_002F2E40:
    c.r[22].d[0] = c.r[7].d[0] << 48;
    c.r[23].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);  if (t) { goto L_002F2EE8; } }
L_002F2E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_002F2EC8; } }
L_002F2E60:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F2E70u) [[unlikely]] return; }
L_002F2E70:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F2E9C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F2E94; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2E9C; } }
L_002F2E94:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F2E9C:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 30244u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 1304u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EB0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 107u, depth + 1u); else { c.pc = 0x002F1A80u; return; } if (c.pc != 0x002F2EB0u) [[unlikely]] return; }
L_002F2EB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_002F2EC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F2F00; } }
L_002F2EC0:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 2;
L_002F2EC8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2E60u | kUnwind; return; } goto L_002F2E60; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_002F2EE8:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = c.r[19].d[0] << 48;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2E58u | kUnwind; return; } goto L_002F2E58; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F2F00:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002F2F30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 27264u)));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002F2F88u) [[unlikely]] return; }
L_002F2F88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), 0u);  goto L_002F2FA4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F9Cu); set32(c.r[4], c.r[4].w[0] + 29424u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002F2F9Cu) [[unlikely]] return; }
L_002F2F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F304C; } }
L_002F2FA4:
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_002F3004; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27272u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);  goto L_002F2FD8; }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 2;
L_002F2FD8:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 27272u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27268u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002F304C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 27268u), c.r[2].w[0]);  if (t) { goto L_002F3048; } }
L_002F3004:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27280u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);  goto L_002F3020; }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 2;
L_002F3020:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 27280u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27276u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F3048; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 27276u), c.r[2].w[0]);
    c.budget -= 3;
L_002F3048:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F304C:
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
L_002F3080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 1304u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002F30B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[3].w[0] + 112u));  if (t) { goto L_002F30C8; } }
L_002F30B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.f[2] = ld32((c.r[3].w[0] + 84u));  goto L_002F30C8; }
    c.f[2] = ld32((c.r[3].w[0] + 88u));
    c.budget -= 1;
L_002F30C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 656u));
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F30FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30F4u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F30F4u) [[unlikely]] return; }
L_002F30F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002F3104; } }
L_002F30FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3104u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F3104u) [[unlikely]] return; }
L_002F3104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F310Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002F310Cu) [[unlikely]] return; }
L_002F310C:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.f[3] = ld32((c.r[3].w[0] + 116u));
    c.f[2] = ld32((c.r[2].w[0] + 656u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_002F3140; }
L_002F3140:
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F316Cu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F316Cu) [[unlikely]] return; }
L_002F316C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002F317C; } }
L_002F3174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F317Cu);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002F317Cu) [[unlikely]] return; }
L_002F317C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3184u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002F3184u) [[unlikely]] return; }
L_002F3184:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F31A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1CC0u | kUnwind; return; } goto L_002F1CC0; }
L_002F31B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1C10u | kUnwind; return; } goto L_002F1C10; }
L_002F31C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[6], c.r[6].w[0] + 30408u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4D0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 18259ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_002F3220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F3284; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 30408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F324Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0074(c, 220u, depth + 1u); else { c.pc = 0x002F32A0u; return; } if (c.pc != 0x002F324Cu) [[unlikely]] return; }
L_002F324C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_002F3270; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_002F3270:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002F3288; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002F3284u) [[unlikely]] return; }
L_002F3284:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F3288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F32A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_002F32D0; } }
L_002F32BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_002F32CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F32CCu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002F32CCu) [[unlikely]] return; }
L_002F32CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F32D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F32BCu | kUnwind; return; } goto L_002F32BC; } }
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F3300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3328u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002F3328u) [[unlikely]] return; }
L_002F3328:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_002F3338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F3360; } }
L_002F3338:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002F3354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F3358; } }
L_002F3354:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_002F3358:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002F3360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F3380:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_002F3394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F33AC; } }
L_002F3394:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002F33AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F33C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_002F33D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F33FC; } }
L_002F33D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_002F33E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F33FC; } }
L_002F33E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002F33FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F3494; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 1;
L_002F3438:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F344Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 233u, depth + 1u); else { c.pc = 0x002F34C0u; return; } if (c.pc != 0x002F344Cu) [[unlikely]] return; }
L_002F344C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_002F3484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_002F346C; } }
L_002F345C:
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3468u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 242u, depth + 1u); else { c.pc = 0x002F3950u; return; } if (c.pc != 0x002F3468u) [[unlikely]] return; }
L_002F3468:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F346C:
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F345Cu | kUnwind; return; } goto L_002F345C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_002F3494; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002F3484:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002F3488:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3438u | kUnwind; return; } goto L_002F3438; }
    set32(c.r[18], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002F3494:
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3488u | kUnwind; return; } goto L_002F3488; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F34C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].d[0] = c.r[5].d[0] << 48;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[6].d[0] << 48;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] << 48;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] << 48;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    set32(c.r[2], c.r[22].w[0] - c.r[2].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[23].w[0] - c.r[3].w[0]);
    c.r[7].d[0] = c.r[2].d[0] << 48;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 27;
    { const bool t = c.r[7].sd[0] < 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002F3534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002F3538; } }
L_002F3534:
    set32(c.r[2], 0u - c.r[7].w[0]);
    c.budget -= 1;
L_002F3538:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[9].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);  if (t) { goto L_002F3554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F3558; } }
L_002F3554:
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_002F3558:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002F356C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F357C; } }
L_002F356C:
    c.budget -= 2;
    if (c.r[7].sd[0] <= 0) { set32(c.r[2], 0u - 1u);  goto L_002F357C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F357C; } }
L_002F357C:
    c.r[8].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (t) { goto L_002F3590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F35A0; } }
L_002F3590:
    c.budget -= 2;
    if (c.r[4].sd[0] <= 0) { set32(c.r[2], 0u - 1u);  goto L_002F35A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F35A0; } }
L_002F35A0:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[9].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_002F3770; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);  goto L_002F35D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F35D4; } }
L_002F35D0:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002F35D4:
    c.r[30].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = c.r[8].d[0] << 48;
    c.r[19].d[0] = c.r[6].d[0] << 48;
    c.r[23].d[0] = c.r[7].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 48);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002F3758; } }
L_002F3608:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[30].d[0]) { set32(c.r[16], ld32((c.r[21].w[0] + 32u)));  goto L_002F3680; }
    set32(c.r[2], c.r[19].w[0] + c.r[23].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3638u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F3638u) [[unlikely]] return; }
L_002F3638:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F3664; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F365C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3664; } }
L_002F365C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F3664:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  goto L_002F374C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F391C; } }
L_002F3680:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F369Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F369Cu) [[unlikely]] return; }
L_002F369C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[17].d[0] = 0ull + 0ull;  goto L_002F36C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F36C0; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F36C8; } }
L_002F36C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F36C8:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F36ECu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F36ECu) [[unlikely]] return; }
L_002F36EC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F3718; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F3710; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3718; } }
L_002F3710:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F3718:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_002F3734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F391C; } }
L_002F3734:
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F391C; } }
L_002F3748:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002F374C:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 3;
L_002F3758:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[22].d[0]) { c.r[2].d[0] = c.r[18].d[0] << 48;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3608u | kUnwind; return; } goto L_002F3608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F391C; } }
L_002F3770:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  goto L_002F3780; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F3784; } }
L_002F3780:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002F3784:
    c.r[30].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = c.r[7].d[0] << 48;
    c.r[19].d[0] = c.r[5].d[0] << 48;
    c.r[22].d[0] = c.r[8].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 48);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002F3908; } }
L_002F37B8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[30].d[0]) { set32(c.r[16], ld32((c.r[21].w[0] + 32u)));  goto L_002F3830; }
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F37E8u) [[unlikely]] return; }
L_002F37E8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F3814; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F380C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3814; } }
L_002F380C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F3814:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  goto L_002F38FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F391C; } }
L_002F3830:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F384Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F384Cu) [[unlikely]] return; }
L_002F384C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[17].d[0] = 0ull + 0ull;  goto L_002F3878; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F3870; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3878; } }
L_002F3870:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F3878:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F389Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002F389Cu) [[unlikely]] return; }
L_002F389C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F38C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002F38C0; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F38C8; } }
L_002F38C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002F38C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_002F38E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F391C; } }
L_002F38E4:
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F38F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F391C; } }
L_002F38F8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002F38FC:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 3;
L_002F3908:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[23].d[0]) { c.r[2].d[0] = c.r[18].d[0] << 48;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F37B8u | kUnwind; return; } goto L_002F37B8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F391C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002F3950:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  goto L_002F3968; }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002F396C; } }
L_002F3968:
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_002F396C:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  goto L_002F3984; }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002F3988; } }
L_002F3984:
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_002F3988:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00120360u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 25u, depth); }
L_002F3990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F39B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F3A2C; } }
L_002F39B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39D0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x002F39D0u) [[unlikely]] return; }
L_002F39D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39DCu); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F39DCu) [[unlikely]] return; }
L_002F39DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 1408u), c.r[2].w[0]);  goto L_002F3A00; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39FCu); set32(c.r[6], c.r[6].w[0] + 29480u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002F39FCu) [[unlikely]] return; }
L_002F39FC:
    st32((c.r[17].w[0] + 1408u), c.r[2].w[0]);
    c.budget -= 1;
L_002F3A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F3A2C; } }
L_002F3A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A18u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x002F3A18u) [[unlikely]] return; }
L_002F3A18:
    set32(c.r[4], ld32((c.r[17].w[0] + 1408u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x002F3A28u) [[unlikely]] return; }
L_002F3A28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F3A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F3A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F3ACC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F3A8C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F3A88; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 12u));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 16u)));  goto L_002F3A8C; }
L_002F3A88:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F3A8C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1408u)));  goto L_002F3AA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 13u, depth + 1u); else { c.pc = 0x002A8120u; return; } if (c.pc != 0x002F3A9Cu) [[unlikely]] return; }
L_002F3A9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1408u)));
    c.budget -= 1;
L_002F3AA0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_002F3AC0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3AB8u) [[unlikely]] return; }
L_002F3AB8:
    st32((c.r[16].w[0] + 1408u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 2;
L_002F3AC0:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 3;
L_002F3ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F3AE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 1408u)));  goto L_002F3AF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F3B18; } }
L_002F3AF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F3B18; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002F3B18; } }
L_002F3B18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3B20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F3B60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 644u), 0u);
    c.budget -= 2;
L_002F3B60:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 164u)));  goto L_002F3B78; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 648u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 3;
L_002F3B78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_002F3E30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x002F3B90u) [[unlikely]] return; }
L_002F3B90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3E2C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BACu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002F3BACu) [[unlikely]] return; }
L_002F3BAC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BCCu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002F3BCCu) [[unlikely]] return; }
L_002F3BCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002F3BF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BECu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 372u, depth + 1u); else { c.pc = 0x002A3860u; return; } if (c.pc != 0x002F3BECu) [[unlikely]] return; }
L_002F3BEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002F3BF8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002F3BF8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));  goto L_002F3C20; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C10u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 372u, depth + 1u); else { c.pc = 0x002A3860u; return; } if (c.pc != 0x002F3C10u) [[unlikely]] return; }
L_002F3C10:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002F3C1C; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_002F3C1C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_002F3C20:
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002F3CA4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002F3CA4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 6413ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F3CA4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F3CA4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002F3C6C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F3C6C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002F3C6C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F3CA4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F3CA4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (t) { goto L_002F3C8C; } }
    st32((c.r[5].w[0] + 644u), c.r[4].w[0]);
    c.budget -= 1;
L_002F3C8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_002F3E14; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 648u), c.r[4].w[0]);  if (t) { goto L_002F3E14; } }
L_002F3CA4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_002F3E18; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F3E14; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 664u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F3E2C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1104u)));
    set32(c.r[3], 0u + 1u);
    c.f[20] = 0u;
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002F3D24; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002F3D10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 110u)));  if (t) { goto L_002F3D50; } }
L_002F3CE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F3CF0; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002F3CF0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D08u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x002F3D08u) [[unlikely]] return; }
L_002F3D08:
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_002F3D10:
    c.r[3].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3CE4u | kUnwind; return; } goto L_002F3CE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3D4C; } }
L_002F3D24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F3D30; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002F3D30:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D48u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x002F3D48u) [[unlikely]] return; }
L_002F3D48:
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 1;
L_002F3D4C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 110u)));
    c.budget -= 1;
L_002F3D50:
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3E14; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D88u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002F3D88u) [[unlikely]] return; }
L_002F3D88:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F3E14; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 6413ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F3E14; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3DB8u); set32(c.r[16], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0067(c, 254u, depth + 1u); else { c.pc = 0x002BE680u; return; } if (c.pc != 0x002F3DB8u) [[unlikely]] return; }
L_002F3DB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_002F3DF0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F3E14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F3E14; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_002F3DF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_002F3E00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 644u), c.r[4].w[0]);
    c.budget -= 2;
L_002F3E00:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (t) { goto L_002F3E14; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 648u), c.r[4].w[0]);
    c.budget -= 2;
L_002F3E14:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_002F3E18:
    set32(c.r[3], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F3E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 243u, depth + 1u); else { c.pc = 0x002F3990u; return; } if (c.pc != 0x002F3E2Cu) [[unlikely]] return; }
L_002F3E2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002F3E30:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002F3E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 644u)));
    c.budget -= 10;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002F3F7C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E98u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002F3E98u) [[unlikely]] return; }
L_002F3E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002F3F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 252u, depth + 1u); else { c.pc = 0x002F3AE0u; return; } if (c.pc != 0x002F3EA8u) [[unlikely]] return; }
L_002F3EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3F78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F3F78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F3EE0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002F3EE0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 28u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EFCu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002F3EFCu) [[unlikely]] return; }
L_002F3EFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 343u, depth + 1u); else { c.pc = 0x0028B840u; return; } if (c.pc != 0x002F3F0Cu) [[unlikely]] return; }
L_002F3F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F3F1Cu) [[unlikely]] return; }
L_002F3F1C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], 0u + 24u);  goto L_002F3F30; }
    set32(c.r[6], 0u + 23u);
    c.budget -= 1;
L_002F3F30:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 11000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F4Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x002F3F4Cu) [[unlikely]] return; }
L_002F3F4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F3F78; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F68u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F3F68u) [[unlikely]] return; }
L_002F3F68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F78u); set32(c.r[5], c.r[5].w[0] + 16432u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x002F3F78u) [[unlikely]] return; }
L_002F3F78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002F3F7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F3F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F3FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0075(c, 4u, depth); } }
L_002F3FB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FC8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002F3FC8u) [[unlikely]] return; }
L_002F3FC8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F3FD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0075(c, 4u, depth); } }
L_002F3FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FE0u);  if (depth < kMaxDepth) unit_0074(c, 252u, depth + 1u); else { c.pc = 0x002F3AE0u; return; } if (c.pc != 0x002F3FE0u) [[unlikely]] return; }
L_002F3FE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 164u)));  goto L_002F3FF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0075(c, 4u, depth); } }
L_002F3FF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  [[clang::musttail]] return unit_0075(c, 2u, depth); }
    [[clang::musttail]] return unit_0075(c, 1u, depth);
}

}
