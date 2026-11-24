#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008C[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0,
    276, 0, 277, 0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0,
};

void unit_008C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00350000;
    case 2u: goto L_00350004;
    case 3u: goto L_00350010;
    case 4u: goto L_0035002C;
    case 5u: goto L_00350034;
    case 6u: goto L_00350048;
    case 7u: goto L_00350060;
    case 8u: goto L_00350074;
    case 9u: goto L_00350090;
    case 10u: goto L_003500C8;
    case 11u: goto L_003500D0;
    case 12u: goto L_003500E8;
    case 13u: goto L_00350118;
    case 14u: goto L_00350150;
    case 15u: goto L_00350178;
    case 16u: goto L_00350188;
    case 17u: goto L_003501BC;
    case 18u: goto L_003501C8;
    case 19u: goto L_003501D8;
    case 20u: goto L_003501E0;
    case 21u: goto L_00350208;
    case 22u: goto L_00350254;
    case 23u: goto L_00350288;
    case 24u: goto L_003502B4;
    case 25u: goto L_003502C0;
    case 26u: goto L_003502D8;
    case 27u: goto L_003502F0;
    case 28u: goto L_00350308;
    case 29u: goto L_00350324;
    case 30u: goto L_0035034C;
    case 31u: goto L_00350360;
    case 32u: goto L_00350374;
    case 33u: goto L_00350390;
    case 34u: goto L_003503A4;
    case 35u: goto L_003503BC;
    case 36u: goto L_003503C4;
    case 37u: goto L_003503E4;
    case 38u: goto L_003503EC;
    case 39u: goto L_00350430;
    case 40u: goto L_00350444;
    case 41u: goto L_00350448;
    case 42u: goto L_00350498;
    case 43u: goto L_00350544;
    case 44u: goto L_00350564;
    case 45u: goto L_003505B8;
    case 46u: goto L_003505F4;
    case 47u: goto L_00350610;
    case 48u: goto L_00350660;
    case 49u: goto L_0035069C;
    case 50u: goto L_003506B0;
    case 51u: goto L_003506D4;
    case 52u: goto L_003506F8;
    case 53u: goto L_0035070C;
    case 54u: goto L_00350730;
    case 55u: goto L_00350740;
    case 56u: goto L_00350760;
    case 57u: goto L_00350780;
    case 58u: goto L_00350798;
    case 59u: goto L_003507C8;
    case 60u: goto L_00350800;
    case 61u: goto L_00350810;
    case 62u: goto L_00350830;
    case 63u: goto L_00350854;
    case 64u: goto L_00350868;
    case 65u: goto L_00350888;
    case 66u: goto L_00350898;
    case 67u: goto L_003508C0;
    case 68u: goto L_003508D8;
    case 69u: goto L_003508F0;
    case 70u: goto L_00350938;
    case 71u: goto L_00350980;
    case 72u: goto L_003509C0;
    case 73u: goto L_00350A58;
    case 74u: goto L_00350A8C;
    case 75u: goto L_00350A94;
    case 76u: goto L_00350AA0;
    case 77u: goto L_00350AA8;
    case 78u: goto L_00350AB8;
    case 79u: goto L_00350AC8;
    case 80u: goto L_00350AD4;
    case 81u: goto L_00350B20;
    case 82u: goto L_00350B2C;
    case 83u: goto L_00350BA8;
    case 84u: goto L_00350BC4;
    case 85u: goto L_00350BD0;
    case 86u: goto L_00350BEC;
    case 87u: goto L_00350C08;
    case 88u: goto L_00350C10;
    case 89u: goto L_00350C18;
    case 90u: goto L_00350C20;
    case 91u: goto L_00350C2C;
    case 92u: goto L_00350C60;
    case 93u: goto L_00350C98;
    case 94u: goto L_00350CB8;
    case 95u: goto L_00350CC8;
    case 96u: goto L_00350CE4;
    case 97u: goto L_00350D00;
    case 98u: goto L_00350D10;
    case 99u: goto L_00350D48;
    case 100u: goto L_00350D5C;
    case 101u: goto L_00350D90;
    case 102u: goto L_00350DB4;
    case 103u: goto L_00350DC4;
    case 104u: goto L_00350DD8;
    case 105u: goto L_00350DF0;
    case 106u: goto L_00350E58;
    case 107u: goto L_00350EA8;
    case 108u: goto L_00350EE8;
    case 109u: goto L_00350F20;
    case 110u: goto L_00350F48;
    case 111u: goto L_00350FB0;
    case 112u: goto L_00350FD8;
    case 113u: goto L_00350FF4;
    case 114u: goto L_00351004;
    case 115u: goto L_0035100C;
    case 116u: goto L_00351030;
    case 117u: goto L_00351060;
    case 118u: goto L_00351090;
    case 119u: goto L_003510AC;
    case 120u: goto L_003510C0;
    case 121u: goto L_003510DC;
    case 122u: goto L_003510EC;
    case 123u: goto L_00351104;
    case 124u: goto L_00351128;
    case 125u: goto L_00351140;
    case 126u: goto L_00351154;
    case 127u: goto L_00351170;
    case 128u: goto L_00351180;
    case 129u: goto L_00351198;
    case 130u: goto L_003511D0;
    case 131u: goto L_003511D8;
    case 132u: goto L_00351248;
    case 133u: goto L_00351264;
    case 134u: goto L_00351294;
    case 135u: goto L_003512C8;
    case 136u: goto L_003512E0;
    case 137u: goto L_003512FC;
    case 138u: goto L_00351318;
    case 139u: goto L_00351358;
    case 140u: goto L_00351384;
    case 141u: goto L_00351390;
    case 142u: goto L_003513EC;
    case 143u: goto L_00351468;
    case 144u: goto L_00351490;
    case 145u: goto L_003514B8;
    case 146u: goto L_003514CC;
    case 147u: goto L_003514F8;
    case 148u: goto L_00351528;
    case 149u: goto L_0035154C;
    case 150u: goto L_00351558;
    case 151u: goto L_00351578;
    case 152u: goto L_0035159C;
    case 153u: goto L_003515A8;
    case 154u: goto L_003515C8;
    case 155u: goto L_003515D8;
    case 156u: goto L_00351688;
    case 157u: goto L_00351710;
    case 158u: goto L_00351734;
    case 159u: goto L_00351740;
    case 160u: goto L_00351774;
    case 161u: goto L_003517A8;
    case 162u: goto L_003517C0;
    case 163u: goto L_003517D0;
    case 164u: goto L_003517F4;
    case 165u: goto L_00351800;
    case 166u: goto L_00351930;
    case 167u: goto L_00351B90;
    case 168u: goto L_00351BB0;
    case 169u: goto L_00351BCC;
    case 170u: goto L_00351BF8;
    case 171u: goto L_00351C68;
    case 172u: goto L_00351D08;
    case 173u: goto L_00351D74;
    case 174u: goto L_00351E20;
    case 175u: goto L_00351E54;
    case 176u: goto L_00351E74;
    case 177u: goto L_00351ED0;
    case 178u: goto L_00351F28;
    case 179u: goto L_00351F98;
    case 180u: goto L_00351FB8;
    case 181u: goto L_00351FEC;
    case 182u: goto L_0035200C;
    case 183u: goto L_00352068;
    case 184u: goto L_003520B8;
    case 185u: goto L_00352118;
    case 186u: goto L_00352138;
    case 187u: goto L_00352160;
    case 188u: goto L_00352478;
    case 189u: goto L_00352498;
    case 190u: goto L_003524B4;
    case 191u: goto L_003524D0;
    case 192u: goto L_00352540;
    case 193u: goto L_003525E0;
    case 194u: goto L_00352648;
    case 195u: goto L_003526E0;
    case 196u: goto L_00352714;
    case 197u: goto L_00352734;
    case 198u: goto L_00352790;
    case 199u: goto L_003527E8;
    case 200u: goto L_00352858;
    case 201u: goto L_00352878;
    case 202u: goto L_003528AC;
    case 203u: goto L_003528CC;
    case 204u: goto L_00352928;
    case 205u: goto L_00352978;
    case 206u: goto L_003529D8;
    case 207u: goto L_003529F8;
    case 208u: goto L_00352A2C;
    case 209u: goto L_00352A4C;
    case 210u: goto L_00352AB0;
    case 211u: goto L_00352B18;
    case 212u: goto L_00352B80;
    case 213u: goto L_00352BA0;
    case 214u: goto L_00352C38;
    case 215u: goto L_00352C78;
    case 216u: goto L_00352CBC;
    case 217u: goto L_00352CF0;
    case 218u: goto L_00352D50;
    case 219u: goto L_00352DB0;
    case 220u: goto L_00352EC0;
    case 221u: goto L_00352ED0;
    case 222u: goto L_00352EE0;
    case 223u: goto L_00352EF0;
    case 224u: goto L_00352EF8;
    case 225u: goto L_00352F0C;
    case 226u: goto L_00352F58;
    case 227u: goto L_00352F88;
    case 228u: goto L_00352FA8;
    case 229u: goto L_00352FE0;
    case 230u: goto L_00353020;
    case 231u: goto L_00353028;
    case 232u: goto L_0035307C;
    case 233u: goto L_00353088;
    case 234u: goto L_00353098;
    case 235u: goto L_003530D8;
    case 236u: goto L_00353100;
    case 237u: goto L_00353120;
    case 238u: goto L_00353130;
    case 239u: goto L_00353148;
    case 240u: goto L_003531D4;
    case 241u: goto L_0035320C;
    case 242u: goto L_00353278;
    case 243u: goto L_003532A0;
    case 244u: goto L_003532C4;
    case 245u: goto L_003532E0;
    case 246u: goto L_00353304;
    case 247u: goto L_00353320;
    case 248u: goto L_00353330;
    case 249u: goto L_0035334C;
    case 250u: goto L_00353370;
    case 251u: goto L_00353380;
    case 252u: goto L_003533AC;
    case 253u: goto L_003533C8;
    case 254u: goto L_00353438;
    case 255u: goto L_00353440;
    case 256u: goto L_003534E0;
    case 257u: goto L_00353504;
    case 258u: goto L_00353550;
    case 259u: goto L_00353580;
    case 260u: goto L_003535B0;
    case 261u: goto L_003535E0;
    case 262u: goto L_00353610;
    case 263u: goto L_00353658;
    case 264u: goto L_00353678;
    case 265u: goto L_00353680;
    case 266u: goto L_00353688;
    case 267u: goto L_00353690;
    case 268u: goto L_003536C0;
    case 269u: goto L_003536C8;
    case 270u: goto L_00353728;
    case 271u: goto L_00353738;
    case 272u: goto L_00353750;
    case 273u: goto L_00353758;
    case 274u: goto L_00353760;
    case 275u: goto L_00353778;
    case 276u: goto L_00353780;
    case 277u: goto L_00353788;
    case 278u: goto L_00353790;
    case 279u: goto L_00353798;
    case 280u: goto L_003537A8;
    case 281u: goto L_003537B0;
    case 282u: goto L_003537D0;
    case 283u: goto L_003537F0;
    case 284u: goto L_00353810;
    case 285u: goto L_00353830;
    case 286u: goto L_00353850;
    case 287u: goto L_00353868;
    case 288u: goto L_00353898;
    case 289u: goto L_003538AC;
    case 290u: goto L_00353910;
    case 291u: goto L_00353964;
    case 292u: goto L_0035397C;
    case 293u: goto L_00353A10;
    case 294u: goto L_00353A18;
    case 295u: goto L_00353A98;
    case 296u: goto L_00353AB0;
    case 297u: goto L_00353AD8;
    case 298u: goto L_00353AE0;
    case 299u: goto L_00353AF8;
    case 300u: goto L_00353B20;
    case 301u: goto L_00353B38;
    case 302u: goto L_00353B40;
    case 303u: goto L_00353B48;
    case 304u: goto L_00353B60;
    case 305u: goto L_00353B98;
    case 306u: goto L_00353BB0;
    case 307u: goto L_00353BF4;
    case 308u: goto L_00353C08;
    case 309u: goto L_00353C48;
    case 310u: goto L_00353C60;
    case 311u: goto L_00353D68;
    case 312u: goto L_00353D70;
    case 313u: goto L_00353D98;
    case 314u: goto L_00353DD0;
    case 315u: goto L_00353E08;
    case 316u: goto L_00353E28;
    case 317u: goto L_00353EA0;
    case 318u: goto L_00353FB0;
    case 319u: goto L_00353FE4;
    default: bad_entry(c, 0x00350000u); return;
    }
