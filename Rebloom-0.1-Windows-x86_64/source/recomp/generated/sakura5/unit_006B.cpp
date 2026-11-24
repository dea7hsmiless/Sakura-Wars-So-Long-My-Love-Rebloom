#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006B[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0,
    28, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331,
    0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
};

void unit_006B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002CC000;
    case 2u: goto L_002CC010;
    case 3u: goto L_002CC020;
    case 4u: goto L_002CC080;
    case 5u: goto L_002CC090;
    case 6u: goto L_002CC0F0;
    case 7u: goto L_002CC130;
    case 8u: goto L_002CC140;
    case 9u: goto L_002CC154;
    case 10u: goto L_002CC1B4;
    case 11u: goto L_002CC1D0;
    case 12u: goto L_002CC1EC;
    case 13u: goto L_002CC210;
    case 14u: goto L_002CC294;
    case 15u: goto L_002CC300;
    case 16u: goto L_002CC348;
    case 17u: goto L_002CC364;
    case 18u: goto L_002CC380;
    case 19u: goto L_002CC430;
    case 20u: goto L_002CC4C4;
    case 21u: goto L_002CC524;
    case 22u: goto L_002CC534;
    case 23u: goto L_002CC544;
    case 24u: goto L_002CC54C;
    case 25u: goto L_002CC554;
    case 26u: goto L_002CC568;
    case 27u: goto L_002CC574;
    case 28u: goto L_002CC580;
    case 29u: goto L_002CC58C;
    case 30u: goto L_002CC594;
    case 31u: goto L_002CC59C;
    case 32u: goto L_002CC5A4;
    case 33u: goto L_002CC5B4;
    case 34u: goto L_002CC5BC;
    case 35u: goto L_002CC5CC;
    case 36u: goto L_002CC5D8;
    case 37u: goto L_002CC5F0;
    case 38u: goto L_002CC634;
    case 39u: goto L_002CC640;
    case 40u: goto L_002CC684;
    case 41u: goto L_002CC690;
    case 42u: goto L_002CC6AC;
    case 43u: goto L_002CC6BC;
    case 44u: goto L_002CC700;
    case 45u: goto L_002CC720;
    case 46u: goto L_002CC728;
    case 47u: goto L_002CC7A0;
    case 48u: goto L_002CC958;
    case 49u: goto L_002CC99C;
    case 50u: goto L_002CC9A4;
    case 51u: goto L_002CC9AC;
    case 52u: goto L_002CC9B4;
    case 53u: goto L_002CC9C8;
    case 54u: goto L_002CC9E0;
    case 55u: goto L_002CC9F8;
    case 56u: goto L_002CCA0C;
    case 57u: goto L_002CCA28;
    case 58u: goto L_002CCA44;
    case 59u: goto L_002CCA54;
    case 60u: goto L_002CCA60;
    case 61u: goto L_002CCA80;
    case 62u: goto L_002CCAD0;
    case 63u: goto L_002CCB10;
    case 64u: goto L_002CCB70;
    case 65u: goto L_002CCBB0;
    case 66u: goto L_002CCC08;
    case 67u: goto L_002CCC28;
    case 68u: goto L_002CCD50;
    case 69u: goto L_002CCD9C;
    case 70u: goto L_002CCDE4;
    case 71u: goto L_002CCE48;
    case 72u: goto L_002CCE88;
    case 73u: goto L_002CCEC8;
    case 74u: goto L_002CCF00;
    case 75u: goto L_002CCF48;
    case 76u: goto L_002CCF68;
    case 77u: goto L_002CCF88;
    case 78u: goto L_002CCFA0;
    case 79u: goto L_002CCFB0;
    case 80u: goto L_002CCFD0;
    case 81u: goto L_002CCFE4;
    case 82u: goto L_002CCFF4;
    case 83u: goto L_002CD014;
    case 84u: goto L_002CD02C;
    case 85u: goto L_002CD03C;
    case 86u: goto L_002CD064;
    case 87u: goto L_002CD0B4;
    case 88u: goto L_002CD0D4;
    case 89u: goto L_002CD0F8;
    case 90u: goto L_002CD138;
    case 91u: goto L_002CD170;
    case 92u: goto L_002CD1A4;
    case 93u: goto L_002CD1F0;
    case 94u: goto L_002CD254;
    case 95u: goto L_002CD3C0;
    case 96u: goto L_002CD480;
    case 97u: goto L_002CD490;
    case 98u: goto L_002CD4D4;
    case 99u: goto L_002CD4E8;
    case 100u: goto L_002CD534;
    case 101u: goto L_002CD574;
    case 102u: goto L_002CD59C;
    case 103u: goto L_002CD5BC;
    case 104u: goto L_002CD5DC;
    case 105u: goto L_002CD624;
    case 106u: goto L_002CD648;
    case 107u: goto L_002CD6B0;
    case 108u: goto L_002CD6F0;
    case 109u: goto L_002CD710;
    case 110u: goto L_002CD720;
    case 111u: goto L_002CD730;
    case 112u: goto L_002CD750;
    case 113u: goto L_002CD774;
    case 114u: goto L_002CD7A8;
    case 115u: goto L_002CD7C0;
    case 116u: goto L_002CD828;
    case 117u: goto L_002CD850;
    case 118u: goto L_002CD8E0;
    case 119u: goto L_002CD924;
    case 120u: goto L_002CD960;
    case 121u: goto L_002CDA14;
    case 122u: goto L_002CDA30;
    case 123u: goto L_002CDA48;
    case 124u: goto L_002CDA64;
    case 125u: goto L_002CDAB8;
    case 126u: goto L_002CDAF8;
    case 127u: goto L_002CDB38;
    case 128u: goto L_002CDB7C;
    case 129u: goto L_002CDBC0;
    case 130u: goto L_002CDBFC;
    case 131u: goto L_002CDC14;
    case 132u: goto L_002CDC30;
    case 133u: goto L_002CDC40;
    case 134u: goto L_002CDC50;
    case 135u: goto L_002CDD38;
    case 136u: goto L_002CDD48;
    case 137u: goto L_002CDD58;
    case 138u: goto L_002CDD68;
    case 139u: goto L_002CDD94;
    case 140u: goto L_002CDDA4;
    case 141u: goto L_002CDDB4;
    case 142u: goto L_002CDDC4;
    case 143u: goto L_002CDDE0;
    case 144u: goto L_002CDDF0;
    case 145u: goto L_002CDE00;
    case 146u: goto L_002CDE10;
    case 147u: goto L_002CDE20;
    case 148u: goto L_002CDE30;
    case 149u: goto L_002CDE40;
    case 150u: goto L_002CDE74;
    case 151u: goto L_002CDEAC;
    case 152u: goto L_002CDEC0;
    case 153u: goto L_002CDEFC;
    case 154u: goto L_002CDF0C;
    case 155u: goto L_002CDF18;
    case 156u: goto L_002CDF30;
    case 157u: goto L_002CDF40;
    case 158u: goto L_002CDF74;
    case 159u: goto L_002CDFC0;
    case 160u: goto L_002CE004;
    case 161u: goto L_002CE02C;
    case 162u: goto L_002CE040;
    case 163u: goto L_002CE084;
    case 164u: goto L_002CE0EC;
    case 165u: goto L_002CE104;
    case 166u: goto L_002CE1DC;
    case 167u: goto L_002CE1EC;
    case 168u: goto L_002CE2EC;
    case 169u: goto L_002CE2FC;
    case 170u: goto L_002CE3EC;
    case 171u: goto L_002CE49C;
    case 172u: goto L_002CE4AC;
    case 173u: goto L_002CE4DC;
    case 174u: goto L_002CE534;
    case 175u: goto L_002CE54C;
    case 176u: goto L_002CE590;
    case 177u: goto L_002CE5A8;
    case 178u: goto L_002CE5B8;
    case 179u: goto L_002CE5D0;
    case 180u: goto L_002CE5E4;
    case 181u: goto L_002CE5F4;
    case 182u: goto L_002CE624;
    case 183u: goto L_002CE67C;
    case 184u: goto L_002CE6BC;
    case 185u: goto L_002CE6E4;
    case 186u: goto L_002CE6FC;
    case 187u: goto L_002CE718;
    case 188u: goto L_002CE730;
    case 189u: goto L_002CE748;
    case 190u: goto L_002CE760;
    case 191u: goto L_002CE77C;
    case 192u: goto L_002CE790;
    case 193u: goto L_002CE7A0;
    case 194u: goto L_002CE7D0;
    case 195u: goto L_002CE810;
    case 196u: goto L_002CE840;
    case 197u: goto L_002CE870;
    case 198u: goto L_002CE89C;
    case 199u: goto L_002CE8B0;
    case 200u: goto L_002CE8D0;
    case 201u: goto L_002CE8E4;
    case 202u: goto L_002CE8F0;
    case 203u: goto L_002CE91C;
    case 204u: goto L_002CE954;
    case 205u: goto L_002CE960;
    case 206u: goto L_002CE990;
    case 207u: goto L_002CE99C;
    case 208u: goto L_002CE9AC;
    case 209u: goto L_002CE9B4;
    case 210u: goto L_002CE9C4;
    case 211u: goto L_002CE9D8;
    case 212u: goto L_002CE9E8;
    case 213u: goto L_002CE9F8;
    case 214u: goto L_002CEA14;
    case 215u: goto L_002CEA28;
    case 216u: goto L_002CEA34;
    case 217u: goto L_002CEA6C;
    case 218u: goto L_002CEA90;
    case 219u: goto L_002CEAA0;
    case 220u: goto L_002CEAB8;
    case 221u: goto L_002CEAD0;
    case 222u: goto L_002CEAE4;
    case 223u: goto L_002CEB00;
    case 224u: goto L_002CEB14;
    case 225u: goto L_002CEB4C;
    case 226u: goto L_002CEB68;
    case 227u: goto L_002CEB80;
    case 228u: goto L_002CEBB0;
    case 229u: goto L_002CEBF4;
    case 230u: goto L_002CEC10;
    case 231u: goto L_002CEC30;
    case 232u: goto L_002CEC40;
    case 233u: goto L_002CEC68;
    case 234u: goto L_002CEC80;
    case 235u: goto L_002CECB0;
    case 236u: goto L_002CECDC;
    case 237u: goto L_002CECE4;
    case 238u: goto L_002CED14;
    case 239u: goto L_002CED2C;
    case 240u: goto L_002CED40;
    case 241u: goto L_002CED80;
    case 242u: goto L_002CED8C;
    case 243u: goto L_002CED98;
    case 244u: goto L_002CEDB0;
    case 245u: goto L_002CEDD0;
    case 246u: goto L_002CEDE0;
    case 247u: goto L_002CEDF0;
    case 248u: goto L_002CEE00;
    case 249u: goto L_002CEE10;
    case 250u: goto L_002CEE24;
    case 251u: goto L_002CEE84;
    case 252u: goto L_002CEE90;
    case 253u: goto L_002CEE98;
    case 254u: goto L_002CEEAC;
    case 255u: goto L_002CEEC0;
    case 256u: goto L_002CEED0;
    case 257u: goto L_002CEEE0;
    case 258u: goto L_002CEEF4;
    case 259u: goto L_002CEF4C;
    case 260u: goto L_002CEF5C;
    case 261u: goto L_002CEFAC;
    case 262u: goto L_002CEFF4;
    case 263u: goto L_002CF010;
    case 264u: goto L_002CF024;
    case 265u: goto L_002CF040;
    case 266u: goto L_002CF09C;
    case 267u: goto L_002CF0A8;
    case 268u: goto L_002CF0C0;
    case 269u: goto L_002CF0E0;
    case 270u: goto L_002CF0F0;
    case 271u: goto L_002CF13C;
    case 272u: goto L_002CF144;
    case 273u: goto L_002CF164;
    case 274u: goto L_002CF16C;
    case 275u: goto L_002CF174;
    case 276u: goto L_002CF194;
    case 277u: goto L_002CF19C;
    case 278u: goto L_002CF1A4;
    case 279u: goto L_002CF1C4;
    case 280u: goto L_002CF1CC;
    case 281u: goto L_002CF1D4;
    case 282u: goto L_002CF1F4;
    case 283u: goto L_002CF1FC;
    case 284u: goto L_002CF204;
    case 285u: goto L_002CF224;
    case 286u: goto L_002CF22C;
    case 287u: goto L_002CF234;
    case 288u: goto L_002CF254;
    case 289u: goto L_002CF25C;
    case 290u: goto L_002CF264;
    case 291u: goto L_002CF284;
    case 292u: goto L_002CF28C;
    case 293u: goto L_002CF294;
    case 294u: goto L_002CF2B4;
    case 295u: goto L_002CF2BC;
    case 296u: goto L_002CF2C4;
    case 297u: goto L_002CF2E4;
    case 298u: goto L_002CF2EC;
    case 299u: goto L_002CF2F4;
    case 300u: goto L_002CF314;
    case 301u: goto L_002CF31C;
    case 302u: goto L_002CF324;
    case 303u: goto L_002CF344;
    case 304u: goto L_002CF34C;
    case 305u: goto L_002CF354;
    case 306u: goto L_002CF374;
    case 307u: goto L_002CF37C;
    case 308u: goto L_002CF384;
    case 309u: goto L_002CF3A4;
    case 310u: goto L_002CF3AC;
    case 311u: goto L_002CF3B4;
    case 312u: goto L_002CF3D4;
    case 313u: goto L_002CF3DC;
    case 314u: goto L_002CF3E4;
    case 315u: goto L_002CF404;
    case 316u: goto L_002CF40C;
    case 317u: goto L_002CF414;
    case 318u: goto L_002CF434;
    case 319u: goto L_002CF43C;
    case 320u: goto L_002CF444;
    case 321u: goto L_002CF464;
    case 322u: goto L_002CF46C;
    case 323u: goto L_002CF474;
    case 324u: goto L_002CF494;
    case 325u: goto L_002CF49C;
    case 326u: goto L_002CF4A4;
    case 327u: goto L_002CF4C4;
    case 328u: goto L_002CF4CC;
    case 329u: goto L_002CF4D4;
    case 330u: goto L_002CF4F4;
    case 331u: goto L_002CF4FC;
    case 332u: goto L_002CF504;
    case 333u: goto L_002CF524;
    case 334u: goto L_002CF52C;
    case 335u: goto L_002CF534;
    case 336u: goto L_002CF554;
    case 337u: goto L_002CF55C;
    case 338u: goto L_002CF564;
    case 339u: goto L_002CF584;
    case 340u: goto L_002CF58C;
    case 341u: goto L_002CF594;
    case 342u: goto L_002CF5B4;
    case 343u: goto L_002CF5BC;
    case 344u: goto L_002CF5C4;
    case 345u: goto L_002CF5E4;
    case 346u: goto L_002CF5EC;
    case 347u: goto L_002CF5F4;
    case 348u: goto L_002CF614;
    case 349u: goto L_002CF61C;
    case 350u: goto L_002CF624;
    case 351u: goto L_002CF644;
    case 352u: goto L_002CF64C;
    case 353u: goto L_002CF65C;
    case 354u: goto L_002CF680;
    case 355u: goto L_002CF710;
    case 356u: goto L_002CF740;
    case 357u: goto L_002CF75C;
    case 358u: goto L_002CF79C;
    case 359u: goto L_002CF7A4;
    case 360u: goto L_002CF7B0;
    case 361u: goto L_002CF7D8;
    case 362u: goto L_002CF80C;
    case 363u: goto L_002CF848;
    case 364u: goto L_002CF8C4;
    case 365u: goto L_002CF8D8;
    case 366u: goto L_002CF90C;
    case 367u: goto L_002CF920;
    case 368u: goto L_002CF948;
    case 369u: goto L_002CF9A0;
    case 370u: goto L_002CF9D0;
    case 371u: goto L_002CF9FC;
    case 372u: goto L_002CFA08;
    case 373u: goto L_002CFA30;
    case 374u: goto L_002CFA70;
    case 375u: goto L_002CFAB8;
    case 376u: goto L_002CFAFC;
    case 377u: goto L_002CFB28;
    case 378u: goto L_002CFB34;
    case 379u: goto L_002CFB5C;
    case 380u: goto L_002CFB94;
    case 381u: goto L_002CFBD4;
    case 382u: goto L_002CFC00;
    case 383u: goto L_002CFC0C;
    case 384u: goto L_002CFC8C;
    case 385u: goto L_002CFCC0;
    case 386u: goto L_002CFCE0;
    case 387u: goto L_002CFCF0;
    case 388u: goto L_002CFD00;
    case 389u: goto L_002CFD0C;
    case 390u: goto L_002CFD14;
    case 391u: goto L_002CFD3C;
    case 392u: goto L_002CFD8C;
    case 393u: goto L_002CFDBC;
    case 394u: goto L_002CFDE8;
    case 395u: goto L_002CFDF8;
    case 396u: goto L_002CFE40;
    case 397u: goto L_002CFE4C;
    case 398u: goto L_002CFE74;
    case 399u: goto L_002CFE98;
    case 400u: goto L_002CFEE0;
    case 401u: goto L_002CFEF4;
    case 402u: goto L_002CFF58;
    case 403u: goto L_002CFF6C;
    case 404u: goto L_002CFF7C;
    case 405u: goto L_002CFF90;
    case 406u: goto L_002CFFA8;
    case 407u: goto L_002CFFF0;
    default: bad_entry(c, 0x002CC000u); return;
    }
