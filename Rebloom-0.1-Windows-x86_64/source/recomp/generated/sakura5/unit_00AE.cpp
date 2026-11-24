#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AE[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
};

void unit_00AE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D8000;
    case 2u: goto L_003D800C;
    case 3u: goto L_003D8020;
    case 4u: goto L_003D8068;
    case 5u: goto L_003D8098;
    case 6u: goto L_003D80B8;
    case 7u: goto L_003D80F0;
    case 8u: goto L_003D8114;
    case 9u: goto L_003D8120;
    case 10u: goto L_003D814C;
    case 11u: goto L_003D816C;
    case 12u: goto L_003D8190;
    case 13u: goto L_003D81A4;
    case 14u: goto L_003D8200;
    case 15u: goto L_003D8230;
    case 16u: goto L_003D8248;
    case 17u: goto L_003D8260;
    case 18u: goto L_003D8288;
    case 19u: goto L_003D82A4;
    case 20u: goto L_003D82C0;
    case 21u: goto L_003D82D0;
    case 22u: goto L_003D82E4;
    case 23u: goto L_003D82EC;
    case 24u: goto L_003D8300;
    case 25u: goto L_003D8368;
    case 26u: goto L_003D83D0;
    case 27u: goto L_003D8440;
    case 28u: goto L_003D84DC;
    case 29u: goto L_003D8544;
    case 30u: goto L_003D8554;
    case 31u: goto L_003D8590;
    case 32u: goto L_003D85A4;
    case 33u: goto L_003D8610;
    case 34u: goto L_003D8630;
    case 35u: goto L_003D8660;
    case 36u: goto L_003D8678;
    case 37u: goto L_003D8690;
    case 38u: goto L_003D86B8;
    case 39u: goto L_003D86D4;
    case 40u: goto L_003D86F0;
    case 41u: goto L_003D8700;
    case 42u: goto L_003D8714;
    case 43u: goto L_003D871C;
    case 44u: goto L_003D8730;
    case 45u: goto L_003D8798;
    case 46u: goto L_003D8800;
    case 47u: goto L_003D88AC;
    case 48u: goto L_003D88D0;
    case 49u: goto L_003D8980;
    case 50u: goto L_003D8A1C;
    case 51u: goto L_003D8A60;
    case 52u: goto L_003D8A70;
    case 53u: goto L_003D8A8C;
    case 54u: goto L_003D8AB0;
    case 55u: goto L_003D8AD0;
    case 56u: goto L_003D8AE8;
    case 57u: goto L_003D8B70;
    case 58u: goto L_003D8B84;
    case 59u: goto L_003D8B98;
    case 60u: goto L_003D8CAC;
    case 61u: goto L_003D8CC0;
    case 62u: goto L_003D8D30;
    case 63u: goto L_003D8D60;
    case 64u: goto L_003D8D78;
    case 65u: goto L_003D8D90;
    case 66u: goto L_003D8DB8;
    case 67u: goto L_003D8DD4;
    case 68u: goto L_003D8DF0;
    case 69u: goto L_003D8E00;
    case 70u: goto L_003D8E28;
    case 71u: goto L_003D8E30;
    case 72u: goto L_003D8E50;
    case 73u: goto L_003D8E90;
    case 74u: goto L_003D9090;
    case 75u: goto L_003D90B0;
    case 76u: goto L_003D90F0;
    case 77u: goto L_003D9130;
    case 78u: goto L_003D91C4;
    case 79u: goto L_003D91D0;
    case 80u: goto L_003D9248;
    case 81u: goto L_003D925C;
    case 82u: goto L_003D9268;
    case 83u: goto L_003D928C;
    case 84u: goto L_003D92B4;
    case 85u: goto L_003D92CC;
    case 86u: goto L_003D9330;
    case 87u: goto L_003D9388;
    case 88u: goto L_003D93B4;
    case 89u: goto L_003D93D0;
    case 90u: goto L_003D9410;
    case 91u: goto L_003D946C;
    case 92u: goto L_003D9498;
    case 93u: goto L_003D94D8;
    case 94u: goto L_003D9510;
    case 95u: goto L_003D9530;
    case 96u: goto L_003D9544;
    case 97u: goto L_003D9590;
    case 98u: goto L_003D95B0;
    case 99u: goto L_003D95E0;
    case 100u: goto L_003D95F8;
    case 101u: goto L_003D9610;
    case 102u: goto L_003D9638;
    case 103u: goto L_003D9654;
    case 104u: goto L_003D9670;
    case 105u: goto L_003D9680;
    case 106u: goto L_003D9694;
    case 107u: goto L_003D969C;
    case 108u: goto L_003D96B0;
    case 109u: goto L_003D9718;
    case 110u: goto L_003D9780;
    case 111u: goto L_003D97F0;
    case 112u: goto L_003D9890;
    case 113u: goto L_003D992C;
    case 114u: goto L_003D9970;
    case 115u: goto L_003D9980;
    case 116u: goto L_003D99C0;
    case 117u: goto L_003D99D4;
    case 118u: goto L_003D99E8;
    case 119u: goto L_003D9A58;
    case 120u: goto L_003D9A84;
    case 121u: goto L_003D9A94;
    case 122u: goto L_003D9A9C;
    case 123u: goto L_003D9AB8;
    case 124u: goto L_003D9B20;
    case 125u: goto L_003D9B50;
    case 126u: goto L_003D9B68;
    case 127u: goto L_003D9B80;
    case 128u: goto L_003D9BA8;
    case 129u: goto L_003D9BC4;
    case 130u: goto L_003D9BE0;
    case 131u: goto L_003D9BF0;
    case 132u: goto L_003D9C18;
    case 133u: goto L_003D9C20;
    case 134u: goto L_003D9C40;
    case 135u: goto L_003D9C80;
    case 136u: goto L_003D9D70;
    case 137u: goto L_003D9D78;
    case 138u: goto L_003D9DA0;
    case 139u: goto L_003D9DB4;
    case 140u: goto L_003D9DF0;
    case 141u: goto L_003D9E48;
    case 142u: goto L_003D9E58;
    case 143u: goto L_003D9E70;
    case 144u: goto L_003D9EC4;
    case 145u: goto L_003D9EEC;
    case 146u: goto L_003D9F10;
    case 147u: goto L_003D9F50;
    case 148u: goto L_003D9F74;
    case 149u: goto L_003D9F88;
    case 150u: goto L_003D9FC4;
    case 151u: goto L_003DA05C;
    case 152u: goto L_003DA118;
    case 153u: goto L_003DA230;
    case 154u: goto L_003DA25C;
    case 155u: goto L_003DA268;
    case 156u: goto L_003DA274;
    case 157u: goto L_003DA28C;
    case 158u: goto L_003DA2B0;
    case 159u: goto L_003DA2D8;
    case 160u: goto L_003DA2F4;
    case 161u: goto L_003DA310;
    case 162u: goto L_003DA320;
    case 163u: goto L_003DA388;
    case 164u: goto L_003DA3A4;
    case 165u: goto L_003DA3C8;
    case 166u: goto L_003DA3EC;
    case 167u: goto L_003DA410;
    case 168u: goto L_003DA41C;
    case 169u: goto L_003DA434;
    case 170u: goto L_003DA440;
    case 171u: goto L_003DA468;
    case 172u: goto L_003DA510;
    case 173u: goto L_003DA538;
    case 174u: goto L_003DA5D0;
    case 175u: goto L_003DA600;
    case 176u: goto L_003DA620;
    case 177u: goto L_003DA660;
    case 178u: goto L_003DA698;
    case 179u: goto L_003DA6D0;
    case 180u: goto L_003DA6F4;
    case 181u: goto L_003DA710;
    case 182u: goto L_003DA740;
    case 183u: goto L_003DA79C;
    case 184u: goto L_003DA7C0;
    case 185u: goto L_003DA7D0;
    case 186u: goto L_003DA7F4;
    case 187u: goto L_003DA810;
    case 188u: goto L_003DA82C;
    case 189u: goto L_003DA848;
    case 190u: goto L_003DA860;
    case 191u: goto L_003DA8D4;
    case 192u: goto L_003DA8E8;
    case 193u: goto L_003DA908;
    case 194u: goto L_003DA910;
    case 195u: goto L_003DA920;
    case 196u: goto L_003DA928;
    case 197u: goto L_003DA934;
    case 198u: goto L_003DA93C;
    case 199u: goto L_003DA954;
    case 200u: goto L_003DA95C;
    case 201u: goto L_003DA964;
    case 202u: goto L_003DA9C0;
    case 203u: goto L_003DAA08;
    case 204u: goto L_003DAA1C;
    case 205u: goto L_003DAA50;
    case 206u: goto L_003DAAA8;
    case 207u: goto L_003DAB38;
    case 208u: goto L_003DAB6C;
    case 209u: goto L_003DABA0;
    case 210u: goto L_003DAC30;
    case 211u: goto L_003DAC40;
    case 212u: goto L_003DAC50;
    case 213u: goto L_003DACB8;
    case 214u: goto L_003DACCC;
    case 215u: goto L_003DACDC;
    case 216u: goto L_003DAD0C;
    case 217u: goto L_003DAD44;
    case 218u: goto L_003DAD6C;
    case 219u: goto L_003DADA0;
    case 220u: goto L_003DADD0;
    case 221u: goto L_003DAE08;
    case 222u: goto L_003DAE40;
    case 223u: goto L_003DAE7C;
    case 224u: goto L_003DAEA0;
    case 225u: goto L_003DAEC4;
    case 226u: goto L_003DAEDC;
    case 227u: goto L_003DAF44;
    case 228u: goto L_003DB028;
    case 229u: goto L_003DB048;
    case 230u: goto L_003DB0C0;
    case 231u: goto L_003DB0E8;
    case 232u: goto L_003DB110;
    case 233u: goto L_003DB250;
    case 234u: goto L_003DB28C;
    case 235u: goto L_003DB2A4;
    case 236u: goto L_003DB2B0;
    case 237u: goto L_003DB2CC;
    case 238u: goto L_003DB308;
    case 239u: goto L_003DB34C;
    case 240u: goto L_003DB360;
    case 241u: goto L_003DB398;
    case 242u: goto L_003DB3D0;
    case 243u: goto L_003DB400;
    case 244u: goto L_003DB40C;
    case 245u: goto L_003DB460;
    case 246u: goto L_003DB468;
    case 247u: goto L_003DB810;
    case 248u: goto L_003DB848;
    case 249u: goto L_003DB86C;
    case 250u: goto L_003DB890;
    case 251u: goto L_003DB8B4;
    case 252u: goto L_003DB920;
    case 253u: goto L_003DBA40;
    case 254u: goto L_003DBA54;
    case 255u: goto L_003DBAC0;
    case 256u: goto L_003DBAF0;
    case 257u: goto L_003DBB08;
    case 258u: goto L_003DBB20;
    case 259u: goto L_003DBB48;
    case 260u: goto L_003DBB64;
    case 261u: goto L_003DBB80;
    case 262u: goto L_003DBB90;
    case 263u: goto L_003DBBD0;
    case 264u: goto L_003DBBEC;
    case 265u: goto L_003DBC08;
    case 266u: goto L_003DBC40;
    case 267u: goto L_003DBC54;
    case 268u: goto L_003DBC80;
    case 269u: goto L_003DBCC4;
    case 270u: goto L_003DBCD0;
    case 271u: goto L_003DBD00;
    case 272u: goto L_003DBD10;
    case 273u: goto L_003DBD24;
    case 274u: goto L_003DBD90;
    case 275u: goto L_003DBDC0;
    case 276u: goto L_003DBDD8;
    case 277u: goto L_003DBDF0;
    case 278u: goto L_003DBE18;
    case 279u: goto L_003DBE34;
    case 280u: goto L_003DBE50;
    case 281u: goto L_003DBE60;
    case 282u: goto L_003DBEA0;
    case 283u: goto L_003DBEBC;
    case 284u: goto L_003DBECC;
    case 285u: goto L_003DBF00;
    case 286u: goto L_003DBF14;
    case 287u: goto L_003DBF40;
    case 288u: goto L_003DBF84;
    case 289u: goto L_003DBF90;
    case 290u: goto L_003DBFC0;
    case 291u: goto L_003DBFD0;
    case 292u: goto L_003DBFE4;
    default: bad_entry(c, 0x003D8000u); return;
    }
