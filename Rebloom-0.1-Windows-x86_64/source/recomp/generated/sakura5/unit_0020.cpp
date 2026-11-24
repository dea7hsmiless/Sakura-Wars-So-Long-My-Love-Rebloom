#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0020[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0,
    0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0,
};

void unit_0020(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A0000;
    case 2u: goto L_001A0044;
    case 3u: goto L_001A004C;
    case 4u: goto L_001A00BC;
    case 5u: goto L_001A00C4;
    case 6u: goto L_001A0104;
    case 7u: goto L_001A0110;
    case 8u: goto L_001A011C;
    case 9u: goto L_001A0150;
    case 10u: goto L_001A0188;
    case 11u: goto L_001A01A0;
    case 12u: goto L_001A0208;
    case 13u: goto L_001A021C;
    case 14u: goto L_001A022C;
    case 15u: goto L_001A0240;
    case 16u: goto L_001A02BC;
    case 17u: goto L_001A02EC;
    case 18u: goto L_001A0364;
    case 19u: goto L_001A03A0;
    case 20u: goto L_001A03F0;
    case 21u: goto L_001A0420;
    case 22u: goto L_001A0440;
    case 23u: goto L_001A0470;
    case 24u: goto L_001A0500;
    case 25u: goto L_001A05A0;
    case 26u: goto L_001A061C;
    case 27u: goto L_001A0680;
    case 28u: goto L_001A06D0;
    case 29u: goto L_001A06F0;
    case 30u: goto L_001A0700;
    case 31u: goto L_001A0718;
    case 32u: goto L_001A0734;
    case 33u: goto L_001A0740;
    case 34u: goto L_001A0754;
    case 35u: goto L_001A0768;
    case 36u: goto L_001A0780;
    case 37u: goto L_001A0790;
    case 38u: goto L_001A080C;
    case 39u: goto L_001A0880;
    case 40u: goto L_001A0900;
    case 41u: goto L_001A0958;
    case 42u: goto L_001A099C;
    case 43u: goto L_001A0A18;
    case 44u: goto L_001A0A34;
    case 45u: goto L_001A0A54;
    case 46u: goto L_001A0AE0;
    case 47u: goto L_001A0B84;
    case 48u: goto L_001A0BA4;
    case 49u: goto L_001A0BC0;
    case 50u: goto L_001A0BCC;
    case 51u: goto L_001A0BD4;
    case 52u: goto L_001A0C44;
    case 53u: goto L_001A0C4C;
    case 54u: goto L_001A0C64;
    case 55u: goto L_001A0C84;
    case 56u: goto L_001A0CD0;
    case 57u: goto L_001A0D20;
    case 58u: goto L_001A0D40;
    case 59u: goto L_001A0D50;
    case 60u: goto L_001A0D68;
    case 61u: goto L_001A0D84;
    case 62u: goto L_001A0D90;
    case 63u: goto L_001A0DA4;
    case 64u: goto L_001A0DB8;
    case 65u: goto L_001A0DD0;
    case 66u: goto L_001A0DE0;
    case 67u: goto L_001A0E54;
    case 68u: goto L_001A0EC8;
    case 69u: goto L_001A0F50;
    case 70u: goto L_001A0F94;
    case 71u: goto L_001A0FDC;
    case 72u: goto L_001A1058;
    case 73u: goto L_001A1078;
    case 74u: goto L_001A1090;
    case 75u: goto L_001A1100;
    case 76u: goto L_001A11AC;
    case 77u: goto L_001A11D8;
    case 78u: goto L_001A11F4;
    case 79u: goto L_001A1254;
    case 80u: goto L_001A1284;
    case 81u: goto L_001A128C;
    case 82u: goto L_001A12E8;
    case 83u: goto L_001A12F0;
    case 84u: goto L_001A12F8;
    case 85u: goto L_001A1318;
    case 86u: goto L_001A1360;
    case 87u: goto L_001A13A8;
    case 88u: goto L_001A13C8;
    case 89u: goto L_001A1424;
    case 90u: goto L_001A1438;
    case 91u: goto L_001A144C;
    case 92u: goto L_001A146C;
    case 93u: goto L_001A1478;
    case 94u: goto L_001A1484;
    case 95u: goto L_001A14C8;
    case 96u: goto L_001A14D8;
    case 97u: goto L_001A14E0;
    case 98u: goto L_001A14EC;
    case 99u: goto L_001A1530;
    case 100u: goto L_001A154C;
    case 101u: goto L_001A1558;
    case 102u: goto L_001A1574;
    case 103u: goto L_001A1588;
    case 104u: goto L_001A1594;
    case 105u: goto L_001A1670;
    case 106u: goto L_001A16B8;
    case 107u: goto L_001A1720;
    case 108u: goto L_001A1774;
    case 109u: goto L_001A17D0;
    case 110u: goto L_001A1804;
    case 111u: goto L_001A1840;
    case 112u: goto L_001A1890;
    case 113u: goto L_001A191C;
    case 114u: goto L_001A1940;
    case 115u: goto L_001A1948;
    case 116u: goto L_001A1950;
    case 117u: goto L_001A1964;
    case 118u: goto L_001A1990;
    case 119u: goto L_001A19D0;
    case 120u: goto L_001A1A30;
    case 121u: goto L_001A1AC8;
    case 122u: goto L_001A1B58;
    case 123u: goto L_001A1BC4;
    case 124u: goto L_001A1BD8;
    case 125u: goto L_001A1C80;
    case 126u: goto L_001A1CAC;
    case 127u: goto L_001A1DD0;
    case 128u: goto L_001A1E10;
    case 129u: goto L_001A1E58;
    case 130u: goto L_001A1E70;
    case 131u: goto L_001A1E80;
    case 132u: goto L_001A1E98;
    case 133u: goto L_001A1EB4;
    case 134u: goto L_001A1EC0;
    case 135u: goto L_001A1ED4;
    case 136u: goto L_001A1EE8;
    case 137u: goto L_001A1F00;
    case 138u: goto L_001A1F10;
    case 139u: goto L_001A1F88;
    case 140u: goto L_001A1F90;
    case 141u: goto L_001A2010;
    case 142u: goto L_001A205C;
    case 143u: goto L_001A20A0;
    case 144u: goto L_001A2118;
    case 145u: goto L_001A2138;
    case 146u: goto L_001A2160;
    case 147u: goto L_001A21C0;
    case 148u: goto L_001A2254;
    case 149u: goto L_001A2264;
    case 150u: goto L_001A22C0;
    case 151u: goto L_001A22EC;
    case 152u: goto L_001A2308;
    case 153u: goto L_001A2314;
    case 154u: goto L_001A231C;
    case 155u: goto L_001A237C;
    case 156u: goto L_001A2388;
    case 157u: goto L_001A2390;
    case 158u: goto L_001A239C;
    case 159u: goto L_001A23B4;
    case 160u: goto L_001A23F4;
    case 161u: goto L_001A2430;
    case 162u: goto L_001A2490;
    case 163u: goto L_001A24B0;
    case 164u: goto L_001A24E0;
    case 165u: goto L_001A24EC;
    case 166u: goto L_001A24F8;
    case 167u: goto L_001A2508;
    case 168u: goto L_001A2520;
    case 169u: goto L_001A2530;
    case 170u: goto L_001A25E0;
    case 171u: goto L_001A2628;
    case 172u: goto L_001A265C;
    case 173u: goto L_001A2670;
    case 174u: goto L_001A2684;
    case 175u: goto L_001A2694;
    case 176u: goto L_001A26D0;
    case 177u: goto L_001A26D8;
    case 178u: goto L_001A26E4;
    case 179u: goto L_001A2700;
    case 180u: goto L_001A27E0;
    case 181u: goto L_001A2828;
    case 182u: goto L_001A2834;
    case 183u: goto L_001A2848;
    case 184u: goto L_001A2850;
    case 185u: goto L_001A285C;
    case 186u: goto L_001A28A4;
    case 187u: goto L_001A28B0;
    case 188u: goto L_001A28CC;
    case 189u: goto L_001A28D8;
    case 190u: goto L_001A28F4;
    case 191u: goto L_001A2908;
    case 192u: goto L_001A2914;
    case 193u: goto L_001A2930;
    case 194u: goto L_001A2940;
    case 195u: goto L_001A29F0;
    case 196u: goto L_001A2A58;
    case 197u: goto L_001A2A6C;
    case 198u: goto L_001A2AB8;
    case 199u: goto L_001A2AD4;
    case 200u: goto L_001A2B14;
    case 201u: goto L_001A2B38;
    case 202u: goto L_001A2B5C;
    case 203u: goto L_001A2BC8;
    case 204u: goto L_001A2C10;
    case 205u: goto L_001A2C9C;
    case 206u: goto L_001A2CBC;
    case 207u: goto L_001A2CD8;
    case 208u: goto L_001A2CE0;
    case 209u: goto L_001A2CF0;
    case 210u: goto L_001A2CF8;
    case 211u: goto L_001A2D10;
    case 212u: goto L_001A2D40;
    case 213u: goto L_001A2D50;
    case 214u: goto L_001A2D60;
    case 215u: goto L_001A2D70;
    case 216u: goto L_001A2D80;
    case 217u: goto L_001A2D90;
    case 218u: goto L_001A2E00;
    case 219u: goto L_001A2E38;
    case 220u: goto L_001A2E40;
    case 221u: goto L_001A2E4C;
    case 222u: goto L_001A2E58;
    case 223u: goto L_001A2E94;
    case 224u: goto L_001A2EE0;
    case 225u: goto L_001A2F54;
    case 226u: goto L_001A2F74;
    case 227u: goto L_001A2F84;
    case 228u: goto L_001A2F90;
    case 229u: goto L_001A2F98;
    case 230u: goto L_001A2FB4;
    case 231u: goto L_001A2FBC;
    case 232u: goto L_001A3060;
    case 233u: goto L_001A30B0;
    case 234u: goto L_001A31C8;
    case 235u: goto L_001A31D8;
    case 236u: goto L_001A31E8;
    case 237u: goto L_001A3234;
    case 238u: goto L_001A3260;
    case 239u: goto L_001A32E4;
    case 240u: goto L_001A32F4;
    case 241u: goto L_001A3304;
    case 242u: goto L_001A3314;
    case 243u: goto L_001A3324;
    case 244u: goto L_001A3358;
    case 245u: goto L_001A3390;
    case 246u: goto L_001A33C8;
    case 247u: goto L_001A3404;
    case 248u: goto L_001A3418;
    case 249u: goto L_001A3438;
    case 250u: goto L_001A3448;
    case 251u: goto L_001A347C;
    case 252u: goto L_001A34A8;
    case 253u: goto L_001A34D8;
    case 254u: goto L_001A3520;
    case 255u: goto L_001A3530;
    case 256u: goto L_001A358C;
    case 257u: goto L_001A35C0;
    case 258u: goto L_001A35E0;
    case 259u: goto L_001A360C;
    case 260u: goto L_001A3630;
    case 261u: goto L_001A365C;
    case 262u: goto L_001A3680;
    case 263u: goto L_001A36AC;
    case 264u: goto L_001A36C4;
    case 265u: goto L_001A36F0;
    case 266u: goto L_001A3700;
    case 267u: goto L_001A371C;
    case 268u: goto L_001A3744;
    case 269u: goto L_001A3768;
    case 270u: goto L_001A37B0;
    case 271u: goto L_001A37E8;
    case 272u: goto L_001A383C;
    case 273u: goto L_001A38A8;
    case 274u: goto L_001A38BC;
    case 275u: goto L_001A38F4;
    case 276u: goto L_001A3910;
    case 277u: goto L_001A3920;
    case 278u: goto L_001A3954;
    case 279u: goto L_001A3980;
    case 280u: goto L_001A39B0;
    case 281u: goto L_001A39F0;
    case 282u: goto L_001A3A2C;
    case 283u: goto L_001A3A40;
    case 284u: goto L_001A3A50;
    case 285u: goto L_001A3A70;
    case 286u: goto L_001A3AA4;
    case 287u: goto L_001A3AD0;
    case 288u: goto L_001A3B00;
    case 289u: goto L_001A3B44;
    case 290u: goto L_001A3B60;
    case 291u: goto L_001A3BC0;
    case 292u: goto L_001A3BD0;
    case 293u: goto L_001A3BE0;
    case 294u: goto L_001A3C78;
    case 295u: goto L_001A3C94;
    case 296u: goto L_001A3CD8;
    case 297u: goto L_001A3D10;
    case 298u: goto L_001A3D88;
    case 299u: goto L_001A3DAC;
    case 300u: goto L_001A3DE0;
    case 301u: goto L_001A3E04;
    case 302u: goto L_001A3E3C;
    case 303u: goto L_001A3ED0;
    case 304u: goto L_001A3EF4;
    case 305u: goto L_001A3F28;
    case 306u: goto L_001A3F4C;
    case 307u: goto L_001A3F84;
    case 308u: goto L_001A3FE8;
    default: bad_entry(c, 0x001A0000u); return;
    }