L_002CC000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC020u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x002CC020u) [[unlikely]] return; }
L_002CC020:
    set32(c.r[4], 0u + 1000u);
    set32(c.r[3], 0u + 2u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002CC040; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC074; } }
L_002CC040:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002CC050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC074; } }
L_002CC050:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002CC060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC074; } }
L_002CC060:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC074; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CC074:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC090u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x002CC090u) [[unlikely]] return; }
L_002CC090:
    set32(c.r[4], 0u + 1000u);
    set32(c.r[3], 0u + 2u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002CC0B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC0E4; } }
L_002CC0B0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002CC0C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC0E4; } }
L_002CC0C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002CC0D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC0E4; } }
L_002CC0D0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC0E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CC0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC0F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC100; }
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    c.budget -= 1;
L_002CC100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC128; } }
L_002CC110:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC120; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 2;
L_002CC120:
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CC128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CBA50u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 372u, depth); }
L_002CC140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x002CC154u) [[unlikely]] return; }
L_002CC154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 28096u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 28152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x56410000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26080u);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[2], 0u + 250u);
    st32((c.r[16].w[0] + 480u), 0u);
    st32((c.r[16].w[0] + 484u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 464u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 412u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1B4u); st32((c.r[16].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002CC1B4u) [[unlikely]] return; }
L_002CC1B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1ECu); set32(c.r[4], c.r[4].w[0] + 26128u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002CC1ECu) [[unlikely]] return; }
L_002CC1EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CC368; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 6u);  goto L_002CC24C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC364; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_002CC24C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002CC2F0; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CC2EC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002CC284; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CC280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC364; } }
L_002CC280:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002CC284:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002CC2C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC294u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002CC294u) [[unlikely]] return; }
L_002CC294:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 512u);  goto L_002CC2AC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC2C8; } }
    set32(c.r[3], 0u + 512u);
    c.budget -= 1;
L_002CC2AC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 152u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_002CC2C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC364; } }
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002CC364; } }
L_002CC2EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002CC2F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002CC334; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC300u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002CC300u) [[unlikely]] return; }
L_002CC300:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 512u);  goto L_002CC318; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC334; } }
    set32(c.r[3], 0u + 512u);
    c.budget -= 1;
L_002CC318:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 152u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_002CC334:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC364; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC348u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 65u, depth + 1u); else { c.pc = 0x002CCBB0u; return; } if (c.pc != 0x002CC348u) [[unlikely]] return; }
L_002CC348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC364; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC364u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 64u, depth + 1u); else { c.pc = 0x002CCB70u; return; } if (c.pc != 0x002CC364u) [[unlikely]] return; }
L_002CC364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CC368:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CC5DC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 484u));  goto L_002CC3BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC5D8; } }
    c.f[0] = ld32((c.r[16].w[0] + 484u));
    c.budget -= 1;
L_002CC3BC:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002CC490; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_002CC400; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 484u));  if (t) { goto L_002CC404; } }
    c.f[2] = ld32((c.r[5].w[0] + 80u));
    c.budget -= 1;
L_002CC400:
    c.f[1] = ld32((c.r[16].w[0] + 484u));
    c.budget -= 1;