L_003D8000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003D800C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D8020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D80D8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D80D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8068u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x003D8068u) [[unlikely]] return; }
L_003D8068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[20] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);  goto L_003D8088; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_003D8090; } }
L_003D8088:
    c.f[20] = c.r[2].w[0];
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 2;
L_003D8090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8098u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x003D8098u) [[unlikely]] return; }
L_003D8098:
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D80B8u); set32(c.r[16], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x003D80B8u) [[unlikely]] return; }
L_003D80B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 7;
L_003D80D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D80D8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D80F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D8118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8114u);  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003D8120u; return; } if (c.pc != 0x003D8114u) [[unlikely]] return; }
L_003D8114:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D8118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D8120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  goto L_003D8154; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D814Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D814Cu) [[unlikely]] return; }
L_003D814C:
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 2;
L_003D8154:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D8174; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D816Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D816Cu) [[unlikely]] return; }
L_003D816C:
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003D8174:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D8190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D81A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D81A4u) [[unlikely]] return; }
L_003D81A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 7840u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003D81DC; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D81E4; } }
L_003D81DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_003D81E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D8200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D8248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8230u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D8230u) [[unlikely]] return; }
L_003D8230:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D824C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8248u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D8248u) [[unlikely]] return; }
L_003D8248:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D824C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D8260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8288u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D8288u) [[unlikely]] return; }
L_003D8288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D82A8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 12u, depth + 1u); else { c.pc = 0x003D8190u; return; } if (c.pc != 0x003D82A4u) [[unlikely]] return; }
L_003D82A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D82A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D82C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 255u);  c.pc = t; return; }
L_003D82D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 27u, depth + 1u); else { c.pc = 0x003D8440u; return; } if (c.pc != 0x003D82E4u) [[unlikely]] return; }
L_003D82E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D82ECu) [[unlikely]] return; }
L_003D82EC:
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D8300:
    set32(c.r[29], c.r[29].w[0] - 80u);
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D8420; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 60u));  goto L_003D834C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003D8424; } }
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 1;
L_003D834C:
    set32(c.r[16], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.r[17].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D8410; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003D8368:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003D83A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 52u), 0u);  goto L_003D83B8; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8420; } }
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D83B8; } }
L_003D83A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_003D83B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D83D0u); st32((c.r[18].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 27u, depth + 1u); else { c.pc = 0x003D8440u; return; } if (c.pc != 0x003D83D0u) [[unlikely]] return; }
L_003D83D0:
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003D83F8; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 60u));  goto L_003D83FC; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8420; } }
L_003D83F8:
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 1;
L_003D83FC:
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8368u | kUnwind; return; } goto L_003D8368; }
    c.budget -= 1;