L_001A0000:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0044u); set32(c.r[4], c.r[4].w[0] - 15120u);  if (depth < kMaxDepth) unit_001D(c, 324u, depth + 1u); else { c.pc = 0x00197310u; return; } if (c.pc != 0x001A0044u) [[unlikely]] return; }
L_001A0044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A004Cu);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A004Cu) [[unlikely]] return; }
L_001A004C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20852u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001A0060; }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_001A0060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.f[0]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[25]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    vu::set_vi(c.vu0, 12u, c.r[3].w[0]);
    c.vu0.vf[27] = c.r[6];
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    vu::sub4<1>(c.vu0, 15u, 24u, 26u, 25u);
    for (int k = 0; k < 4; ++k) if (vu::lane(1u, k)) { const std::uint32_t v = c.vu0.vi[0]; __builtin_memcpy(vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * k, &v, 4); }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + c.vu0.vi[0]);
    sqc2_vu(c, 15u, 4u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 5u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[4].d[0] | 128ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00BCu); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0020(c, 21u, depth + 1u); else { c.pc = 0x001A0420u; return; } if (c.pc != 0x001A00BCu) [[unlikely]] return; }
L_001A00BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00C4u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A00C4u) [[unlikely]] return; }
L_001A00C4:
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[2], c.f[0]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    c.vu0.vf[5] = c.r[2];
    vcallms(c, 32u);
    set32(c.r[2], c.vu0.vi[1]);
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_001A00F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A03BC; } }
L_001A00F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[16].d[0] = c.r[2].d[0] | 3328ull;
    set32(c.r[5], c.r[5].w[0] + 20112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x001A0104u) [[unlikely]] return; }
L_001A0104:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0110u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x001A03F0u; return; } if (c.pc != 0x001A0110u) [[unlikely]] return; }
L_001A0110:
    set32(c.r[19], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_001A0170; } }
L_001A011C:
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.r[4].d[0] = ld32((c.r[20].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  goto L_001A015C; }
    c.r[3].d[0] = ld32((c.r[20].w[0] + 8u));
    c.r[2].d[0] = ld64((c.r[19].w[0] + 8u));
    c.r[4].d[0] = ld32((c.r[20].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A0158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0150u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 24u, depth + 1u); else { c.pc = 0x001A0500u; return; } if (c.pc != 0x001A0150u) [[unlikely]] return; }
L_001A0150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_001A0180; } }
L_001A0158:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_001A015C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0180; } }
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001A0170:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld32((c.r[20].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A011Cu | kUnwind; return; } goto L_001A011C; }
    c.budget -= 1;
L_001A0180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001A0378; } }
L_001A0188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_001A0200; } }
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001A01F0; } }
    c.budget -= 1;
L_001A01A0:
    c.r[3].d[0] = ld32((c.r[20].w[0]));
    c.r[2].d[0] = ld64((c.r[18].w[0]));
    c.r[4].d[0] = ld32((c.r[20].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A01D8; } }
    c.r[3].d[0] = ld32((c.r[20].w[0] + 8u));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[4].d[0] = ld32((c.r[20].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A01D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_001A0200; } }
L_001A01D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0200; } }
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001A01F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A01A0u | kUnwind; return; } goto L_001A01A0; } }
    c.budget -= 1;
L_001A0200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0208u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A0208u) [[unlikely]] return; }
L_001A0208:
    set32(c.r[2], ld32((c.r[28].w[0] - 31000u)));
    vu::set_vi(c.vu0, 13u, c.r[2].w[0]);
    vcallms(c, 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A021Cu);  if (depth < kMaxDepth) unit_0020(c, 22u, depth + 1u); else { c.pc = 0x001A0440u; return; } if (c.pc != 0x001A021Cu) [[unlikely]] return; }
L_001A021C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_001A0230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A022Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 24u, depth + 1u); else { c.pc = 0x001A0500u; return; } if (c.pc != 0x001A022Cu) [[unlikely]] return; }
L_001A022C:
    set32(c.r[30], 0u + 1u);
    c.budget -= 1;
L_001A0230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[17].d[0] = c.r[2].d[0] | 256ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001A0240:
    set32(c.r[16], c.vu0.vi[8]);
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0320; } }
    set32(c.r[22], 0u + 1u);
    lqc2_vu(c, 15u, 1u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 2u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 3u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 4u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 5u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 6u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20868u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0298; } }
    vu::move4(c.vu0, 8u, 27u, 3u);
    c.budget -= 1;
L_001A0298:
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31012u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A02C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 25u, depth + 1u); else { c.pc = 0x001A05A0u; return; } if (c.pc != 0x001A02BCu) [[unlikely]] return; }
L_001A02BC:
    c.budget -= 1;
L_001A02C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 96u);  if (t) { goto L_001A030C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[4].w[0] + 20896u);
    c.r[5].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02ECu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A02ECu) [[unlikely]] return; }
L_001A02EC:
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 3u, 2); vu::set_vi(c.vu0, 1u, v); }
    set32(c.r[3], c.vu0.vi[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 20928u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 20896u);  if (t) { goto L_001A03BC; } }
L_001A030C:
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0320; } }
    vcallms(c, 16u);
    c.budget -= 2;
L_001A0320:
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0240u | kUnwind; return; } goto L_001A0240; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { goto L_001A0368; } }
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A0368; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], c.r[21].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] | 256ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0364u); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A0364u) [[unlikely]] return; }
L_001A0364:
    c.budget -= 1;
L_001A0368:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001A0380; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001A0378:
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0188u | kUnwind; return; } goto L_001A0188; }
L_001A0380:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A03BC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[4].w[0] + 20896u);
    c.r[5].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03A0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A03A0u) [[unlikely]] return; }
L_001A03A0:
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 3u, 2); vu::set_vi(c.vu0, 1u, v); }
    set32(c.r[3], c.vu0.vi[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 20928u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20896u);
    c.budget -= 7;
L_001A03BC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001A03F0:
    set32(c.r[3], c.r[4].w[0] << 2);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[3], c.r[3].w[0] + 192u);
    vu::set_vi(c.vu0, 1u, c.r[3].w[0]);
    sqc2_vu(c, 15u, 4u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 5u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 6u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; sqc2_vu(c, 15u, 7u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);  c.pc = t; return; }
L_001A0420:
    c.r[5].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[6].d[0] ^ c.r[7].d[0];
    st32((c.r[28].w[0] - 30992u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 31004u), c.r[5].w[0]);
    st32((c.r[28].w[0] - 31000u), c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31008u), c.r[3].w[0]);  c.pc = t; return; }
L_001A0440:
    set32(c.r[6], ld32((c.r[28].w[0] - 30992u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 31004u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31000u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 31008u)));
    c.r[5].d[0] = c.r[6].d[0] ^ c.r[5].d[0];
    st32((c.r[28].w[0] - 30992u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31000u), c.r[3].w[0]);  c.pc = t; return; }
L_001A0470:
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[12], ld32((c.r[28].w[0] - 31000u)));
    c.r[10].d[0] = c.r[3].d[0] | 258ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30992u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[11].d[0] = c.r[9].d[0] & 4095ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[8].d[0] = c.r[11].d[0] | c.r[8].d[0];
    set32(c.r[5], c.r[12].w[0] + 1u);
    set32(c.r[9], c.r[11].w[0] << 16);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.r[8].d[0] = c.r[12].d[0] | c.r[9].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x69000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[11].w[0] << 1);
    set32(c.r[6], 0u - 16u);
    set32(c.r[5], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15u);
    st32((c.r[2].w[0] + 8u), c.r[10].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] >> 4);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 35;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30992u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00197390u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 327u, depth); }
L_001A0500:
    set32(c.r[11], ld32((c.r[4].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[8], ld32((c.r[28].w[0] - 31000u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30992u)));
    c.r[10].d[0] = c.r[3].d[0] | 258ull;
    c.r[7].d[0] = c.r[11].d[0] | c.r[7].d[0];
    set32(c.r[9], c.r[11].w[0] << 16);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    set32(c.r[3], c.r[8].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[6], 0u - 16u);
    c.r[7].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[8].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[9].d[0];
    set32(c.r[3], c.r[11].w[0] << 1);
    set32(c.r[9], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], c.r[3].w[0] + c.r[11].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x69000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 15u);
    set32(c.r[7], c.r[9].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    set32(c.r[6], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] >> 4);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 38;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30992u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00197390u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 327u, depth); }
L_001A05A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 15);
    for (int k = 0; k < 4; ++k) if (vu::lane(8u, k)) { const std::uint32_t v = c.vu0.vi[10]; __builtin_memcpy(vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * k, &v, 4); }
    for (int k = 0; k < 4; ++k) if (vu::lane(4u, k)) { const std::uint32_t v = c.vu0.vi[11]; __builtin_memcpy(vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * k, &v, 4); }
    for (int k = 0; k < 4; ++k) if (vu::lane(2u, k)) { const std::uint32_t v = c.vu0.vi[12]; __builtin_memcpy(vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * k, &v, 4); }
    for (int k = 0; k < 4; ++k) if (vu::lane(1u, k)) { const std::uint32_t v = c.vu0.vi[13]; __builtin_memcpy(vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * k, &v, 4); }
    vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1);
    sqc2_vu(c, 15u, 16u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 17u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 18u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 19u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 20u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 21u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 22u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 23u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 24u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 25u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 26u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 27u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 28u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 29u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 30u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 31u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 3u, 2); vu::set_vi(c.vu0, 1u, v); }
    set32(c.r[2], c.vu0.vi[1]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31012u)));
    c.budget -= 31;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A061Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A061Cu) [[unlikely]] return; }
L_001A061C:
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 15);
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 0u, 2); vu::set_vi(c.vu0, 10u, v); }
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 1u, 2); vu::set_vi(c.vu0, 11u, v); }
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 2u, 2); vu::set_vi(c.vu0, 12u, v); }
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 3u, 2); vu::set_vi(c.vu0, 13u, v); }
    vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1);
    lqc2_vu(c, 15u, 16u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 17u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 18u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 19u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 20u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 21u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 22u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 23u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 24u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 25u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 26u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 27u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 28u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 29u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 30u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 31u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A0680:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[30], ld32((c.r[4].w[0])));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_001A08C0; } }