L_002CC404:
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 484u), c.f[1]);  if (t) { goto L_002CC48C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 484u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 65u, depth + 1u); else { c.pc = 0x002CCBB0u; return; } if (c.pc != 0x002CC430u) [[unlikely]] return; }
L_002CC430:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002CC458; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CC454; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002CC48C; } }
L_002CC454:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002CC458:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CC470; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CC470:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC48C; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002CC48C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002CC490:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CC5D8; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002CC5D0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26176u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002CC000u < 16384u) { entry = entries_006B[(t - 0x002CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CC4C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002CC50C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC4F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CC4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC5CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
L_002CC50C:
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC5CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC524u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 65u, depth + 1u); else { c.pc = 0x002CCBB0u; return; } if (c.pc != 0x002CC524u) [[unlikely]] return; }
L_002CC524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC534u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 68u, depth + 1u); else { c.pc = 0x002CCD50u; return; } if (c.pc != 0x002CC534u) [[unlikely]] return; }
L_002CC534:
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_002CC544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC54Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 91u, depth + 1u); else { c.pc = 0x002CD170u; return; } if (c.pc != 0x002CC54Cu) [[unlikely]] return; }
L_002CC54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002CC554u) [[unlikely]] return; }
L_002CC554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC5CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC568u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 120u, depth + 1u); else { c.pc = 0x002CD960u; return; } if (c.pc != 0x002CC568u) [[unlikely]] return; }
L_002CC568:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC574u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 120u, depth + 1u); else { c.pc = 0x002CD960u; return; } if (c.pc != 0x002CC574u) [[unlikely]] return; }
L_002CC574:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC580u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 120u, depth + 1u); else { c.pc = 0x002CD960u; return; } if (c.pc != 0x002CC580u) [[unlikely]] return; }
L_002CC580:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002CC5CC; } }
L_002CC58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 91u, depth + 1u); else { c.pc = 0x002CD170u; return; } if (c.pc != 0x002CC594u) [[unlikely]] return; }
L_002CC594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC5CC; } }
L_002CC59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002CD6F0u; return; } if (c.pc != 0x002CC5A4u) [[unlikely]] return; }
L_002CC5A4:
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_002CC5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002CC5BCu) [[unlikely]] return; }
L_002CC5BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC5CC; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_002CC5CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CC5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5D8u);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x002CC5D8u) [[unlikely]] return; }
L_002CC5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CC5DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CC638; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC634; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002CC62C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC634; } }
L_002CC62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC634u);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x002CC634u) [[unlikely]] return; }
L_002CC634:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CC638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CC688; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC684; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002CC67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC684; } }
L_002CC67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC684u);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x002CC684u) [[unlikely]] return; }
L_002CC684:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CC688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 251u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC6ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 434u, depth + 1u); else { c.pc = 0x00293E50u; return; } if (c.pc != 0x002CC6ACu) [[unlikely]] return; }
L_002CC6AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002CC6D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC6EC; } }
L_002CC6BC:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 7;
L_002CC6D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC6BCu | kUnwind; return; } goto L_002CC6BC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CC6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 21u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC720u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x002CC720u) [[unlikely]] return; }
L_002CC720:
    set32(c.r[8], 0u + 250u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002CC728:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 21ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 392u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 284u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC728u | kUnwind; return; } goto L_002CC728; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CCA58; }
    set32(c.r[3], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CCA4C; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002CCA30; }
    set32(c.r[3], 0u + 79u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002CCA18; }
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CCA14; } }
    set32(c.r[3], 0u + 116u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CCA14; } }
    set32(c.r[3], 0u + 113u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CCA14; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CCA14; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CCA14; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  goto L_002CCA00; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002CC9EC; }
    set32(c.r[3], 0u + 83u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC9E8; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC9E8; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002CC9D0; }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002CC9C0; }
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC9BC; } }
    set32(c.r[3], 0u + 95u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC9BC; } }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC9BC; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC9BC; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC9BC; } }
    set32(c.r[3], 0u + 98u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_002CC960; }
    set32(c.r[3], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 121u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CC950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC958u);  if (depth < kMaxDepth) unit_006B(c, 60u, depth + 1u); else { c.pc = 0x002CCA60u; return; } if (c.pc != 0x002CC958u) [[unlikely]] return; }
L_002CC958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CC960:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002CC96C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002CC96C:
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CCA54; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 26208u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002CC000u < 16384u) { entry = entries_006B[(t - 0x002CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CC99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9A4u);  if (depth < kMaxDepth) unit_006B(c, 64u, depth + 1u); else { c.pc = 0x002CCB70u; return; } if (c.pc != 0x002CC9A4u) [[unlikely]] return; }
L_002CC9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CC9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9B4u);  if (depth < kMaxDepth) unit_006B(c, 60u, depth + 1u); else { c.pc = 0x002CCA60u; return; } if (c.pc != 0x002CC9B4u) [[unlikely]] return; }
L_002CC9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CC9BC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CC9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9C8u);  if (depth < kMaxDepth) unit_006B(c, 61u, depth + 1u); else { c.pc = 0x002CCA80u; return; } if (c.pc != 0x002CC9C8u) [[unlikely]] return; }
L_002CC9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CC9D0:
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9E0u); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_006B(c, 61u, depth + 1u); else { c.pc = 0x002CCA80u; return; } if (c.pc != 0x002CC9E0u) [[unlikely]] return; }
L_002CC9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CC9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_002CC9EC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9F8u);  if (depth < kMaxDepth) unit_006B(c, 63u, depth + 1u); else { c.pc = 0x002CCB10u; return; } if (c.pc != 0x002CC9F8u) [[unlikely]] return; }
L_002CC9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CCA00:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA0Cu);  if (depth < kMaxDepth) unit_006B(c, 63u, depth + 1u); else { c.pc = 0x002CCB10u; return; } if (c.pc != 0x002CCA0Cu) [[unlikely]] return; }
L_002CCA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CCA14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CCA18:
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA28u); st32((c.r[29].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_006B(c, 61u, depth + 1u); else { c.pc = 0x002CCA80u; return; } if (c.pc != 0x002CCA28u) [[unlikely]] return; }
L_002CCA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CCA30:
    set32(c.r[3], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CCA54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA44u);  if (depth < kMaxDepth) unit_006B(c, 64u, depth + 1u); else { c.pc = 0x002CCB70u; return; } if (c.pc != 0x002CCA44u) [[unlikely]] return; }
L_002CCA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CCA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA54u);  if (depth < kMaxDepth) unit_006B(c, 64u, depth + 1u); else { c.pc = 0x002CCB70u; return; } if (c.pc != 0x002CCA54u) [[unlikely]] return; }
L_002CCA54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CCA58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CCA60:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CCA78; } }
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_002CCA78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CCA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CCAF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002CCABC; } }
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  goto L_002CCAC0; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002CCABC:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002CCAC0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CCAF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 65u, depth + 1u); else { c.pc = 0x002CCBB0u; return; } if (c.pc != 0x002CCAD0u) [[unlikely]] return; }
L_002CCAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCAF4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CCAF4; } }
    st32((c.r[16].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_002CCAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CCAF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CCB10:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CCB64; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002CCB40; } }
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  goto L_002CCB44; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002CCB40:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002CCB44:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CCB64; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CCB64; } }
    st32((c.r[4].w[0] + 480u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 484u), c.f[12]);
    c.budget -= 2;
L_002CCB64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CCB70:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CCBA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CCBA8; } }
    st32((c.r[4].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 6;
L_002CCBA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CCBB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CCBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002CCBE4; } }
L_002CCBE0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CCBE4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CCD34; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_002CCC00; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCD34; } }
L_002CCC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC08u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002CCC08u) [[unlikely]] return; }
L_002CCC08:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002CCC20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CCD34; } }
L_002CCC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC28u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x002CCC28u) [[unlikely]] return; }
L_002CCC28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CCC38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CCD34; } }
L_002CCC38:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002CCC4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_002CCC54; } }
L_002CCC4C:
    set32(c.r[18], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_002CCC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 1180u)));  if (t) { goto L_002CCCA0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002CCCA4; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCCA0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCCA0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCCA0; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CCD34; } }
L_002CCCA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002CCCA4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002CCCC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CCCC0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CCCC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_002CCCD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CCD34; } }
L_002CCCD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_002CCD2C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 76u)));  goto L_002CCCEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CCD0C; } }
L_002CCCEC:
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002CCD08; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_002CCD0C; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002CCD08:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002CCD0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCD28; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CCD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CCD34; } }
L_002CCD28:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_002CCD2C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002CCD34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CCD50:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 3168u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002CCDB8; } }
L_002CCD9C:
    set32(c.r[4], c.r[7].w[0] << 4);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002CCDB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 480u)));  if (t) { goto L_002CCDCC; } }
L_002CCDB8:
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CCD9Cu | kUnwind; return; } goto L_002CCD9C; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 480u)));
    c.budget -= 2;
L_002CCDCC:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_002CD138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCDE4u); set32(c.r[4], c.r[20].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002CCDE4u) [[unlikely]] return; }
L_002CCDE4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_002CCDF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_002CCE0C; } }
L_002CCDF8:
    set32(c.r[2], ld32((c.r[2].w[0] + 584u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CCE08; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CCE08:
    set32(c.r[21], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002CCE0C:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002CD048; }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002CD044; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 480u)));  goto L_002CCF90; }
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 3168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002CCE64; } }
L_002CCE48:
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002CCE64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCE74; } }
L_002CCE64:
    c.r[3].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CCE48u | kUnwind; return; } goto L_002CCE48; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CCE74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002CCE80; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002CCE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002CCEA4; } }
L_002CCE88:
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002CCEA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCEB4; } }
L_002CCEA4:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CCE88u | kUnwind; return; } goto L_002CCE88; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CCEB4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002CCEC0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_002CCEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CCEE0; } }
L_002CCEC8:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002CCEE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 52u);  if (t) { goto L_002CCEF4; } }
L_002CCEE0:
    c.r[3].d[0] = c.r[16].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CCEC8u | kUnwind; return; } goto L_002CCEC8; }
    set32(c.r[16], 0u - 1u);
    set32(c.r[4], c.r[20].w[0] + 52u);
    c.budget -= 2;
L_002CCEF4:
    set32(c.r[22], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF00u); set32(c.r[23], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002CCF00u) [[unlikely]] return; }
L_002CCF00:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002CCF10; } }
    set32(c.r[21], 0u + 3u);
    c.budget -= 1;
L_002CCF10:
    c.budget -= 2;
    if (c.r[22].sd[0] >= 0) { c.r[2].d[0] = c.r[23].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;  goto L_002CCF20; }
    set32(c.r[22], c.r[21].w[0] - 1u);
    c.r[2].d[0] = c.r[23].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CCF20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_002CCF30; }
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_002CCF30:
    set32(c.r[3], c.r[22].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 95u, depth + 1u); else { c.pc = 0x002CD3C0u; return; } if (c.pc != 0x002CCF48u) [[unlikely]] return; }
L_002CCF48:
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 95u, depth + 1u); else { c.pc = 0x002CD3C0u; return; } if (c.pc != 0x002CCF68u) [[unlikely]] return; }
L_002CCF68:
    c.r[16].d[0] = c.r[19].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[23].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF88u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 95u, depth + 1u); else { c.pc = 0x002CD3C0u; return; } if (c.pc != 0x002CCF88u) [[unlikely]] return; }
L_002CCF88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_002CD068; } }
L_002CCF90:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFA0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CCFA0u) [[unlikely]] return; }
L_002CCFA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002CCFFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFB0u); set32(c.r[4], ld32((c.r[20].w[0] + 480u)));  if (depth < kMaxDepth) unit_006A(c, 36u, depth + 1u); else { c.pc = 0x002C84D0u; return; } if (c.pc != 0x002CCFB0u) [[unlikely]] return; }
L_002CCFB0:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 95u, depth + 1u); else { c.pc = 0x002CD3C0u; return; } if (c.pc != 0x002CCFD0u) [[unlikely]] return; }
L_002CCFD0:
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.r[17].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 95u, depth + 1u); else { c.pc = 0x002CD3C0u; return; } if (c.pc != 0x002CCFE4u) [[unlikely]] return; }
L_002CCFE4:
    c.r[19].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFF4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 117u, depth + 1u); else { c.pc = 0x002CD850u; return; } if (c.pc != 0x002CCFF4u) [[unlikely]] return; }