L_00350000:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00350004:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_00350010:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[3], c.r[3].w[0] + 60u);  if (t) { goto L_00350034; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
L_0035002C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350010u | kUnwind; return; } goto L_00350010; } }
L_00350034:
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];  c.pc = t; return; }
L_00350048:
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_00350060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 12u, depth + 1u); else { c.pc = 0x003500E8u; return; } if (c.pc != 0x00350074u) [[unlikely]] return; }
L_00350074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 60u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_00350090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003500C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 15792u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_003500C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003500C8u);  if (depth < kMaxDepth) unit_008C(c, 12u, depth + 1u); else { c.pc = 0x003500E8u; return; } if (c.pc != 0x003500C8u) [[unlikely]] return; }
L_003500C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003500D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 6u, depth + 1u); else { c.pc = 0x00350048u; return; } if (c.pc != 0x003500D0u) [[unlikely]] return; }
L_003500D0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003500E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00350108; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15752u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_00350108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00350138; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15712u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_00350138:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 21752u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0035017C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350178u);  if (depth < kMaxDepth) unit_008C(c, 16u, depth + 1u); else { c.pc = 0x00350188u; return; } if (c.pc != 0x00350178u) [[unlikely]] return; }
L_00350178:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035017C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350188:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003501C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 15672u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_003501BC:
    c.budget -= 1;
L_003501C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003501C8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 499u, depth + 1u); else { c.pc = 0x0034FE40u; return; } if (c.pc != 0x003501C8u) [[unlikely]] return; }
L_003501C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003501F4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003501D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003501E0u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_008C(c, 21u, depth + 1u); else { c.pc = 0x00350208u; return; } if (c.pc != 0x003501E0u) [[unlikely]] return; }
L_003501E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003501D8u | kUnwind; return; } goto L_003501D8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003501F4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE58u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 500u, depth); }
L_00350208:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_00350238; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
L_00350238:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00350268; }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350254u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350254u) [[unlikely]] return; }
L_00350254:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00350268; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
L_00350268:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035041C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350288u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350288u) [[unlikely]] return; }
L_00350288:
    c.r[2].d[0] = c.r[2].sd[0] < 6144ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035041C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003502B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003502B4u) [[unlikely]] return; }
L_003502B4:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003502C0u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 39u, depth + 1u); else { c.pc = 0x00350430u; return; } if (c.pc != 0x003502C0u) [[unlikely]] return; }
L_003502C0:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003502D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x003502D8u) [[unlikely]] return; }
L_003502D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003502F0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003502F0u) [[unlikely]] return; }
L_003502F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350308u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350308u) [[unlikely]] return; }
L_00350308:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350324u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350324u) [[unlikely]] return; }
L_00350324:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_00350358; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035034Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035034Cu) [[unlikely]] return; }
L_0035034C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035041C; } }
    c.budget -= 1;
L_00350358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350360u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 42u, depth + 1u); else { c.pc = 0x00350498u; return; } if (c.pc != 0x00350360u) [[unlikely]] return; }
L_00350360:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003503F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350374u); set32(c.r[5], c.r[5].w[0] + 4u);  if (depth < kMaxDepth) unit_008C(c, 45u, depth + 1u); else { c.pc = 0x003505B8u; return; } if (c.pc != 0x00350374u) [[unlikely]] return; }
L_00350374:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_003503F4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350390u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350390u) [[unlikely]] return; }
L_00350390:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003503A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003503A4u) [[unlikely]] return; }
L_003503A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035041C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003503BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 47u, depth + 1u); else { c.pc = 0x00350610u; return; } if (c.pc != 0x003503BCu) [[unlikely]] return; }
L_003503BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003503C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 48u, depth + 1u); else { c.pc = 0x00350660u; return; } if (c.pc != 0x003503C4u) [[unlikely]] return; }
L_003503C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003503F4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003503E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003503E4u); set32(c.r[5], 0u + 6144u);  if (depth < kMaxDepth) unit_008C(c, 57u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x003503E4u) [[unlikely]] return; }
L_003503E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003503ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 59u, depth + 1u); else { c.pc = 0x003507C8u; return; } if (c.pc != 0x003503ECu) [[unlikely]] return; }
L_003503EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_00350400; }
L_003503F4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00350418; } }
L_00350400:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 6144u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
L_00350418:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0035041C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00350430:
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00350490; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 119u);  if (t) { goto L_0035044C; } }
    goto L_00350448;