L_001A06D0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A08B8; } }
    set32(c.r[23], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_001A08B0; } }
L_001A06F0:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[22].w[0] + 4u)));  if (t) { goto L_001A0720; } }
    c.budget -= 1;
L_001A0700:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0718u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x001A03F0u; return; } if (c.pc != 0x001A0718u) [[unlikely]] return; }
L_001A0718:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 2;
L_001A0720:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0700u | kUnwind; return; } goto L_001A0700; } }
    set32(c.r[21], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0734u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 23u, depth + 1u); else { c.pc = 0x001A0470u; return; } if (c.pc != 0x001A0734u) [[unlikely]] return; }
L_001A0734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0898; } }
    c.budget -= 1;
L_001A0740:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0754u); set32(c.r[21], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A0754u) [[unlikely]] return; }
L_001A0754:
    set32(c.r[2], ld32((c.r[28].w[0] - 31000u)));
    vu::set_vi(c.vu0, 13u, c.r[2].w[0]);
    vcallms(c, 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0768u);  if (depth < kMaxDepth) unit_0020(c, 22u, depth + 1u); else { c.pc = 0x001A0440u; return; } if (c.pc != 0x001A0768u) [[unlikely]] return; }
L_001A0768:
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0780u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 23u, depth + 1u); else { c.pc = 0x001A0470u; return; } if (c.pc != 0x001A0780u) [[unlikely]] return; }
L_001A0780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[19].d[0] = c.r[2].d[0] | 256ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001A0790:
    set32(c.r[16], c.vu0.vi[8]);
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0838; } }
    set32(c.r[17], 0u + 1u);
    lqc2_vu(c, 15u, 1u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 2u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 3u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 4u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 5u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 6u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    vu::addbc4<1>(c.vu0, 8u, 7u, 0u, c.vu0.vf[3].w[1]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[19].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    st128((c.r[19].w[0] + 80u) & ~15u, c.vu0.vf[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20868u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A07F0; } }
    vu::mul4<1>(c.vu0, 8u, 27u, 7u, 7u);
    c.budget -= 2;
L_001A07F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31012u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A080Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 25u, depth + 1u); else { c.pc = 0x001A05A0u; return; } if (c.pc != 0x001A080Cu) [[unlikely]] return; }
L_001A080C:
    c.budget -= 1;
L_001A0810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 96u);  if (t) { goto L_001A0848; } }
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0838; } }
    vcallms(c, 16u);
    c.budget -= 2;
L_001A0838:
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0790u | kUnwind; return; } goto L_001A0790; } }
    c.budget -= 1;
L_001A0848:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001A0898; } }
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A0880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] | 256ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0880u); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A0880u) [[unlikely]] return; }
L_001A0880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A08CC; } }
L_001A0898:
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0740u | kUnwind; return; } goto L_001A0740; } }
    set32(c.r[22], c.r[22].w[0] + 12u);
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 2;
L_001A08B0:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A06F0u | kUnwind; return; } goto L_001A06F0; } }
L_001A08B8:
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[30], c.r[30].w[0] - 1u);
    c.budget -= 2;
L_001A08C0:
    c.budget -= 2;
    if (c.r[30].sd[0] > 0) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A06D0u | kUnwind; return; } goto L_001A06D0; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A08CC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001A0900:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 192u), c.r[8].w[0]);
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[30], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 22;
    { const bool t = c.r[23].sd[0] <= 0; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_001A0AA0; } }
L_001A0958:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[23], c.r[23].w[0] - 1u);  goto L_001A0A8C; }
    c.r[2].d[0] = ld16((c.r[30].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0A88; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A0A88; } }
    c.f[20] = ld32((c.r[18].w[0] + 56u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A099Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001A099Cu) [[unlikely]] return; }
L_001A099C:
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[3] = ld32((c.r[21].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 16u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[5] = ld32((c.r[21].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001A09E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A09E8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0A88; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0A40; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 68u)));  if (t) { goto L_001A0A40; } }
    c.budget -= 1;
L_001A0A18:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A34u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x001A0A34u) [[unlikely]] return; }
L_001A0A34:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0A18u | kUnwind; return; } goto L_001A0A18; } }
L_001A0A40:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A54u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 27u, depth + 1u); else { c.pc = 0x001A0680u; return; } if (c.pc != 0x001A0A54u) [[unlikely]] return; }
L_001A0A54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0A88; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 300u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_001A0AA4; } }
L_001A0A88:
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 1;
L_001A0A8C:
    set32(c.r[22], c.r[22].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[23].sd[0] > 0; set32(c.r[30], c.r[30].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0958u | kUnwind; return; } goto L_001A0958; } }
    c.budget -= 1;
L_001A0AA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001A0AA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001A0AE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], 0u - 64u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[2].d[0] | 3328ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 13056u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 7);
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 0u);  if (t) { goto L_001A0B6C; } }
    set32(c.r[3], c.r[4].w[0] << 7);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[19], c.r[29].w[0]);
    c.budget -= 6;
L_001A0B6C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00188C60u; return; } if (c.pc != 0x001A0B84u) [[unlikely]] return; }
L_001A0B84:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BA4u); set32(c.r[9], c.r[9].w[0] + 20112u);  if (depth < kMaxDepth) unit_001A(c, 64u, depth + 1u); else { c.pc = 0x00188F60u; return; } if (c.pc != 0x001A0BA4u) [[unlikely]] return; }
L_001A0BA4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0BC0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BC0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00188A30u; return; } if (c.pc != 0x001A0BC0u) [[unlikely]] return; }
L_001A0BC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BCCu); set32(c.r[4], c.r[4].w[0] - 13616u);  if (depth < kMaxDepth) unit_001D(c, 324u, depth + 1u); else { c.pc = 0x00197310u; return; } if (c.pc != 0x001A0BCCu) [[unlikely]] return; }
L_001A0BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BD4u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A0BD4u) [[unlikely]] return; }
L_001A0BD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20852u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0])));  if (t) { goto L_001A0BEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_001A0BF0; } }
L_001A0BEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A0BF0:
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    set32(c.r[6], c.f[0]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[25]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    vu::set_vi(c.vu0, 12u, c.r[2].w[0]);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    c.vu0.vf[27] = c.r[6];
    for (int k = 0; k < 4; ++k) if (vu::lane(1u, k)) { const std::uint32_t v = c.vu0.vi[0]; __builtin_memcpy(vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * k, &v, 4); }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + c.vu0.vi[0]);
    sqc2_vu(c, 15u, 4u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 5u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[4].d[0] | 128ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C44u); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0020(c, 21u, depth + 1u); else { c.pc = 0x001A0420u; return; } if (c.pc != 0x001A0C44u) [[unlikely]] return; }
L_001A0C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C4Cu);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A0C4Cu) [[unlikely]] return; }
L_001A0C4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C64u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 40u, depth + 1u); else { c.pc = 0x001A0900u; return; } if (c.pc != 0x001A0C64u) [[unlikely]] return; }
L_001A0C64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A0CA0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[4].w[0] + 20896u);
    c.r[5].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C84u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A0C84u) [[unlikely]] return; }
L_001A0C84:
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 3u, 2); vu::set_vi(c.vu0, 1u, v); }
    set32(c.r[3], c.vu0.vi[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 20928u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20896u);
    c.budget -= 7;
L_001A0CA0:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001A0CD0:
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
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30944u)));
    set32(c.r[20], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[30], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_001A0F08; } }
L_001A0D20:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A0F00; } }
    set32(c.r[23], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_001A0EF8; } }
L_001A0D40:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[22].w[0] + 4u)));  if (t) { goto L_001A0D70; } }
    c.budget -= 1;
L_001A0D50:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30896u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D68u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x001A03F0u; return; } if (c.pc != 0x001A0D68u) [[unlikely]] return; }
L_001A0D68:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 2;
L_001A0D70:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0D50u | kUnwind; return; } goto L_001A0D50; } }
    set32(c.r[21], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D84u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 23u, depth + 1u); else { c.pc = 0x001A0470u; return; } if (c.pc != 0x001A0D84u) [[unlikely]] return; }
L_001A0D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0EE0; } }
    c.budget -= 1;
L_001A0D90:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DA4u); set32(c.r[21], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A0DA4u) [[unlikely]] return; }
L_001A0DA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 31000u)));
    vu::set_vi(c.vu0, 13u, c.r[2].w[0]);
    vcallms(c, 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DB8u);  if (depth < kMaxDepth) unit_0020(c, 22u, depth + 1u); else { c.pc = 0x001A0440u; return; } if (c.pc != 0x001A0DB8u) [[unlikely]] return; }
L_001A0DB8:
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DD0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 23u, depth + 1u); else { c.pc = 0x001A0470u; return; } if (c.pc != 0x001A0DD0u) [[unlikely]] return; }
L_001A0DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[19].d[0] = c.r[2].d[0] | 256ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001A0DE0:
    set32(c.r[16], c.vu0.vi[8]);
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0E80; } }
    set32(c.r[17], 0u + 1u);
    lqc2_vu(c, 15u, 1u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 2u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 3u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 4u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 5u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 6u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[19].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    st128((c.r[19].w[0] + 80u) & ~15u, c.vu0.vf[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20868u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0E38; } }
    vu::addbc4<1>(c.vu0, 8u, 27u, 0u, c.vu0.vf[3].w[1]);
    c.budget -= 1;
L_001A0E38:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31012u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0E54u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 25u, depth + 1u); else { c.pc = 0x001A05A0u; return; } if (c.pc != 0x001A0E54u) [[unlikely]] return; }
L_001A0E54:
    c.budget -= 1;
L_001A0E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 96u);  if (t) { goto L_001A0E90; } }
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0E80; } }
    vcallms(c, 16u);
    c.budget -= 2;
L_001A0E80:
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0DE0u | kUnwind; return; } goto L_001A0DE0; } }
    c.budget -= 1;
L_001A0E90:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001A0EE0; } }
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A0EC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] | 256ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0EC8u); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A0EC8u) [[unlikely]] return; }
L_001A0EC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A0F14; } }
L_001A0EE0:
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0D90u | kUnwind; return; } goto L_001A0D90; } }
    set32(c.r[22], c.r[22].w[0] + 12u);
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 2;
L_001A0EF8:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0D40u | kUnwind; return; } goto L_001A0D40; } }
L_001A0F00:
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[30], c.r[30].w[0] - 1u);
    c.budget -= 2;
L_001A0F08:
    c.budget -= 2;
    if (c.r[30].sd[0] > 0) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0D20u | kUnwind; return; } goto L_001A0D20; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A0F14:
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
L_001A0F50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30976u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 30896u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 17;
    { const bool t = c.r[19].sd[0] <= 0; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001A10D0; } }
L_001A0F94:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_001A10C0; }
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A10BC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30944u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A10BC; } }
    c.f[20] = ld32((c.r[20].w[0] + 56u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0FDCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001A0FDCu) [[unlikely]] return; }
L_001A0FDC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30960u)));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[5] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001A102C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A102C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A10BC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1088; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 68u)));  if (t) { goto L_001A1088; } }
L_001A1058:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 30896u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30912u)));
    set32(c.r[5], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1078u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x001A1078u) [[unlikely]] return; }
L_001A1078:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1058u | kUnwind; return; } goto L_001A1058; } }
    c.budget -= 1;
L_001A1088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1090u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 56u, depth + 1u); else { c.pc = 0x001A0CD0u; return; } if (c.pc != 0x001A1090u) [[unlikely]] return; }
L_001A1090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A10BC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 300u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_001A10BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001A10D4; } }
L_001A10BC:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_001A10C0:
    set32(c.r[18], c.r[18].w[0] + 64u);
    set32(c.r[20], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[21], c.r[21].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0F94u | kUnwind; return; } goto L_001A0F94; } }