L_003D8410:
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 60u), c.f[20]);
    c.budget -= 4;
L_003D8420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003D8424:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D8440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 20;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  goto L_003D84F0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_003D84C4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8580; } }
L_003D84C4:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D84DCu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D84DCu) [[unlikely]] return; }
L_003D84DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), 0u);  if (t) { goto L_003D8554; } }
L_003D84F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D8558; }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_003D852C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8580; } }
L_003D852C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8544u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D8544u) [[unlikely]] return; }
L_003D8544:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8554u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003D8554u) [[unlikely]] return; }
L_003D8554:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D8558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003D8580; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D8590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D85A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D85A4u) [[unlikely]] return; }
L_003D85A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 7904u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003D85DC; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8618; } }
L_003D85DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003D8614; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8610u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D8610u) [[unlikely]] return; }
L_003D8610:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003D8614:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D8618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D8630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D8678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8660u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D8660u) [[unlikely]] return; }
L_003D8660:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D867C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D8678u) [[unlikely]] return; }
L_003D8678:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D867C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D8690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D86B8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D86B8u) [[unlikely]] return; }
L_003D86B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D86D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D86D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 31u, depth + 1u); else { c.pc = 0x003D8590u; return; } if (c.pc != 0x003D86D4u) [[unlikely]] return; }
L_003D86D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D86D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D86F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 251u);  c.pc = t; return; }
L_003D8700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8714u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 48u, depth + 1u); else { c.pc = 0x003D88D0u; return; } if (c.pc != 0x003D8714u) [[unlikely]] return; }
L_003D8714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D871Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D871Cu) [[unlikely]] return; }
L_003D871C:
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D8730:
    set32(c.r[29], c.r[29].w[0] - 80u);
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D88AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 60u));  goto L_003D877C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003D88B0; } }
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 1;
L_003D877C:
    set32(c.r[16], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.r[17].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D8840; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003D8798:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003D87D8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 52u), 0u);  goto L_003D87E8; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003D88AC; } }
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D87E8; } }
L_003D87D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_003D87E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8800u); st32((c.r[18].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 48u, depth + 1u); else { c.pc = 0x003D88D0u; return; } if (c.pc != 0x003D8800u) [[unlikely]] return; }
L_003D8800:
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003D8828; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 60u));  goto L_003D882C; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003D88AC; } }
L_003D8828:
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 1;
L_003D882C:
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8798u | kUnwind; return; } goto L_003D8798; }
    c.budget -= 1;
L_003D8840:
    set32(c.r[3], 0u + 8u);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 60u), c.f[20]);
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 32u)));  goto L_003D8898; }
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    st32((c.r[5].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 76u));
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.f[0]);  if (t) { goto L_003D88AC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 1;
L_003D8898:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D88AC; } }
    c.f[13] = ld32((c.r[18].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D88ACu); c.f[12] = ld32((c.r[18].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 182u, depth + 1u); else { c.pc = 0x001593B0u; return; } if (c.pc != 0x003D88ACu) [[unlikely]] return; }
L_003D88AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003D88B0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D88D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 25;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  goto L_003D89C8; }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_003D8968; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8B48; } }
L_003D8968:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8980u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D8980u) [[unlikely]] return; }
L_003D8980:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_003D89A4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  goto L_003D89B8; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003D89A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8B48; } }
L_003D89B8:
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_003D8A70; } }
L_003D89C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  goto L_003D8A74; }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_003D8A04; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8B48; } }
L_003D8A04:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A1Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D8A1Cu) [[unlikely]] return; }
L_003D8A1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_003D8A40; }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_003D8A54; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003D8A40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003D8B48; } }
L_003D8A54:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A60u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003D8A60u) [[unlikely]] return; }
L_003D8A60:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 228u, depth + 1u); else { c.pc = 0x00159AE0u; return; } if (c.pc != 0x003D8A70u) [[unlikely]] return; }
L_003D8A70:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 1;
L_003D8A74:
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_003D8A84; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D8A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D8A8Cu) [[unlikely]] return; }
L_003D8A8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[22] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8AB0u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D8AB0u) [[unlikely]] return; }
L_003D8AB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8AD0u); c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D8AD0u) [[unlikely]] return; }
L_003D8AD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8AE8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D8AE8u) [[unlikely]] return; }
L_003D8AE8:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[17].w[0] + 64u), c.f[1]);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[20]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    st32((c.r[17].w[0] + 68u), c.f[3]);
    st32((c.r[17].w[0] + 72u), c.f[2]);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = 0u;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 23;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003D8B48; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D8B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D8B84u) [[unlikely]] return; }
L_003D8B84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8B98u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003D93D0u; return; } if (c.pc != 0x003D8B98u) [[unlikely]] return; }
L_003D8B98:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0] + 64u), c.r[3].w[0]);  goto L_003D8BBC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 2;
L_003D8BBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003D8D04; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D8D08; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003D8D04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D8D04; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003D8D04; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D8D04; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 10;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 32u)));  goto L_003D8C4C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_003D8C90; } }
L_003D8C4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  goto L_003D8C78; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  goto L_003D8C68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003D8C94; } }
L_003D8C68:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  goto L_003D8C90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_003D8C90; } }
L_003D8C78:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003D8C8C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_003D8C90; } }
L_003D8C8C:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_003D8C90:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003D8C94:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003D8CB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8CACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003D9410u; return; } if (c.pc != 0x003D8CACu) [[unlikely]] return; }
L_003D8CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003D8CB8; } }
L_003D8CB4:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003D8CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8CC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 86u, depth + 1u); else { c.pc = 0x003D9330u; return; } if (c.pc != 0x003D8CC0u) [[unlikely]] return; }
L_003D8CC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D8D04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D8D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D8D18; } }
L_003D8D04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D8D08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003D8D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D8D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D8D78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8D60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D8D60u) [[unlikely]] return; }
L_003D8D60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D8D7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8D78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D8D78u) [[unlikely]] return; }
L_003D8D78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D8D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D8D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8DB8u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D8DB8u) [[unlikely]] return; }
L_003D8DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D8DD8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8DD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 57u, depth + 1u); else { c.pc = 0x003D8B70u; return; } if (c.pc != 0x003D8DD4u) [[unlikely]] return; }
L_003D8DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D8DD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D8DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 254u);  c.pc = t; return; }
L_003D8E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D8E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8E28u);  if (depth < kMaxDepth) unit_00AE(c, 79u, depth + 1u); else { c.pc = 0x003D91D0u; return; } if (c.pc != 0x003D8E28u) [[unlikely]] return; }
L_003D8E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8E30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D8E30u) [[unlikely]] return; }
L_003D8E30:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 3;
L_003D8E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D8E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D9098; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 72u));  goto L_003D8E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9098; } }
L_003D8E90:
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 1;
L_003D8E94:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003D8EA4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8EA4:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  goto L_003D8EC4; }
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_003D9098; } }
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 1;
L_003D8EC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D9098; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_003D9030; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_003D8FD0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_003D8F68; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D8F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D907C; } }
L_003D8F08:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D8F38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003D9088; }
L_003D8F38:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8F50; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003D9084; } }
L_003D8F50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D9098; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_003D8F68:
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8F88; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_003D8F88:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D9084; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8FB8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003D9084; } }
L_003D8FB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D9098; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_003D8FD0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003D8FE8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_003D8FE8:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D9084; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9018; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003D9084; } }
L_003D9018:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D9098; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_003D9030:
    set32(c.r[5], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9084; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9068; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003D9084; } }
    c.budget -= 1;