L_002CCFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];  if (t) { goto L_002CD068; } }
L_002CCFFC:
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD014u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 117u, depth + 1u); else { c.pc = 0x002CD850u; return; } if (c.pc != 0x002CD014u) [[unlikely]] return; }
L_002CD014:
    c.r[16].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD02Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 95u, depth + 1u); else { c.pc = 0x002CD3C0u; return; } if (c.pc != 0x002CD02Cu) [[unlikely]] return; }
L_002CD02C:
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD03Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 117u, depth + 1u); else { c.pc = 0x002CD850u; return; } if (c.pc != 0x002CD03Cu) [[unlikely]] return; }
L_002CD03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_002CD068; } }
L_002CD044:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002CD048:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD064u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 95u, depth + 1u); else { c.pc = 0x002CD3C0u; return; } if (c.pc != 0x002CD064u) [[unlikely]] return; }
L_002CD064:
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_002CD068:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], 0u - 9u);
    st32((c.r[20].w[0] + 484u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002CD08C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002CD09C; } }
L_002CD08C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002CD0BC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002CD0BC; } }
L_002CD09C:
    c.f[12] = 0u;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD0B4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002CD0B4u) [[unlikely]] return; }
L_002CD0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD0F8; } }
L_002CD0BC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002CD0F8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CD0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD0D4u);  if (depth < kMaxDepth) unit_0060(c, 345u, depth + 1u); else { c.pc = 0x002A3370u; return; } if (c.pc != 0x002CD0D4u) [[unlikely]] return; }
L_002CD0D4:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002CD0F8; } }
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD0F8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002CD0F8u) [[unlikely]] return; }
L_002CD0F8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002CD11C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002CD110; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_002CD110:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_002CD11C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002CD13C; }
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD138u); set32(c.r[5], 0u + 122u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD138u) [[unlikely]] return; }
L_002CD138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002CD13C:
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
L_002CD170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 3168u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002CD1C0; } }
L_002CD1A4:
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002CD1C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD1D0; } }
L_002CD1C0:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD1A4u | kUnwind; return; } goto L_002CD1A4; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CD1D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002CD1DC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002CD1DC:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002CD3A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD1F0u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002CD1F0u) [[unlikely]] return; }
L_002CD1F0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_002CD204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002CD214; } }
L_002CD204:
    set32(c.r[3], ld32((c.r[3].w[0] + 584u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD3A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002CD214:
    set32(c.r[3], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD3A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 480u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 25744u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25744u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD254u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD254u) [[unlikely]] return; }
L_002CD254:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002CD2A4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_002CD284; }
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 96u)));  goto L_002CD2EC; }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002CD284:
    set32(c.r[4], 0u - 5u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002CD2E8; } }
L_002CD2A4:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 4u)));  goto L_002CD2C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD2E8; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002CD2C8:
    set32(c.r[5], 0u - 3u);
    set32(c.r[4], 0u - 5u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 8;
L_002CD2E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002CD2EC:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD320; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 5;
L_002CD320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 25784u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD360; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 5;
L_002CD360:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 25824u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD3A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 5;
L_002CD3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002CD3A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CD3C0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25744u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[19].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002CD474; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002CD478; }
    set32(c.r[3], ld32((c.r[16].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CD46C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002CD46C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002CD488; }
L_002CD474:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002CD478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD480u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 115u, depth + 1u); else { c.pc = 0x002CD7C0u; return; } if (c.pc != 0x002CD480u) [[unlikely]] return; }
L_002CD480:
    set32(c.r[30], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002CD488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD490u);  if (depth < kMaxDepth) unit_005E(c, 194u, depth + 1u); else { c.pc = 0x0029A110u; return; } if (c.pc != 0x002CD490u) [[unlikely]] return; }
L_002CD490:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 168u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[29].w[0] + 184u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD4D4u); st32((c.r[29].w[0] + 176u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_0060(c, 416u, depth + 1u); else { c.pc = 0x002A3FE0u; return; } if (c.pc != 0x002CD4D4u) [[unlikely]] return; }
L_002CD4D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 32767ull;
    c.budget -= 5;
L_002CD4E8:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 292u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD4E8u | kUnwind; return; } goto L_002CD4E8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_002CD5D4; }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CD5D0; } }
    set32(c.r[21], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002CD5C4; } }
L_002CD534:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[23], ld32((c.r[3].w[0])));
    c.f[13] = c.f[12];
    set32(c.r[5], c.r[2].w[0] + 11u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD574u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002CD574u) [[unlikely]] return; }
L_002CD574:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD59Cu); set32(c.r[5], c.r[2].w[0] - c.r[21].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD59Cu) [[unlikely]] return; }
L_002CD59C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD5BCu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002CD5BCu) [[unlikely]] return; }
L_002CD5BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 2;
L_002CD5C4:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD534u | kUnwind; return; } goto L_002CD534; }
L_002CD5D0:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_002CD5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD5DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 122u, depth + 1u); else { c.pc = 0x002CDA30u; return; } if (c.pc != 0x002CD5DCu) [[unlikely]] return; }
L_002CD5DC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = c.r[30].d[0] + 0ull;  goto L_002CD6B4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[16], c.r[19].w[0] << 2);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD624u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 121u, depth + 1u); else { c.pc = 0x00299200u; return; } if (c.pc != 0x002CD624u) [[unlikely]] return; }
L_002CD624:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD648u); set32(c.r[5], ld32((c.r[17].w[0] + 36u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD648u) [[unlikely]] return; }
L_002CD648:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[6].w[0] + 188u), c.r[4].w[0]);  if (t) { goto L_002CD678; } }
    st32((c.r[6].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 1;
L_002CD678:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 544u), 0u);
    st32((c.r[2].w[0] + 548u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD6B0u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 195u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002CD6B0u) [[unlikely]] return; }
L_002CD6B0:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_002CD6B4:
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
L_002CD6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD710u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 117u, depth + 1u); else { c.pc = 0x002CD850u; return; } if (c.pc != 0x002CD710u) [[unlikely]] return; }
L_002CD710:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD720u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 117u, depth + 1u); else { c.pc = 0x002CD850u; return; } if (c.pc != 0x002CD720u) [[unlikely]] return; }
L_002CD720:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD730u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 117u, depth + 1u); else { c.pc = 0x002CD850u; return; } if (c.pc != 0x002CD730u) [[unlikely]] return; }
L_002CD730:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002CD774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD750u);  if (depth < kMaxDepth) unit_0060(c, 345u, depth + 1u); else { c.pc = 0x002A3370u; return; } if (c.pc != 0x002CD750u) [[unlikely]] return; }
L_002CD750:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002CD778; }
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD774u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002CD774u) [[unlikely]] return; }
L_002CD774:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_002CD778:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_002CD784; }
    set32(c.r[6], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_002CD784:
    set32(c.r[3], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD7A8u); set32(c.r[5], 0u + 123u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD7A8u) [[unlikely]] return; }
L_002CD7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CD7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 25744u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_002CD80C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  if (t) { goto L_002CD810; } }
L_002CD80C:
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_002CD810:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD828u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002CD828u) [[unlikely]] return; }
L_002CD828:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] & 49151ull;
    st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CD850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 25744u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 340u)));  goto L_002CD8A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CD948; } }
L_002CD8A4:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 16u)));  goto L_002CD8C0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_002CD8EC; }
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_002CD8C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002CD8E8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD8E0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002CD8E0u) [[unlikely]] return; }
L_002CD8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));  if (t) { goto L_002CD93C; } }
L_002CD8E8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_002CD8EC:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  goto L_002CD904; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CD948; }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_002CD904:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002CD92C; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD924u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002CD924u) [[unlikely]] return; }
L_002CD924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD938; } }
L_002CD92C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD948; } }
L_002CD938:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));
    c.budget -= 1;
L_002CD93C:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 49151ull;
    st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002CD948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CD960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 25744u);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CDA24; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 24u)));  goto L_002CD9C0; }
    set32(c.r[5], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 1;
L_002CD9C0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002CDA20; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 340u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD9EC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002CD9EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CDA20; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[4].d[0]) { c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));  goto L_002CDA18; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA14u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002CDA14u) [[unlikely]] return; }
L_002CDA14:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));
    c.budget -= 1;
L_002CDA18:
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002CDA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CDA24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CDA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] + 52u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA48u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002CDA48u) [[unlikely]] return; }
L_002CDA48:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 3168u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002CDA80; } }
L_002CDA64:
    set32(c.r[4], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002CDA80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDA90; } }
L_002CDA80:
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDA64u | kUnwind; return; } goto L_002CDA64; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CDA90:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002CDA9C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002CDA9C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], ld32((c.r[6].w[0] + 3168u)));  goto L_002CDAB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002CDB60; } }
L_002CDAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002CDAD4; } }
L_002CDAB8:
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002CDAD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDAE4; } }
L_002CDAD4:
    c.r[3].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDAB8u | kUnwind; return; } goto L_002CDAB8; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CDAE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002CDAF0; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002CDAF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002CDB14; } }
L_002CDAF8:
    set32(c.r[4], c.r[9].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002CDB14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDB24; } }
L_002CDB14:
    c.r[3].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDAF8u | kUnwind; return; } goto L_002CDAF8; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CDB24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002CDB30; }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_002CDB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002CDB50; } }
L_002CDB38:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002CDB50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDB60; } }
L_002CDB50:
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDB38u | kUnwind; return; } goto L_002CDB38; }
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_002CDB60:
    c.budget -= 2;
    if (c.r[7].sd[0] >= 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_002CDB70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CDBA8; } }
L_002CDB70:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 25872u);  if (t) { goto L_002CDB98; } }
L_002CDB7C:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002CDB98; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);  if (t) { goto L_002CDBA8; } }
L_002CDB98:
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDB7Cu | kUnwind; return; } goto L_002CDB7C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002CDBA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CDBC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CDC14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28096u);
    set32(c.r[2], c.r[2].w[0] + 28152u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBFCu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x002CDBFCu) [[unlikely]] return; }
L_002CDBFC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CDC18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002CDC14u) [[unlikely]] return; }
L_002CDC14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CDC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CDC30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDBC0u | kUnwind; return; } goto L_002CDBC0; }
L_002CDC40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC7A0u | kUnwind; return; } goto L_002CC7A0; }
L_002CDC50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002CDE7C; } }
    set32(c.r[3], 0u + 69u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 140u)));  goto L_002CDE48; }
    set32(c.r[3], 0u + 97u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDE38; } }
    set32(c.r[3], 0u + 96u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDE28; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDE18; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDE08; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDDF8; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDDE8; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDDD8; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 176u)));  goto L_002CDDCC; }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDDBC; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDDAC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDD9C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 1180u)));  goto L_002CDD70; }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDD60; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDD50; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CDD40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CDD30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002CDEB0; } }