L_001A10D0:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_001A10D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001A1100:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[3].d[0] | 3328ull;
    set32(c.r[5], 0u + 13056u);
    st32((c.r[28].w[0] - 30944u), c.r[6].w[0]);
    set32(c.r[4], 0u - 64u);
    st32((c.r[28].w[0] - 30976u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30928u), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 30988u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 7);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 0u);  if (t) { goto L_001A1188; } }
    set32(c.r[5], c.r[6].w[0] << 7);
    set32(c.r[4], 0u - 16u);
    set32(c.r[5], c.r[5].w[0] + 15u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[4].w[0]);
    set32(c.r[16], c.r[29].w[0]);
    c.budget -= 6;
L_001A1188:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[6].w[0] << 6);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[16].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A11ACu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00188C60u; return; } if (c.pc != 0x001A11ACu) [[unlikely]] return; }
L_001A11AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30976u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[28].w[0] - 30912u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[28].w[0] - 30896u), c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 30988u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A11D8u); set32(c.r[9], c.r[9].w[0] + 20112u);  if (depth < kMaxDepth) unit_001A(c, 64u, depth + 1u); else { c.pc = 0x00188F60u; return; } if (c.pc != 0x001A11D8u) [[unlikely]] return; }
L_001A11D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 30976u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0]));  goto L_001A11F8; }
    set32(c.r[6], ld32((c.r[28].w[0] - 30896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A11F4u); set32(c.r[4], ld32((c.r[28].w[0] - 30912u)));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00188A30u; return; } if (c.pc != 0x001A11F4u) [[unlikely]] return; }
L_001A11F4:
    c.f[2] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_001A11F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[4] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[30].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[30].w[0] + 84u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[30].w[0] + 88u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1254u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x001A1254u) [[unlikely]] return; }
L_001A1254:
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 10816u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], c.r[30].w[0] + 80u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[28].w[0] - 30960u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1284u); st32((c.r[30].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001D(c, 324u, depth + 1u); else { c.pc = 0x00197310u; return; } if (c.pc != 0x001A1284u) [[unlikely]] return; }
L_001A1284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A128Cu);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A128Cu) [[unlikely]] return; }
L_001A128C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30928u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30960u)));
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[26]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[24]);
    vu::mul4<0>(c.vu0, 8u, 1u, 1u, 1u);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    vu::addbc4<1>(c.vu0, 8u, 27u, 0u, c.vu0.vf[26].w[3]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[25]);
    vu::mulbc4<1>(c.vu0, 1u, 24u, 0u, c.vu0.vf[1].w[0]);
    for (int k = 0; k < 4; ++k) if (vu::lane(1u, k)) { const std::uint32_t v = c.vu0.vi[0]; __builtin_memcpy(vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * k, &v, 4); }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + c.vu0.vi[0]);
    sqc2_vu(c, 15u, 4u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 5u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[4].d[0] | 128ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A12E8u); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0020(c, 21u, depth + 1u); else { c.pc = 0x001A0420u; return; } if (c.pc != 0x001A12E8u) [[unlikely]] return; }
L_001A12E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A12F0u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A12F0u) [[unlikely]] return; }
L_001A12F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A12F8u);  if (depth < kMaxDepth) unit_0020(c, 69u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x001A12F8u) [[unlikely]] return; }
L_001A12F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A1334; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[4].w[0] + 20896u);
    c.r[5].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1318u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A1318u) [[unlikely]] return; }
L_001A1318:
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 3u, 2); vu::set_vi(c.vu0, 1u, v); }
    set32(c.r[3], c.vu0.vi[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 20928u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20896u);
    c.budget -= 7;
L_001A1334:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A1360:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A13A8u); st32((c.r[29].w[0] + 204u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0019(c, 25u, depth + 1u); else { c.pc = 0x00184660u; return; } if (c.pc != 0x001A13A8u) [[unlikely]] return; }
L_001A13A8:
    set32(c.r[3], 0u - 128u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 18880u)));
    set32(c.r[21], ld32((c.r[16].w[0])));
    set32(c.r[22], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[21].sd[0] <= 0; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { goto L_001A15F0; } }
L_001A13C8:
    set32(c.r[16], ld32((c.r[22].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1400; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 18880u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 54u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A1400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 18880u), c.r[3].w[0]);  if (t) { goto L_001A1410; } }
L_001A1400:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A1488; } }
L_001A1410:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1424u); st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 301u, depth + 1u); else { c.pc = 0x00187DB0u; return; } if (c.pc != 0x001A1424u) [[unlikely]] return; }
L_001A1424:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001A1458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1438u);  if (depth < kMaxDepth) unit_001A(c, 14u, depth + 1u); else { c.pc = 0x00188430u; return; } if (c.pc != 0x001A1438u) [[unlikely]] return; }
L_001A1438:
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A144Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 5u, depth + 1u); else { c.pc = 0x00188190u; return; } if (c.pc != 0x001A144Cu) [[unlikely]] return; }
L_001A144C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1470; } }
    c.budget -= 1;
L_001A1458:
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A146Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 5u, depth + 1u); else { c.pc = 0x00188190u; return; } if (c.pc != 0x001A146Cu) [[unlikely]] return; }
L_001A146C:
    c.budget -= 1;
L_001A1470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1478u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00187DD0u; return; } if (c.pc != 0x001A1478u) [[unlikely]] return; }
L_001A1478:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1484u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0019(c, 304u, depth + 1u); else { c.pc = 0x00187EA0u; return; } if (c.pc != 0x001A1484u) [[unlikely]] return; }
L_001A1484:
    c.budget -= 1;
L_001A1488:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[6], ld32((c.r[28].w[0] - 30876u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A14C8u); st32((c.r[29].w[0] + 212u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 301u, depth + 1u); else { c.pc = 0x00187DB0u; return; } if (c.pc != 0x001A14C8u) [[unlikely]] return; }
L_001A14C8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A14D8u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0019(c, 306u, depth + 1u); else { c.pc = 0x00187F10u; return; } if (c.pc != 0x001A14D8u) [[unlikely]] return; }
L_001A14D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A14E0u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00187DD0u; return; } if (c.pc != 0x001A14E0u) [[unlikely]] return; }
L_001A14E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A14ECu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0019(c, 304u, depth + 1u); else { c.pc = 0x00187EA0u; return; } if (c.pc != 0x001A14ECu) [[unlikely]] return; }
L_001A14EC:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65520ull;
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st64((c.r[3].w[0] + 8u), 0ull);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 17;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[17], ld32((c.r[22].w[0] + 12u)));  if (t) { goto L_001A15E0; } }
L_001A1530:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_001A1598; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A154Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 301u, depth + 1u); else { c.pc = 0x00187DB0u; return; } if (c.pc != 0x001A154Cu) [[unlikely]] return; }
L_001A154C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_001A1580; } }
    c.budget -= 1;
L_001A1558:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1574u); set32(c.r[7], c.r[30].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 308u, depth + 1u); else { c.pc = 0x00187FF0u; return; } if (c.pc != 0x001A1574u) [[unlikely]] return; }
L_001A1574:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1558u | kUnwind; return; } goto L_001A1558; } }
L_001A1580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1588u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00187DD0u; return; } if (c.pc != 0x001A1588u) [[unlikely]] return; }
L_001A1588:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1594u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0019(c, 304u, depth + 1u); else { c.pc = 0x00187EA0u; return; } if (c.pc != 0x001A1594u) [[unlikely]] return; }
L_001A1594:
    c.budget -= 1;
L_001A1598:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65520ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[17], c.r[17].w[0] + 12u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st64((c.r[3].w[0] + 8u), 0ull);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 17;
    { const bool t = c.r[18].sd[0] > 0; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1530u | kUnwind; return; } goto L_001A1530; } }
    c.budget -= 1;
L_001A15E0:
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] > 0; set32(c.r[22], c.r[22].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A13C8u | kUnwind; return; } goto L_001A13C8; } }
    c.budget -= 1;
L_001A15F0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[4].w[0] + 18880u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[3].d[0] | 65520ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st64((c.r[3].w[0] + 8u), 0ull);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
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
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001A1670:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 31168u)));
    set32(c.r[4], c.r[29].w[0] + 220u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A16B8u); set32(c.r[6], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0019(c, 223u, depth + 1u); else { c.pc = 0x00186FD0u; return; } if (c.pc != 0x001A16B8u) [[unlikely]] return; }
L_001A16B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 16480u);
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30880u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[23], ld32((c.r[6].w[0])));
    set32(c.r[30], ld32((c.r[5].w[0])));
    set32(c.r[21], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 20;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_001A1858; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2660u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2692u)));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 6;
L_001A1720:
    set32(c.r[7], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A1840; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1840; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 18096u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001A1788; } }
    c.budget -= 1;
L_001A1758:
    set32(c.r[6], ld32((c.r[21].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] | 16128ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1774u); set32(c.r[8], c.r[8].w[0] + 17760u);  if (depth < kMaxDepth) unit_0019(c, 295u, depth + 1u); else { c.pc = 0x00187A20u; return; } if (c.pc != 0x001A1774u) [[unlikely]] return; }
L_001A1774:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1840; } }
    c.budget -= 1;
L_001A1788:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 160u)));  goto L_001A1794; }
    set32(c.r[19], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001A1794:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A1840; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A17D0; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001A17D0; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 32u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A17D0u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 86u, depth + 1u); else { c.pc = 0x001A1360u; return; } if (c.pc != 0x001A17D0u) [[unlikely]] return; }
L_001A17D0:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1808; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_001A1808; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 40u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1804u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 86u, depth + 1u); else { c.pc = 0x001A1360u; return; } if (c.pc != 0x001A1804u) [[unlikely]] return; }
L_001A1804:
    c.budget -= 1;
L_001A1808:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1840; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1840; } }
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1840u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 86u, depth + 1u); else { c.pc = 0x001A1360u; return; } if (c.pc != 0x001A1840u) [[unlikely]] return; }
L_001A1840:
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[22], c.r[22].w[0] + 64u);
    set32(c.r[21], c.r[21].w[0] + 96u);
    c.budget -= 5;
    { const bool t = c.r[20].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1720u | kUnwind; return; } goto L_001A1720; } }
    c.budget -= 1;
L_001A1858:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001A1890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 64u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[7], ld32((c.r[4].w[0])));
    st32((c.r[28].w[0] - 30876u), c.r[5].w[0]);
    set32(c.r[4], 0u + 16128u);
    st32((c.r[28].w[0] - 30880u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[16], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 7);
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 0u);  if (t) { goto L_001A1904; } }
    set32(c.r[3], c.r[16].w[0] << 7);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0]);
    c.budget -= 6;
L_001A1904:
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A191Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00188C60u; return; } if (c.pc != 0x001A191Cu) [[unlikely]] return; }
L_001A191C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30880u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1940u); set32(c.r[9], c.r[9].w[0] + 20112u);  if (depth < kMaxDepth) unit_001A(c, 64u, depth + 1u); else { c.pc = 0x00188F60u; return; } if (c.pc != 0x001A1940u) [[unlikely]] return; }
L_001A1940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1948u);  if (depth < kMaxDepth) unit_0019(c, 207u, depth + 1u); else { c.pc = 0x001864B0u; return; } if (c.pc != 0x001A1948u) [[unlikely]] return; }
L_001A1948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1950u);  if (depth < kMaxDepth) unit_001A(c, 88u, depth + 1u); else { c.pc = 0x00189290u; return; } if (c.pc != 0x001A1950u) [[unlikely]] return; }
L_001A1950:
    set32(c.r[2], c.r[16].w[0] << 6);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1964u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 105u, depth + 1u); else { c.pc = 0x001A1670u; return; } if (c.pc != 0x001A1964u) [[unlikely]] return; }