L_00350444:
    set32(c.r[8], 0u + 119u);
    c.budget -= 1;
L_00350448:
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 1;
L_0035044C:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00350490; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00350478; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00350490; } }
L_00350478:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[8].d[0]) { set32(c.r[4], c.r[4].w[0] + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00350448u | kUnwind; return; } goto L_00350448; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[4], c.r[4].w[0] + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00350448u | kUnwind; return; } goto L_00350448; }
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_00350490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00350498:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 11u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003504D0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[2], 0u + 119u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = c.r[6].d[0] & 255ull;  goto L_003504D8; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00350508; } }
L_003504D0:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 119u);
    c.budget -= 2;
L_003504D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00350500; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] - 15632u);  if (t) { goto L_0035055C; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00350508; } }
L_00350500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 15632u);  if (t) { goto L_0035055C; } }
L_00350508:
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], c.r[2].w[0] >> 6);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] << 2);  if (t) { goto L_00350530; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 15584u);  if (t) { goto L_0035055C; } }
    c.budget -= 1;
L_00350530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 21080u)));
    st32((c.r[7].w[0] + 44u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 5;
L_00350544:
    c.r[5].d[0] = c.r[3].d[0] & 63ull;
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(38ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_00350570; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 15536u);
    c.budget -= 2;
L_0035055C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350564u);  if (depth < kMaxDepth) unit_008B(c, 501u, depth + 1u); else { c.pc = 0x0034FE70u; return; } if (c.pc != 0x00350564u) [[unlikely]] return; }
L_00350564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003505A8; } }
    c.budget -= 1;
L_00350570:
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 21096u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 21256u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[7].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 14;
L_003505A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003505B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] >> 3);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  goto L_00350600; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003505F4u); set32(c.r[4], c.r[4].w[0] - 15496u);  if (depth < kMaxDepth) unit_008B(c, 501u, depth + 1u); else { c.pc = 0x0034FE70u; return; } if (c.pc != 0x003505F4u) [[unlikely]] return; }
L_003505F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00350604; } }
    c.budget -= 1;
L_00350600:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00350604:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350610:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], 0u - 8u);
    set32(c.r[3], 0u + 31u);
    set32(c.r[8], 0u + 114u);
    set32(c.r[6], 0u + 78u);
    set32(c.r[7], 0u + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] >> 8);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00350660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], 0u + 8u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035069Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035069Cu) [[unlikely]] return; }
L_0035069C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003506B0u); set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003506B0u) [[unlikely]] return; }
L_003506B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003506D4u); set32(c.r[18], c.r[7].w[0] + c.r[18].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003506D4u) [[unlikely]] return; }
L_003506D4:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] <= 0; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00350730; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003506F8u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003506F8u) [[unlikely]] return; }
L_003506F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035070Cu); set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0035070Cu) [[unlikely]] return; }
L_0035070C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350730u); set32(c.r[17], c.r[17].w[0] - c.r[7].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350730u) [[unlikely]] return; }
L_00350730:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00350748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350740u); set32(c.r[4], c.r[4].w[0] - 15440u);  if (depth < kMaxDepth) unit_008B(c, 501u, depth + 1u); else { c.pc = 0x0034FE70u; return; } if (c.pc != 0x00350740u) [[unlikely]] return; }
L_00350740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00350764; } }
L_00350748:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350760u); set32(c.r[6], c.r[6].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00350760u) [[unlikely]] return; }
L_00350760:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00350764:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00350780:
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], 0u + 8u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003507BC; } }
    c.budget -= 1;
L_00350798:
    set32(c.r[2], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.r[6].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350798u | kUnwind; return; } goto L_00350798; } }
L_003507BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003507C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], 0u + 6144u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350800u); set32(c.r[6], 0u + 6144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350800u) [[unlikely]] return; }
L_00350800:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350810u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x00350810u) [[unlikely]] return; }
L_00350810:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350830u); set32(c.r[17], c.r[17].w[0] - c.r[18].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350830u) [[unlikely]] return; }
L_00350830:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] <= 0; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00350888; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350854u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350854u) [[unlikely]] return; }
L_00350854:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350868u); set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x00350868u) [[unlikely]] return; }
L_00350868:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350888u); set32(c.r[17], c.r[17].w[0] - c.r[7].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350888u) [[unlikely]] return; }
L_00350888:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003508A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350898u); set32(c.r[4], c.r[4].w[0] - 15384u);  if (depth < kMaxDepth) unit_008B(c, 501u, depth + 1u); else { c.pc = 0x0034FE70u; return; } if (c.pc != 0x00350898u) [[unlikely]] return; }
L_00350898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003508A4; } }
L_003508A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003508A4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003508C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003508E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003508D8u); set32(c.r[4], c.r[4].w[0] - 15328u);  if (depth < kMaxDepth) unit_008B(c, 501u, depth + 1u); else { c.pc = 0x0034FE70u; return; } if (c.pc != 0x003508D8u) [[unlikely]] return; }
L_003508D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003508E4; } }
L_003508E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003508E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003508F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00350910; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15288u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_00350910:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00350920; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00350920:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00350930; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00350930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00350958; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15248u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_00350958:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00350968; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00350968:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00350978; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00350978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0035099C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003509A0; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003509B0; } }
L_0035099C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003509A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15208u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_003509B0:
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003509C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003509E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15168u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_003509E0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { goto L_00350A00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15128u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE70u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 501u, depth); }
L_00350A00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 12928ull;
    set32(c.r[2], c.r[2].w[0] << 9);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00350A18u);  goto L_00350A1C; }
L_00350A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350A58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350A8Cu); set32(c.r[20], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0090(c, 476u, depth + 1u); else { c.pc = 0x00363908u; return; } if (c.pc != 0x00350A8Cu) [[unlikely]] return; }
L_00350A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 83u, depth + 1u); else { c.pc = 0x00350BA8u; return; } if (c.pc != 0x00350A94u) [[unlikely]] return; }
L_00350A94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350AA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 68u, depth + 1u); else { c.pc = 0x0035CBB8u; return; } if (c.pc != 0x00350AA0u) [[unlikely]] return; }
L_00350AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350AA8u);  if (depth < kMaxDepth) unit_008B(c, 503u, depth + 1u); else { c.pc = 0x0034FEA0u; return; } if (c.pc != 0x00350AA8u) [[unlikely]] return; }
L_00350AA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350AB8u); set32(c.r[4], c.r[4].w[0] + 3568u);  if (depth < kMaxDepth) unit_008B(c, 498u, depth + 1u); else { c.pc = 0x0034FE28u; return; } if (c.pc != 0x00350AB8u) [[unlikely]] return; }
L_00350AB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350AC8u); set32(c.r[21], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x00350AC8u) [[unlikely]] return; }
L_00350AC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350AD4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 507u, depth + 1u); else { c.pc = 0x0034FF40u; return; } if (c.pc != 0x00350AD4u) [[unlikely]] return; }
L_00350AD4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00350B18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15072u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] - 15032u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_008D(c, 110u, depth); }
L_00350B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350B20u); set32(c.r[6], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_008C(c, 71u, depth + 1u); else { c.pc = 0x00350980u; return; } if (c.pc != 0x00350B20u) [[unlikely]] return; }
L_00350B20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350B2Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_008C(c, 72u, depth + 1u); else { c.pc = 0x003509C0u; return; } if (c.pc != 0x00350B2Cu) [[unlikely]] return; }
L_00350B2C:
    st32((c.r[21].w[0] + 192u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 3024u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + 3224u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 3168u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[5], c.r[5].w[0] + 3472u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[6], c.r[6].w[0] + 3544u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[7].w[0] + 23664u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 22600u), c.r[3].w[0]);
    st32((c.r[9].w[0] + 23668u), c.r[4].w[0]);
    st32((c.r[10].w[0] + 22592u), c.r[5].w[0]);
    st32((c.r[11].w[0] + 22596u), c.r[6].w[0]);
    c.budget -= 30;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_008F(c, 7u, depth); }