L_002CDD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD38u);  if (depth < kMaxDepth) unit_006B(c, 156u, depth + 1u); else { c.pc = 0x002CDF30u; return; } if (c.pc != 0x002CDD38u) [[unlikely]] return; }
L_002CDD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD48u);  if (depth < kMaxDepth) unit_006B(c, 157u, depth + 1u); else { c.pc = 0x002CDF40u; return; } if (c.pc != 0x002CDD48u) [[unlikely]] return; }
L_002CDD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD58u);  if (depth < kMaxDepth) unit_006B(c, 162u, depth + 1u); else { c.pc = 0x002CE040u; return; } if (c.pc != 0x002CDD58u) [[unlikely]] return; }
L_002CDD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD68u);  if (depth < kMaxDepth) unit_006B(c, 188u, depth + 1u); else { c.pc = 0x002CE730u; return; } if (c.pc != 0x002CDD68u) [[unlikely]] return; }
L_002CDD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDD70:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002CDEAC; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD94u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002CDD94u) [[unlikely]] return; }
L_002CDD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDDA4u);  if (depth < kMaxDepth) unit_006B(c, 192u, depth + 1u); else { c.pc = 0x002CE790u; return; } if (c.pc != 0x002CDDA4u) [[unlikely]] return; }
L_002CDDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDDB4u);  if (depth < kMaxDepth) unit_006B(c, 193u, depth + 1u); else { c.pc = 0x002CE7A0u; return; } if (c.pc != 0x002CDDB4u) [[unlikely]] return; }
L_002CDDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDDC4u);  if (depth < kMaxDepth) unit_006B(c, 195u, depth + 1u); else { c.pc = 0x002CE810u; return; } if (c.pc != 0x002CDDC4u) [[unlikely]] return; }
L_002CDDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDDCC:
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_002CDEAC; } }
L_002CDDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDDE0u);  if (depth < kMaxDepth) unit_006B(c, 219u, depth + 1u); else { c.pc = 0x002CEAA0u; return; } if (c.pc != 0x002CDDE0u) [[unlikely]] return; }
L_002CDDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDDF0u);  if (depth < kMaxDepth) unit_006B(c, 223u, depth + 1u); else { c.pc = 0x002CEB00u; return; } if (c.pc != 0x002CDDF0u) [[unlikely]] return; }
L_002CDDF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE00u);  if (depth < kMaxDepth) unit_006B(c, 227u, depth + 1u); else { c.pc = 0x002CEB80u; return; } if (c.pc != 0x002CDE00u) [[unlikely]] return; }
L_002CDE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE10u);  if (depth < kMaxDepth) unit_006B(c, 228u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDE10u) [[unlikely]] return; }
L_002CDE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE20u);  if (depth < kMaxDepth) unit_006B(c, 231u, depth + 1u); else { c.pc = 0x002CEC30u; return; } if (c.pc != 0x002CDE20u) [[unlikely]] return; }
L_002CDE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE30u);  if (depth < kMaxDepth) unit_006B(c, 232u, depth + 1u); else { c.pc = 0x002CEC40u; return; } if (c.pc != 0x002CDE30u) [[unlikely]] return; }
L_002CDE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE40u);  if (depth < kMaxDepth) unit_006B(c, 234u, depth + 1u); else { c.pc = 0x002CEC80u; return; } if (c.pc != 0x002CDE40u) [[unlikely]] return; }
L_002CDE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDE48:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CDEAC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CDEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE74u);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002CDE74u) [[unlikely]] return; }
L_002CDE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDE7C:
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CDEA4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CDEAC; } }
L_002CDEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDEACu);  if (depth < kMaxDepth) unit_006C(c, 352u, depth + 1u); else { c.pc = 0x002D3B70u; return; } if (c.pc != 0x002CDEACu) [[unlikely]] return; }
L_002CDEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CDEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CDEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CDF04; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002CDEF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 52u);  if (t) { goto L_002CDF10; } }
L_002CDEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDEFCu);  if (depth < kMaxDepth) unit_006B(c, 197u, depth + 1u); else { c.pc = 0x002CE870u; return; } if (c.pc != 0x002CDEFCu) [[unlikely]] return; }
L_002CDEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDF0C; } }
L_002CDF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF0Cu);  if (depth < kMaxDepth) unit_006B(c, 218u, depth + 1u); else { c.pc = 0x002CEA90u; return; } if (c.pc != 0x002CDF0Cu) [[unlikely]] return; }
L_002CDF0C:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002CDF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 120u, depth + 1u); else { c.pc = 0x002790D0u; return; } if (c.pc != 0x002CDF18u) [[unlikely]] return; }
L_002CDF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CDF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDF40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 9;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 1180u)));  goto L_002CE00C; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF74u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002CDF74u) [[unlikely]] return; }
L_002CDF74:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CDF88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_002CDF9C; } }
L_002CDF88:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002CDF9C; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_002CDF9C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CDFC4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CDFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CDFC0u) [[unlikely]] return; }
L_002CDFC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CDFC4:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002CDFFC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CDFF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u - 256u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 7;
L_002CDFF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CDFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE004u);  if (depth < kMaxDepth) unit_005A(c, 256u, depth + 1u); else { c.pc = 0x0028A410u; return; } if (c.pc != 0x002CE004u) [[unlikely]] return; }
L_002CE004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002CE030; } }
L_002CE00C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002CE02C; } }
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE02Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002CE02Cu) [[unlikely]] return; }
L_002CE02C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002CE030:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CE040:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 1100u)));  goto L_002CE1C4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_002CE0E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE084u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CE084u) [[unlikely]] return; }
L_002CE084:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CE0E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2592u));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2596u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2600u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2604u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2608u)));
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), 0u);  if (t) { goto L_002CE1A4; } }
L_002CE0E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_002CE0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE0ECu);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002CE0ECu) [[unlikely]] return; }
L_002CE0EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 140u)));  goto L_002CE174; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE104u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CE104u) [[unlikely]] return; }
L_002CE104:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CE170; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[3].w[0] + 192u));  goto L_002CE130; }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.budget -= 2;
L_002CE130:
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 196u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 200u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 204u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 240u)));
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 244u)));
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 248u)));
    st32((c.r[17].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 252u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002CE1A4; } }
L_002CE170:
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_002CE174:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1252u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  goto L_002CE1A8; }
    st32((c.r[17].w[0] + 200u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 196u), 0u);
    st32((c.r[17].w[0] + 192u), 0u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 248u), 0u);
    st32((c.r[17].w[0] + 244u), 0u);
    st32((c.r[17].w[0] + 240u), 0u);
    c.budget -= 8;
L_002CE1A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_002CE1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002CE6D8; } }
L_002CE1C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002CE2C0; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002CE1DCu) [[unlikely]] return; }
L_002CE1DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002CE2BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CE1ECu) [[unlikely]] return; }
L_002CE1EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002CE248; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2784u));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2788u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2792u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2796u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2800u)));
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), 0u);  if (t) { goto L_002CE29C; } }
L_002CE248:
    set32(c.r[3], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[3].w[0] + 192u));  goto L_002CE260; }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.budget -= 2;
L_002CE260:
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 196u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 200u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 204u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 240u)));
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 244u)));
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 248u)));
    st32((c.r[17].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 252u)));
    st32((c.r[17].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 15;
L_002CE29C:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002CE6D8; } }
L_002CE2BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002CE2C0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1100u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  goto L_002CE3D0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 13264u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002CE3CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE2ECu);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002CE2ECu) [[unlikely]] return; }
L_002CE2EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002CE3CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE2FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CE2FCu) [[unlikely]] return; }
L_002CE2FC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002CE358; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2976u));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2980u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2984u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2988u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2992u)));
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), 0u);  if (t) { goto L_002CE3AC; } }
L_002CE358:
    set32(c.r[3], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[3].w[0] + 192u));  goto L_002CE370; }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.budget -= 2;
L_002CE370:
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 196u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 200u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 204u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 240u)));
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 244u)));
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 248u)));
    st32((c.r[17].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 252u)));
    st32((c.r[17].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 15;
L_002CE3AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002CE6D8; } }
L_002CE3CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_002CE3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  goto L_002CE69C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002CE3EC; } }
L_002CE3EC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2916u)));
    c.budget -= 5;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] << 4);  goto L_002CE414; }
    set32(c.r[2], ld32((c.r[5].w[0] + 2912u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE3ECu | kUnwind; return; } goto L_002CE3EC; }
    set32(c.r[2], c.r[3].w[0] << 4);
    c.budget -= 1;
L_002CE414:
    set32(c.r[4], ld32((c.r[5].w[0] + 1252u)));
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[3].w[0] + 1264u);  if (t) { goto L_002CE598; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[17].w[0] + 192u);  goto L_002CE540; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002CE53C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002CE45C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  goto L_002CE680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE67C; } }
L_002CE45C:
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1100u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 256u);  goto L_002CE494; }
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 244u), 0u);  if (t) { goto L_002CE67C; } }
L_002CE494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE49Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002CE49Cu) [[unlikely]] return; }
L_002CE49C:
    c.f[12] = ld32((c.r[17].w[0] + 656u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE4ACu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CE4ACu) [[unlikely]] return; }
L_002CE4AC:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE4DCu); st32((c.r[29].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002CE4DCu) [[unlikely]] return; }
L_002CE4DC:
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    st32((c.r[17].w[0] + 196u), c.f[3]);
    st32((c.r[17].w[0] + 200u), c.f[2]);
    st32((c.r[17].w[0] + 204u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 260u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 264u), c.f[2]);
    st32((c.r[29].w[0] + 268u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE534u); st32((c.r[29].w[0] + 256u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x002CE534u) [[unlikely]] return; }
L_002CE534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE67C; } }
L_002CE53C:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 1;
L_002CE540:
    set32(c.r[5], c.r[5].w[0] + 2848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE54Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002CE54Cu) [[unlikely]] return; }
L_002CE54C:
    st32((c.r[17].w[0] + 196u), 0u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[17].w[0] + 200u));
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.f[2] = ld32((c.r[17].w[0] + 192u));
    c.f[1] = ld32((c.r[17].w[0] + 196u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 204u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE590u); st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x002CE590u) [[unlikely]] return; }
L_002CE590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE67C; } }
L_002CE598:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE5A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002CE5A8u) [[unlikely]] return; }
L_002CE5A8:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE5B8u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002CE5B8u) [[unlikely]] return; }
L_002CE5B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE5D0u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002CE5D0u) [[unlikely]] return; }
L_002CE5D0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE5E4u); st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002CE5E4u) [[unlikely]] return; }
L_002CE5E4:
    c.f[12] = ld32((c.r[17].w[0] + 656u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE5F4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CE5F4u) [[unlikely]] return; }