L_001A1964:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A1990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 30864u)));
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A19D0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x001A19D0u) [[unlikely]] return; }
L_001A19D0:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st64((c.r[16].w[0]), 0ull);
    st64((c.r[16].w[0] + 8u), 0ull);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    vu::move4(c.vu0, 4u, 27u, 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A1A30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 13;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 1);  goto L_001A1A7C; }
    c.r[3].d[0] = ld32((c.r[28].w[0] - 30856u));
    set32(c.r[2], 0u + 1u);
    st64((c.r[18].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld32((c.r[28].w[0] - 30860u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001A1C4C; } }
L_001A1A7C:
    set32(c.r[5], 0u - 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[20].w[0] + 2u);
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + 15u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[19], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[21].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[22], 0u + 1u);  goto L_001A1B24; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001A1AF0; } }
    set32(c.r[6], c.r[6].w[0] - 6u);
    c.budget -= 1;
L_001A1AC8:
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[3], c.r[6].w[0] + 15u);
    set32(c.r[2], c.r[20].w[0] + 2u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[19], c.r[3].w[0] >> 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 6u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1AC8u | kUnwind; return; } goto L_001A1AC8; }
    c.budget -= 1;
L_001A1AF0:
    c.budget -= 2;
    if (c.r[20].sd[0] > 0) { set32(c.r[21], c.r[20].w[0] + 2u);  goto L_001A1B24; }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A1C4C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1C4C; } }
L_001A1B24:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[20].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1B78; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001A1B58:
    set32(c.r[2], c.r[3].w[0] + 2u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1B58u | kUnwind; return; } goto L_001A1B58; }
    c.budget -= 1;
L_001A1B78:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], 0u + 2u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[18].w[0]));
    set32(c.r[16], c.r[17].w[0] + 32u);
    st64((c.r[17].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 8u));
    st64((c.r[17].w[0] + 8u), c.r[3].d[0]);
    st32((c.r[17].w[0] + 16u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[21].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A1BC4u) [[unlikely]] return; }
L_001A1BC4:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[21].w[0] << 4);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BD8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A1BD8u) [[unlikely]] return; }
L_001A1BD8:
    set32(c.r[5], c.r[20].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 40u)));  goto L_001A1C08; }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 4);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 5;
L_001A1C08:
    set32(c.r[3], c.r[19].w[0] << 4);
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[18].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.r[3].d[0] = ld32((c.r[28].w[0] - 30856u));
    st64((c.r[18].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld32((c.r[28].w[0] - 30860u));
    st64((c.r[18].w[0] + 8u), c.r[3].d[0]);
    st32((c.r[18].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 17;
L_001A1C4C:
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
L_001A1C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A1CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1CACu);  if (depth < kMaxDepth) unit_0020(c, 120u, depth + 1u); else { c.pc = 0x001A1A30u; return; } if (c.pc != 0x001A1CACu) [[unlikely]] return; }
L_001A1CAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_001A1CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A1DB0; } }
L_001A1CBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_001A1CC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    vu::ftoi4(c.vu0, 15u, 4u, 4u, 15);
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 25u);
    vu::sub4<0>(c.vu0, 15u, 2u, 2u, 25u);
    vu::sub4<1>(c.vu0, 15u, 3u, 3u, 25u);
    c.r[5] = c.vu0.vf[4];
    set32(c.r[4], 0u + 16392u);
    vu::set_vi(c.vu0, 1u, c.r[4].w[0]);
    vu::mfir(c.vu0, 1u, 1u, 1u);
    c.sa = (0u ^ 4u) & 15u;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[4], 0u + 16408u);
    vu::set_vi(c.vu0, 1u, c.r[4].w[0]);
    vu::mfir(c.vu0, 1u, 2u, 1u);
    mmi::qfsrv(c.r[5], c.r[5], c.r[5], c.sa);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[4], 0u + 20484u);
    vu::set_vi(c.vu0, 1u, c.r[4].w[0]);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + c.vu0.vi[1]);
    vu::mfir(c.vu0, 1u, 3u, 1u);
    mmi::qfsrv(c.r[5], c.r[5], c.r[5], c.sa);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    vu::mul4<0>(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc4<0>(c.vu0, 4u, 5u, 5u, c.vu0.vf[5].w[0]);
    vu::addbc4<0>(c.vu0, 4u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::max4(c.vu0, 4u, 27u, 27u, 5u);
    vu::mul4<0>(c.vu0, 14u, 5u, 2u, 2u);
    vu::addbc4<0>(c.vu0, 4u, 5u, 5u, c.vu0.vf[5].w[0]);
    vu::addbc4<0>(c.vu0, 4u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::max4(c.vu0, 4u, 27u, 27u, 5u);
    vu::mul4<0>(c.vu0, 14u, 5u, 3u, 3u);
    vu::addbc4<0>(c.vu0, 4u, 5u, 5u, c.vu0.vf[5].w[0]);
    vu::addbc4<1>(c.vu0, 4u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::max4(c.vu0, 4u, 27u, 27u, 5u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 18u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 3u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 60;
L_001A1DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A1DD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    set32(c.r[30], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[22], ld32((c.r[4].w[0])));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001A1FD0; } }
L_001A1E10:
    set32(c.r[3], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[23].w[0] + 12u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A1FC8; } }
    st32((c.r[28].w[0] - 30860u), c.r[5].w[0]);
    c.r[4].d[0] = ld64((c.r[30].w[0]));
    c.r[3].d[0] = ld32((c.r[28].w[0] - 30856u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A1E50; } }
    c.r[4].d[0] = ld64((c.r[30].w[0] + 8u));
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1E60; } }
    c.budget -= 1;
L_001A1E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E58u);  if (depth < kMaxDepth) unit_0020(c, 120u, depth + 1u); else { c.pc = 0x001A1A30u; return; } if (c.pc != 0x001A1E58u) [[unlikely]] return; }
L_001A1E58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_001A1FDC; }
L_001A1E60:
    set32(c.r[20], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_001A1FC0; } }
    c.budget -= 1;
L_001A1E70:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_001A1EA0; } }
    c.budget -= 1;
L_001A1E80:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30832u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E98u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x001A03F0u; return; } if (c.pc != 0x001A1E98u) [[unlikely]] return; }
L_001A1E98:
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 2;
L_001A1EA0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1E80u | kUnwind; return; } goto L_001A1E80; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1EB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 23u, depth + 1u); else { c.pc = 0x001A0470u; return; } if (c.pc != 0x001A1EB4u) [[unlikely]] return; }
L_001A1EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1FA8; } }
    c.budget -= 1;
L_001A1EC0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1ED4u); set32(c.r[18], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A1ED4u) [[unlikely]] return; }
L_001A1ED4:
    set32(c.r[2], ld32((c.r[28].w[0] - 31000u)));
    vu::set_vi(c.vu0, 13u, c.r[2].w[0]);
    vcallms(c, 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1EE8u);  if (depth < kMaxDepth) unit_0020(c, 22u, depth + 1u); else { c.pc = 0x001A0440u; return; } if (c.pc != 0x001A1EE8u) [[unlikely]] return; }
L_001A1EE8:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1F00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 23u, depth + 1u); else { c.pc = 0x001A0470u; return; } if (c.pc != 0x001A1F00u) [[unlikely]] return; }
L_001A1F00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[17].d[0] = c.r[3].d[0] | 256ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001A1F10:
    set32(c.r[4], c.vu0.vi[8]);
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1F68; } }
    lqc2_vu(c, 15u, 1u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 2u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 3u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 4u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 5u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 6u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[6]);
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 96u);  if (t) { goto L_001A1F68; } }
    vcallms(c, 16u);
    c.budget -= 2;
L_001A1F68:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1F10u | kUnwind; return; } goto L_001A1F10; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001A1FA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] | 256ull;  if (t) { goto L_001A1FA0; } }
L_001A1F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1F90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 125u, depth + 1u); else { c.pc = 0x001A1C80u; return; } if (c.pc != 0x001A1F90u) [[unlikely]] return; }
L_001A1F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1FD8; } }
    set32(c.r[17], c.r[17].w[0] + 96u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 2;
L_001A1FA0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1F88u | kUnwind; return; } goto L_001A1F88; } }
L_001A1FA8:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1EC0u | kUnwind; return; } goto L_001A1EC0; } }
    set32(c.r[19], c.r[19].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 2;
L_001A1FC0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1E70u | kUnwind; return; } goto L_001A1E70; } }
L_001A1FC8:
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.budget -= 2;
L_001A1FD0:
    c.budget -= 2;
    if (c.r[22].sd[0] > 0) { set32(c.r[5], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1E10u | kUnwind; return; } goto L_001A1E10; }
L_001A1FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001A1FDC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001A2010:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30816u)));
    set32(c.r[21], ld32((c.r[28].w[0] - 30832u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[23], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 19;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A2188; } }
L_001A205C:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2170; } }
    c.r[3].d[0] = ld16((c.r[23].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2170; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001A2170; } }
    c.f[20] = ld32((c.r[18].w[0] + 56u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A20A0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001A20A0u) [[unlikely]] return; }
L_001A20A0:
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[5] = ld32((c.r[20].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_001A20EC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A20EC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2170; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2148; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 68u)));  if (t) { goto L_001A2148; } }
L_001A2118:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 30832u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30848u)));
    set32(c.r[5], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2138u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x001A2138u) [[unlikely]] return; }
L_001A2138:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2118u | kUnwind; return; } goto L_001A2118; } }
    c.budget -= 1;
L_001A2148:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2160u); st32((c.r[28].w[0] - 30856u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0020(c, 127u, depth + 1u); else { c.pc = 0x001A1DD0u; return; } if (c.pc != 0x001A2160u) [[unlikely]] return; }
L_001A2160:
    set32(c.r[3], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2188; } }
L_001A2170:
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[21], c.r[21].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] + 96u);
    c.budget -= 5;
    { const bool t = c.r[22].sd[0] > 0; set32(c.r[23], c.r[23].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A205Cu | kUnwind; return; } goto L_001A205C; } }
    c.budget -= 1;
L_001A2188:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001A21C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], 0u - 64u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[2].d[0] = c.r[2].d[0] | 3328ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 13056u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[28].w[0] - 30816u), c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[16], c.r[3].w[0] - 784u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[28].w[0] - 30864u), c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 64u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 544u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[18], c.r[4].w[0] + 736u);
    set32(c.r[17], c.r[4].w[0] + 768u);
    set32(c.r[19], c.r[4].w[0] + 784u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2254u); st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A2254u) [[unlikely]] return; }
L_001A2254:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2264u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001A2264u) [[unlikely]] return; }
L_001A2264:
    set32(c.r[3], ld32((c.r[28].w[0] - 30816u)));
    set32(c.r[2], c.r[16].w[0] >> 7);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_001A22A0; }
    set32(c.r[3], c.r[4].w[0] << 7);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[29].w[0]);  if (t) { goto L_001A22A4; } }
L_001A22A0:
    c.r[16].d[0] = c.r[2].d[0] | 3328ull;
    c.budget -= 1;
L_001A22A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30816u)));
    set32(c.r[3], c.r[4].w[0] << 6);
    set32(c.r[20], c.r[16].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A22C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00188C60u; return; } if (c.pc != 0x001A22C0u) [[unlikely]] return; }