L_003D9068:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D9098; } }
L_003D907C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9098; } }
L_003D9084:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D9088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9090u);  if (depth < kMaxDepth) unit_00AE(c, 79u, depth + 1u); else { c.pc = 0x003D91D0u; return; } if (c.pc != 0x003D9090u) [[unlikely]] return; }
L_003D9090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8E90u | kUnwind; return; } goto L_003D8E90; } }
L_003D9098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D90B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D9118; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D90E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D911C; } }
L_003D90E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D90F0u);  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D90F0u) [[unlikely]] return; }
L_003D90F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D9118; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 8;
L_003D9118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D911C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D91C8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 40u)));  goto L_003D916C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D91C4; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 40u)));
    c.budget -= 1;
L_003D916C:
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 32u)));  goto L_003D91B0; }
    c.f[0] = ld32((c.r[6].w[0] + 76u));
    st32((c.r[5].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 80u));
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 84u));
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 88u));
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.f[0]);  if (t) { goto L_003D91C4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 1;
L_003D91B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D91C4; } }
    c.f[13] = ld32((c.r[6].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D91C4u); c.f[12] = ld32((c.r[6].w[0] + 76u));  if (depth < kMaxDepth) unit_000E(c, 182u, depth + 1u); else { c.pc = 0x001593B0u; return; } if (c.pc != 0x003D91C4u) [[unlikely]] return; }
L_003D91C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D91C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D91D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 46871ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 19;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  goto L_003D9238; }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003D925C; } }
L_003D9238:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_003D9260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9248u); set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003D9248u) [[unlikely]] return; }
L_003D9248:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D925Cu); set32(c.r[4], ld32((c.r[3].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 228u, depth + 1u); else { c.pc = 0x00159AE0u; return; } if (c.pc != 0x003D925Cu) [[unlikely]] return; }
L_003D925C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003D9260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9268u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D9268u) [[unlikely]] return; }
L_003D9268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.f[1] = c.r[2].w[0];
    c.f[22] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D928Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D928Cu) [[unlikely]] return; }
L_003D928C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D92B4u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D92B4u) [[unlikely]] return; }
L_003D92B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D92CCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003D92CCu) [[unlikely]] return; }
L_003D92CC:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[16].w[0] + 76u), c.f[1]);
    c.f[3] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[20]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    st32((c.r[16].w[0] + 80u), c.f[3]);
    st32((c.r[16].w[0] + 84u), c.f[2]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D9330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003D9390; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003D9364; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D93BC; } }
L_003D9364:
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9388u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D9388u) [[unlikely]] return; }
L_003D9388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003D93B8; } }
L_003D9390:
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D93B4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D93B4u) [[unlikely]] return; }
L_003D93B4:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_003D93B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D93BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D93D0:
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D93FC; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 48u)));  goto L_003D93F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9404; } }
L_003D93F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003D9404; } }
L_003D93FC:
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 2;
L_003D9404:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D9410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003D94FC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003D94BC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003D947C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003D9458; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D9520; } }
L_003D9458:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D946Cu); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D946Cu) [[unlikely]] return; }
L_003D946C:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003D951C; } }
L_003D947C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9498u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D9498u) [[unlikely]] return; }
L_003D9498:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D951C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  if (t) { goto L_003D951C; } }
L_003D94BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D94D8u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D94D8u) [[unlikely]] return; }
L_003D94D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D951C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  if (t) { goto L_003D951C; } }
L_003D94FC:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9510u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D9510u) [[unlikely]] return; }
L_003D9510:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003D951C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D9520:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9544u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D9544u) [[unlikely]] return; }
L_003D9544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 8032u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 8u)));  goto L_003D957C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D959C; } }
L_003D957C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003D9594; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9590u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D9590u) [[unlikely]] return; }
L_003D9590:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003D9594:
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003D959C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D95B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D95F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D95E0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D95E0u) [[unlikely]] return; }
L_003D95E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D95FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D95F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D95F8u) [[unlikely]] return; }
L_003D95F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D95FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D9610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9638u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D9638u) [[unlikely]] return; }
L_003D9638:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D9658; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9654u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 95u, depth + 1u); else { c.pc = 0x003D9530u; return; } if (c.pc != 0x003D9654u) [[unlikely]] return; }
L_003D9654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D9658:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D9670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 250u);  c.pc = t; return; }
L_003D9680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 111u, depth + 1u); else { c.pc = 0x003D97F0u; return; } if (c.pc != 0x003D9694u) [[unlikely]] return; }
L_003D9694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D969Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D969Cu) [[unlikely]] return; }
L_003D969C:
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D96B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D97D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 60u));  goto L_003D96FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003D97D4; } }
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 1;
L_003D96FC:
    set32(c.r[16], ld32((c.r[18].w[0] + 52u)));
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.r[17].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D97C0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003D9718:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003D9758; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 52u), 0u);  goto L_003D9768; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003D97D0; } }
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9768; } }
L_003D9758:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_003D9768:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9780u); st32((c.r[18].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 111u, depth + 1u); else { c.pc = 0x003D97F0u; return; } if (c.pc != 0x003D9780u) [[unlikely]] return; }
L_003D9780:
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003D97A8; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 60u));  goto L_003D97AC; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003D97D0; } }
L_003D97A8:
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 1;
L_003D97AC:
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9718u | kUnwind; return; } goto L_003D9718; }
    c.budget -= 1;
L_003D97C0:
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 60u), c.f[20]);
    c.budget -= 4;
L_003D97D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003D97D4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D97F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 21;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  goto L_003D98D8; }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_003D9878; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D99AC; } }
L_003D9878:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9890u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D9890u) [[unlikely]] return; }
L_003D9890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D98B4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  goto L_003D98C8; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D98B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D99AC; } }
L_003D98C8:
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_003D9980; } }
L_003D98D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D9984; }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_003D9914; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D99AC; } }
L_003D9914:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D992Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D992Cu) [[unlikely]] return; }
L_003D992C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D9950; }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_003D9964; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D9950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D99AC; } }
L_003D9964:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9970u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003D9970u) [[unlikely]] return; }
L_003D9970:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9980u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 228u, depth + 1u); else { c.pc = 0x00159AE0u; return; } if (c.pc != 0x003D9980u) [[unlikely]] return; }
L_003D9980:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D9984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003D99AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D99AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D99C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D99D4u) [[unlikely]] return; }
L_003D99D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 146u, depth + 1u); else { c.pc = 0x003D9F10u; return; } if (c.pc != 0x003D99E8u) [[unlikely]] return; }
L_003D99E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003D9AF8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D9AFC; }
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9AF8; } }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 24u)));  goto L_003D9A34; }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D9AF8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 1;
L_003D9A34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 56u), c.r[4].w[0]);  goto L_003D9AA4; }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);  goto L_003D9A50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_003D9A68; } }
L_003D9A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A58u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D9A58u) [[unlikely]] return; }
L_003D9A58:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_003D9A68:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003D9A8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A84u); set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D9A84u) [[unlikely]] return; }
L_003D9A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003D9AB0; } }
L_003D9A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A94u);  if (depth < kMaxDepth) unit_00AE(c, 143u, depth + 1u); else { c.pc = 0x003D9E70u; return; } if (c.pc != 0x003D9A94u) [[unlikely]] return; }
L_003D9A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003D9A9Cu) [[unlikely]] return; }
L_003D9A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003D9AB0; } }
L_003D9AA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
L_003D9AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9AB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 143u, depth + 1u); else { c.pc = 0x003D9E70u; return; } if (c.pc != 0x003D9AB8u) [[unlikely]] return; }
L_003D9AB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9AF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D9B0C; } }
L_003D9AF8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D9AFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003D9B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D9B68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B50u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D9B50u) [[unlikely]] return; }
L_003D9B50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D9B6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D9B68u) [[unlikely]] return; }
L_003D9B68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D9B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D9B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9BA8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D9BA8u) [[unlikely]] return; }
L_003D9BA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D9BC8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9BC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 116u, depth + 1u); else { c.pc = 0x003D99C0u; return; } if (c.pc != 0x003D9BC4u) [[unlikely]] return; }
L_003D9BC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D9BC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D9BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 253u);  c.pc = t; return; }
L_003D9BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D9C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C18u);  if (depth < kMaxDepth) unit_00AE(c, 140u, depth + 1u); else { c.pc = 0x003D9DF0u; return; } if (c.pc != 0x003D9C18u) [[unlikely]] return; }
L_003D9C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D9C20u) [[unlikely]] return; }
L_003D9C20:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 3;
L_003D9C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D9D80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 68u));  goto L_003D9C84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9D80; } }
L_003D9C80:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.budget -= 1;
L_003D9C84:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003D9C94; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D9C94:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  goto L_003D9CB4; }
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_003D9D80; } }
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 1;
L_003D9CB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D9D38; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9D00; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D9D38; } }
    c.budget -= 1;