L_002CE5F4:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE624u); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002CE624u) [[unlikely]] return; }
L_002CE624:
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    st32((c.r[17].w[0] + 196u), c.f[3]);
    st32((c.r[17].w[0] + 200u), c.f[2]);
    st32((c.r[17].w[0] + 204u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[29].w[0] + 220u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 212u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 216u), c.f[2]);
    st32((c.r[29].w[0] + 220u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE67Cu); st32((c.r[29].w[0] + 208u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x002CE67Cu) [[unlikely]] return; }
L_002CE67C:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_002CE680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002CE6D8; } }
L_002CE69C:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_002CE6DC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE6BCu); set32(c.r[5], c.r[2].w[0] + 2848u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002CE6BCu) [[unlikely]] return; }
L_002CE6BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
L_002CE6D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_002CE6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE6E4u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002CE6E4u) [[unlikely]] return; }
L_002CE6E4:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002CE71C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE6FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CE6FCu) [[unlikely]] return; }
L_002CE6FC:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CE718; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE718u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002CE718u) [[unlikely]] return; }
L_002CE718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002CE71C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002CE730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE748u); set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002CE748u) [[unlikely]] return; }
L_002CE748:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CE780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CE760u) [[unlikely]] return; }
L_002CE760:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CE77C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE77Cu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002CE77Cu) [[unlikely]] return; }
L_002CE77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CE780:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CE790:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028A410u | kUnwind; return; } [[clang::musttail]] return unit_005A(c, 256u, depth); }
L_002CE7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CE804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE7D0u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002CE7D0u) [[unlikely]] return; }
L_002CE7D0:
    c.r[3].d[0] = c.r[2].d[0] ^ 6ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CE800; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] - 20026u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002CE800; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 3;
L_002CE800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CE804:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CE810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CE864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE840u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002CE840u) [[unlikely]] return; }
L_002CE840:
    c.r[3].d[0] = c.r[2].d[0] ^ 6ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CE860; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 4;
L_002CE860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CE864:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CE870:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CE8F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE89Cu); set32(c.r[4], c.r[2].w[0] + 2848u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002CE89Cu) [[unlikely]] return; }
L_002CE89C:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    set32(c.r[4], c.r[3].w[0] + 2848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8B0u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002CE8B0u) [[unlikely]] return; }
L_002CE8B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1320u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] + 2848u);
    set32(c.r[7], ld32((c.r[3].w[0] + 244u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 248u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8D0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002CE8D0u) [[unlikely]] return; }
L_002CE8D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[17], c.r[2].w[0] + 2848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002CE8E4u) [[unlikely]] return; }
L_002CE8E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8F0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x002CE8F0u) [[unlikely]] return; }
L_002CE8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (t) { goto L_002CEA38; } }
L_002CE8F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1364u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_002CE924; }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE91Cu); set32(c.r[4], c.r[2].w[0] + 2848u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002CE91Cu) [[unlikely]] return; }
L_002CE91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CEA34; } }
L_002CE924:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_002CE9E0; }
    set32(c.r[17], ld32((c.r[4].w[0] + 2916u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_002CE944; }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 2;
L_002CE944:
    c.f[20] = ld32((c.r[17].w[0] + 720u));
    set32(c.r[5], ld32((c.r[2].w[0] + 1256u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE954u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002CE954u) [[unlikely]] return; }
L_002CE954:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE960u); set32(c.r[4], ld32((c.r[2].w[0] + 1256u)));  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002CE960u) [[unlikely]] return; }
L_002CE960:
    c.f[3] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE990u); st32((c.r[29].w[0] + 264u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002CE990u) [[unlikely]] return; }
L_002CE990:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE99Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002CE99Cu) [[unlikely]] return; }
L_002CE99C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9ACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002CE9ACu) [[unlikely]] return; }
L_002CE9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002CE9B4u) [[unlikely]] return; }
L_002CE9B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9C4u); set32(c.r[4], c.r[2].w[0] + 2848u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x002CE9C4u) [[unlikely]] return; }
L_002CE9C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[2].w[0] + 2848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9D8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002CE9D8u) [[unlikely]] return; }
L_002CE9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CEA34; } }
L_002CE9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9E8u); set32(c.r[4], c.r[2].w[0] + 2848u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002CE9E8u) [[unlikely]] return; }
L_002CE9E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9F8u); set32(c.r[4], c.r[2].w[0] + 2848u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002CE9F8u) [[unlikely]] return; }
L_002CE9F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[4], c.r[2].w[0] + 2848u);
    set32(c.r[8], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA14u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002CEA14u) [[unlikely]] return; }
L_002CEA14:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[17], c.r[2].w[0] + 2848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002CEA28u) [[unlikely]] return; }
L_002CEA28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA34u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x002CEA34u) [[unlikely]] return; }
L_002CEA34:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_002CEA38:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1252u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_002CEA60; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CEA5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002CEA70; } }
L_002CEA5C:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_002CEA60:
    set32(c.r[25], ld32((c.r[25].w[0] + 208u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEA6Cu) [[unlikely]] return; }
L_002CEA6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002CEA70:
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 68u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002CEA90:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 68u), 0u);  c.pc = t; return; }
L_002CEAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEAB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002CEAB8u) [[unlikely]] return; }
L_002CEAB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_002CEAD8; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEAD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEAD0u) [[unlikely]] return; }
L_002CEAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002CEAE8; } }
L_002CEAD8:
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEAE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEAE4u) [[unlikely]] return; }
L_002CEAE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CEAE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CEB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 362u, depth + 1u); else { c.pc = 0x002D3D30u; return; } if (c.pc != 0x002CEB14u) [[unlikely]] return; }
L_002CEB14:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));  goto L_002CEB50; }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CEB4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB4Cu); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 64u, depth + 1u); else { c.pc = 0x002A87C0u; return; } if (c.pc != 0x002CEB4Cu) [[unlikely]] return; }
L_002CEB4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 1;
L_002CEB50:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CEB70; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEB68u) [[unlikely]] return; }
L_002CEB68:
    st32((c.r[16].w[0] + 1312u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_002CEB70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CEB80:
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CEBA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 3024u), 0u);
    c.budget -= 2;
L_002CEBA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006C(c, 363u, depth); }
L_002CEBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));  goto L_002CEBF8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CEBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBF4u); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x002A8800u; return; } if (c.pc != 0x002CEBF4u) [[unlikely]] return; }
L_002CEBF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 1;
L_002CEBF8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CEC18; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEC10u) [[unlikely]] return; }
L_002CEC10:
    st32((c.r[16].w[0] + 1312u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_002CEC18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CEC30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C720u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 35u, depth); }
L_002CEC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CEC6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC68u); set32(c.r[5], 0u + 600u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x002CEC68u) [[unlikely]] return; }
L_002CEC68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CEC6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CEC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CED30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECB0u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002CECB0u) [[unlikely]] return; }
L_002CECB0:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CED2C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CED2C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECDCu); set32(c.r[5], 0u + 10200u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002CECDCu) [[unlikely]] return; }
L_002CECDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CECE4u) [[unlikely]] return; }
L_002CECE4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], 0u + 13u);  goto L_002CECF8; }
    set32(c.r[6], 0u + 12u);
    c.budget -= 1;
L_002CECF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 10200u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED14u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x002CED14u) [[unlikely]] return; }
L_002CED14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CED2C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED2Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002CED2Cu) [[unlikely]] return; }
L_002CED2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CED30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CED40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CEDB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 816u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002CED80u) [[unlikely]] return; }
L_002CED80:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002CED8Cu) [[unlikely]] return; }
L_002CED8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002CED98u) [[unlikely]] return; }
L_002CED98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CEDB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002CEDB0u) [[unlikely]] return; }
L_002CEDB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CEDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CEDD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEDE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CED40u | kUnwind; return; } goto L_002CED40; }
L_002CEDF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDC50u | kUnwind; return; } goto L_002CDC50; }
L_002CEE00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDEC0u | kUnwind; return; } goto L_002CDEC0; }
L_002CEE10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002CEE24u) [[unlikely]] return; }
L_002CEE24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 28416u);
    set32(c.r[3], c.r[3].w[0] + 28472u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454E0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17735ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 528u)));  goto L_002CEE60; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CEE60:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 66u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE84u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002CEE84u) [[unlikely]] return; }
L_002CEE84:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE90u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x002CEE90u) [[unlikely]] return; }
L_002CEE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE98u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002CEE98u) [[unlikely]] return; }
L_002CEE98:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEEACu); set32(c.r[5], 0u + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEEACu) [[unlikely]] return; }
L_002CEEAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CEEC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289A00u | kUnwind; return; } [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_002CEED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEEF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x002CEEF4u) [[unlikely]] return; }
L_002CEEF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CEFF8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002CEFEC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002CEFBC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002CEF44; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002CEF3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CEFF4; } }
L_002CEF3C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_002CEF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF4Cu); set32(c.r[5], 0u + 66u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002CEF4Cu) [[unlikely]] return; }
L_002CEF4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CEFF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CEF5Cu) [[unlikely]] return; }
L_002CEF5C:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002CEF9C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  goto L_002CEF88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002CEF90; } }
L_002CEF88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_002CEF90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CEFF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002CEF9C:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEFACu); set32(c.r[5], 0u + 81u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEFACu) [[unlikely]] return; }
L_002CEFAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002CEFF4; } }
L_002CEFBC:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CEFD4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CEFD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CEFF4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
L_002CEFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEFF4u);  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x002CEFF4u) [[unlikely]] return; }
L_002CEFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CEFF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CF010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x002CF024u) [[unlikely]] return; }
L_002CF024:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CF040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CF0C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28416u);
    set32(c.r[2], c.r[2].w[0] + 28472u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002CF0A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF09Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002CF09Cu) [[unlikely]] return; }