L_00350BA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23664u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00350BC4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350BC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350BC4u) [[unlikely]] return; }
L_00350BC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350BECu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 476u, depth + 1u); else { c.pc = 0x00363908u; return; } if (c.pc != 0x00350BECu) [[unlikely]] return; }
L_00350BEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00350C48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350C08u);  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x00350C08u) [[unlikely]] return; }
L_00350C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 12u, depth + 1u); else { c.pc = 0x003500E8u; return; } if (c.pc != 0x00350C10u) [[unlikely]] return; }
L_00350C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350C18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 7u, depth + 1u); else { c.pc = 0x00350060u; return; } if (c.pc != 0x00350C18u) [[unlikely]] return; }
L_00350C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350C20u); st32((c.r[17].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0035C0C8u; return; } if (c.pc != 0x00350C20u) [[unlikely]] return; }
L_00350C20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350C2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 68u, depth + 1u); else { c.pc = 0x0035CBB8u; return; } if (c.pc != 0x00350C2Cu) [[unlikely]] return; }
L_00350C2C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FEF0u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 505u, depth); }
L_00350C48:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00350C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 192u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00350C88; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003500E8u | kUnwind; return; } goto L_003500E8; }
L_00350C88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350C98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350CB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 67u, depth + 1u); else { c.pc = 0x003508C0u; return; } if (c.pc != 0x00350CB8u) [[unlikely]] return; }
L_00350CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00350CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350CC8u); st32((c.r[16].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_008C(c, 12u, depth + 1u); else { c.pc = 0x003500E8u; return; } if (c.pc != 0x00350CC8u) [[unlikely]] return; }
L_00350CC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00350CF0; }
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350CE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 9u, depth + 1u); else { c.pc = 0x00350090u; return; } if (c.pc != 0x00350CE4u) [[unlikely]] return; }
L_00350CE4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00350D78; } }
L_00350CF0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00350D7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350D00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 16u, depth + 1u); else { c.pc = 0x00350188u; return; } if (c.pc != 0x00350D00u) [[unlikely]] return; }
L_00350D00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350D10u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_008C(c, 69u, depth + 1u); else { c.pc = 0x003508F0u; return; } if (c.pc != 0x00350D10u) [[unlikely]] return; }
L_00350D10:
    set32(c.r[6], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[2].w[0] + 3u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    st32((c.r[16].w[0] + 148u), c.r[7].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350D48u); st32((c.r[16].w[0] + 136u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_008C(c, 67u, depth + 1u); else { c.pc = 0x003508C0u; return; } if (c.pc != 0x00350D48u) [[unlikely]] return; }
L_00350D48:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00350D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350D5Cu);  if (depth < kMaxDepth) unit_008C(c, 12u, depth + 1u); else { c.pc = 0x003500E8u; return; } if (c.pc != 0x00350D5Cu) [[unlikely]] return; }
L_00350D5C:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 3u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
L_00350D78:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00350D7C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00350D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350DB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 70u, depth + 1u); else { c.pc = 0x00350938u; return; } if (c.pc != 0x00350DB4u) [[unlikely]] return; }
L_00350DB4:
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350DC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 71u, depth + 1u); else { c.pc = 0x00350980u; return; } if (c.pc != 0x00350DC4u) [[unlikely]] return; }
L_00350DC4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00350DD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00350118u | kUnwind; return; } goto L_00350118; }
L_00350DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_00350E58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 21816u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00350E98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21824u);
    set32(c.r[6], 0u + 768u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_00350E98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00350EA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], c.r[20].w[0] + 21824u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00350F0C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00350EE8:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { goto L_00350F0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00350EE8u | kUnwind; return; } goto L_00350EE8; }
L_00350F0C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00350FB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350F20u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x00350F20u) [[unlikely]] return; }
L_00350F20:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[20].w[0] + 21824u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[17].sd[0] <= 0; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00350F7C; } }
    set32(c.r[9], c.r[16].w[0] + 12u);
    set32(c.r[7], c.r[16].w[0] + 4u);
    c.budget -= 2;
L_00350F48:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 16u), 0u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350F48u | kUnwind; return; } goto L_00350F48; } }
L_00350F7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52428ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull | 44100ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350FB0u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x00350FB0u) [[unlikely]] return; }
L_00350FB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00350FB4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00350FD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00351018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350FF4u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x00350FF4u) [[unlikely]] return; }
L_00350FF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351004u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00351004u) [[unlikely]] return; }
L_00351004:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 2;
L_0035100C:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_00351018:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00351030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_0035107C; } }
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_00351060:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351060u | kUnwind; return; } goto L_00351060; } }
L_0035107C:
    set32(c.r[2], c.r[4].w[0] << 24);
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00351118; } }
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00351090:
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003510ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003510ACu) [[unlikely]] return; }
L_003510AC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003510C0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003510C0u) [[unlikely]] return; }
L_003510C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003510DCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003510DCu) [[unlikely]] return; }
L_003510DC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003510ECu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003510ECu) [[unlikely]] return; }
L_003510EC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351104u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351104u) [[unlikely]] return; }
L_00351104:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351090u | kUnwind; return; } goto L_00351090; } }
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 1;
L_00351118:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003511A8; } }
    set32(c.r[19], c.r[17].w[0] + 12u);
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_00351128:
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351140u) [[unlikely]] return; }
L_00351140:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351154u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351154u) [[unlikely]] return; }
L_00351154:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351170u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351170u) [[unlikely]] return; }
L_00351170:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351180u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00351180u) [[unlikely]] return; }
L_00351180:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351198u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351198u) [[unlikely]] return; }
L_00351198:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351128u | kUnwind; return; } goto L_00351128; }
L_003511A8:
    set32(c.r[2], 0u + 2u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003511D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003511D8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00351438; } }
    set32(c.r[23], c.r[20].w[0] + 12u);
    set32(c.r[2], c.r[20].w[0] + 20u);
    st32((c.r[29].w[0] + 40u), c.r[23].w[0]);
    set32(c.r[30], c.r[20].w[0] + 4u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 6;
L_00351248:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351264u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351264u) [[unlikely]] return; }
L_00351264:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x00351268u);  goto L_0035126C; }
L_0035126C:
    set32(c.r[16], c.r[2].w[0] >> 31);
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], ld32((c.r[4].w[0])));
    mmi::div(c, 0, c.r[16].w[0], c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351294u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351294u) [[unlikely]] return; }
L_00351294:
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.budget -= 8;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  goto L_0035140C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 5;
L_003512C8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00351364; } }
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003512E0:
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003512FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003512FCu) [[unlikely]] return; }
L_003512FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_0035133C; } }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00351318:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], 0u - c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; if (c.r[3].d[0] != 0) c.r[19].d[0] = c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351318u | kUnwind; return; } goto L_00351318; } }
L_0035133C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351358u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351358u) [[unlikely]] return; }
L_00351358:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003512E0u | kUnwind; return; } goto L_003512E0; }
L_00351364:
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351384u); set32(c.r[6], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351384u) [[unlikely]] return; }
L_00351384:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003513B0; } }
L_00351390:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351390u | kUnwind; return; } goto L_00351390; } }
    c.budget -= 1;
L_003513B0:
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[7].w[0]), c.r[19].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[7].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003513ECu); st32((c.r[7].w[0] + 8u), c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003513ECu) [[unlikely]] return; }
L_003513EC:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[20].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003512C8u | kUnwind; return; } goto L_003512C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_0035140C:
    set32(c.r[23], c.r[23].w[0] + 4u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[30], c.r[30].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351248u | kUnwind; return; } goto L_00351248; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00351438:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00351468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00351488; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003511D8u | kUnwind; return; } goto L_003511D8; }
L_00351488:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00351490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 21824u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003514B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003514D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003514CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 143u, depth + 1u); else { c.pc = 0x00351468u; return; } if (c.pc != 0x003514CCu) [[unlikely]] return; }
L_003514CC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003514D0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003514B8u | kUnwind; return; } goto L_003514B8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003514F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_00351528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0035154C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22592u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035154Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035154Cu) [[unlikely]] return; }
L_0035154C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00351558:
    set32(c.r[2], 0u + 1536u);
    st32((c.r[4].w[0] + 196u), c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00351568u);  goto L_0035156C; }