L_003D9D00:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  goto L_003D9D24; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003D9D80; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003D9D24:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003D9D68; } }
L_003D9D38:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D9D68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 5;
L_003D9D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 143u, depth + 1u); else { c.pc = 0x003D9E70u; return; } if (c.pc != 0x003D9D70u) [[unlikely]] return; }
L_003D9D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 140u, depth + 1u); else { c.pc = 0x003D9DF0u; return; } if (c.pc != 0x003D9D78u) [[unlikely]] return; }
L_003D9D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9C80u | kUnwind; return; } goto L_003D9C80; } }
L_003D9D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D9DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9DB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D9DB4u) [[unlikely]] return; }
L_003D9DB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D9DD8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
L_003D9DD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 32u)));  goto L_003D9E38; }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_003D9E58; } }
L_003D9E38:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D9E5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E48u); set32(c.r[5], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003D9E48u) [[unlikely]] return; }
L_003D9E48:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E58u); set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_000E(c, 228u, depth + 1u); else { c.pc = 0x00159AE0u; return; } if (c.pc != 0x003D9E58u) [[unlikely]] return; }
L_003D9E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D9E5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 48u)));  goto L_003D9ECC; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 48u)));  goto L_003D9EA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_003D9EF4; } }
L_003D9EA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9EC4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D9EC4u) [[unlikely]] return; }
L_003D9EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003D9EF0; } }
L_003D9ECC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9EECu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003D9EECu) [[unlikely]] return; }
L_003D9EEC:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003D9EF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_003D9EF4:
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9F10:
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D9F3C; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 48u)));  goto L_003D9F34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9F44; } }
L_003D9F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003D9F44; } }
L_003D9F3C:
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 2;
L_003D9F44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D9F50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F74u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D9F74u) [[unlikely]] return; }
L_003D9F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 8160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F88u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x00181080u; return; } if (c.pc != 0x003D9F88u) [[unlikely]] return; }
L_003D9F88:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 96u), 0u);
    st32((c.r[20].w[0] + 112u), 0u);
    st32((c.r[20].w[0] + 108u), 0u);
    st32((c.r[20].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 116u), c.r[4].w[0]);  if (t) { goto L_003DA1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9FC4u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003D9FC4u) [[unlikely]] return; }
L_003D9FC4:
    st32((c.r[20].w[0] + 120u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_003DA1F4; }
    st32((c.r[20].w[0] + 400u), 0u);
    c.f[1] = 0u;
    st32((c.r[20].w[0] + 404u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 352u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003DA034; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA034:
    st32((c.r[20].w[0] + 360u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[20].w[0] + 144u);  goto L_003DA058; }
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[19], c.r[20].w[0] + 144u);
    c.budget -= 5;
L_003DA058:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA05C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_003DA0B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_003DA0A0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003DA088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA0C8; } }
    c.budget -= 1;
L_003DA088:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003DA0C8; } }
    c.budget -= 1;
L_003DA0A0:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_003DA0C8; } }
    c.budget -= 1;
L_003DA0B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[16], 0u + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
L_003DA0C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[6], c.r[19].w[0] + 16u);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[19].w[0] + 28u), c.f[0]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[3]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[19].w[0] + 44u), c.f[0]);
    st32((c.r[19].w[0] + 32u), c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA118u); st32((c.r[19].w[0] + 40u), c.f[3]);  if (depth < kMaxDepth) unit_00AE(c, 252u, depth + 1u); else { c.pc = 0x003DB920u; return; } if (c.pc != 0x003DA118u) [[unlikely]] return; }
L_003DA118:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA160; } }
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA160; } }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA160; } }
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA178; } }
L_003DA160:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_003DA198; } }
    c.budget -= 1;
L_003DA178:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_003DA198:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA05Cu | kUnwind; return; } goto L_003DA05C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0]));
    st32((c.r[20].w[0] + 124u), c.f[1]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 128u), c.f[1]);  if (t) { goto L_003DA1E8; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003DA1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003DA204; } }
L_003DA1F0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_003DA1F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003DA204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003DA230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DA28C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 8160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA25Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 185u, depth + 1u); else { c.pc = 0x003DA7D0u; return; } if (c.pc != 0x003DA25Cu) [[unlikely]] return; }
L_003DA25C:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA268u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 126u, depth + 1u); else { c.pc = 0x00181170u; return; } if (c.pc != 0x003DA268u) [[unlikely]] return; }
L_003DA268:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DA274u) [[unlikely]] return; }
L_003DA274:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DA290; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA28Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DA28Cu) [[unlikely]] return; }
L_003DA28C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DA290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DA2B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2D8u); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DA2D8u) [[unlikely]] return; }
L_003DA2D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DA2F8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 147u, depth + 1u); else { c.pc = 0x003D9F50u; return; } if (c.pc != 0x003DA2F4u) [[unlikely]] return; }
L_003DA2F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DA2F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DA310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 600u);  c.pc = t; return; }
L_003DA320:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DA630; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA388u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003DA388u) [[unlikely]] return; }
L_003DA388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003DA618; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA3A4u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003DA3A4u) [[unlikely]] return; }
L_003DA3A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003DA618; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA3C8u); set32(c.r[5], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003DA3C8u) [[unlikely]] return; }
L_003DA3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_003DA618; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA3ECu); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003DA3ECu) [[unlikely]] return; }
L_003DA3EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003DA618; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA410u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003DA410u) [[unlikely]] return; }
L_003DA410:
    st32((c.r[16].w[0] + 408u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA41Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003DA41Cu) [[unlikely]] return; }
L_003DA41C:
    st32((c.r[16].w[0] + 412u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[22], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA434u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003DA434u) [[unlikely]] return; }
L_003DA434:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA440u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003DA440u) [[unlikely]] return; }
L_003DA440:
    st32((c.r[16].w[0] + 416u), c.f[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.f[1] = 0u;
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[21], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[20], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[19], c.r[4].w[0] - 1u);  if (t) { goto L_003DA5A0; } }
L_003DA468:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 48u), c.r[4].w[0]);  if (t) { goto L_003DA4B8; } }
    c.budget -= 1;