L_002CF09C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF0A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002CF0A8u) [[unlikely]] return; }
L_002CF0A8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002CF0C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF0C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002CF0C0u) [[unlikely]] return; }
L_002CF0C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CF0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CF0E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF040u | kUnwind; return; } goto L_002CF040; }
L_002CF0F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002CF64C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002CC000u < 16384u) { entry = entries_006B[(t - 0x002CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CF13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF144u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF144u) [[unlikely]] return; }
L_002CF144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002CF664; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF164u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 89u, depth + 1u); else { c.pc = 0x002749F0u; return; } if (c.pc != 0x002CF164u) [[unlikely]] return; }
L_002CF164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF174u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF174u) [[unlikely]] return; }
L_002CF174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 60u, depth + 1u); else { c.pc = 0x002789B0u; return; } if (c.pc != 0x002CF194u) [[unlikely]] return; }
L_002CF194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1A4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF1A4u) [[unlikely]] return; }
L_002CF1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 142u, depth + 1u); else { c.pc = 0x00271370u; return; } if (c.pc != 0x002CF1C4u) [[unlikely]] return; }
L_002CF1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1D4u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF1D4u) [[unlikely]] return; }
L_002CF1D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 112u, depth + 1u); else { c.pc = 0x00270FA0u; return; } if (c.pc != 0x002CF1F4u) [[unlikely]] return; }
L_002CF1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF204u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF204u) [[unlikely]] return; }
L_002CF204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF224u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 414u, depth + 1u); else { c.pc = 0x00273780u; return; } if (c.pc != 0x002CF224u) [[unlikely]] return; }
L_002CF224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF234u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF234u) [[unlikely]] return; }
L_002CF234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF254u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 402u, depth + 1u); else { c.pc = 0x00277A40u; return; } if (c.pc != 0x002CF254u) [[unlikely]] return; }
L_002CF254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF264u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF264u) [[unlikely]] return; }
L_002CF264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF284u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 284u, depth + 1u); else { c.pc = 0x00276A70u; return; } if (c.pc != 0x002CF284u) [[unlikely]] return; }
L_002CF284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF294u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF294u) [[unlikely]] return; }
L_002CF294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF2B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 108u, depth + 1u); else { c.pc = 0x00274C40u; return; } if (c.pc != 0x002CF2B4u) [[unlikely]] return; }
L_002CF2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF2C4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF2C4u) [[unlikely]] return; }
L_002CF2C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF2E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 148u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x002CF2E4u) [[unlikely]] return; }
L_002CF2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF2F4u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF2F4u) [[unlikely]] return; }
L_002CF2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF314u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 63u, depth + 1u); else { c.pc = 0x002746E0u; return; } if (c.pc != 0x002CF314u) [[unlikely]] return; }
L_002CF314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF324u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF324u) [[unlikely]] return; }
L_002CF324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF344u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 10u, depth + 1u); else { c.pc = 0x00278110u; return; } if (c.pc != 0x002CF344u) [[unlikely]] return; }
L_002CF344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF354u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF354u) [[unlikely]] return; }
L_002CF354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF374u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 74u, depth + 1u); else { c.pc = 0x00278B50u; return; } if (c.pc != 0x002CF374u) [[unlikely]] return; }
L_002CF374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF384u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF384u) [[unlikely]] return; }
L_002CF384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x002CF3A4u) [[unlikely]] return; }
L_002CF3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3B4u); set32(c.r[4], 0u + 164u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF3B4u) [[unlikely]] return; }
L_002CF3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x002CF3D4u) [[unlikely]] return; }
L_002CF3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3E4u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF3E4u) [[unlikely]] return; }
L_002CF3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF404u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 396u, depth + 1u); else { c.pc = 0x0026F660u; return; } if (c.pc != 0x002CF404u) [[unlikely]] return; }
L_002CF404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF414u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF414u) [[unlikely]] return; }
L_002CF414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF434u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 151u, depth + 1u); else { c.pc = 0x00269CD0u; return; } if (c.pc != 0x002CF434u) [[unlikely]] return; }
L_002CF434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF444u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF444u) [[unlikely]] return; }
L_002CF444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF464u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 70u, depth + 1u); else { c.pc = 0x002C4A30u; return; } if (c.pc != 0x002CF464u) [[unlikely]] return; }
L_002CF464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF46C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF474u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF474u) [[unlikely]] return; }
L_002CF474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF494u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 450u, depth + 1u); else { c.pc = 0x00273C40u; return; } if (c.pc != 0x002CF494u) [[unlikely]] return; }
L_002CF494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4A4u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF4A4u) [[unlikely]] return; }
L_002CF4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 272u, depth + 1u); else { c.pc = 0x00272480u; return; } if (c.pc != 0x002CF4C4u) [[unlikely]] return; }
L_002CF4C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4D4u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF4D4u) [[unlikely]] return; }
L_002CF4D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x002CF4F4u) [[unlikely]] return; }
L_002CF4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF504u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF504u) [[unlikely]] return; }
L_002CF504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF524u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 241u, depth + 1u); else { c.pc = 0x00271F30u; return; } if (c.pc != 0x002CF524u) [[unlikely]] return; }
L_002CF524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF534u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF534u) [[unlikely]] return; }
L_002CF534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF554u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 383u, depth + 1u); else { c.pc = 0x002E7410u; return; } if (c.pc != 0x002CF554u) [[unlikely]] return; }
L_002CF554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF564u); set32(c.r[4], 0u + 140u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF564u) [[unlikely]] return; }
L_002CF564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF584u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 283u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x002CF584u) [[unlikely]] return; }
L_002CF584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF594u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF594u) [[unlikely]] return; }
L_002CF594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 103u, depth + 1u); else { c.pc = 0x002C90A0u; return; } if (c.pc != 0x002CF5B4u) [[unlikely]] return; }
L_002CF5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5C4u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF5C4u) [[unlikely]] return; }
L_002CF5C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 249u, depth + 1u); else { c.pc = 0x002CEE10u; return; } if (c.pc != 0x002CF5E4u) [[unlikely]] return; }
L_002CF5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5F4u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF5F4u) [[unlikely]] return; }
L_002CF5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF614u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 93u, depth + 1u); else { c.pc = 0x002E93E0u; return; } if (c.pc != 0x002CF614u) [[unlikely]] return; }
L_002CF614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF624u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CF624u) [[unlikely]] return; }
L_002CF624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 244u, depth + 1u); else { c.pc = 0x002EEB10u; return; } if (c.pc != 0x002CF644u) [[unlikely]] return; }
L_002CF644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF660; } }
L_002CF64C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF65Cu); set32(c.r[4], c.r[4].w[0] + 26240u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002CF65Cu) [[unlikely]] return; }
L_002CF65C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CF660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002CF664:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CF680:
    set32(c.r[29], c.r[29].w[0] - 912u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[4], c.r[29].w[0] + 880u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 896u);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 220u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 896u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 900u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[29].w[0] + 904u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF710u); st32((c.r[29].w[0] + 908u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002CF710u) [[unlikely]] return; }
L_002CF710:
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 896u);
    st32((c.r[29].w[0] + 864u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[29].w[0] + 868u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 872u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF740u); st32((c.r[29].w[0] + 876u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002CF740u) [[unlikely]] return; }
L_002CF740:
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    c.f[23] = 0u;
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.f[22] = c.f[23];
    st128((c.r[29].w[0] + 848u) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF75Cu); c.f[21] = c.f[23];  if (depth < kMaxDepth) unit_0026(c, 401u, depth + 1u); else { c.pc = 0x001BB8B0u; return; } if (c.pc != 0x002CF75Cu) [[unlikely]] return; }
L_002CF75C:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 760u)));  goto L_002CF778; }
    set32(c.r[2], ld32((c.r[29].w[0] + 760u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 760u), c.r[2].w[0]);  if (t) { goto L_002CF784; } }
L_002CF778:
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 760u), c.r[2].w[0]);
    c.budget -= 3;
L_002CF784:
    set32(c.r[3], ld32((c.r[29].w[0] + 760u)));
    set32(c.r[2], 0u - 17u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 760u), c.r[2].w[0]);  if (t) { goto L_002CFE24; } }
L_002CF79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7A4u); set32(c.r[5], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0027(c, 96u, depth + 1u); else { c.pc = 0x001BCD20u; return; } if (c.pc != 0x002CF7A4u) [[unlikely]] return; }
L_002CF7A4:
    set32(c.r[4], c.r[20].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7B0u); set32(c.r[5], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0026(c, 397u, depth + 1u); else { c.pc = 0x001BB7B0u; return; } if (c.pc != 0x002CF7B0u) [[unlikely]] return; }
L_002CF7B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 560u);  goto L_002CF7C8; }
    set32(c.r[5], c.r[5].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 2;
L_002CF7C8:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7D8u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002CF7D8u) [[unlikely]] return; }
L_002CF7D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[30].d[0] + 0ull;  goto L_002CF804; }
    c.f[2] = ld32((c.r[29].w[0] + 896u));
    set32(c.r[23], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 900u));
    c.f[0] = ld32((c.r[29].w[0] + 904u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[2]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);  if (t) { goto L_002CFE34; } }
L_002CF804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF80Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CF80Cu) [[unlikely]] return; }
L_002CF80C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 96u));  goto L_002CF970; }
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF96C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 178u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002CF96C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF848u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002CF848u) [[unlikely]] return; }
L_002CF848:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CF96C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF96C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF96C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 632u));
    c.f[1] = ld32((c.r[17].w[0] + 624u));
    c.f[2] = ld32((c.r[29].w[0] + 856u));
    c.f[0] = ld32((c.r[29].w[0] + 848u));
    st32((c.r[29].w[0] + 556u), c.r[2].w[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 548u), 0u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 552u), c.f[2]);
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.f[24] = ld32((c.r[17].w[0] + 656u));
    c.f[20] = ld32((c.r[30].w[0] + 656u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF8C4u); set32(c.r[4], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002CF8C4u) [[unlikely]] return; }
L_002CF8C4:
    c.f[1] = fp::ee::add(c.fcr31, c.f[20], c.f[24]);
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF8D8u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002CF8D8u) [[unlikely]] return; }
L_002CF8D8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CF96C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    c.f[0] = ld32((c.r[28].w[0] - 32160u));
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.f[1] = ld32((c.r[2].w[0] + 800u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF90Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CF90Cu) [[unlikely]] return; }
L_002CF90C:
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF920u); st128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_006C(c, 128u, depth + 1u); else { c.pc = 0x002D1520u; return; } if (c.pc != 0x002CF920u) [[unlikely]] return; }
L_002CF920:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 560u);  goto L_002CF938; }
    set32(c.r[5], c.r[5].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 2;
L_002CF938:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF948u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002CF948u) [[unlikely]] return; }
L_002CF948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CF96C; } }
    c.f[2] = ld32((c.r[29].w[0] + 896u));
    c.f[1] = ld32((c.r[29].w[0] + 900u));
    c.f[0] = ld32((c.r[29].w[0] + 904u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[2]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);  if (t) { goto L_002CFE34; } }
L_002CF96C:
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 1;
L_002CF970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 896u);
    st32((c.r[29].w[0] + 816u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[29].w[0] + 820u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[29].w[0] + 824u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9A0u); st32((c.r[29].w[0] + 828u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CF9A0u) [[unlikely]] return; }
L_002CF9A0:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[5], c.r[29].w[0] + 864u);
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    set32(c.r[6], c.r[29].w[0] + 832u);
    st32((c.r[29].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    st32((c.r[29].w[0] + 832u), c.f[2]);
    st32((c.r[29].w[0] + 836u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9D0u); st32((c.r[29].w[0] + 844u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002CF9D0u) [[unlikely]] return; }
L_002CF9D0:
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[5], c.r[29].w[0] + 848u);
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[29].w[0] + 856u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    st32((c.r[29].w[0] + 848u), c.f[2]);
    st32((c.r[29].w[0] + 852u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9FCu); st32((c.r[29].w[0] + 860u), c.f[0]);  if (depth < kMaxDepth) unit_0027(c, 96u, depth + 1u); else { c.pc = 0x001BCD20u; return; } if (c.pc != 0x002CF9FCu) [[unlikely]] return; }
L_002CF9FC:
    set32(c.r[4], c.r[20].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA08u); set32(c.r[5], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0026(c, 397u, depth + 1u); else { c.pc = 0x001BB7B0u; return; } if (c.pc != 0x002CFA08u) [[unlikely]] return; }
L_002CFA08:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 560u);  goto L_002CFA20; }
    set32(c.r[5], c.r[5].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 2;
L_002CFA20:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA30u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002CFA30u) [[unlikely]] return; }
L_002CFA30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);  goto L_002CFAA4; }
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 896u);
    st32((c.r[29].w[0] + 816u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    st32((c.r[29].w[0] + 820u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    st32((c.r[29].w[0] + 824u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 108u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA70u); st32((c.r[29].w[0] + 828u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CFA70u) [[unlikely]] return; }
L_002CFA70:
    c.f[1] = ld32((c.r[29].w[0] + 832u));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[3] = ld32((c.r[29].w[0] + 836u));
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 840u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 832u), c.f[4]);
    st32((c.r[29].w[0] + 836u), c.f[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 840u), c.f[0]);  if (t) { goto L_002CFAEC; } }
L_002CFAA4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAB8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CFAB8u) [[unlikely]] return; }
L_002CFAB8:
    c.f[1] = ld32((c.r[29].w[0] + 832u));
    set32(c.r[23], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[3] = ld32((c.r[29].w[0] + 836u));
    c.f[2] = ld32((c.r[29].w[0] + 324u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 840u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 832u), c.f[4]);
    st32((c.r[29].w[0] + 836u), c.f[2]);
    st32((c.r[29].w[0] + 840u), c.f[0]);
    c.budget -= 13;
L_002CFAEC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAFCu); set32(c.r[6], c.r[29].w[0] + 832u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002CFAFCu) [[unlikely]] return; }
L_002CFAFC:
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[5], c.r[29].w[0] + 848u);
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[29].w[0] + 856u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 316u));
    st32((c.r[29].w[0] + 848u), c.f[2]);
    st32((c.r[29].w[0] + 852u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB28u); st32((c.r[29].w[0] + 860u), c.f[0]);  if (depth < kMaxDepth) unit_0027(c, 96u, depth + 1u); else { c.pc = 0x001BCD20u; return; } if (c.pc != 0x002CFB28u) [[unlikely]] return; }