L_001A22C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30816u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[28].w[0] - 30848u), c.r[20].w[0]);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[28].w[0] - 30832u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A22ECu); set32(c.r[9], c.r[9].w[0] + 20112u);  if (depth < kMaxDepth) unit_001A(c, 64u, depth + 1u); else { c.pc = 0x00188F60u; return; } if (c.pc != 0x001A22ECu) [[unlikely]] return; }
L_001A22EC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30816u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2308; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30832u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2308u); set32(c.r[4], ld32((c.r[28].w[0] - 30848u)));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00188A30u; return; } if (c.pc != 0x001A2308u) [[unlikely]] return; }
L_001A2308:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2314u); set32(c.r[4], c.r[4].w[0] - 13616u);  if (depth < kMaxDepth) unit_001D(c, 324u, depth + 1u); else { c.pc = 0x00197310u; return; } if (c.pc != 0x001A2314u) [[unlikely]] return; }
L_001A2314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A231Cu);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A231Cu) [[unlikely]] return; }
L_001A231C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20852u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A2330; }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_001A2330:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    set32(c.r[6], c.f[0]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[25]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    vu::set_vi(c.vu0, 12u, c.r[2].w[0]);
    c.vu0.vf[27] = c.r[6];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + c.vu0.vi[0]);
    sqc2_vu(c, 15u, 4u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 5u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[4].d[0] | 128ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A237Cu); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0020(c, 21u, depth + 1u); else { c.pc = 0x001A0420u; return; } if (c.pc != 0x001A237Cu) [[unlikely]] return; }
L_001A237C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2388u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 118u, depth + 1u); else { c.pc = 0x001A1990u; return; } if (c.pc != 0x001A2388u) [[unlikely]] return; }
L_001A2388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2390u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x001A2390u) [[unlikely]] return; }
L_001A2390:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A239Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 141u, depth + 1u); else { c.pc = 0x001A2010u; return; } if (c.pc != 0x001A239Cu) [[unlikely]] return; }
L_001A239C:
    set32(c.r[16], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 48u)));  goto L_001A23B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23B4u);  if (depth < kMaxDepth) unit_0020(c, 120u, depth + 1u); else { c.pc = 0x001A1A30u; return; } if (c.pc != 0x001A23B4u) [[unlikely]] return; }
L_001A23B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_001A23B8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_001A23D0; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 38912ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
L_001A23D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[3] = c.vu0.vf[27];
    mmi::prot3w(c.r[3], c.r[3]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23F4u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0001(c, 217u, depth + 1u); else { c.pc = 0x00125858u; return; } if (c.pc != 0x001A23F4u) [[unlikely]] return; }
L_001A23F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001A2430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    set32(c.r[5], 0u + 30u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[3], c.r[4].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  goto L_001A246C; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_001A246C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] << 4);  c.pc = t; return; }
L_001A2490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24B0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0018(c, 191u, depth + 1u); else { c.pc = 0x001825D0u; return; } if (c.pc != 0x001A24B0u) [[unlikely]] return; }
L_001A24B0:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[17].w[0] - 2u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u - 16u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A24E0:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[10].sd[0] <= 0; set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_001A25D8; } }
L_001A24EC:
    set32(c.r[9], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  if (t) { goto L_001A25C8; } }
L_001A24F8:
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[14], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] <= 0; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_001A25A0; } }
L_001A2508:
    set32(c.r[13], ld32((c.r[14].w[0] + 8u)));
    c.r[5].d[0] = ld16((c.r[13].w[0]));
    c.r[7].d[0] = c.r[5].d[0] & 4095ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A2590; } }
    c.budget -= 1;
L_001A2520:
    set32(c.r[5], ld32((c.r[13].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[11], c.r[5].w[0] + 12u);  if (t) { goto L_001A2570; } }
    c.budget -= 1;
L_001A2530:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_001A2560; } }
    set32(c.r[6], ld32((c.r[12].w[0])));
    c.r[5].d[0] = c.r[6].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A2560; } }
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[5].d[0] = c.r[5].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A2560; } }
    c.r[5].d[0] = c.r[6].d[0] | 40960ull;
    st32((c.r[12].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_001A2560:
    c.r[12].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[11], c.r[11].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2530u | kUnwind; return; } goto L_001A2530; } }
L_001A2570:
    c.r[5].d[0] = ld16((c.r[13].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[13], c.r[13].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[13].w[0]));
    c.r[7].d[0] = c.r[5].d[0] & 4095ull;
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2520u | kUnwind; return; } goto L_001A2520; } }
L_001A2590:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2508u | kUnwind; return; } goto L_001A2508; } }
    c.budget -= 1;
L_001A25A0:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_001A25B8; } }
    set32(c.r[5], ld32((c.r[12].w[0])));
    c.r[5].d[0] = c.r[5].d[0] | 47104ull;
    st32((c.r[12].w[0]), c.r[5].w[0]);
    c.budget -= 4;
L_001A25B8:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A24F8u | kUnwind; return; } goto L_001A24F8; } }
    c.budget -= 1;
L_001A25C8:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A24ECu | kUnwind; return; } goto L_001A24EC; } }
    c.budget -= 1;
L_001A25D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A25E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 16480u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[5], ld32((c.r[28].w[0] - 31168u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_001A26E4; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001A2620; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001A26E8; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001A2620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2628u);  if (depth < kMaxDepth) unit_0018(c, 185u, depth + 1u); else { c.pc = 0x00182480u; return; } if (c.pc != 0x001A2628u) [[unlikely]] return; }
L_001A2628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[5].d[0] = ld64((c.r[2].w[0] + 19760u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = ld32((c.r[2].w[0] + 17920u));
    set32(c.r[5], 0u + 76u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A265Cu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A265Cu) [[unlikely]] return; }
L_001A265C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 18928u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2670u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A2670u) [[unlikely]] return; }
L_001A2670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = ld32((c.r[2].w[0] + 18012u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2684u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A2684u) [[unlikely]] return; }
L_001A2684:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 70u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2694u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A2694u) [[unlikely]] return; }
L_001A2694:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 17896u);
    set32(c.r[5], 0u + 78u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 19792u));
    c.r[6].d[0] = ld32((c.r[4].w[0]));
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26D0u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A26D0u) [[unlikely]] return; }
L_001A26D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26D8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0018(c, 186u, depth + 1u); else { c.pc = 0x001824A0u; return; } if (c.pc != 0x001A26D8u) [[unlikely]] return; }
L_001A26D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26E4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0018(c, 187u, depth + 1u); else { c.pc = 0x00182500u; return; } if (c.pc != 0x001A26E4u) [[unlikely]] return; }
L_001A26E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001A26E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A2700:
    c.r[10].d[0] = ld16((c.r[6].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[9].d[0] = c.r[9].d[0] | 32768ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[11].d[0] = c.r[10].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] | 258ull;
    set32(c.r[13], c.r[11].w[0] << 16);
    c.r[10].d[0] = c.r[11].d[0] | c.r[7].d[0];
    c.r[12].d[0] = c.r[13].d[0] | c.r[9].d[0];
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[9], c.r[11].w[0] << 1);
    set32(c.r[14], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[10], 0u - 16u);
    set32(c.r[11], c.r[11].w[0] << 1);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x69000000u);
    set32(c.r[11], c.r[11].w[0] + 15u);
    st32((c.r[8].w[0] + 4u), c.r[14].w[0]);
    c.r[9].d[0] = c.r[9].d[0] | 32769ull;
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[11].d[0] = c.r[13].d[0] | c.r[9].d[0];
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[9], c.r[10].w[0] >> 4);
    st32((c.r[8].w[0] + 12u), c.r[12].w[0]);
    c.r[7].d[0] = c.r[9].d[0] | c.r[7].d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x60000000u);
    st32((c.r[8].w[0] + 16u), c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x17000000u);
    set32(c.r[12], ld32((c.r[6].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[8].w[0] + 20u), c.r[12].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st32((c.r[8].w[0] + 24u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 65520ull;
    st32((c.r[8].w[0] + 28u), c.r[11].w[0]);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    st32((c.r[8].w[0] + 32u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 36u), 0u);
    st32((c.r[8].w[0] + 40u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st64((c.r[3].w[0] + 8u), 0ull);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 55;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001A27E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2828u); st32((c.r[29].w[0] + 172u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0019(c, 25u, depth + 1u); else { c.pc = 0x00184660u; return; } if (c.pc != 0x001A2828u) [[unlikely]] return; }
L_001A2828:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2834u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 301u, depth + 1u); else { c.pc = 0x00187DB0u; return; } if (c.pc != 0x001A2834u) [[unlikely]] return; }
L_001A2834:
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2848u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 5u, depth + 1u); else { c.pc = 0x00188190u; return; } if (c.pc != 0x001A2848u) [[unlikely]] return; }
L_001A2848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2850u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00187DD0u; return; } if (c.pc != 0x001A2850u) [[unlikely]] return; }
L_001A2850:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A285Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0019(c, 304u, depth + 1u); else { c.pc = 0x00187EA0u; return; } if (c.pc != 0x001A285Cu) [[unlikely]] return; }
L_001A285C:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[4], c.r[4].w[0] - 10688u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[21].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    st64((c.r[3].w[0] + 8u), 0ull);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[16].w[0])));
    c.budget -= 18;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[23], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001A2980; } }
L_001A28A4:
    set32(c.r[18], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[17], ld32((c.r[23].w[0] + 12u)));  if (t) { goto L_001A2970; } }
L_001A28B0:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_001A2918; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28CCu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 301u, depth + 1u); else { c.pc = 0x00187DB0u; return; } if (c.pc != 0x001A28CCu) [[unlikely]] return; }
L_001A28CC:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_001A2900; } }
    c.budget -= 1;
L_001A28D8:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28F4u); set32(c.r[7], c.r[30].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 308u, depth + 1u); else { c.pc = 0x00187FF0u; return; } if (c.pc != 0x001A28F4u) [[unlikely]] return; }
L_001A28F4:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A28D8u | kUnwind; return; } goto L_001A28D8; } }
L_001A2900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2908u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00187DD0u; return; } if (c.pc != 0x001A2908u) [[unlikely]] return; }
L_001A2908:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2914u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0019(c, 304u, depth + 1u); else { c.pc = 0x00187EA0u; return; } if (c.pc != 0x001A2914u) [[unlikely]] return; }
L_001A2914:
    c.budget -= 1;
L_001A2918:
    set32(c.r[15], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[15].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2960; } }
    c.budget -= 1;
L_001A2930:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2940u); c.r[6].d[0] = c.r[15].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 179u, depth + 1u); else { c.pc = 0x001A2700u; return; } if (c.pc != 0x001A2940u) [[unlikely]] return; }
L_001A2940:
    c.r[3].d[0] = ld16((c.r[15].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[15].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2930u | kUnwind; return; } goto L_001A2930; } }
L_001A2960:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A28B0u | kUnwind; return; } goto L_001A28B0; } }
    c.budget -= 1;
L_001A2970:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] > 0; set32(c.r[23], c.r[23].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A28A4u | kUnwind; return; } goto L_001A28A4; } }
    c.budget -= 1;
L_001A2980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65520ull;
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    st64((c.r[3].w[0] + 8u), 0ull);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
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
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001A29F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 31168u)));
    set32(c.r[4], c.r[8].w[0] << 2);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_001A2BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A58u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 291u, depth + 1u); else { c.pc = 0x00187940u; return; } if (c.pc != 0x001A2A58u) [[unlikely]] return; }
L_001A2A58:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[22].sd[0] <= 0; c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A2BE0; } }
L_001A2A6C:
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2BC8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2BC8; } }
    c.r[3].d[0] = ld16((c.r[23].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2BC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2AE0; } }
    set32(c.r[18], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[17], ld32((c.r[21].w[0] + 68u)));  if (t) { goto L_001A2AE0; } }