L_003DA488:
    set32(c.r[4], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_003DA4A8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 48u), c.r[4].w[0]);  if (t) { goto L_003DA4B8; } }
L_003DA4A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[21].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 4;
L_003DA4B8:
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DA4D0; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 80u), c.r[4].w[0]);  if (t) { goto L_003DA4F0; } }
L_003DA4D0:
    c.r[4].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DA4E8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 80u), c.r[4].w[0]);  if (t) { goto L_003DA4F0; } }
L_003DA4E8:
    st32((c.r[21].w[0] + 80u), 0u);
    c.budget -= 2;
L_003DA4F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA550; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_003DA530; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA510u); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003DA510u) [[unlikely]] return; }
L_003DA510:
    c.f[1] = ld32((c.r[16].w[0] + 416u));
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);  if (t) { goto L_003DA548; } }
    c.budget -= 1;
L_003DA530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA538u); set32(c.r[4], ld32((c.r[16].w[0] + 356u)));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003DA538u) [[unlikely]] return; }
L_003DA538:
    c.f[1] = ld32((c.r[16].w[0] + 416u));
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_003DA548:
    c.f[1] = 0u;
    c.budget -= 2;
L_003DA550:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DA568; } }
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    st32((c.r[21].w[0] + 52u), c.f[0]);
    c.budget -= 2;
L_003DA568:
    st32((c.r[20].w[0] + 12u), 0u);
    st32((c.r[20].w[0] + 16u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    set32(c.r[21], c.r[21].w[0] + 96u);
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    set32(c.r[20], c.r[20].w[0] + 48u);
    c.r[4].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA468u | kUnwind; return; } goto L_003DA468; } }
    c.budget -= 1;
L_003DA5A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003DA5D8; }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA5D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AE(c, 205u, depth + 1u); else { c.pc = 0x003DAA50u; return; } if (c.pc != 0x003DA5D0u) [[unlikely]] return; }
L_003DA5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 4u));  if (t) { goto L_003DA5E4; } }
L_003DA5D8:
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
L_003DA5E4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003DA608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA600u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 222u, depth + 1u); else { c.pc = 0x003DAE40u; return; } if (c.pc != 0x003DA600u) [[unlikely]] return; }
L_003DA600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA610; } }
L_003DA608:
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003DA610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003DA634; } }
L_003DA618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 185u, depth + 1u); else { c.pc = 0x003DA7D0u; return; } if (c.pc != 0x003DA620u) [[unlikely]] return; }
L_003DA620:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003DA630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003DA634:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003DA660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003DA79C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA698u); set32(c.r[4], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x003DA698u) [[unlikely]] return; }
L_003DA698:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DA704; }
    c.f[1] = ld32((c.r[17].w[0] + 400u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DA6E8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AE(c, 205u, depth + 1u); else { c.pc = 0x003DAA50u; return; } if (c.pc != 0x003DA6D0u) [[unlikely]] return; }
L_003DA6D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 400u), c.f[0]);  if (t) { goto L_003DA6F4; } }
L_003DA6E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 205u, depth + 1u); else { c.pc = 0x003DAA50u; return; } if (c.pc != 0x003DA6F4u) [[unlikely]] return; }
L_003DA6F4:
    c.f[0] = ld32((c.r[17].w[0] + 400u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 400u), c.f[0]);  if (t) { goto L_003DA710; } }
L_003DA704:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA710u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 205u, depth + 1u); else { c.pc = 0x003DAA50u; return; } if (c.pc != 0x003DA710u) [[unlikely]] return; }
L_003DA710:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003DA764; }
    c.f[1] = ld32((c.r[17].w[0] + 404u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 404u));  goto L_003DA758; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 222u, depth + 1u); else { c.pc = 0x003DAE40u; return; } if (c.pc != 0x003DA740u) [[unlikely]] return; }
L_003DA740:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[17].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 404u));
    c.budget -= 6;
L_003DA758:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 404u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003DA764:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003DA788; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DA7A0; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003DA788:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA79Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 233u, depth + 1u); else { c.pc = 0x003DB250u; return; } if (c.pc != 0x003DA79Cu) [[unlikely]] return; }
L_003DA79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DA7A0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DA7C0:
    c.budget -= 2;
    {  goto L_003DA7D0; }
L_003DA7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DA7F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA7F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003DA7F4u) [[unlikely]] return; }
L_003DA7F4:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 1;
L_003DA7F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 104u)));  goto L_003DA818; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA810u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003DA810u) [[unlikely]] return; }
L_003DA810:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 2;
L_003DA818:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 96u)));  goto L_003DA834; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA82Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003DA82Cu) [[unlikely]] return; }
L_003DA82C:
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 2;
L_003DA834:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DA850; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA848u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003DA848u) [[unlikely]] return; }
L_003DA848:
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003DA850:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DA860:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_003DAA20; }
    set32(c.r[5], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], 0u + 8u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003DA8C0; } }
    set32(c.r[19], ld32((c.r[5].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[5].w[0] + 52u)));  if (t) { goto L_003DA8EC; } }
L_003DA8C0:
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA8D4u); set32(c.r[21], ld32((c.r[4].w[0] + 72u)));  if (depth < kMaxDepth) unit_000E(c, 229u, depth + 1u); else { c.pc = 0x00159AF0u; return; } if (c.pc != 0x003DA8D4u) [[unlikely]] return; }
L_003DA8D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003DA8EC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA8E8u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 229u, depth + 1u); else { c.pc = 0x00159AF0u; return; } if (c.pc != 0x003DA8E8u) [[unlikely]] return; }
L_003DA8E8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003DA8EC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003DAA1C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 360u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], ld32((c.r[21].w[0] + 64u)));  if (t) { goto L_003DA920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA908u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003DA908u) [[unlikely]] return; }
L_003DA908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA910u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003DA910u) [[unlikely]] return; }
L_003DA910:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA920u); set32(c.r[6], c.r[20].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003DA920u) [[unlikely]] return; }
L_003DA920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA928u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003DA928u) [[unlikely]] return; }
L_003DA928:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA934u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003DA934u) [[unlikely]] return; }
L_003DA934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA93Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0016D8A0u; return; } if (c.pc != 0x003DA93Cu) [[unlikely]] return; }
L_003DA93C:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003DAA00; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003DA954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA95Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x003DA95Cu) [[unlikely]] return; }
L_003DA95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA964u); set32(c.r[4], ld32((c.r[20].w[0] + 48u)));  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003DA964u) [[unlikely]] return; }
L_003DA964:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] - 1u);  goto L_003DA984; }
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 2u);  if (t) { goto L_003DA98C; } }
L_003DA984:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + 2u);
    c.budget -= 2;
L_003DA98C:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], c.r[5].w[0] << 1);
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 416u));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0] - 32u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 416u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA9C0u); st32((c.r[2].w[0] - 8u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x003DA9C0u) [[unlikely]] return; }
L_003DA9C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[18], c.r[18].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_003DA9E8; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA9E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA954u | kUnwind; return; } goto L_003DA954; }
    c.budget -= 1;
L_003DAA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAA08u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003DAA08u) [[unlikely]] return; }
L_003DAA08:
    set32(c.r[3], ld32((c.r[20].w[0] + 360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DAA1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAA1Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003DAA1Cu) [[unlikely]] return; }
L_003DAA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003DAA20:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003DAA50:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003DAD60; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003DAAA8:
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_003DABD8; } }
    c.f[3] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = 0u;
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[3]);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DAB28; } }
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DAB28; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DABD8; } }
    c.budget -= 1;