L_0035156C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 200u), c.r[3].w[0]);  c.pc = t; return; }
L_00351578:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0035159C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22596u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035159Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035159Cu) [[unlikely]] return; }
L_0035159C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003515A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_003515C8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 22600u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003515C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003515C8u) [[unlikely]] return; }
L_003515C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003515D8:
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[14].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00351680; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[12], ld32((c.r[14].w[0] + 60u)));
    set32(c.r[13], ld32((c.r[14].w[0] + 64u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[11], ld32((c.r[14].w[0] + 68u)));
    set32(c.r[9], 0u + 1536u);
    set32(c.r[4], 0u + 16u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 127u);
    set32(c.r[6], 0u + 15u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 127u);
    c.r[2].d[0] = 0ull | 48000ull;
    st8((c.r[14].w[0] + 14u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[14].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[14].w[0] + 24u), c.r[3].w[0]);
    st8((c.r[14].w[0] + 15u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[14].w[0] + 152u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[14].w[0] + 80u), c.r[7].w[0]);
    st32((c.r[14].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[14].w[0] + 88u), c.r[9].w[0]);
    st32((c.r[14].w[0] + 92u), c.r[12].w[0]);
    st32((c.r[14].w[0] + 96u), c.r[13].w[0]);
    st32((c.r[14].w[0] + 100u), c.r[11].w[0]);
    st32((c.r[14].w[0] + 136u), 0u);
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[14].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[14].w[0] + 140u), 0u);
    st16((c.r[14].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[14].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[14].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st32((c.r[14].w[0] + 32u), 0u);
    st32((c.r[14].w[0] + 40u), 0u);
    st32((c.r[14].w[0] + 44u), 0u);
    st32((c.r[14].w[0] + 48u), 0u);
    st32((c.r[14].w[0] + 52u), 0u);
    st32((c.r[14].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 38;
L_00351680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351688:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 11u);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 119u);  if (t) { goto L_003516B0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00351708; } }
    set32(c.r[2], 0u + 119u);
    c.budget -= 1;
L_003516B0:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[6].d[0] = ld8((c.r[5].w[0] + 16u));  goto L_003516CC; }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00351708; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 16u));
    c.budget -= 1;
L_003516CC:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 119u);  if (t) { goto L_003516EC; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 17u));
    set32(c.r[3], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00351708; } }
    set32(c.r[2], 0u + 119u);
    c.budget -= 1;
L_003516EC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00351708; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 17u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00351708; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00351708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00351734; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22608u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351734u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351734u) [[unlikely]] return; }
L_00351734:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00351740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00351774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22612u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351774u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351774u) [[unlikely]] return; }
L_00351774:
    set32(c.r[2], 0u + 96u);
    st32((c.r[17].w[0] + 184u), c.r[16].w[0]);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00351784u);  goto L_00351788; }
L_00351788:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 188u), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003517A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 22620u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003517C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003517C0u) [[unlikely]] return; }
L_003517C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003517D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003517F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22616u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003517F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003517F4u) [[unlikely]] return; }
L_003517F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00351800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x4D520000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | 20294ull;
    c.r[15].d[0] = ld8((c.r[24].w[0]));
    c.r[14].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[12].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[13].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[14], c.r[14].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 2u));
    set32(c.r[13], c.r[13].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[5].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[11].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[25].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[10].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 8));
    set32(c.r[4], c.r[25].w[0] >> 24);
    set32(c.r[2], c.r[25].w[0] << 8);
    c.r[9].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[12], c.r[12].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[14].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[13].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[11], c.r[11].w[0] << 24);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[25].w[0] << 24);
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[12].d[0];
    c.r[25].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[5].d[0];
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.budget -= 62;
    { const bool t = c.r[15].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00351B6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46460000u);
    c.r[2].d[0] = c.r[2].d[0] | 18753ull;
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[24].w[0] + c.r[25].w[0]);  goto L_00351910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00351B6C; } }
L_00351910:
    set32(c.r[11], c.r[2].w[0] - 4u);
    c.r[3].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00351B6C; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[16], 0u - 256u);
    c.r[9].d[0] = ld8((c.r[24].w[0]));
    c.budget -= 4;
L_00351930:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x444E0000u);
    c.r[8].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[10].d[0] = c.r[10].d[0] | 21331ull;
    c.r[6].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[25].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 8));
    set32(c.r[4], c.r[25].w[0] >> 24);
    set32(c.r[2], c.r[25].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[25].w[0] << 24);
    c.r[15].d[0] = c.r[9].d[0] | c.r[6].d[0];
    c.budget -= 33;
    { const bool t = c.r[15].d[0] == c.r[10].d[0]; c.r[25].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (t) { goto L_00351AE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20291ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[25].w[0] + 1u);  if (t) { goto L_00351B50; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull; c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;  if (t) { goto L_00351B60; } }
    c.r[2].d[0] = c.r[25].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00351B6C; } }
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[6], 0u + 16398u);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[13], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    set32(c.r[2], c.r[3].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[12].d[0];
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[24].w[0]));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    set32(c.r[5], c.r[5].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[6].w[0] & 31u)));
    c.budget -= 63;
    { const bool t = c.r[14].d[0] == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_00351B5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00351B6C; } }
    c.budget -= 1;
L_00351AE0:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull; c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;  if (t) { goto L_00351B60; } }
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[14], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[2].w[0] >> 8);
    set32(c.r[4], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] >> 24);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[12].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 23;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[17], c.r[24].w[0] + c.r[2].w[0]);  if (t) { goto L_00351B5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00351B6C; } }
    c.budget -= 1;
L_00351B50:
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[24], c.r[24].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00351B5C:
    c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00351B60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[24].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351930u | kUnwind; return; } goto L_00351930; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00351B6C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00351B90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] - 15008u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351BB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x00351BB0u) [[unlikely]] return; }
L_00351BB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 15000u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_00351BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351BCCu);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x00351BCCu) [[unlikely]] return; }
L_00351BCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00351BE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00351BE4; } }
    c.budget -= 1;
L_00351BE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00351BE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00351BF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 8u);  if (t) { goto L_00351C60; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00351CE0; } }
    c.budget -= 1;
L_00351C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351C68u);  if (depth < kMaxDepth) unit_008C(c, 165u, depth + 1u); else { c.pc = 0x00351800u; return; } if (c.pc != 0x00351C68u) [[unlikely]] return; }
L_00351C68:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00351CE0; } }
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 16);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00351CE0; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[7], 0u - 1u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 7u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 23;
L_00351CE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00351D08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[21], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 13u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351D74u); st32((c.r[29].w[0] + 8u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_008C(c, 170u, depth + 1u); else { c.pc = 0x00351BF8u; return; } if (c.pc != 0x00351D74u) [[unlikely]] return; }
L_00351D74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], 0u + 8u);  if (t) { goto L_00351D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00351DFC; } }
    c.budget -= 1;
L_00351D88:
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 27;
    if (c.r[2].d[0] != c.r[7].d[0]) { st16((c.r[16].w[0] + 156u), static_cast<std::uint16_t>(0u));  goto L_00351DF8; }
    st16((c.r[16].w[0] + 156u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 1;
L_00351DF8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_00351DFC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00351E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_00351F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351E54u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00367EE0u; return; } if (c.pc != 0x00351E54u) [[unlikely]] return; }
L_00351E54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00351F78; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351E74u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351E74u) [[unlikely]] return; }
L_00351E74:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_00351F20; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_00351F58; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00351ED0:
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351ED0u | kUnwind; return; } goto L_00351ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_00351F58; } }
    c.budget -= 1;
L_00351F20:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00351F58; } }
L_00351F28:
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351F28u | kUnwind; return; } goto L_00351F28; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_00351F58:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_00351F78:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00351FA4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351F98u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351F98u) [[unlikely]] return; }
L_00351F98:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00351FA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00351FB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003520F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351FECu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00367EE0u; return; } if (c.pc != 0x00351FECu) [[unlikely]] return; }
L_00351FEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003520F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035200Cu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035200Cu) [[unlikely]] return; }
L_0035200C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[8], c.r[4].w[0] - c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003520A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[9], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_003520DC; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00352068:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352068u | kUnwind; return; } goto L_00352068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003520DC; } }
    c.budget -= 1;
L_003520A8:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003520DC; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_003520B8:
    set32(c.r[2], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003520B8u | kUnwind; return; } goto L_003520B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003520DC:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_003520F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00352124; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352118u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352118u) [[unlikely]] return; }