L_001A2AB8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2AD4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x001A2AD4u) [[unlikely]] return; }
L_001A2AD4:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2AB8u | kUnwind; return; } goto L_001A2AB8; } }
L_001A2AE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 18096u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001A2BA0; } }
L_001A2AF8:
    set32(c.r[7], ld32((c.r[21].w[0] + 24u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B14u); set32(c.r[8], c.r[8].w[0] + 17760u);  if (depth < kMaxDepth) unit_0019(c, 295u, depth + 1u); else { c.pc = 0x00187A20u; return; } if (c.pc != 0x001A2B14u) [[unlikely]] return; }
L_001A2B14:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A2B90; } }
    set32(c.r[17], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0] + 64u)));  if (t) { goto L_001A2B78; } }
    c.budget -= 1;
L_001A2B38:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[8], c.r[8].w[0] + 17760u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B5Cu); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 295u, depth + 1u); else { c.pc = 0x00187A20u; return; } if (c.pc != 0x001A2B5Cu) [[unlikely]] return; }
L_001A2B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001A2B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 2u);  if (t) { goto L_001A2B90; } }
    c.budget -= 1;
L_001A2B70:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 2;
L_001A2B78:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001A2B90; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2B38u | kUnwind; return; } goto L_001A2B38; } }
    c.budget -= 1;
L_001A2B90:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_001A2BC8; } }
    c.budget -= 1;
L_001A2BA0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[8], ld32((c.r[30].w[0] + 68u)));  goto L_001A2BAC; }
    set32(c.r[8], ld32((c.r[30].w[0] + 36u)));
    c.budget -= 1;
L_001A2BAC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001A2BC8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[21].w[0] + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2BC8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 180u, depth + 1u); else { c.pc = 0x001A27E0u; return; } if (c.pc != 0x001A2BC8u) [[unlikely]] return; }
L_001A2BC8:
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 64u);
    set32(c.r[21], c.r[21].w[0] + 96u);
    c.budget -= 5;
    { const bool t = c.r[22].sd[0] > 0; set32(c.r[23], c.r[23].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2A6Cu | kUnwind; return; } goto L_001A2A6C; } }
    c.budget -= 1;
L_001A2BE0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001A2C10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], 0u - 64u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[2].d[0] | 3328ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 13056u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 7);
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 0u);  if (t) { goto L_001A2C84; } }
    set32(c.r[3], c.r[4].w[0] << 7);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[19], c.r[29].w[0]);
    c.budget -= 6;
L_001A2C84:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00188C60u; return; } if (c.pc != 0x001A2C9Cu) [[unlikely]] return; }
L_001A2C9C:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CBCu); set32(c.r[9], c.r[9].w[0] + 20112u);  if (depth < kMaxDepth) unit_001A(c, 64u, depth + 1u); else { c.pc = 0x00188F60u; return; } if (c.pc != 0x001A2CBCu) [[unlikely]] return; }
L_001A2CBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2CD8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CD8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00188A30u; return; } if (c.pc != 0x001A2CD8u) [[unlikely]] return; }
L_001A2CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CE0u);  if (depth < kMaxDepth) unit_0019(c, 207u, depth + 1u); else { c.pc = 0x001864B0u; return; } if (c.pc != 0x001A2CE0u) [[unlikely]] return; }
L_001A2CE0:
    set32(c.r[4], c.r[30].w[0] + 108u);
    set32(c.r[5], c.r[30].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CF0u); set32(c.r[6], c.r[30].w[0] + 100u);  if (depth < kMaxDepth) unit_0019(c, 223u, depth + 1u); else { c.pc = 0x00186FD0u; return; } if (c.pc != 0x001A2CF0u) [[unlikely]] return; }
L_001A2CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CF8u); set32(c.r[4], ld32((c.r[30].w[0] + 108u)));  if (depth < kMaxDepth) unit_0020(c, 170u, depth + 1u); else { c.pc = 0x001A25E0u; return; } if (c.pc != 0x001A2CF8u) [[unlikely]] return; }
L_001A2CF8:
    set32(c.r[8], ld32((c.r[30].w[0] + 108u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D10u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 195u, depth + 1u); else { c.pc = 0x001A29F0u; return; } if (c.pc != 0x001A2D10u) [[unlikely]] return; }
L_001A2D10:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A2D40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2D60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001A2D90:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A2DF0; } }
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001A2DF0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A2E88; } }
    set32(c.r[30], c.r[21].w[0] >> 6);
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.budget -= 2;
L_001A2E00:
    c.r[6].d[0] = c.r[30].d[0] << 48;
    c.r[7].d[0] = c.r[23].d[0] << 48;
    c.r[9].d[0] = c.r[17].d[0] << 48;
    c.r[10].d[0] = c.r[21].d[0] << 48;
    c.r[11].d[0] = c.r[18].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E38u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 396u, depth + 1u); else { c.pc = 0x00123BA0u; return; } if (c.pc != 0x001A2E38u) [[unlikely]] return; }
L_001A2E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x001A2E40u) [[unlikely]] return; }
L_001A2E40:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 397u, depth + 1u); else { c.pc = 0x00123CE0u; return; } if (c.pc != 0x001A2E4Cu) [[unlikely]] return; }
L_001A2E4C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 378u, depth + 1u); else { c.pc = 0x00123888u; return; } if (c.pc != 0x001A2E58u) [[unlikely]] return; }
L_001A2E58:
    mmi::mult(c, 0, c.r[21].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[20].w[0] - c.r[18].w[0]);
    set32(c.r[2], 0u - 16u);
    c.r[1].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001A2E80; } }
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001A2E80:
    c.budget -= 2;
    if (c.r[18].sd[0] > 0) { c.r[5].d[0] = c.r[22].d[0] << 48;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2E00u | kUnwind; return; } goto L_001A2E00; }
L_001A2E88:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 285u, depth + 1u); else { c.pc = 0x00122278u; return; } if (c.pc != 0x001A2E94u) [[unlikely]] return; }
L_001A2E94:
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001A2EE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = ld8((c.r[5].w[0] + 10u));
    c.r[20].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[19].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[22].d[0] = ld16((c.r[5].w[0] + 54u));
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A2F28; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 24585u);  if (t) { goto L_001A2F5C; } }
L_001A2F28:
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[17].d[0]) { set32(c.r[2], 0u + 10u);  goto L_001A2F3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 24584u);  if (t) { goto L_001A2F5C; } }
L_001A2F3C:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 3u);  goto L_001A2F4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 24814u);  if (t) { goto L_001A2F5C; } }
L_001A2F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F54u); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_001A(c, 300u, depth + 1u); else { c.pc = 0x0018B750u; return; } if (c.pc != 0x001A2F54u) [[unlikely]] return; }
L_001A2F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A302C; } }
L_001A2F5C:
    c.r[2].d[0] = c.r[21].d[0] & 15ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001A2F7C; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F74u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 300u, depth + 1u); else { c.pc = 0x0018B750u; return; } if (c.pc != 0x001A2F74u) [[unlikely]] return; }
L_001A2F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A302C; } }
L_001A2F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F84u);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x001A2F84u) [[unlikely]] return; }
L_001A2F84:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 378u, depth + 1u); else { c.pc = 0x00123888u; return; } if (c.pc != 0x001A2F90u) [[unlikely]] return; }
L_001A2F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F98u);  if (depth < kMaxDepth) unit_0019(c, 229u, depth + 1u); else { c.pc = 0x00187240u; return; } if (c.pc != 0x001A2F98u) [[unlikely]] return; }
L_001A2F98:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2FB4u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 217u, depth + 1u); else { c.pc = 0x001A2D90u; return; } if (c.pc != 0x001A2FB4u) [[unlikely]] return; }
L_001A2FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2FBCu);  if (depth < kMaxDepth) unit_0019(c, 235u, depth + 1u); else { c.pc = 0x001872B0u; return; } if (c.pc != 0x001A2FBCu) [[unlikely]] return; }
L_001A2FBC:
    mmi::mult(c, 0, c.r[20].w[0], c.r[19].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46530000u);
    c.r[3].d[0] = c.r[2].d[0] | 21576ull;
    set32(c.r[8], 0u + 16u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54520000u);
    c.r[7].d[0] = c.r[2].d[0] | 22096ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43460000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[6].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] << 16);
    set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.r[3].d[0] = c.r[3].d[0] | 20293ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[9].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[6], c.r[9].w[0] + 8u);
    st32((c.r[21].w[0] + 12u), 0u);
    st32((c.r[21].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[21].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[21].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 28;
L_001A302C:
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
L_001A3060:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = ld16((c.r[4].w[0] + 4u));  if (t) { goto L_001A3078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_001A3094; } }
L_001A3078:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], 0u + 10u);  goto L_001A308C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_001A3098; } }
L_001A308C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A30A0; }
L_001A3094:
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001A3098:
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 2;
L_001A30A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A30B0:
    set32(c.r[29], c.r[29].w[0] - 608u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 560u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 556u), c.r[8].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 552u), c.r[9].w[0]);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 54u));
    set32(c.r[19], c.r[19].w[0] + 17552u);
    c.r[7].d[0] = ld64((c.r[3].w[0] + 19760u));
    c.r[6].d[0] = ld64((c.r[2].w[0] + 19792u));
    set32(c.r[3], 0u - 32u);
    set32(c.r[2], c.r[4].w[0] + 31u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld16((c.r[5].w[0] + 54u));
    set32(c.r[2], c.r[2].w[0] >> 5);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[7].d[0] & 511ull;
    c.r[5].d[0] = c.r[7].d[0] >> 24;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[7].d[0] >> 16;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[5].d[0] & 63ull;
    c.r[30].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[2], c.r[4].w[0] + 31u);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[29].w[0] + 604u);
    set32(c.r[2], c.r[2].w[0] >> 5);
    c.r[3].d[0] = c.r[6].d[0] & 511ull;
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    c.r[20].d[0] = c.r[3].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = c.r[6].d[0] >> 24;
    set32(c.r[2], c.r[2].w[0] + 17888u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    c.r[21].d[0] = c.r[3].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.f[1] = ld32((c.r[2].w[0] + 17568u));
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 17956u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 70;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31C8u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A31C8u) [[unlikely]] return; }
L_001A31C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31D8u); set32(c.r[5], c.r[5].w[0] + 17924u);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A31D8u) [[unlikely]] return; }
L_001A31D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 588u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31E8u); set32(c.r[5], c.r[5].w[0] + 17928u);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A31E8u) [[unlikely]] return; }
L_001A31E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 17892u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);  goto L_001A3244; }
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[29].w[0] + 588u)));
    set32(c.r[4], c.r[29].w[0] + 600u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.f[3] = ld32((c.r[2].w[0] + 72u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] >> 1);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 588u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3234u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A3234u) [[unlikely]] return; }
L_001A3234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));  if (t) { goto L_001A326C; } }
L_001A3244:
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    set32(c.r[4], c.r[29].w[0] + 600u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3260u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A3260u) [[unlikely]] return; }
L_001A3260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[23] = c.r[2].w[0];
    c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 3;
L_001A326C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001A3280; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001A3298; } }
L_001A3280:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001A3298:
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001A32B0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001A32C8; } }
L_001A32B0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001A32C8:
    c.f[22] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 31168u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A32E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 185u, depth + 1u); else { c.pc = 0x00182480u; return; } if (c.pc != 0x001A32E4u) [[unlikely]] return; }