L_003DAB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAB38u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DAB38u) [[unlikely]] return; }
L_003DAB38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAB6Cu); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DAB6Cu) [[unlikely]] return; }
L_003DAB6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DABA0u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DABA0u) [[unlikely]] return; }
L_003DABA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[21]);
    st32((c.r[19].w[0] + 8u), c.f[20]);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 14;
L_003DABD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DACC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DACA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DAC80; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DAC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAD10; } }
L_003DAC10:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DAC58; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAC30u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003DAC30u) [[unlikely]] return; }
L_003DAC30:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAC40u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003DAC40u) [[unlikely]] return; }
L_003DAC40:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[21].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAC50u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003DAC50u) [[unlikely]] return; }
L_003DAC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAD10; } }
L_003DAC58:
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 300u), c.f[0]);  if (t) { goto L_003DAD10; } }
    c.budget -= 1;
L_003DAC80:
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 300u), c.f[0]);  if (t) { goto L_003DAD10; } }
    c.budget -= 1;
L_003DACA8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DACB8u); set32(c.r[5], c.r[21].w[0] + 288u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003DACB8u) [[unlikely]] return; }
L_003DACB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAD10; } }
L_003DACC0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DACCCu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003DACCCu) [[unlikely]] return; }
L_003DACCC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DACDCu); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003DACDCu) [[unlikely]] return; }
L_003DACDC:
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[5], c.r[21].w[0] + 288u);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAD0Cu); st32((c.r[29].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003DAD0Cu) [[unlikely]] return; }
L_003DAD0C:
    c.budget -= 1;
L_003DAD10:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 288u));
    c.f[16] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[29].w[0] + 292u));
    c.f[17] = ld32((c.r[16].w[0] + 40u));
    c.f[15] = ld32((c.r[29].w[0] + 296u));
    c.f[18] = ld32((c.r[16].w[0] + 44u));
    c.f[19] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAD44u); set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003DAD44u) [[unlikely]] return; }
L_003DAD44:
    set32(c.r[6], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAAA8u | kUnwind; return; } goto L_003DAAA8; } }
L_003DAD60:
    set32(c.r[5], ld32((c.r[21].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAD6Cu); set32(c.r[4], c.r[21].w[0] + 52u);  if (depth < kMaxDepth) unit_0018(c, 130u, depth + 1u); else { c.pc = 0x00181230u; return; } if (c.pc != 0x003DAD6Cu) [[unlikely]] return; }
L_003DAD6C:
    c.f[0] = ld32((c.r[21].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[16], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    c.f[21] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[17].d[0] = 0ull + 0ull;
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DADE8; } }
L_003DADA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DADC0; } }
    c.f[21] = c.f[0];
    c.budget -= 2;
L_003DADC0:
    set32(c.r[4], c.r[21].w[0] + 52u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DADD0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003DADD0u) [[unlikely]] return; }
L_003DADD0:
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[20]);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DADA0u | kUnwind; return; } goto L_003DADA0; } }
L_003DADE8:
    set32(c.r[3], ld32((c.r[21].w[0] + 360u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  goto L_003DAE0C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[21].w[0] + 52u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE08u); set32(c.r[5], c.r[21].w[0] + 368u);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003DAE08u) [[unlikely]] return; }
L_003DAE08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_003DAE0C:
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003DAE40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DAE7C; } }
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[18].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE7Cu); set32(c.r[7], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_00AE(c, 247u, depth + 1u); else { c.pc = 0x003DB810u; return; } if (c.pc != 0x003DAE7Cu) [[unlikely]] return; }
L_003DAE7C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003DAEA4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 192u);
    set32(c.r[6], c.r[18].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAEA0u); set32(c.r[7], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_00AE(c, 247u, depth + 1u); else { c.pc = 0x003DB810u; return; } if (c.pc != 0x003DAEA0u) [[unlikely]] return; }
L_003DAEA0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003DAEA4:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_003DAEC8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 240u);
    set32(c.r[6], c.r[18].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAEC4u); set32(c.r[7], c.r[18].w[0] + 272u);  if (depth < kMaxDepth) unit_00AE(c, 247u, depth + 1u); else { c.pc = 0x003DB810u; return; } if (c.pc != 0x003DAEC4u) [[unlikely]] return; }
L_003DAEC4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_003DAEC8:
    set32(c.r[7], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[18].w[0] + 192u);
    set32(c.r[5], c.r[18].w[0] + 240u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_003DAEF8; } }
L_003DAEDC:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAEDCu | kUnwind; return; } goto L_003DAEDC; } }
L_003DAEF8:
    c.f[3] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[7].w[0]));
    set32(c.r[3], 0u + 16u);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_003DAF60; } }
L_003DAF44:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAF44u | kUnwind; return; } goto L_003DAF44; } }
L_003DAF60:
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[17], ld32((c.r[18].w[0] + 112u)));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[9] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[4] = ld32((c.r[18].w[0] + 408u));
    c.f[3] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[4]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    st32((c.r[29].w[0] + 112u), c.f[3]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[3] = ld32((c.r[18].w[0] + 412u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::div(c.fcr31, c.f[9], c.f[3]);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    st32((c.r[29].w[0] + 100u), c.f[9]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.f[8] = ld32((c.r[5].w[0] + 8u));
    c.f[7] = ld32((c.r[6].w[0] + 8u));
    c.f[6] = ld32((c.r[5].w[0] + 12u));
    c.f[5] = ld32((c.r[6].w[0] + 12u));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[7], c.f[3]);
    st32((c.r[29].w[0] + 104u), c.f[7]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[29].w[0] + 108u), c.f[5]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[10], c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[10]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    c.budget -= 50;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.f[0]);  if (t) { goto L_003DB228; } }
L_003DB028:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DB078; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB048u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DB048u) [[unlikely]] return; }
L_003DB048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 124u));
    c.f[2] = ld32((c.r[18].w[0] + 128u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 12;
L_003DB078:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DB0B0; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DB0B0; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DB140; } }
L_003DB0B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB0C0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DB0C0u) [[unlikely]] return; }
L_003DB0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB0E8u); c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DB0E8u) [[unlikely]] return; }
L_003DB0E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB110u); c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DB110u) [[unlikely]] return; }
L_003DB110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[21]);
    st32((c.r[17].w[0] + 24u), c.f[20]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_003DB158; } }
L_003DB140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 6;
L_003DB158:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[17].w[0] + 72u), c.f[1]);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DB210; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003DB1D0; } }
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[5] = ld32((c.r[29].w[0] + 84u));
    c.f[4] = ld32((c.r[29].w[0] + 116u));
    c.f[6] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 80u), c.f[6]);
    st32((c.r[29].w[0] + 84u), c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.f[0]);  if (t) { goto L_003DB210; } }
L_003DB1D0:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[5] = ld32((c.r[29].w[0] + 84u));
    c.f[4] = ld32((c.r[29].w[0] + 100u));
    c.f[6] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 80u), c.f[6]);
    st32((c.r[29].w[0] + 84u), c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.budget -= 16;
L_003DB210:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB028u | kUnwind; return; } goto L_003DB028; } }
    c.budget -= 1;