L_00352118:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00352124:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00352138:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 156u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00352158; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351FB8u | kUnwind; return; } goto L_00351FB8; }
L_00352158:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351E20u | kUnwind; return; } goto L_00351E20; }
L_00352160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[25].d[0] = c.r[5].d[0] + 0ull;
    c.r[11].d[0] = ld8((c.r[14].w[0] + 3u));
    c.r[12].d[0] = c.r[12].d[0] | 29486ull;
    c.r[3].d[0] = ld8((c.r[14].w[0] + 2u));
    c.r[13].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[14].w[0] + 1u));
    set32(c.r[11], c.r[11].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[14].w[0]));
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[24].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == c.r[12].d[0]; set32(c.r[11], c.r[14].w[0] + 4u);  if (t) { goto L_003521CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x646E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 29486ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00352468; } }
L_003521CC:
    c.r[6].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 2u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[12].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], c.r[12].w[0] >> 8);
    set32(c.r[5], c.r[12].w[0] << 8);
    set32(c.r[4], c.r[12].w[0] << 24);
    set32(c.r[3], c.r[12].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[15].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[12].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[25].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { goto L_00352468; } }
    c.r[9].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[25], 0u + 2u);
    c.r[8].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[11].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[11].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] << 24);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[6].d[0];
    set32(c.r[6], c.r[4].w[0] >> 24);
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[5], c.r[4].w[0] << 8);
    set32(c.r[7], c.r[9].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[15].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[9].w[0] >> 24);
    set32(c.r[4], c.r[9].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[15].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 42;
    { const bool t = c.r[4].d[0] == c.r[25].d[0]; c.r[9].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00352318; } }
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003522F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00352308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0035246C; } }
    c.budget -= 1;
L_003522F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00352330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0035246C; } }
L_00352308:
    set32(c.r[2], 0u + 8u);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), c.r[2].w[0]);  if (t) { goto L_0035233C; } }
L_00352318:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), c.r[3].w[0]);  if (t) { goto L_0035233C; } }
    c.budget -= 1;
L_00352330:
    set32(c.r[2], 0u + 16u);
    st32((c.r[10].w[0]), 0u);
    st32((c.r[13].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0035233C:
    c.r[5].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[7], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[4], c.r[2].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    set32(c.r[3], c.r[2].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[11].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[4], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] >> 24);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0])));
    c.budget -= 46;
    { const bool t = c.r[10].d[0] != c.r[7].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00352410; } }
    mmi::div(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003523FCu);  goto L_00352400; }
L_00352400:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_00352464; } }
    c.budget -= 1;
L_00352410:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[2].d[0];  if (t) { goto L_00352430; } }
    mmi::div(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00352420u);  goto L_00352424; }
L_00352424:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_00352464; } }
L_00352430:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_00352460; } }
    set32(c.r[2], c.r[9].w[0] >> 31);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00352440u);  goto L_00352444; }
L_00352444:
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_00352464; } }
    c.budget -= 1;
L_00352460:
    st32((c.r[24].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00352464:
    set32(c.r[2], c.r[14].w[0] + c.r[12].w[0]);
    c.budget -= 1;
L_00352468:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035246C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00352478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] - 14992u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352498u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x00352498u) [[unlikely]] return; }
L_00352498:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14984u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_003524BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003524B4u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x003524B4u) [[unlikely]] return; }
L_003524B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003524C0; }
L_003524BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003524C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003524D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 8u);
    set32(c.r[7], c.r[29].w[0] + 4u);
    set32(c.r[9], c.r[29].w[0] + 12u);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_00352538; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003525B8; } }
L_00352538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352540u);  if (depth < kMaxDepth) unit_008C(c, 187u, depth + 1u); else { c.pc = 0x00352160u; return; } if (c.pc != 0x00352540u) [[unlikely]] return; }
L_00352540:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);  if (t) { goto L_003525B8; } }
    set32(c.r[3], c.r[4].w[0] << 16);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003525B8; } }
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 7u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 23;
L_003525B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003525E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 36u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352648u); st32((c.r[29].w[0] + 8u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_008C(c, 191u, depth + 1u); else { c.pc = 0x003524D0u; return; } if (c.pc != 0x00352648u) [[unlikely]] return; }
L_00352648:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 52u), 0u);  goto L_00352658; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003526C0; } }
L_00352658:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    st16((c.r[16].w[0] + 156u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 26;
L_003526C0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003526E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_00352838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352714u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00367EE0u; return; } if (c.pc != 0x00352714u) [[unlikely]] return; }
L_00352714:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00352838; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352734u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352734u) [[unlikely]] return; }
L_00352734:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003527E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_00352818; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00352790:
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352790u | kUnwind; return; } goto L_00352790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_00352818; } }
    c.budget -= 1;
L_003527E0:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00352818; } }
L_003527E8:
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003527E8u | kUnwind; return; } goto L_003527E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_00352818:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_00352838:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00352864; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352858u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352858u) [[unlikely]] return; }
L_00352858:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00352864:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00352878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003529B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003528ACu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00367EE0u; return; } if (c.pc != 0x003528ACu) [[unlikely]] return; }
L_003528AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003529B8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003528CCu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003528CCu) [[unlikely]] return; }
L_003528CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[8], c.r[4].w[0] - c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_00352968; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[9], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_0035299C; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00352928:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352928u | kUnwind; return; } goto L_00352928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0035299C; } }
    c.budget -= 1;
L_00352968:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0035299C; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_00352978:
    set32(c.r[2], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352978u | kUnwind; return; } goto L_00352978; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0035299C:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_003529B8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003529E4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003529D8u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003529D8u) [[unlikely]] return; }
L_003529D8:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003529E4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003529F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_00352B60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352A2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00367EE0u; return; } if (c.pc != 0x00352A2Cu) [[unlikely]] return; }
L_00352A2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00352B60; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352A4Cu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352A4Cu) [[unlikely]] return; }
L_00352A4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[10], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[11], c.r[10].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_00352B00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[12], c.r[10].w[0] + c.r[2].w[0]);  if (t) { goto L_00352B44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], c.r[2].w[0] + 22624u);
    c.budget -= 3;
L_00352AB0:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352AB0u | kUnwind; return; } goto L_00352AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_00352B44; } }
    c.budget -= 1;
L_00352B00:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00352B44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 22624u);
    c.budget -= 4;
L_00352B18:
    set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352B18u | kUnwind; return; } goto L_00352B18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_00352B44:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_00352B60:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00352B8C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352B80u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352B80u) [[unlikely]] return; }
L_00352B80:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00352B8C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00352BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 156u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00352BC8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003529F8u | kUnwind; return; } goto L_003529F8; }
L_00352BC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00352BD8; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352878u | kUnwind; return; } goto L_00352878; }
L_00352BD8:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003526E0u | kUnwind; return; } goto L_003526E0; }
L_00352C38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23140u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00352C78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23140u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00352CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352CBCu);  if (depth < kMaxDepth) unit_008C(c, 214u, depth + 1u); else { c.pc = 0x00352C38u; return; } if (c.pc != 0x00352CBCu) [[unlikely]] return; }
L_00352CBC:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00352CD4; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00352E0C; } }
L_00352CD4:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[11].w[0] - 14928u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 512u)));  if (t) { goto L_00352D44; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00352CF0:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352CF0u | kUnwind; return; } goto L_00352CF0; } }
    set32(c.r[2], c.r[11].w[0] - 14928u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00352D44:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1024u)));  if (t) { goto L_00352D9C; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00352D50:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352D50u | kUnwind; return; } goto L_00352D50; } }
L_00352D9C:
    set32(c.r[2], c.r[11].w[0] - 14928u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1536u)));  if (t) { goto L_00352DFC; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00352DB0:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352DB0u | kUnwind; return; } goto L_00352DB0; } }
L_00352DFC:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00352E0C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00352EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 23172u), c.r[4].w[0]);  c.pc = t; return; }
L_00352ED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 23172u)));  c.pc = t; return; }
L_00352EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352EF0u);  if (depth < kMaxDepth) unit_0091(c, 520u, depth + 1u); else { c.pc = 0x00367CD8u; return; } if (c.pc != 0x00352EF0u) [[unlikely]] return; }
L_00352EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352EF8u);  if (depth < kMaxDepth) unit_008C(c, 214u, depth + 1u); else { c.pc = 0x00352C38u; return; } if (c.pc != 0x00352EF8u) [[unlikely]] return; }
L_00352EF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352F0Cu); set32(c.r[6], 0u + 4160u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00352F0Cu) [[unlikely]] return; }
L_00352F0C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352EC0u | kUnwind; return; } goto L_00352EC0; }
L_00352F58:
    set32(c.r[8], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00352F88:
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 136u), c.r[3].w[0]);  c.pc = t; return; }
L_00352FA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 128u);
    set32(c.r[4], c.r[2].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 16u);
    st16((c.r[2].w[0] + 228u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 204u), 0u);
    st16((c.r[2].w[0] + 224u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 226u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_00352FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[8].w[0] + 23176u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0035304C; } }