L_002CFB28:
    set32(c.r[4], c.r[20].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB34u); set32(c.r[5], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0026(c, 397u, depth + 1u); else { c.pc = 0x001BB7B0u; return; } if (c.pc != 0x002CFB34u) [[unlikely]] return; }
L_002CFB34:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 560u);  goto L_002CFB4C; }
    set32(c.r[5], c.r[5].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 2;
L_002CFB4C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB5Cu); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002CFB5Cu) [[unlikely]] return; }
L_002CFB5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[23], 0u + 1u);  goto L_002CFC0C; }
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 896u);
    st32((c.r[29].w[0] + 816u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    st32((c.r[29].w[0] + 820u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    st32((c.r[29].w[0] + 824u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 108u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB94u); st32((c.r[29].w[0] + 828u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CFB94u) [[unlikely]] return; }
L_002CFB94:
    c.f[1] = ld32((c.r[29].w[0] + 832u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[5], c.r[29].w[0] + 864u);
    c.f[3] = ld32((c.r[29].w[0] + 836u));
    set32(c.r[6], c.r[29].w[0] + 832u);
    c.f[2] = ld32((c.r[29].w[0] + 292u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 840u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 832u), c.f[4]);
    st32((c.r[29].w[0] + 836u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBD4u); st32((c.r[29].w[0] + 840u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002CFBD4u) [[unlikely]] return; }
L_002CFBD4:
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[5], c.r[29].w[0] + 848u);
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[29].w[0] + 856u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[29].w[0] + 848u), c.f[2]);
    st32((c.r[29].w[0] + 852u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFC00u); st32((c.r[29].w[0] + 860u), c.f[0]);  if (depth < kMaxDepth) unit_0027(c, 96u, depth + 1u); else { c.pc = 0x001BCD20u; return; } if (c.pc != 0x002CFC00u) [[unlikely]] return; }
L_002CFC00:
    set32(c.r[4], c.r[20].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFC0Cu); set32(c.r[5], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0026(c, 397u, depth + 1u); else { c.pc = 0x001BB7B0u; return; } if (c.pc != 0x002CFC0Cu) [[unlikely]] return; }
L_002CFC0C:
    c.f[0] = ld32((c.r[29].w[0] + 852u));
    c.f[1] = ld32((c.r[29].w[0] + 836u));
    c.f[4] = ld32((c.r[29].w[0] + 848u));
    st32((c.r[29].w[0] + 868u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 832u));
    c.f[3] = ld32((c.r[29].w[0] + 856u));
    c.f[2] = ld32((c.r[29].w[0] + 860u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 840u));
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[1]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);
    st32((c.r[29].w[0] + 864u), c.f[4]);
    st32((c.r[29].w[0] + 872u), c.f[3]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 876u), c.f[2]);  if (t) { goto L_002CFCD0; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 400u);  goto L_002CFCD4; }
    st32((c.r[29].w[0] + 796u), c.f[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 896u));
    st32((c.r[29].w[0] + 788u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 904u));
    st32((c.r[29].w[0] + 804u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 908u));
    st32((c.r[29].w[0] + 784u), c.f[4]);
    st32((c.r[29].w[0] + 792u), c.f[3]);
    st32((c.r[29].w[0] + 800u), c.f[2]);
    st32((c.r[29].w[0] + 808u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFC8Cu); st32((c.r[29].w[0] + 812u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002CFC8Cu) [[unlikely]] return; }
L_002CFC8C:
    c.f[0] = ld32((c.r[17].w[0] + 672u));
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], c.r[29].w[0] + 784u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 676u));
    st32((c.r[29].w[0] + 516u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 680u));
    st32((c.r[29].w[0] + 520u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 684u));
    st32((c.r[29].w[0] + 524u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFCC0u); st32((c.r[29].w[0] + 516u), 0u);  if (depth < kMaxDepth) unit_0017(c, 52u, depth + 1u); else { c.pc = 0x0017C710u; return; } if (c.pc != 0x002CFCC0u) [[unlikely]] return; }
L_002CFCC0:
    c.f[1] = ld32((c.r[17].w[0] + 656u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002CFE38; }
L_002CFCD0:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 1;
L_002CFCD4:
    set32(c.r[5], c.r[29].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFCE0u); set32(c.r[6], c.r[29].w[0] + 832u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002CFCE0u) [[unlikely]] return; }
L_002CFCE0:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFCF0u); st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002CFCF0u) [[unlikely]] return; }
L_002CFCF0:
    c.f[24] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD00u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002CFD00u) [[unlikely]] return; }
L_002CFD00:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD0Cu); set32(c.r[5], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002CFD0Cu) [[unlikely]] return; }
L_002CFD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD14u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002CFD14u) [[unlikely]] return; }
L_002CFD14:
    c.f[1] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_002CFD24; }
L_002CFD24:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[0];  if (t) { goto L_002CFD7C; } }
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD3Cu); set32(c.r[5], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002CFD3Cu) [[unlikely]] return; }
L_002CFD3C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = fp::ee::mul(c.fcr31, c.f[24], c.f[20]);  goto L_002CFD80; }
    c.f[0] = ld32((c.r[29].w[0] + 820u));
    c.f[2] = ld32((c.r[29].w[0] + 824u));
    c.f[1] = ld32((c.r[29].w[0] + 828u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 816u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 820u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 824u), c.f[2]);
    st32((c.r[29].w[0] + 828u), c.f[1]);
    st32((c.r[29].w[0] + 816u), c.f[0]);
    c.budget -= 11;
L_002CFD7C:
    c.f[12] = fp::ee::mul(c.fcr31, c.f[24], c.f[20]);
    c.budget -= 1;
L_002CFD80:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD8Cu); set32(c.r[5], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CFD8Cu) [[unlikely]] return; }
L_002CFD8C:
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[5], c.r[29].w[0] + 496u);
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[6], c.r[29].w[0] + 432u);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[29].w[0] + 432u), c.f[2]);
    st32((c.r[29].w[0] + 436u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDBCu); st32((c.r[29].w[0] + 444u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002CFDBCu) [[unlikely]] return; }
L_002CFDBC:
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[5], c.r[29].w[0] + 896u);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[29].w[0] + 904u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[29].w[0] + 896u), c.f[2]);
    st32((c.r[29].w[0] + 900u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDE8u); st32((c.r[29].w[0] + 908u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002CFDE8u) [[unlikely]] return; }
L_002CFDE8:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDF8u); set32(c.r[6], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002CFDF8u) [[unlikely]] return; }
L_002CFDF8:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[29].w[0] + 856u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 848u), c.f[2]);
    st32((c.r[29].w[0] + 852u), c.f[1]);
    st32((c.r[29].w[0] + 860u), c.f[0]);
    c.budget -= 11;
L_002CFE24:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF79Cu | kUnwind; return; } goto L_002CF79C; }
L_002CFE34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002CFE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE40u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 96u, depth + 1u); else { c.pc = 0x001BCD20u; return; } if (c.pc != 0x002CFE40u) [[unlikely]] return; }
L_002CFE40:
    set32(c.r[4], c.r[20].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE4Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 397u, depth + 1u); else { c.pc = 0x001BB7B0u; return; } if (c.pc != 0x002CFE4Cu) [[unlikely]] return; }
L_002CFE4C:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { st32((c.r[19].w[0]), c.f[21]);  goto L_002CFE7C; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE74u); st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 406u, depth + 1u); else { c.pc = 0x001BB960u; return; } if (c.pc != 0x002CFE74u) [[unlikely]] return; }
L_002CFE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFE9C; } }
L_002CFE7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 4u), c.f[22]);
    set32(c.r[4], c.r[29].w[0] + 560u);
    st32((c.r[19].w[0] + 8u), c.f[23]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE98u); st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 406u, depth + 1u); else { c.pc = 0x001BB960u; return; } if (c.pc != 0x002CFE98u) [[unlikely]] return; }
L_002CFE98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CFE9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 912u);  c.pc = t; return; }
L_002CFEE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFEF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002CFEF4u) [[unlikely]] return; }
L_002CFEF4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));  goto L_002CFF48; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CFF44; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 616u)));  goto L_002CFF20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 616u)));  if (t) { [[clang::musttail]] return unit_006C(c, 3u, depth); } }
L_002CFF20:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 220u), c.f[0]);  if (t) { [[clang::musttail]] return unit_006C(c, 2u, depth); } }
L_002CFF44:
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 1;
L_002CFF48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002CFF74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002CFF58u) [[unlikely]] return; }
L_002CFF58:
    set32(c.r[5], c.r[2].w[0] + 208u);
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[2], ld32((c.r[16].w[0] + 616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF6Cu); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002CFF6Cu) [[unlikely]] return; }
L_002CFF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 2u, depth); } }
L_002CFF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF7Cu);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002CFF7Cu) [[unlikely]] return; }
L_002CFF7C:
    set32(c.r[5], c.r[2].w[0] + 208u);
    set32(c.r[2], ld32((c.r[16].w[0] + 616u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF90u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x002CFF90u) [[unlikely]] return; }
L_002CFF90:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 616u)));  goto L_002CFFF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 30u, depth + 1u); else { c.pc = 0x0028C670u; return; } if (c.pc != 0x002CFFA8u) [[unlikely]] return; }
L_002CFFA8:
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 19508u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 19512u));
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19516u));
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFF0u); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002CFFF0u) [[unlikely]] return; }
L_002CFFF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 616u)));
    c.budget -= 1;
L_002CFFF4:
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0004u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_006C(c, 2u, depth);
}

}