L_003DB228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003DB250:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[17], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[17].w[0] + 240u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB28Cu); set32(c.r[6], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003DB28Cu) [[unlikely]] return; }
L_003DB28C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[16].w[0] + 288u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB2A4u); st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003DB2A4u) [[unlikely]] return; }
L_003DB2A4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB2B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DB2B0u) [[unlikely]] return; }
L_003DB2B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 360u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 116u)));  goto L_003DB338; }
    set32(c.r[6], c.r[17].w[0] + 224u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB2CCu); set32(c.r[5], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003DB2CCu) [[unlikely]] return; }
L_003DB2CC:
    c.f[1] = ld32((c.r[16].w[0] + 368u));
    set32(c.r[4], c.r[16].w[0] + 384u);
    c.f[0] = ld32((c.r[16].w[0] + 384u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 384u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 372u));
    c.f[0] = ld32((c.r[16].w[0] + 388u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 388u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 392u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB308u); st32((c.r[16].w[0] + 392u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DB308u) [[unlikely]] return; }
L_003DB308:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = ld32((c.r[16].w[0] + 384u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 388u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 392u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 392u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 12;
L_003DB338:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[21], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003DB7E8; } }
L_003DB34C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB360u); set32(c.r[17], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003DB360u) [[unlikely]] return; }
L_003DB360:
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[3]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[17].w[0] + 12u), c.f[1]);  if (t) { goto L_003DB3C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB398u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003DB398u) [[unlikely]] return; }
L_003DB398:
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.f[0]);  if (t) { goto L_003DB3F0; } }
    c.budget -= 1;
L_003DB3C0:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB3D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003DB3D0u) [[unlikely]] return; }
L_003DB3D0:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.budget -= 8;
L_003DB3F0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB400u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003DB400u) [[unlikely]] return; }
L_003DB400:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB40Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DB40Cu) [[unlikely]] return; }
L_003DB40C:
    c.f[3] = ld32((c.r[21].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[8].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DB470; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB460u); set32(c.r[7], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003DB460u) [[unlikely]] return; }
L_003DB460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB468u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00A9(c, 289u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003DB468u) [[unlikely]] return; }
L_003DB468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB490; } }
L_003DB470:
    c.f[0] = ld32((c.r[21].w[0] + 64u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 68u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 72u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 76u));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.budget -= 8;
L_003DB490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = ld32((c.r[29].w[0] + 204u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003DB4C8; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003DB4E0; } }
L_003DB4C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003DB4E0:
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] << 24);  if (t) { goto L_003DB51C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003DB538; } }
L_003DB51C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003DB538:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003DB57C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003DB594; } }
L_003DB57C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003DB594:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003DB5D8; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003DB5F0; } }
L_003DB5D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003DB5F0:
    c.f[4] = ld32((c.r[29].w[0] + 216u));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.r[4].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[4]);
    st32((c.r[19].w[0] + 8u), c.f[5]);
    st32((c.r[19].w[0] + 20u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 204u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 25;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003DB664; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003DB67C; } }
L_003DB664:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003DB67C:
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] << 24);  if (t) { goto L_003DB6B8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003DB6D4; } }
L_003DB6B8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003DB6D4:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003DB718; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003DB730; } }
L_003DB718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003DB730:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003DB774; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003DB78C; } }
L_003DB774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003DB78C:
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[21], c.r[21].w[0] + 96u);
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[19].w[0] + 28u), c.f[2]);
    st32((c.r[19].w[0] + 32u), c.f[4]);
    st32((c.r[19].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB34Cu | kUnwind; return; } goto L_003DB34C; } }
    c.budget -= 1;
L_003DB7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003DB810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB848u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DB848u) [[unlikely]] return; }
L_003DB848:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB86Cu); c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DB86Cu) [[unlikely]] return; }
L_003DB86C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB890u); c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DB890u) [[unlikely]] return; }
L_003DB890:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB8B4u); c.f[22] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DB8B4u) [[unlikely]] return; }
L_003DB8B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[22]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DB920:
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[6].w[0]));  goto L_003DB93C; }
    st32((c.r[5].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.budget -= 2;
L_003DB93C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[6].w[0] + 4u));  goto L_003DB968; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 3;
L_003DB968:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[6].w[0] + 4u));  goto L_003DB980; }
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 2;
L_003DB980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[6].w[0] + 8u));  goto L_003DB9AC; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 3;
L_003DB9AC:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[6].w[0] + 8u));  goto L_003DB9C4; }
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 2;
L_003DB9C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[6].w[0] + 12u));  goto L_003DB9F0; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.budget -= 3;
L_003DB9F0:
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[6].w[0] + 12u));  goto L_003DBA08; }
    st32((c.r[5].w[0] + 12u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.budget -= 2;
L_003DBA08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DBA30; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.budget -= 2;
L_003DBA30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DBA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBA54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DBA54u) [[unlikely]] return; }
L_003DBA54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 8224u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DBAA8; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DBAA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DBAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DBB08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBAF0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DBAF0u) [[unlikely]] return; }
L_003DBAF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DBB0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBB08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DBB08u) [[unlikely]] return; }
L_003DBB08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DBB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DBB20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBB48u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DBB48u) [[unlikely]] return; }
L_003DBB48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DBB68; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBB64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 253u, depth + 1u); else { c.pc = 0x003DBA40u; return; } if (c.pc != 0x003DBB64u) [[unlikely]] return; }
L_003DBB64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DBB68:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DBB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_003DBB90:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    st32((c.r[4].w[0] + 68u), c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[2]);
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003DBBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBBECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DBBECu) [[unlikely]] return; }
L_003DBBEC:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC08u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DBC08u) [[unlikely]] return; }
L_003DBC08:
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DBC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DBC54u) [[unlikely]] return; }
L_003DBC54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DBC74; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DBC74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DBC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DBCC8; }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_003DBCB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBCC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003DBCB4:
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBCC4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DBCC4u) [[unlikely]] return; }
L_003DBCC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DBCC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DBCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DBD04; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD00u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DBD00u) [[unlikely]] return; }
L_003DBD00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DBD04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DBD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DBD24u) [[unlikely]] return; }
L_003DBD24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 8288u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DBD78; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DBD78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DBD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DBDD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBDC0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DBDC0u) [[unlikely]] return; }
L_003DBDC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DBDDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBDD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DBDD8u) [[unlikely]] return; }
L_003DBDD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DBDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DBDF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBE18u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DBE18u) [[unlikely]] return; }
L_003DBE18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DBE38; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBE34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 272u, depth + 1u); else { c.pc = 0x003DBD10u; return; } if (c.pc != 0x003DBE34u) [[unlikely]] return; }
L_003DBE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DBE38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DBE50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003DBE60:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    st32((c.r[4].w[0] + 68u), c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[2]);
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003DBEA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBEBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DBEBCu) [[unlikely]] return; }
L_003DBEBC:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBECCu); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DBECCu) [[unlikely]] return; }
L_003DBECC:
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DBF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DBF14u) [[unlikely]] return; }
L_003DBF14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DBF34; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DBF34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DBF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DBF88; }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_003DBF74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBF84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003DBF74:
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF84u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DBF84u) [[unlikely]] return; }
L_003DBF84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DBF88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DBF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DBFC4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBFC0u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DBFC0u) [[unlikely]] return; }
L_003DBFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DBFC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DBFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBFE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DBFE4u) [[unlikely]] return; }
L_003DBFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 8352u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 104u), 0u);  [[clang::musttail]] return unit_00AF(c, 3u, depth); }
    [[clang::musttail]] return unit_00AF(c, 2u, depth);
}

}