L_001A32E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A32F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A32F4u) [[unlikely]] return; }
L_001A32F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3304u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3304u) [[unlikely]] return; }
L_001A3304:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 70u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3314u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3314u) [[unlikely]] return; }
L_001A3314:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3324u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3324u) [[unlikely]] return; }
L_001A3324:
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 24;
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3358u); set32(c.r[5], 0u + 78u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3358u) [[unlikely]] return; }
L_001A3358:
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[5], 0u + 76u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[6].d[0] = c.r[3].d[0] << 24;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[3].d[0] = c.r[2].d[0] << 16;
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3390u); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3390u) [[unlikely]] return; }
L_001A3390:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[5], 0u + 64u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A33C8u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A33C8u) [[unlikely]] return; }
L_001A33C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 584u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 588u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | 5ull;
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3404u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3404u) [[unlikely]] return; }
L_001A3404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3418u); c.r[6].d[0] = c.r[2].d[0] | 2ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3418u) [[unlikely]] return; }
L_001A3418:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3438u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3438u) [[unlikely]] return; }
L_001A3438:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3448u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3448u) [[unlikely]] return; }
L_001A3448:
    c.r[19].d[0] = ld8((c.r[17].w[0] + 15u));
    set32(c.r[3], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 604u)));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001A34E8; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[23].d[0] = c.r[2].d[0] << 16;
    c.budget -= 7;
L_001A347C:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[22].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A34A8u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A34A8u) [[unlikely]] return; }
L_001A34A8:
    set32(c.r[3], c.r[20].w[0] + 64u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[5], 0u + 5u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A34D8u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A34D8u) [[unlikely]] return; }
L_001A34D8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A347Cu | kUnwind; return; } goto L_001A347C; } }
L_001A34E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[7].d[0] = c.r[5].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[5], 0u + 76u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[3]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3520u); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3520u) [[unlikely]] return; }
L_001A3520:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3530u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3530u) [[unlikely]] return; }
L_001A3530:
    c.r[2].d[0] = c.r[30].d[0] << 32;
    set32(c.r[5], 0u + 6u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[2].d[0] << 14;
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 20;
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x68000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A358Cu); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A358Cu) [[unlikely]] return; }
L_001A358C:
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001A3614; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 572u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A35C0u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A35C0u) [[unlikely]] return; }
L_001A35C0:
    c.r[3].d[0] = ld32((c.r[29].w[0] + 572u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.r[3].d[0] = c.r[3].d[0] << 4;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A35E0u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A35E0u) [[unlikely]] return; }
L_001A35E0:
    c.r[2].d[0] = 0ull | 32896ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 528u), c.r[2].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A360Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A360Cu) [[unlikely]] return; }
L_001A360C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A36F4; } }
L_001A3614:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001A3664; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3630u); c.r[6].d[0] = c.r[2].d[0] | 2053ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3630u) [[unlikely]] return; }
L_001A3630:
    c.r[2].d[0] = 0ull | 32896ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 528u), c.r[2].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A365Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A365Cu) [[unlikely]] return; }
L_001A365C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A36F0; } }
L_001A3664:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);  goto L_001A36B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3680u); c.r[6].d[0] = c.r[2].d[0] | 2059ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3680u) [[unlikely]] return; }
L_001A3680:
    c.r[2].d[0] = 0ull | 32896ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 528u), c.r[2].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A36ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A36ACu) [[unlikely]] return; }
L_001A36AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A36F0; } }
L_001A36B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A36C4u); c.r[6].d[0] = c.r[2].d[0] | 2ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A36C4u) [[unlikely]] return; }
L_001A36C4:
    c.r[2].d[0] = 0ull | 32896ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 528u), c.r[2].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A36F0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A36F0u) [[unlikely]] return; }
L_001A36F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001A36F4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3700u); set32(c.r[6], 0u + 278u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3700u) [[unlikely]] return; }
L_001A3700:
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 580u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001A3858; } }
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 64u);
    c.budget -= 2;
L_001A371C:
    c.f[1] = ld32((c.r[29].w[0] + 580u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 568u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 580u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3744u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A3744u) [[unlikely]] return; }
L_001A3744:
    set32(c.r[3], c.r[20].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[5], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3768u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3768u) [[unlikely]] return; }
L_001A3768:
    set32(c.r[4], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 604u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[5].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 5u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A37B0u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A37B0u) [[unlikely]] return; }
L_001A37B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 588u)));
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A37E8u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A37E8u) [[unlikely]] return; }
L_001A37E8:
    c.r[7].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 600u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[6], ld32((c.r[29].w[0] + 604u)));
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 568u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[5], 0u + 5u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[7].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A383Cu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A383Cu) [[unlikely]] return; }
L_001A383C:
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[22], ld32((c.r[29].w[0] + 568u)));
    set32(c.r[20], c.r[20].w[0] + 64u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A371Cu | kUnwind; return; } goto L_001A371C; } }
L_001A3858:
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A39C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    set32(c.r[4], c.r[29].w[0] + 572u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A38A8u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A38A8u) [[unlikely]] return; }
L_001A38A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A38BCu); c.r[6].d[0] = c.r[2].d[0] | 2ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A38BCu) [[unlikely]] return; }
L_001A38BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = ld32((c.r[29].w[0] + 572u));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[6].d[0] = c.r[7].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 8;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A38F4u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A38F4u) [[unlikely]] return; }
L_001A38F4:
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], 0u + 161u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 66u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3910u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3910u) [[unlikely]] return; }
L_001A3910:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3920u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3920u) [[unlikely]] return; }
L_001A3920:
    c.r[19].d[0] = ld8((c.r[17].w[0] + 15u));
    set32(c.r[3], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 604u)));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001A39C0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[23].d[0] = c.r[2].d[0] << 16;
    c.budget -= 7;
L_001A3954:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[22].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3980u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3980u) [[unlikely]] return; }
L_001A3980:
    set32(c.r[3], c.r[20].w[0] + 64u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[5], 0u + 5u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39B0u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A39B0u) [[unlikely]] return; }
L_001A39B0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3954u | kUnwind; return; } goto L_001A3954; } }
L_001A39C0:
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 76u);
    c.r[19].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 15u));
    c.r[19].d[0] = c.r[19].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39F0u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A39F0u) [[unlikely]] return; }
L_001A39F0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 14;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] | 5ull;
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A2Cu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3A2Cu) [[unlikely]] return; }
L_001A3A2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A40u); c.r[6].d[0] = c.r[2].d[0] | 2ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3A40u) [[unlikely]] return; }
L_001A3A40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A50u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3A50u) [[unlikely]] return; }
L_001A3A50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A70u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3A70u) [[unlikely]] return; }
L_001A3A70:
    c.r[22].d[0] = ld8((c.r[16].w[0] + 15u));
    set32(c.r[3], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 604u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001A3B10; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[23].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[30].d[0] = c.r[2].d[0] << 16;
    c.budget -= 7;
L_001A3AA4:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[23].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3AD0u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3AD0u) [[unlikely]] return; }
L_001A3AD0:
    set32(c.r[3], c.r[20].w[0] + 64u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[5], 0u + 5u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[30].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B00u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3B00u) [[unlikely]] return; }
L_001A3B00:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3AA4u | kUnwind; return; } goto L_001A3AA4; } }
L_001A3B10:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 15u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[6].d[0] = c.r[5].d[0] << 24;
    c.r[3].d[0] = c.r[19].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 76u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B44u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3B44u) [[unlikely]] return; }
L_001A3B44:
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], 0u + 104u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 66u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B60u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3B60u) [[unlikely]] return; }
L_001A3B60:
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 15u));
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[3].d[0] << 20;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[6].d[0] = c.r[5].d[0] << 14;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 14u));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 26;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[5], 0u + 6u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BC0u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3BC0u) [[unlikely]] return; }
L_001A3BC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3BD0u) [[unlikely]] return; }
L_001A3BD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BE0u); set32(c.r[6], 0u + 342u);  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3BE0u) [[unlikely]] return; }
L_001A3BE0:
    st32((c.r[29].w[0] + 596u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001A3BFC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001A3C14; } }
L_001A3BFC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001A3C14:
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], ld32((c.r[29].w[0] + 588u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_001A3C34; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001A3C50; } }
L_001A3C34:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_001A3C50:
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[21]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A3FC0; } }
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    c.budget -= 1;
L_001A3C78:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[23]);
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C94u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 77u, depth + 1u); else { c.pc = 0x001850B0u; return; } if (c.pc != 0x001A3C94u) [[unlikely]] return; }
L_001A3C94:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 572u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CD8u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x001A3CD8u) [[unlikely]] return; }
L_001A3CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = ld32((c.r[29].w[0] + 572u));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[6].d[0] = c.r[7].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 8;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D10u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3D10u) [[unlikely]] return; }
L_001A3D10:
    c.r[30].d[0] = ld8((c.r[16].w[0] + 15u));
    set32(c.r[6], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 596u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 604u)));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 8;
    { const bool t = c.r[30].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001A3E58; } }
    set32(c.r[2], c.r[3].w[0] << 4);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[19], 0u + 64u);
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[2].d[0] = c.r[5].d[0] << 16;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.budget -= 22;
L_001A3D88:
    set32(c.r[2], c.r[23].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[5], 0u + 3u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3DACu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3DACu) [[unlikely]] return; }
L_001A3DAC:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[22].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[3]);
    set32(c.r[5], 0u + 5u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3DE0u); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3DE0u) [[unlikely]] return; }
L_001A3DE0:
    set32(c.r[2], c.r[19].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[5], 0u + 3u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3E04u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3E04u) [[unlikely]] return; }
L_001A3E04:
    set32(c.r[3], c.r[20].w[0] + 64u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 5u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], c.r[22].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[3]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3E3Cu); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3E3Cu) [[unlikely]] return; }
L_001A3E3C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] + 64u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 64u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3D88u | kUnwind; return; } goto L_001A3D88; } }
    c.budget -= 1;
L_001A3E58:
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    c.r[23].d[0] = ld8((c.r[16].w[0] + 15u));
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[22], ld32((c.r[29].w[0] + 596u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 604u)));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 9;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[6], 0u - c.r[2].w[0]);  if (t) { goto L_001A3FA0; } }
    set32(c.r[2], c.r[3].w[0] << 4);
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[19], 0u + 64u);
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[2].d[0] = c.r[5].d[0] << 16;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.budget -= 21;
L_001A3ED0:
    set32(c.r[2], c.r[30].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[5], 0u + 3u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3EF4u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3EF4u) [[unlikely]] return; }
L_001A3EF4:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[22].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[3]);
    set32(c.r[5], 0u + 5u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F28u); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3F28u) [[unlikely]] return; }
L_001A3F28:
    set32(c.r[2], c.r[19].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[5], 0u + 3u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F4Cu); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3F4Cu) [[unlikely]] return; }
L_001A3F4C:
    set32(c.r[3], c.r[20].w[0] + 64u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 5u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], c.r[22].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[3]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F84u); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3F84u) [[unlikely]] return; }
L_001A3F84:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[30], c.r[30].w[0] + 64u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 64u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3ED0u | kUnwind; return; } goto L_001A3ED0; } }
    c.budget -= 1;
L_001A3FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[21]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3C78u | kUnwind; return; } goto L_001A3C78; }
    c.budget -= 1;
L_001A3FC0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 76u);
    c.r[6].d[0] = c.r[3].d[0] << 24;
    c.r[3].d[0] = c.r[2].d[0] << 16;
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3FE8u); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 188u, depth + 1u); else { c.pc = 0x00182560u; return; } if (c.pc != 0x001A3FE8u) [[unlikely]] return; }
L_001A3FE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    [[clang::musttail]] return unit_0021(c, 1u, depth);
}

}