L_00353020:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00353028:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 260u);  if (t) { goto L_0035304C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353028u | kUnwind; return; } goto L_00353028; }
L_0035304C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003530DC; } }
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + 23176u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], 0u + 260u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035307Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0035307Cu) [[unlikely]] return; }
L_0035307C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353088u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 521u, depth + 1u); else { c.pc = 0x00367D28u; return; } if (c.pc != 0x00353088u) [[unlikely]] return; }
L_00353088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003530A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353098u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 236u, depth + 1u); else { c.pc = 0x00353100u; return; } if (c.pc != 0x00353098u) [[unlikely]] return; }
L_00353098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003530DC; } }
L_003530A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[2], c.r[2].w[0] + 12120u);
    set32(c.r[3], c.r[3].w[0] + 12168u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003530D8u); st32((c.r[16].w[0] + 132u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008C(c, 228u, depth + 1u); else { c.pc = 0x00352FA8u; return; } if (c.pc != 0x003530D8u) [[unlikely]] return; }
L_003530D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003530DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00353100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00353134; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353120u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0091(c, 531u, depth + 1u); else { c.pc = 0x00367EA0u; return; } if (c.pc != 0x00353120u) [[unlikely]] return; }
L_00353120:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353130u); set32(c.r[6], 0u + 260u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00353130u) [[unlikely]] return; }
L_00353130:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00353134:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00353148:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 24u);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    set32(c.r[21], c.r[16].w[0] + 13u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    set32(c.r[22], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 136u), c.r[23].d[0]);
    set32(c.r[23], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[30], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 152u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 20u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[20].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003531D4u); st32((c.r[29].w[0] + 8u), c.r[23].w[0]);  if (depth < kMaxDepth) unit_008D(c, 81u, depth + 1u); else { c.pc = 0x00355230u; return; } if (c.pc != 0x003531D4u) [[unlikely]] return; }
L_003531D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00353404; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003532D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_00353218; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 12872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035320Cu); set32(c.r[5], c.r[5].w[0] - 12840u);  if (depth < kMaxDepth) unit_008D(c, 110u, depth + 1u); else { c.pc = 0x003564E8u; return; } if (c.pc != 0x0035320Cu) [[unlikely]] return; }
L_0035320C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00353404; } }
    c.budget -= 1;
L_00353218:
    set32(c.r[9], 0u + 96u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], 0u + 10u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[6], c.r[29].w[0] + 66u);
    set32(c.r[7], c.r[29].w[0] + 67u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[23].w[0]), c.r[9].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353278u); st32((c.r[16].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x003553B0u; return; } if (c.pc != 0x00353278u) [[unlikely]] return; }
L_00353278:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00353354; } }
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 66u));
    set32(c.r[8], c.r[29].w[0] + 50u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 67u));
    set32(c.r[9], c.r[29].w[0] + 52u);
    set32(c.r[10], c.r[29].w[0] + 54u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003532A0u); st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_008C(c, 290u, depth + 1u); else { c.pc = 0x00353910u; return; } if (c.pc != 0x003532A0u) [[unlikely]] return; }
L_003532A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00353404; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23152u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));  goto L_003533D0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003532C4u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003532C4u) [[unlikely]] return; }
L_003532C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));  if (t) { goto L_003533D0; } }
    c.budget -= 1;
L_003532D0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 66u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003532E0u); set32(c.r[7], c.r[29].w[0] + 67u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x003553B0u; return; } if (c.pc != 0x003532E0u) [[unlikely]] return; }
L_003532E0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00353354; } }
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 66u));
    set32(c.r[8], c.r[29].w[0] + 68u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 67u));
    set32(c.r[9], c.r[29].w[0] + 70u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353304u); set32(c.r[10], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_008C(c, 290u, depth + 1u); else { c.pc = 0x00353910u; return; } if (c.pc != 0x00353304u) [[unlikely]] return; }
L_00353304:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[19], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035320Cu | kUnwind; return; } goto L_0035320C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 68u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 70u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353320u); c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0091(c, 529u, depth + 1u); else { c.pc = 0x00367E70u; return; } if (c.pc != 0x00353320u) [[unlikely]] return; }
L_00353320:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353330u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 82u, depth + 1u); else { c.pc = 0x00355330u; return; } if (c.pc != 0x00353330u) [[unlikely]] return; }
L_00353330:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[20], c.r[29].w[0] + 32u);  if (t) { goto L_00353354; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035334Cu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 84u, depth + 1u); else { c.pc = 0x00355428u; return; } if (c.pc != 0x0035334Cu) [[unlikely]] return; }
L_0035334C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_00353360; }
L_00353354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00353404; } }
    c.budget -= 1;
L_00353360:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353370u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 526u, depth + 1u); else { c.pc = 0x00367DF8u; return; } if (c.pc != 0x00353370u) [[unlikely]] return; }
L_00353370:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353380u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 527u, depth + 1u); else { c.pc = 0x00367E20u; return; } if (c.pc != 0x00353380u) [[unlikely]] return; }
L_00353380:
    set32(c.r[2], c.r[16].w[0] + 52u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[7], c.r[16].w[0] + 36u);
    set32(c.r[8], c.r[16].w[0] + 38u);
    set32(c.r[9], c.r[16].w[0] + 40u);
    set32(c.r[10], c.r[16].w[0] + 44u);
    set32(c.r[11], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003533ACu); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 86u, depth + 1u); else { c.pc = 0x00355560u; return; } if (c.pc != 0x003533ACu) [[unlikely]] return; }
L_003533AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 204u);
    set32(c.r[7], c.r[16].w[0] + 208u);
    set32(c.r[8], c.r[16].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003533C8u); set32(c.r[9], c.r[16].w[0] + 226u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x003557C0u; return; } if (c.pc != 0x003533C8u) [[unlikely]] return; }
L_003533C8:
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.budget -= 2;
L_003533D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.budget -= 13;
L_00353404:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00353438:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 154u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00353440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[12].d[0] = ld16((c.r[4].w[0] + 154u));
    set32(c.r[15], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[11], 0u + 1024u);
    set32(c.r[14], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[13], ld32((c.r[4].w[0] + 68u)));
    c.r[7].d[0] = 0ull | 48000ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], 0u + 127u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[9], 0u + 127u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 20u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 152u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[15].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[14].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 140u), 0u);
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), 0u);  c.pc = t; return; }
L_003534E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353504u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 228u, depth + 1u); else { c.pc = 0x00352FA8u; return; } if (c.pc != 0x00353504u) [[unlikely]] return; }
L_00353504:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00353548; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353148u | kUnwind; return; } goto L_00353148; }
L_00353548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 37u, depth + 1u); else { c.pc = 0x00354640u; return; } if (c.pc != 0x00353550u) [[unlikely]] return; }
L_00353550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00353578; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_008D(c, 29u, depth); }
L_00353578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353580u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 64u, depth + 1u); else { c.pc = 0x00354E48u; return; } if (c.pc != 0x00353580u) [[unlikely]] return; }
L_00353580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003535A8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_008D(c, 44u, depth); }
L_003535A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003535B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 167u, depth + 1u); else { c.pc = 0x00351B90u; return; } if (c.pc != 0x003535B0u) [[unlikely]] return; }
L_003535B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003535D8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351D08u | kUnwind; return; } goto L_00351D08; }
L_003535D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003535E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 188u, depth + 1u); else { c.pc = 0x00352478u; return; } if (c.pc != 0x003535E0u) [[unlikely]] return; }
L_003535E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00353608; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003525E0u | kUnwind; return; } goto L_003525E0; }
L_00353608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353610u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 156u, depth + 1u); else { c.pc = 0x00351688u; return; } if (c.pc != 0x00353610u) [[unlikely]] return; }
L_00353610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00353638; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003515D8u | kUnwind; return; } goto L_003515D8; }
L_00353638:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u - 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00353658:
    st32((c.r[4].w[0] + 124u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), c.r[5].w[0]);  c.pc = t; return; }
L_00353678:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  c.pc = t; return; }
L_00353680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_00353688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_00353690:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = ld8((c.r[4].w[0] + 14u));  if (t) { goto L_003536AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003536B4; } }
L_003536AC:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 2;
L_003536B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003536C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));  c.pc = t; return; }
L_003536C8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00353720; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00353700; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 156u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_00353720; } }
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_00353700:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_00353720; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 156u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_00353720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_00353738:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_00353750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_00353758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  c.pc = t; return; }
L_00353760:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035376C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_0035376C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_00353780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  c.pc = t; return; }
L_00353788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 204u)));  c.pc = t; return; }
L_00353790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 224u)));  c.pc = t; return; }
L_00353798:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 226u)));  c.pc = t; return; }
L_003537A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 208u);  c.pc = t; return; }
L_003537B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 172u);
    set32(c.r[6], c.r[16].w[0] + 176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003537D0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 528u, depth + 1u); else { c.pc = 0x00367E48u; return; } if (c.pc != 0x003537D0u) [[unlikely]] return; }
L_003537D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] + 170u);
    set32(c.r[5], c.r[16].w[0] + 166u);
    set32(c.r[6], c.r[16].w[0] + 168u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0091(c, 530u, depth); }
L_003537F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 172u);
    set32(c.r[6], c.r[16].w[0] + 176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353810u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 527u, depth + 1u); else { c.pc = 0x00367E20u; return; } if (c.pc != 0x00353810u) [[unlikely]] return; }
L_00353810:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 170u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0091(c, 529u, depth); }
L_00353830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353850u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00353850u) [[unlikely]] return; }
L_00353850:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353868u); set32(c.r[8], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_008C(c, 215u, depth + 1u); else { c.pc = 0x00352C78u; return; } if (c.pc != 0x00353868u) [[unlikely]] return; }
L_00353868:
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 4u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st16((c.r[17].w[0] + 160u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 162u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00353898:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003538ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003538ACu) [[unlikely]] return; }
L_003538AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 23164u);
    set32(c.r[7], c.r[7].w[0] + 23166u);
    set32(c.r[8], c.r[8].w[0] + 23168u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352C78u | kUnwind; return; } goto L_00352C78; }
L_00353910:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003539E8; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  goto L_00353988; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353964u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00353964u) [[unlikely]] return; }
L_00353964:
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035397Cu); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 215u, depth + 1u); else { c.pc = 0x00352C78u; return; } if (c.pc != 0x0035397Cu) [[unlikely]] return; }
L_0035397C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003539F8; } }
    c.budget -= 1;
L_00353988:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  goto L_003539EC; }
    set32(c.r[2], ld32((c.r[11].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[11].w[0] + 160u));  goto L_003539D0; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[11].w[0] + 160u));  goto L_003539D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 23164u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st16((c.r[11].w[0] + 160u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 23166u));
    st16((c.r[11].w[0] + 162u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 23168u));
    st16((c.r[11].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[11].w[0] + 160u));
    c.budget -= 10;
L_003539D0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[11].w[0] + 162u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[11].w[0] + 164u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003539F4; } }
L_003539E8:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003539EC:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003539F4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003539F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00353A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_00353A18:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00353A48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 15u)));
    st32((c.r[7].w[0] + 72u), c.r[8].w[0]);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00353A38u);  goto L_00353A3C; }
L_00353A3C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 116u), 0u);  if (t) { goto L_00353A7C; } }
L_00353A48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 13u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 14u)));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 7u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    st32((c.r[7].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 1, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00353A70u);  goto L_00353A74; }
L_00353A74:
    st32((c.r[7].w[0] + 116u), 0u);
    c.r[3].d[0] = c.lo.d[1];
    c.budget -= 2;
L_00353A7C:
    st32((c.r[7].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 244u), 0u);
    st32((c.r[7].w[0] + 144u), 0u);
    st32((c.r[7].w[0] + 148u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 248u), 0u);  c.pc = t; return; }
L_00353A98:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00353AA8; } }
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00353AA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00353AD8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 23160u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00353AD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00353AD8u) [[unlikely]] return; }
L_00353AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353AE0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 537u, depth + 1u); else { c.pc = 0x00367F98u; return; } if (c.pc != 0x00353AE0u) [[unlikely]] return; }
L_00353AE0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00353AF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00353B2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353B20u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 538u, depth + 1u); else { c.pc = 0x00367FC0u; return; } if (c.pc != 0x00353B20u) [[unlikely]] return; }
L_00353B20:
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00353B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00353B38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 148u)));  c.pc = t; return; }
L_00353B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 144u)));  c.pc = t; return; }
L_00353B48:
    st32((c.r[4].w[0] + 256u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 252u), c.r[5].w[0]);  c.pc = t; return; }
L_00353B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353B98u); set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_0091(c, 533u, depth + 1u); else { c.pc = 0x00367EE8u; return; } if (c.pc != 0x00353B98u) [[unlikely]] return; }
L_00353B98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0091(c, 536u, depth); }
L_00353BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353BF4u); set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);  if (depth < kMaxDepth) unit_0091(c, 534u, depth + 1u); else { c.pc = 0x00367F18u; return; } if (c.pc != 0x00353BF4u) [[unlikely]] return; }
L_00353BF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0091(c, 536u, depth); }
L_00353C08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353C48u); set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);  if (depth < kMaxDepth) unit_0091(c, 535u, depth + 1u); else { c.pc = 0x00367F48u; return; } if (c.pc != 0x00353C48u) [[unlikely]] return; }
L_00353C48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0091(c, 536u, depth); }
L_00353C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[24].w[0] + 72u);
    set32(c.r[14], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    if (c.r[14].d[0] == 0ull) { breakpoint(c, 0x00353C7Cu);  goto L_00353C80; }
L_00353C80:
    set32(c.r[15], ld32((c.r[5].w[0] + 24u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[14].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[15].w[0] - c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[12], ld32((c.r[5].w[0] + 36u)));
    c.r[7].d[0] = c.r[7].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[13].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[9].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[13].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_00353CF4; } }
    set32(c.r[2], c.r[8].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00353CF4:
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x00353D00u);  goto L_00353D04; }
L_00353D04:
    set32(c.r[12], c.r[2].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[12].w[0], c.r[9].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[5].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[10].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[13].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[10].d[0] = c.r[13].d[0];
    c.r[2].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[14].d[0] != c.r[6].d[0]; if (c.r[2].d[0] != 0) c.r[10].d[0] = c.r[11].d[0];  if (t) { goto L_00353D40; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353BB0u | kUnwind; return; } goto L_00353BB0; }
L_00353D40:
    set32(c.r[2], ld32((c.r[24].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00353D58; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353C08u | kUnwind; return; } goto L_00353C08; }
L_00353D58:
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353B60u | kUnwind; return; } goto L_00353B60; }
L_00353D68:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00353D8C; } }
L_00353D70:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D70u | kUnwind; return; } goto L_00353D70; } }
L_00353D8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353D98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] << 1);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353DD0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 311u, depth + 1u); else { c.pc = 0x00353D68u; return; } if (c.pc != 0x00353DD0u) [[unlikely]] return; }
L_00353DD0:
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D68u | kUnwind; return; } goto L_00353D68; }
L_00353E08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 1);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D68u | kUnwind; return; } goto L_00353D68; }
L_00353E28:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    set32(c.r[20], c.r[22].w[0] + 72u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 17;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x00353E68u);  goto L_00353E6C; }
L_00353E6C:
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 68u)));
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[23], ld32((c.r[22].w[0] + 64u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[30], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.r[16].d[0] = c.hi.d[0];
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353EA0u); set32(c.r[21], ld32((c.r[20].w[0] + 32u)));  if (depth < kMaxDepth) unit_0091(c, 539u, depth + 1u); else { c.pc = 0x00367FD8u; return; } if (c.pc != 0x00353EA0u) [[unlikely]] return; }
L_00353EA0:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], c.r[17].w[0] - c.r[16].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 1u);
    mmi::mult(c, 1, c.r[2].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00353EBCu);  goto L_00353EC0; }
L_00353EC0:
    set32(c.r[4], 0u + 2u);
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[22].w[0] + 148u), c.r[19].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[17].w[0] - c.r[16].w[0]);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[17].d[0];
    set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);
    st32((c.r[22].w[0] + 144u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] - c.r[23].w[0]);  if (t) { goto L_00353F80; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_00353F08; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00353F48; } }
L_00353F08:
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 15;
    { set32(c.r[29], c.r[29].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D98u | kUnwind; return; } goto L_00353D98; }
L_00353F48:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353E08u | kUnwind; return; } goto L_00353E08; }
L_00353F80:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00353FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  [[clang::musttail]] return unit_008D(c, 5u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353FE4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00367EE0u; return; } if (c.pc != 0x00353FE4u) [[unlikely]] return; }
L_00353FE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  [[clang::musttail]] return unit_008D(c, 4u, depth); }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354004u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_008D(c, 2u, depth);
}

}
