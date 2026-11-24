#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B1[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0,
    0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 292,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E4000;
    case 2u: goto L_003E400C;
    case 3u: goto L_003E4010;
    case 4u: goto L_003E4020;
    case 5u: goto L_003E4050;
    case 6u: goto L_003E4060;
    case 7u: goto L_003E4074;
    case 8u: goto L_003E408C;
    case 9u: goto L_003E40A0;
    case 10u: goto L_003E40D0;
    case 11u: goto L_003E40E8;
    case 12u: goto L_003E4100;
    case 13u: goto L_003E4128;
    case 14u: goto L_003E4144;
    case 15u: goto L_003E4160;
    case 16u: goto L_003E4170;
    case 17u: goto L_003E425C;
    case 18u: goto L_003E4288;
    case 19u: goto L_003E42A0;
    case 20u: goto L_003E42D0;
    case 21u: goto L_003E42F0;
    case 22u: goto L_003E4304;
    case 23u: goto L_003E4330;
    case 24u: goto L_003E4360;
    case 25u: goto L_003E4378;
    case 26u: goto L_003E4390;
    case 27u: goto L_003E43B8;
    case 28u: goto L_003E43D4;
    case 29u: goto L_003E43F0;
    case 30u: goto L_003E4400;
    case 31u: goto L_003E4410;
    case 32u: goto L_003E4424;
    case 33u: goto L_003E4480;
    case 34u: goto L_003E44A0;
    case 35u: goto L_003E44D0;
    case 36u: goto L_003E44E8;
    case 37u: goto L_003E4500;
    case 38u: goto L_003E4528;
    case 39u: goto L_003E4544;
    case 40u: goto L_003E4560;
    case 41u: goto L_003E4570;
    case 42u: goto L_003E4598;
    case 43u: goto L_003E45B4;
    case 44u: goto L_003E4608;
    case 45u: goto L_003E4640;
    case 46u: goto L_003E468C;
    case 47u: goto L_003E46F8;
    case 48u: goto L_003E47A0;
    case 49u: goto L_003E47B4;
    case 50u: goto L_003E47D0;
    case 51u: goto L_003E47E4;
    case 52u: goto L_003E4810;
    case 53u: goto L_003E4850;
    case 54u: goto L_003E4860;
    case 55u: goto L_003E4910;
    case 56u: goto L_003E497C;
    case 57u: goto L_003E49CC;
    case 58u: goto L_003E49E0;
    case 59u: goto L_003E49F4;
    case 60u: goto L_003E4A54;
    case 61u: goto L_003E4A70;
    case 62u: goto L_003E4AA0;
    case 63u: goto L_003E4AB8;
    case 64u: goto L_003E4AD0;
    case 65u: goto L_003E4AF8;
    case 66u: goto L_003E4B14;
    case 67u: goto L_003E4B30;
    case 68u: goto L_003E4B40;
    case 69u: goto L_003E4B68;
    case 70u: goto L_003E4B84;
    case 71u: goto L_003E4BD8;
    case 72u: goto L_003E4C10;
    case 73u: goto L_003E4C7C;
    case 74u: goto L_003E4CA4;
    case 75u: goto L_003E4D14;
    case 76u: goto L_003E4DB8;
    case 77u: goto L_003E4DCC;
    case 78u: goto L_003E4DF0;
    case 79u: goto L_003E4E04;
    case 80u: goto L_003E4E30;
    case 81u: goto L_003E4E70;
    case 82u: goto L_003E4E80;
    case 83u: goto L_003E4ED0;
    case 84u: goto L_003E4ED8;
    case 85u: goto L_003E4EF4;
    case 86u: goto L_003E4F58;
    case 87u: goto L_003E4F88;
    case 88u: goto L_003E4FB4;
    case 89u: goto L_003E4FD0;
    case 90u: goto L_003E4FEC;
    case 91u: goto L_003E5018;
    case 92u: goto L_003E5080;
    case 93u: goto L_003E50DC;
    case 94u: goto L_003E50FC;
    case 95u: goto L_003E5120;
    case 96u: goto L_003E5190;
    case 97u: goto L_003E51E4;
    case 98u: goto L_003E51F0;
    case 99u: goto L_003E5204;
    case 100u: goto L_003E5268;
    case 101u: goto L_003E5280;
    case 102u: goto L_003E52B0;
    case 103u: goto L_003E52C8;
    case 104u: goto L_003E52E0;
    case 105u: goto L_003E5308;
    case 106u: goto L_003E5324;
    case 107u: goto L_003E5340;
    case 108u: goto L_003E5350;
    case 109u: goto L_003E5378;
    case 110u: goto L_003E5394;
    case 111u: goto L_003E53E8;
    case 112u: goto L_003E5420;
    case 113u: goto L_003E548C;
    case 114u: goto L_003E54B4;
    case 115u: goto L_003E5524;
    case 116u: goto L_003E55C8;
    case 117u: goto L_003E55DC;
    case 118u: goto L_003E5600;
    case 119u: goto L_003E5614;
    case 120u: goto L_003E5640;
    case 121u: goto L_003E568C;
    case 122u: goto L_003E56A0;
    case 123u: goto L_003E56EC;
    case 124u: goto L_003E56F4;
    case 125u: goto L_003E5710;
    case 126u: goto L_003E5774;
    case 127u: goto L_003E5794;
    case 128u: goto L_003E57A8;
    case 129u: goto L_003E57C4;
    case 130u: goto L_003E57D8;
    case 131u: goto L_003E57F4;
    case 132u: goto L_003E5808;
    case 133u: goto L_003E582C;
    case 134u: goto L_003E5890;
    case 135u: goto L_003E58EC;
    case 136u: goto L_003E590C;
    case 137u: goto L_003E5930;
    case 138u: goto L_003E59A0;
    case 139u: goto L_003E59F4;
    case 140u: goto L_003E5A00;
    case 141u: goto L_003E5A14;
    case 142u: goto L_003E5A78;
    case 143u: goto L_003E5A90;
    case 144u: goto L_003E5AC0;
    case 145u: goto L_003E5AD8;
    case 146u: goto L_003E5AF0;
    case 147u: goto L_003E5B18;
    case 148u: goto L_003E5B34;
    case 149u: goto L_003E5B50;
    case 150u: goto L_003E5B60;
    case 151u: goto L_003E5B88;
    case 152u: goto L_003E5BA4;
    case 153u: goto L_003E5BF8;
    case 154u: goto L_003E5C30;
    case 155u: goto L_003E5CA4;
    case 156u: goto L_003E5CCC;
    case 157u: goto L_003E5CEC;
    case 158u: goto L_003E5D34;
    case 159u: goto L_003E5D94;
    case 160u: goto L_003E5DA8;
    case 161u: goto L_003E5E00;
    case 162u: goto L_003E5E14;
    case 163u: goto L_003E5E40;
    case 164u: goto L_003E5E54;
    case 165u: goto L_003E5E80;
    case 166u: goto L_003E5ED4;
    case 167u: goto L_003E5EE8;
    case 168u: goto L_003E5F00;
    case 169u: goto L_003E5F50;
    case 170u: goto L_003E5F58;
    case 171u: goto L_003E5F74;
    case 172u: goto L_003E5FF8;
    case 173u: goto L_003E6018;
    case 174u: goto L_003E6034;
    case 175u: goto L_003E6050;
    case 176u: goto L_003E607C;
    case 177u: goto L_003E60E0;
    case 178u: goto L_003E613C;
    case 179u: goto L_003E615C;
    case 180u: goto L_003E6180;
    case 181u: goto L_003E61F0;
    case 182u: goto L_003E6244;
    case 183u: goto L_003E6250;
    case 184u: goto L_003E62AC;
    case 185u: goto L_003E62BC;
    case 186u: goto L_003E62CC;
    case 187u: goto L_003E6310;
    case 188u: goto L_003E6394;
    case 189u: goto L_003E63A4;
    case 190u: goto L_003E63DC;
    case 191u: goto L_003E6420;
    case 192u: goto L_003E6434;
    case 193u: goto L_003E6448;
    case 194u: goto L_003E64B4;
    case 195u: goto L_003E64D0;
    case 196u: goto L_003E6500;
    case 197u: goto L_003E6518;
    case 198u: goto L_003E6530;
    case 199u: goto L_003E6558;
    case 200u: goto L_003E6574;
    case 201u: goto L_003E6590;
    case 202u: goto L_003E65A0;
    case 203u: goto L_003E65C4;
    case 204u: goto L_003E65EC;
    case 205u: goto L_003E6618;
    case 206u: goto L_003E6634;
    case 207u: goto L_003E6688;
    case 208u: goto L_003E66D0;
    case 209u: goto L_003E673C;
    case 210u: goto L_003E6764;
    case 211u: goto L_003E67BC;
    case 212u: goto L_003E6848;
    case 213u: goto L_003E6890;
    case 214u: goto L_003E68A4;
    case 215u: goto L_003E68D0;
    case 216u: goto L_003E6930;
    case 217u: goto L_003E6960;
    case 218u: goto L_003E6990;
    case 219u: goto L_003E69D8;
    case 220u: goto L_003E69E0;
    case 221u: goto L_003E69FC;
    case 222u: goto L_003E6A48;
    case 223u: goto L_003E6A68;
    case 224u: goto L_003E6A84;
    case 225u: goto L_003E6AD0;
    case 226u: goto L_003E6B2C;
    case 227u: goto L_003E6B4C;
    case 228u: goto L_003E6B70;
    case 229u: goto L_003E6BC8;
    case 230u: goto L_003E6C04;
    case 231u: goto L_003E6C10;
    case 232u: goto L_003E6C24;
    case 233u: goto L_003E6C78;
    case 234u: goto L_003E6CA0;
    case 235u: goto L_003E6CD0;
    case 236u: goto L_003E6D00;
    case 237u: goto L_003E6D18;
    case 238u: goto L_003E6D30;
    case 239u: goto L_003E6D58;
    case 240u: goto L_003E6D74;
    case 241u: goto L_003E6D90;
    case 242u: goto L_003E6DA0;
    case 243u: goto L_003E6E40;
    case 244u: goto L_003E6E5C;
    case 245u: goto L_003E6E90;
    case 246u: goto L_003E6EC0;
    case 247u: goto L_003E6ED0;
    case 248u: goto L_003E6EE4;
    case 249u: goto L_003E6F38;
    case 250u: goto L_003E6F80;
    case 251u: goto L_003E6FB0;
    case 252u: goto L_003E6FC8;
    case 253u: goto L_003E6FE0;
    case 254u: goto L_003E7008;
    case 255u: goto L_003E7024;
    case 256u: goto L_003E7040;
    case 257u: goto L_003E7050;
    case 258u: goto L_003E70C0;
    case 259u: goto L_003E70DC;
    case 260u: goto L_003E7110;
    case 261u: goto L_003E7124;
    case 262u: goto L_003E713C;
    case 263u: goto L_003E7180;
    case 264u: goto L_003E71B0;
    case 265u: goto L_003E71C8;
    case 266u: goto L_003E71E0;
    case 267u: goto L_003E7208;
    case 268u: goto L_003E7224;
    case 269u: goto L_003E7240;
    case 270u: goto L_003E7250;
    case 271u: goto L_003E7270;
    case 272u: goto L_003E7284;
    case 273u: goto L_003E72B0;
    case 274u: goto L_003E7310;
    case 275u: goto L_003E7384;
    case 276u: goto L_003E7390;
    case 277u: goto L_003E73C8;
    case 278u: goto L_003E73F0;
    case 279u: goto L_003E7420;
    case 280u: goto L_003E7430;
    case 281u: goto L_003E745C;
    case 282u: goto L_003E7468;
    case 283u: goto L_003E7474;
    case 284u: goto L_003E7484;
    case 285u: goto L_003E7494;
    case 286u: goto L_003E74B0;
    case 287u: goto L_003E74C4;
    case 288u: goto L_003E7500;
    case 289u: goto L_003E7540;
    case 290u: goto L_003E7558;
    case 291u: goto L_003E7570;
    case 292u: goto L_003E757C;
    case 293u: goto L_003E7594;
    case 294u: goto L_003E75B0;
    case 295u: goto L_003E75D8;
    case 296u: goto L_003E75F4;
    case 297u: goto L_003E7610;
    case 298u: goto L_003E7620;
    case 299u: goto L_003E765C;
    case 300u: goto L_003E7680;
    case 301u: goto L_003E76A4;
    case 302u: goto L_003E7700;
    case 303u: goto L_003E7724;
    case 304u: goto L_003E7804;
    case 305u: goto L_003E7814;
    case 306u: goto L_003E7820;
    case 307u: goto L_003E7870;
    case 308u: goto L_003E7888;
    case 309u: goto L_003E78C0;
    case 310u: goto L_003E798C;
    case 311u: goto L_003E79D8;
    case 312u: goto L_003E7AF4;
    case 313u: goto L_003E7B70;
    case 314u: goto L_003E7BB4;
    case 315u: goto L_003E7BC0;
    case 316u: goto L_003E7BE0;
    case 317u: goto L_003E7C3C;
    case 318u: goto L_003E7C54;
    case 319u: goto L_003E7C6C;
    case 320u: goto L_003E7C78;
    case 321u: goto L_003E7E30;
    case 322u: goto L_003E7E84;
    case 323u: goto L_003E7EBC;
    case 324u: goto L_003E7EE4;
    case 325u: goto L_003E7F1C;
    case 326u: goto L_003E7F88;
    case 327u: goto L_003E7FA0;
    case 328u: goto L_003E7FB0;
    case 329u: goto L_003E7FC0;
    case 330u: goto L_003E7FD0;
    case 331u: goto L_003E7FDC;
    default: bad_entry(c, 0x003E4000u); return;
    }
L_003E4000:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E400Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0015C410u; return; } if (c.pc != 0x003E400Cu) [[unlikely]] return; }
L_003E400C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E4010:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E4020:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003E403C; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003E403C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E4050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), 0u);  c.pc = t; return; }
L_003E4060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E4074u) [[unlikely]] return; }
L_003E4074:
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[25], c.r[25].w[0] + 10144u);
    st32((c.r[16].w[0] + 4u), c.r[25].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E408Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E408Cu) [[unlikely]] return; }
L_003E408C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E40A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E40E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E40D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E40D0u) [[unlikely]] return; }
L_003E40D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E40EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E40E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E40E8u) [[unlikely]] return; }
L_003E40E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E40EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E4100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4128u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E4128u) [[unlikely]] return; }
L_003E4128:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E4148; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4144u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 6u, depth + 1u); else { c.pc = 0x003E4060u; return; } if (c.pc != 0x003E4144u) [[unlikely]] return; }
L_003E4144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E4148:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E4160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 303u);  c.pc = t; return; }
L_003E4170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 32u)));  goto L_003E4240; }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 48u));  goto L_003E41F4; }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.f[0]);  if (t) { goto L_003E4288; } }
L_003E41F4:
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.f[0]);  if (t) { goto L_003E4288; } }
L_003E4240:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E428C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], c.r[29].w[0] + 44u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E425Cu); set32(c.r[7], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000E(c, 185u, depth + 1u); else { c.pc = 0x00159420u; return; } if (c.pc != 0x003E425Cu) [[unlikely]] return; }
L_003E425C:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4288u); c.f[13] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 183u, depth + 1u); else { c.pc = 0x001593D0u; return; } if (c.pc != 0x003E4288u) [[unlikely]] return; }
L_003E4288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E428C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E42A0:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E42C0; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003E42C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E42D0:
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_003E42F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4304u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E4304u) [[unlikely]] return; }
L_003E4304:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10208u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E4330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E4378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4360u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E4360u) [[unlikely]] return; }
L_003E4360:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E437C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4378u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E4378u) [[unlikely]] return; }
L_003E4378:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E437C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E4390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E43B8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E43B8u) [[unlikely]] return; }
L_003E43B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E43D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E43D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 21u, depth + 1u); else { c.pc = 0x003E42F0u; return; } if (c.pc != 0x003E43D4u) [[unlikely]] return; }
L_003E43D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E43D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E43F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 607u);  c.pc = t; return; }
L_003E4400:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00164500u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 57u, depth); }
L_003E4410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E4424u) [[unlikely]] return; }
L_003E4424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10272u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003E445C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E4484; } }
L_003E445C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4480u); st32((c.r[16].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 54u, depth + 1u); else { c.pc = 0x003E4860u; return; } if (c.pc != 0x003E4480u) [[unlikely]] return; }
L_003E4480:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E4484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E44A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E44E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E44D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E44D0u) [[unlikely]] return; }
L_003E44D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E44EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E44E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E44E8u) [[unlikely]] return; }
L_003E44E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E44EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E4500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4528u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E4528u) [[unlikely]] return; }
L_003E4528:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E4548; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4544u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 31u, depth + 1u); else { c.pc = 0x003E4410u; return; } if (c.pc != 0x003E4544u) [[unlikely]] return; }
L_003E4544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E4548:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E4560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 48u);  c.pc = t; return; }
L_003E4570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4598u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003E4598u) [[unlikely]] return; }
L_003E4598:
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E45E8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003E45B4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 16u));  goto L_003E45D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003E45E8; } }
L_003E45D0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E45B4u | kUnwind; return; } goto L_003E45B4; } }
    c.budget -= 1;
L_003E45E8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003E4618; }
    c.f[12] = ld32((c.r[16].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E4614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4608u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003E4608u) [[unlikely]] return; }
L_003E4608:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[1]);
    c.budget -= 3;
L_003E4614:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E4618:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E4640:
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003E47B4; } }
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[16], ld32((c.r[18].w[0] + 96u)));
    c.f[2] = ld32((c.r[18].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E4738; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 1;
L_003E468C:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 108u));  goto L_003E46BC; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.f[0]);  if (t) { goto L_003E47B4; } }
L_003E46BC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E46E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_003E46F0; } }
L_003E46E8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003E46F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 54u, depth + 1u); else { c.pc = 0x003E4860u; return; } if (c.pc != 0x003E46F8u) [[unlikely]] return; }
L_003E46F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003E4720; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 104u));  goto L_003E4724; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003E47B4; } }
L_003E4720:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.budget -= 1;
L_003E4724:
    c.f[2] = ld32((c.r[18].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[18].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E468Cu | kUnwind; return; } goto L_003E468C; }
    c.budget -= 1;
L_003E4738:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 104u), c.f[1]);
    st32((c.r[18].w[0] + 108u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.f[13] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 104u));  goto L_003E4788; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.f[0]);  if (t) { goto L_003E47B4; } }
L_003E4788:
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    c.f[14] = ld32((c.r[3].w[0] + 20u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E47A0u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003E47A0u) [[unlikely]] return; }
L_003E47A0:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E47B4u); set32(c.r[6], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003E47B4u) [[unlikely]] return; }
L_003E47B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E47D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E47E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003E47E4u) [[unlikely]] return; }
L_003E47E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E4804; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003E4804:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E4810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003E4854; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[4].w[0] + 48u);  goto L_003E4848; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E4850; } }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_003E4848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4850u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003E4850u) [[unlikely]] return; }
L_003E4850:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E4854:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E4860:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[4].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[4].w[0] + 72u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[4].w[0] + 76u), c.f[1]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[4].w[0] + 104u), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 80u), c.f[1]);
    st32((c.r[4].w[0] + 84u), c.f[2]);
    st32((c.r[4].w[0] + 88u), c.f[3]);
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 33;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003E4908; }
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_003E4908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E4910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E4984; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 100u)));  goto L_003E4930; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E49D0; } }
L_003E4930:
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003E49CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E49CC; } }
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E497Cu); st32((c.r[4].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 54u, depth + 1u); else { c.pc = 0x003E4860u; return; } if (c.pc != 0x003E497Cu) [[unlikely]] return; }
L_003E497C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E49CC; } }
L_003E4984:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003E49CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E49CC; } }
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E49CCu); st32((c.r[4].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 54u, depth + 1u); else { c.pc = 0x003E4860u; return; } if (c.pc != 0x003E49CCu) [[unlikely]] return; }
L_003E49CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E49D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E49E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E49F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E49F4u) [[unlikely]] return; }
L_003E49F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10336u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003E4A2C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E4A58; } }
L_003E4A2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4A54u); st32((c.r[16].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 82u, depth + 1u); else { c.pc = 0x003E4E80u; return; } if (c.pc != 0x003E4A54u) [[unlikely]] return; }
L_003E4A54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E4A58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E4A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E4AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4AA0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E4AA0u) [[unlikely]] return; }
L_003E4AA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E4ABC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E4AB8u) [[unlikely]] return; }
L_003E4AB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E4ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E4AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4AF8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E4AF8u) [[unlikely]] return; }
L_003E4AF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E4B18; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 58u, depth + 1u); else { c.pc = 0x003E49E0u; return; } if (c.pc != 0x003E4B14u) [[unlikely]] return; }
L_003E4B14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E4B18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E4B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 49u);  c.pc = t; return; }
L_003E4B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003E4B68u) [[unlikely]] return; }
L_003E4B68:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E4BB8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003E4B84:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 32u));  goto L_003E4BA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003E4BB8; } }
L_003E4BA0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4B84u | kUnwind; return; } goto L_003E4B84; } }
    c.budget -= 1;
L_003E4BB8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003E4BE8; }
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E4BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BD8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003E4BD8u) [[unlikely]] return; }
L_003E4BD8:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.budget -= 3;
L_003E4BE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E4BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E4C10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003E4DCC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003E4C80; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E4C7C; } }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E4C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4C7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 82u, depth + 1u); else { c.pc = 0x003E4E80u; return; } if (c.pc != 0x003E4C7Cu) [[unlikely]] return; }
L_003E4C7C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E4C80:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    set32(c.r[16], ld32((c.r[18].w[0] + 96u)));
    c.f[2] = ld32((c.r[18].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E4D50; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 1;
L_003E4CA4:
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 112u));  goto L_003E4CD4; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.f[0]);  if (t) { goto L_003E4DCC; } }
L_003E4CD4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E4D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_003E4D08; } }
L_003E4D00:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003E4D08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4D14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 82u, depth + 1u); else { c.pc = 0x003E4E80u; return; } if (c.pc != 0x003E4D14u) [[unlikely]] return; }
L_003E4D14:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003E4D3C; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 108u));  goto L_003E4D40; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003E4DCC; } }
L_003E4D3C:
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.budget -= 1;
L_003E4D40:
    c.f[2] = ld32((c.r[18].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[18].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4CA4u | kUnwind; return; } goto L_003E4CA4; }
L_003E4D50:
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 108u), c.f[1]);
    st32((c.r[18].w[0] + 112u), c.f[20]);
    c.f[13] = ld32((c.r[18].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 108u));  goto L_003E4D9C; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.f[0]);  if (t) { goto L_003E4DCC; } }
L_003E4D9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.f[14] = ld32((c.r[18].w[0] + 116u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4DB8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003E4DB8u) [[unlikely]] return; }
L_003E4DB8:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4DCCu); set32(c.r[6], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003E4DCCu) [[unlikely]] return; }
L_003E4DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E4DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003E4E04u) [[unlikely]] return; }
L_003E4E04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E4E24; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003E4E24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E4E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003E4E74; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[4].w[0] + 48u);  goto L_003E4E68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E4E70; } }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_003E4E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E70u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003E4E70u) [[unlikely]] return; }
L_003E4E70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E4E74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E4E80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E4EE0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  goto L_003E4EC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003E4EFC; } }
L_003E4EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4ED0u); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003E4ED0u) [[unlikely]] return; }
L_003E4ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4ED8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003E4ED8u) [[unlikely]] return; }
L_003E4ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003E4EF8; } }
L_003E4EE0:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4EF4u); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003E4EF4u) [[unlikely]] return; }
L_003E4EF4:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003E4EF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003E4EFC:
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    st32((c.r[18].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003E4F60; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 28u));
    c.f[13] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4F58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 92u, depth + 1u); else { c.pc = 0x003E5080u; return; } if (c.pc != 0x003E4F58u) [[unlikely]] return; }
L_003E4F58:
    st32((c.r[18].w[0] + 104u), c.f[0]);
    st32((c.r[18].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_003E4F60:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 100u)));  goto L_003E4FA0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4F88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 92u, depth + 1u); else { c.pc = 0x003E5080u; return; } if (c.pc != 0x003E4F88u) [[unlikely]] return; }
L_003E4F88:
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003E5000; } }
L_003E4FA0:
    set32(c.r[5], c.r[16].w[0] + 3u);
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4FB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 92u, depth + 1u); else { c.pc = 0x003E5080u; return; } if (c.pc != 0x003E4FB4u) [[unlikely]] return; }
L_003E4FB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4FD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 92u, depth + 1u); else { c.pc = 0x003E5080u; return; } if (c.pc != 0x003E4FD0u) [[unlikely]] return; }
L_003E4FD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4FECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 92u, depth + 1u); else { c.pc = 0x003E5080u; return; } if (c.pc != 0x003E4FECu) [[unlikely]] return; }
L_003E4FEC:
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 84u), c.f[20]);
    st32((c.r[18].w[0] + 88u), c.f[21]);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 5;
L_003E5000:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.f[12] = ld32((c.r[2].w[0] + 36u));
    c.f[13] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5018u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 92u, depth + 1u); else { c.pc = 0x003E5080u; return; } if (c.pc != 0x003E5018u) [[unlikely]] return; }
L_003E5018:
    st32((c.r[18].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003E5058; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_003E5058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E5080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003E50F0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003E50F4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003E50D4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E50D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003E5104; } }
L_003E50D0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003E50D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E50DCu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003E50DCu) [[unlikely]] return; }
L_003E50DC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003E5100; } }
L_003E50F0:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003E50F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E50FCu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003E50FCu) [[unlikely]] return; }
L_003E50FC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003E5100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E5104:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E5198; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 100u)));  goto L_003E5140; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E51E8; } }
L_003E5140:
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003E51E4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E51E4; } }
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5190u); st32((c.r[4].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 82u, depth + 1u); else { c.pc = 0x003E4E80u; return; } if (c.pc != 0x003E5190u) [[unlikely]] return; }
L_003E5190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E51E4; } }
L_003E5198:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003E51E4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E51E4; } }
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E51E4u); st32((c.r[4].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 82u, depth + 1u); else { c.pc = 0x003E4E80u; return; } if (c.pc != 0x003E51E4u) [[unlikely]] return; }
L_003E51E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E51E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E51F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E5204u) [[unlikely]] return; }
L_003E5204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10400u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_003E523C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E526C; } }
L_003E523C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5268u); st32((c.r[16].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 122u, depth + 1u); else { c.pc = 0x003E56A0u; return; } if (c.pc != 0x003E5268u) [[unlikely]] return; }
L_003E5268:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E526C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E52C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E52B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E52B0u) [[unlikely]] return; }
L_003E52B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E52CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E52C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E52C8u) [[unlikely]] return; }
L_003E52C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E52CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E52E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5308u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E5308u) [[unlikely]] return; }
L_003E5308:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E5328; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5324u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 98u, depth + 1u); else { c.pc = 0x003E51F0u; return; } if (c.pc != 0x003E5324u) [[unlikely]] return; }
L_003E5324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E5328:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E5340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 29u);  c.pc = t; return; }
L_003E5350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5378u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003E5378u) [[unlikely]] return; }
L_003E5378:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E53C8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003E5394:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 32u));  goto L_003E53B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003E53C8; } }
L_003E53B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5394u | kUnwind; return; } goto L_003E5394; } }
    c.budget -= 1;
L_003E53C8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003E53F8; }
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E53F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E53E8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003E53E8u) [[unlikely]] return; }
L_003E53E8:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.budget -= 3;
L_003E53F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E53F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E5420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003E55DC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003E5490; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E548C; } }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E548C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E548Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 122u, depth + 1u); else { c.pc = 0x003E56A0u; return; } if (c.pc != 0x003E548Cu) [[unlikely]] return; }
L_003E548C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E5490:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    set32(c.r[16], ld32((c.r[18].w[0] + 96u)));
    c.f[2] = ld32((c.r[18].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E5560; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 1;
L_003E54B4:
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 112u));  goto L_003E54E4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003E55DC; } }
L_003E54E4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E5510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_003E5518; } }
L_003E5510:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003E5518:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5524u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 122u, depth + 1u); else { c.pc = 0x003E56A0u; return; } if (c.pc != 0x003E5524u) [[unlikely]] return; }
L_003E5524:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003E554C; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 108u));  goto L_003E5550; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003E55DC; } }
L_003E554C:
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.budget -= 1;
L_003E5550:
    c.f[2] = ld32((c.r[18].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[18].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E54B4u | kUnwind; return; } goto L_003E54B4; }
L_003E5560:
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 108u), c.f[1]);
    st32((c.r[18].w[0] + 112u), c.f[20]);
    c.f[13] = ld32((c.r[18].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 108u));  goto L_003E55AC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003E55DC; } }
L_003E55AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.f[14] = ld32((c.r[18].w[0] + 116u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55C8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003E55C8u) [[unlikely]] return; }
L_003E55C8:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55DCu); set32(c.r[6], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_001D(c, 239u, depth + 1u); else { c.pc = 0x00196730u; return; } if (c.pc != 0x003E55DCu) [[unlikely]] return; }
L_003E55DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E5600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003E5614u) [[unlikely]] return; }
L_003E5614:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E5634; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003E5634:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003E5690; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[8].w[0] + 48u)));  goto L_003E567C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E568C; } }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    c.budget -= 1;
L_003E567C:
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E568Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003E568Cu) [[unlikely]] return; }
L_003E568C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E5690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E56A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E56FC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  goto L_003E56E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_003E5718; } }
L_003E56E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E56ECu); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003E56ECu) [[unlikely]] return; }
L_003E56EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E56F4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003E56F4u) [[unlikely]] return; }
L_003E56F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_003E5714; } }
L_003E56FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5710u); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003E5710u) [[unlikely]] return; }
L_003E5710:
    set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003E5714:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003E5718:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    st32((c.r[19].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003E577C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 28u));
    c.f[13] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5774u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 134u, depth + 1u); else { c.pc = 0x003E5890u; return; } if (c.pc != 0x003E5774u) [[unlikely]] return; }
L_003E5774:
    st32((c.r[19].w[0] + 104u), c.f[0]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_003E577C:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5794u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 134u, depth + 1u); else { c.pc = 0x003E5890u; return; } if (c.pc != 0x003E5794u) [[unlikely]] return; }
L_003E5794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57A8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003E57A8u) [[unlikely]] return; }
L_003E57A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 2u);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 134u, depth + 1u); else { c.pc = 0x003E5890u; return; } if (c.pc != 0x003E57C4u) [[unlikely]] return; }
L_003E57C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57D8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003E57D8u) [[unlikely]] return; }
L_003E57D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 134u, depth + 1u); else { c.pc = 0x003E5890u; return; } if (c.pc != 0x003E57F4u) [[unlikely]] return; }
L_003E57F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5808u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003E5808u) [[unlikely]] return; }
L_003E5808:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 4u);
    st32((c.r[19].w[0] + 84u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[12] = ld32((c.r[2].w[0] + 36u));
    c.f[13] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E582Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 134u, depth + 1u); else { c.pc = 0x003E5890u; return; } if (c.pc != 0x003E582Cu) [[unlikely]] return; }
L_003E582C:
    st32((c.r[19].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003E586C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 9;
L_003E586C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E5890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003E5900; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003E5904; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003E58E4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E58E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003E5914; } }
L_003E58E0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003E58E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58ECu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003E58ECu) [[unlikely]] return; }
L_003E58EC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003E5910; } }
L_003E5900:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003E5904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E590Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003E590Cu) [[unlikely]] return; }
L_003E590C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003E5910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E5914:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E59A8; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 100u)));  goto L_003E5950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E59F8; } }
L_003E5950:
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003E59F4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E59F4; } }
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E59A0u); st32((c.r[4].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 122u, depth + 1u); else { c.pc = 0x003E56A0u; return; } if (c.pc != 0x003E59A0u) [[unlikely]] return; }
L_003E59A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E59F4; } }
L_003E59A8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003E59F4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E59F4; } }
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E59F4u); st32((c.r[4].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 122u, depth + 1u); else { c.pc = 0x003E56A0u; return; } if (c.pc != 0x003E59F4u) [[unlikely]] return; }
L_003E59F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E59F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E5A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E5A14u) [[unlikely]] return; }
L_003E5A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10464u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 88u), 0u);  goto L_003E5A4C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E5A7C; } }
L_003E5A4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A78u); st32((c.r[16].w[0] + 96u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 168u, depth + 1u); else { c.pc = 0x003E5F00u; return; } if (c.pc != 0x003E5A78u) [[unlikely]] return; }
L_003E5A78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E5A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E5AD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5AC0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E5AC0u) [[unlikely]] return; }
L_003E5AC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E5ADC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5AD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E5AD8u) [[unlikely]] return; }
L_003E5AD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E5ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E5AF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B18u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E5B18u) [[unlikely]] return; }
L_003E5B18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E5B38; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 140u, depth + 1u); else { c.pc = 0x003E5A00u; return; } if (c.pc != 0x003E5B34u) [[unlikely]] return; }
L_003E5B34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E5B38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E5B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 11u);  c.pc = t; return; }
L_003E5B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003E5B88u) [[unlikely]] return; }
L_003E5B88:
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E5BD8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003E5BA4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 32u));  goto L_003E5BC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003E5BD8; } }
L_003E5BC0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5BA4u | kUnwind; return; } goto L_003E5BA4; } }
    c.budget -= 1;
L_003E5BD8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003E5C08; }
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E5C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5BF8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003E5BF8u) [[unlikely]] return; }
L_003E5BF8:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[1]);
    c.budget -= 3;
L_003E5C04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E5C08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E5C30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003E5E14; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_003E5CA8; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E5CA4; } }
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5CA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 168u, depth + 1u); else { c.pc = 0x003E5F00u; return; } if (c.pc != 0x003E5CA4u) [[unlikely]] return; }
L_003E5CA4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003E5CA8:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.f[2] = ld32((c.r[19].w[0] + 112u));
    set32(c.r[16], ld32((c.r[19].w[0] + 100u)));
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E5D70; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 1;
L_003E5CCC:
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 116u));  goto L_003E5CF4; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5CECu); set32(c.r[7], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_00B1(c, 187u, depth + 1u); else { c.pc = 0x003E6310u; return; } if (c.pc != 0x003E5CECu) [[unlikely]] return; }
L_003E5CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003E5E18; } }
L_003E5CF4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E5D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 100u), 0u);  if (t) { goto L_003E5D28; } }
L_003E5D20:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_003E5D28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 168u, depth + 1u); else { c.pc = 0x003E5F00u; return; } if (c.pc != 0x003E5D34u) [[unlikely]] return; }
L_003E5D34:
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003E5D5C; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[2] = ld32((c.r[19].w[0] + 112u));  goto L_003E5D60; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_003E5E14; } }
L_003E5D5C:
    c.f[2] = ld32((c.r[19].w[0] + 112u));
    c.budget -= 1;
L_003E5D60:
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[19].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5CCCu | kUnwind; return; } goto L_003E5CCC; }
L_003E5D70:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[19].w[0] + 64u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D94u); st32((c.r[19].w[0] + 116u), c.f[20]);  if (depth < kMaxDepth) unit_00B1(c, 183u, depth + 1u); else { c.pc = 0x003E6250u; return; } if (c.pc != 0x003E5D94u) [[unlikely]] return; }
L_003E5D94:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5DA8u); set32(c.r[7], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_00B1(c, 187u, depth + 1u); else { c.pc = 0x003E6310u; return; } if (c.pc != 0x003E5DA8u) [[unlikely]] return; }
L_003E5DA8:
    c.f[13] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[19].w[0] + 112u));  goto L_003E5DE4; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.f[0]);  if (t) { goto L_003E5E14; } }
L_003E5DE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.f[14] = ld32((c.r[19].w[0] + 120u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E00u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003E5E00u) [[unlikely]] return; }
L_003E5E00:
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E14u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003E5E14u) [[unlikely]] return; }
L_003E5E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003E5E18:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E5E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003E5E54u) [[unlikely]] return; }
L_003E5E54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E5E74; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003E5E74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003E5EEC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 104u)));  goto L_003E5EBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E5EE8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 104u)));
    c.budget -= 1;
L_003E5EBC:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003E5EE0; }
    set32(c.r[6], c.r[6].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5ED4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003E5ED4u) [[unlikely]] return; }
L_003E5ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E5EE8; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003E5EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5EE8u); set32(c.r[5], c.r[6].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003E5EE8u) [[unlikely]] return; }
L_003E5EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E5EEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E5F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E5F60; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  goto L_003E5F48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003E5F7C; } }
L_003E5F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F50u); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003E5F50u) [[unlikely]] return; }
L_003E5F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F58u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003E5F58u) [[unlikely]] return; }
L_003E5F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003E5F78; } }
L_003E5F60:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F74u); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003E5F74u) [[unlikely]] return; }
L_003E5F74:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003E5F78:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003E5F7C:
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    st32((c.r[18].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003E5FC4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 96u), 0u);  goto L_003E5FC0; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003E5FC0:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_003E5FC4:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003E6000; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 28u));
    c.f[13] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5FF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 177u, depth + 1u); else { c.pc = 0x003E60E0u; return; } if (c.pc != 0x003E5FF8u) [[unlikely]] return; }
L_003E5FF8:
    st32((c.r[18].w[0] + 108u), c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.budget -= 2;
L_003E6000:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], c.r[16].w[0] + 3u);
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6018u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 177u, depth + 1u); else { c.pc = 0x003E60E0u; return; } if (c.pc != 0x003E6018u) [[unlikely]] return; }
L_003E6018:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6034u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 177u, depth + 1u); else { c.pc = 0x003E60E0u; return; } if (c.pc != 0x003E6034u) [[unlikely]] return; }
L_003E6034:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6050u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 177u, depth + 1u); else { c.pc = 0x003E60E0u; return; } if (c.pc != 0x003E6050u) [[unlikely]] return; }
L_003E6050:
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 84u), c.f[20]);
    set32(c.r[5], c.r[16].w[0] + 4u);
    st32((c.r[18].w[0] + 88u), c.f[21]);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.f[12] = ld32((c.r[2].w[0] + 36u));
    c.f[13] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E607Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 177u, depth + 1u); else { c.pc = 0x003E60E0u; return; } if (c.pc != 0x003E607Cu) [[unlikely]] return; }
L_003E607C:
    st32((c.r[18].w[0] + 120u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003E60BC; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_003E60BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E60E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003E6150; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003E6154; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003E6134; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E6130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003E6164; } }
L_003E6130:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003E6134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E613Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003E613Cu) [[unlikely]] return; }
L_003E613C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003E6160; } }
L_003E6150:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003E6154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E615Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003E615Cu) [[unlikely]] return; }
L_003E615C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003E6160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E6164:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E61F8; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 104u)));  goto L_003E61A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E6248; } }
L_003E61A0:
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003E6244; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E6244; } }
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E61F0u); st32((c.r[4].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 168u, depth + 1u); else { c.pc = 0x003E5F00u; return; } if (c.pc != 0x003E61F0u) [[unlikely]] return; }
L_003E61F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E6244; } }
L_003E61F8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003E6244; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E6244; } }
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6244u); st32((c.r[4].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 168u, depth + 1u); else { c.pc = 0x003E5F00u; return; } if (c.pc != 0x003E6244u) [[unlikely]] return; }
L_003E6244:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E6248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E6250:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003E6284; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_003E628C; } }
L_003E6284:
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003E628C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0]));  goto L_003E62D4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_003E62B4; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E62ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003E62ACu) [[unlikely]] return; }
L_003E62AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E62F4; } }
L_003E62B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E62BCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x003E62BCu) [[unlikely]] return; }
L_003E62BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E62CCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003E62CCu) [[unlikely]] return; }
L_003E62CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E62F0; } }
L_003E62D4:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 7;
L_003E62F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E62F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E6310:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 104u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E63D0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[5].d[0]) { c.f[0] = ld32((c.r[16].w[0]));  goto L_003E63B0; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003E63AC; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  goto L_003E6360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E6410; } }
L_003E6360:
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E640C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003E6384; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_003E6384:
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6394u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003E6394u) [[unlikely]] return; }
L_003E6394:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E63A4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003E63A4u) [[unlikely]] return; }
L_003E63A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E640C; } }
L_003E63AC:
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_003E63B0:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.f[0]);  if (t) { goto L_003E640C; } }
L_003E63D0:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E63DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003E63DCu) [[unlikely]] return; }
L_003E63DC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_003E640C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6410:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E6420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6434u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E6434u) [[unlikely]] return; }
L_003E6434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6448u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 337u, depth + 1u); else { c.pc = 0x003C3C50u; return; } if (c.pc != 0x003E6448u) [[unlikely]] return; }
L_003E6448:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003E6474; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E64B8; } }
L_003E6474:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003E6498; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E64B8; } }
L_003E6498:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E64B4u); st32((c.r[16].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 218u, depth + 1u); else { c.pc = 0x003E6990u; return; } if (c.pc != 0x003E64B4u) [[unlikely]] return; }
L_003E64B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E64B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E64D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E6518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6500u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E6500u) [[unlikely]] return; }
L_003E6500:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E651C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6518u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E6518u) [[unlikely]] return; }
L_003E6518:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E651C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6558u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E6558u) [[unlikely]] return; }
L_003E6558:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E6578; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6574u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 191u, depth + 1u); else { c.pc = 0x003E6420u; return; } if (c.pc != 0x003E6574u) [[unlikely]] return; }
L_003E6574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E6578:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E6590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 711u);  c.pc = t; return; }
L_003E65A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003E65D0; } }
L_003E65C4:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_003E65D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E65F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E65ECu);  if (depth < kMaxDepth) unit_00A8(c, 338u, depth + 1u); else { c.pc = 0x003C3C60u; return; } if (c.pc != 0x003E65ECu) [[unlikely]] return; }
L_003E65EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E65C4u | kUnwind; return; } goto L_003E65C4; }
    c.budget -= 1;
L_003E65F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003E66A8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003E6618u) [[unlikely]] return; }
L_003E6618:
    st32((c.r[16].w[0] + 80u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E6668; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003E6634:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 16u));  goto L_003E6650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003E6668; } }
L_003E6650:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6634u | kUnwind; return; } goto L_003E6634; } }
    c.budget -= 1;
L_003E6668:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003E6698; }
    c.f[12] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E6694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6688u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003E6688u) [[unlikely]] return; }
L_003E6688:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[1]);
    c.budget -= 3;
L_003E6694:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E6698:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E66B4; } }
L_003E66A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003E66B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E66D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003E6868; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003E6740; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E673C; } }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E673C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E673Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 218u, depth + 1u); else { c.pc = 0x003E6990u; return; } if (c.pc != 0x003E673Cu) [[unlikely]] return; }
L_003E673C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E6740:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    set32(c.r[16], ld32((c.r[18].w[0] + 64u)));
    c.f[2] = ld32((c.r[18].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E67F8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 1;
L_003E6764:
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 80u));  goto L_003E677C; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.f[0]);  if (t) { goto L_003E6868; } }
L_003E677C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E67A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), 0u);  if (t) { goto L_003E67B0; } }
L_003E67A8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_003E67B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 218u, depth + 1u); else { c.pc = 0x003E6990u; return; } if (c.pc != 0x003E67BCu) [[unlikely]] return; }
L_003E67BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003E67E4; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 76u));  goto L_003E67E8; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003E6868; } }
L_003E67E4:
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.budget -= 1;
L_003E67E8:
    c.f[2] = ld32((c.r[18].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[18].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6764u | kUnwind; return; } goto L_003E6764; }
L_003E67F8:
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 76u), c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[20]);
    c.f[13] = ld32((c.r[18].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 76u));  goto L_003E682C; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.f[0]);  if (t) { goto L_003E6868; } }
L_003E682C:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.f[14] = ld32((c.r[18].w[0] + 84u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6848u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003E6848u) [[unlikely]] return; }
L_003E6848:
    c.f[3] = ld32((c.r[18].w[0] + 56u));
    c.f[2] = ld32((c.r[18].w[0] + 60u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.budget -= 8;
L_003E6868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E6890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E68A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003E68A4u) [[unlikely]] return; }
L_003E68A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E68C4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003E68C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E68D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E6974; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  goto L_003E691C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E6970; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003E691C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E6970; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E6930:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6960u); c.f[12] = ld32((c.r[19].w[0] + 52u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E6960u) [[unlikely]] return; }
L_003E6960:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6930u | kUnwind; return; } goto L_003E6930; } }
L_003E6970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E6974:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E6990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E69E8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  goto L_003E69D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003E6A04; } }
L_003E69D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E69D8u); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003E69D8u) [[unlikely]] return; }
L_003E69D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E69E0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003E69E0u) [[unlikely]] return; }
L_003E69E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003E6A00; } }
L_003E69E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E69FCu); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003E69FCu) [[unlikely]] return; }
L_003E69FC:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003E6A00:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003E6A04:
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_003E6A50; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 225u, depth + 1u); else { c.pc = 0x003E6AD0u; return; } if (c.pc != 0x003E6A48u) [[unlikely]] return; }
L_003E6A48:
    st32((c.r[18].w[0] + 72u), c.f[0]);
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.budget -= 2;
L_003E6A50:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 225u, depth + 1u); else { c.pc = 0x003E6AD0u; return; } if (c.pc != 0x003E6A68u) [[unlikely]] return; }
L_003E6A68:
    st32((c.r[18].w[0] + 60u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 2u);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.f[12] = ld32((c.r[2].w[0] + 20u));
    c.f[13] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 225u, depth + 1u); else { c.pc = 0x003E6AD0u; return; } if (c.pc != 0x003E6A84u) [[unlikely]] return; }
L_003E6A84:
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003E6AAC; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_003E6AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E6AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003E6B40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003E6B44; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003E6B24; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E6B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003E6B54; } }
L_003E6B20:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003E6B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B2Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003E6B2Cu) [[unlikely]] return; }
L_003E6B2C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003E6B50; } }
L_003E6B40:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003E6B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B4Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003E6B4Cu) [[unlikely]] return; }
L_003E6B4C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003E6B50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E6B54:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E6BD0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 68u)));  goto L_003E6B90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E6C08; } }
L_003E6B90:
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003E6C04; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E6C04; } }
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BC8u); st32((c.r[4].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 218u, depth + 1u); else { c.pc = 0x003E6990u; return; } if (c.pc != 0x003E6BC8u) [[unlikely]] return; }
L_003E6BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E6C04; } }
L_003E6BD0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003E6C04; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E6C04; } }
    st32((c.r[4].w[0] + 64u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C04u); st32((c.r[4].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 218u, depth + 1u); else { c.pc = 0x003E6990u; return; } if (c.pc != 0x003E6C04u) [[unlikely]] return; }
L_003E6C04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E6C08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E6C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E6C24u) [[unlikely]] return; }
L_003E6C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10592u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003E6CAC; }
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E6CA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C78u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003E6C78u) [[unlikely]] return; }
L_003E6C78:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E6CA8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6CA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E6CA0u) [[unlikely]] return; }
L_003E6CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E6CBC; } }
L_003E6CA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E6CAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003E6CBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E6D18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D00u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E6D00u) [[unlikely]] return; }
L_003E6D00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E6D1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E6D18u) [[unlikely]] return; }
L_003E6D18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E6D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D58u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E6D58u) [[unlikely]] return; }
L_003E6D58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E6D78; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 231u, depth + 1u); else { c.pc = 0x003E6C10u; return; } if (c.pc != 0x003E6D74u) [[unlikely]] return; }
L_003E6D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E6D78:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E6D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 608u);  c.pc = t; return; }
L_003E6DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E6E80; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_003E6DE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E6E7C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003E6DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[3].w[0] + 160u), c.f[0]);
    st32((c.r[3].w[0] + 164u), 0u);
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
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E40u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003E6E40u) [[unlikely]] return; }
L_003E6E40:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E5Cu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x003E6E5Cu) [[unlikely]] return; }
L_003E6E5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E6E7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003E6E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E6E80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6E90:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003E6EAC; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003E6EAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E6EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), 0u);  c.pc = t; return; }
L_003E6ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6EE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E6EE4u) [[unlikely]] return; }
L_003E6EE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10656u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003E6F5C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E6F58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F38u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003E6F38u) [[unlikely]] return; }
L_003E6F38:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E6F58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E6F6C; } }
L_003E6F58:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E6F5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003E6F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E6FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E6FB0u) [[unlikely]] return; }
L_003E6FB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E6FCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E6FC8u) [[unlikely]] return; }
L_003E6FC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E6FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6FE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7008u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E7008u) [[unlikely]] return; }
L_003E7008:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E7028; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7024u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 247u, depth + 1u); else { c.pc = 0x003E6ED0u; return; } if (c.pc != 0x003E7024u) [[unlikely]] return; }
L_003E7024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E7028:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E7040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 609u);  c.pc = t; return; }
L_003E7050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7100; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_003E7090; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E70FC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003E7090:
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E70C0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003E70C0u) [[unlikely]] return; }
L_003E70C0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E70DCu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x003E70DCu) [[unlikely]] return; }
L_003E70DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E70FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003E70FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E7100:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E7124u) [[unlikely]] return; }
L_003E7124:
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[25], c.r[25].w[0] + 10720u);
    st32((c.r[16].w[0] + 4u), c.r[25].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E713Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E713Cu) [[unlikely]] return; }
L_003E713C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[2]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E71C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E71B0u) [[unlikely]] return; }
L_003E71B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E71CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E71C8u) [[unlikely]] return; }
L_003E71C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E71CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E71E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7208u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E7208u) [[unlikely]] return; }
L_003E7208:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E7228; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7224u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 260u, depth + 1u); else { c.pc = 0x003E7110u; return; } if (c.pc != 0x003E7224u) [[unlikely]] return; }
L_003E7224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E7228:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E7240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 610u);  c.pc = t; return; }
L_003E7250:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E7270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003E7284u) [[unlikely]] return; }
L_003E7284:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E72A4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003E72A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E72B0:
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
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E73CC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);  goto L_003E72FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E73C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.budget -= 1;
L_003E72FC:
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7310u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003E7310u) [[unlikely]] return; }
L_003E7310:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E7358; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[17], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E736C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003E736C; } }
L_003E7358:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E736C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 2;
L_003E736C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E73C8; } }
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7384u); st32((c.r[17].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x003E7384u) [[unlikely]] return; }
L_003E7384:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7390u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003E7390u) [[unlikely]] return; }
L_003E7390:
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 128u);
    st32((c.r[17].w[0] + 164u), c.f[20]);
    set32(c.r[5], c.r[18].w[0] + 64u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[3] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 176u), c.f[0]);
    st32((c.r[17].w[0] + 180u), c.f[1]);
    st32((c.r[17].w[0] + 184u), c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E73C8u); st32((c.r[17].w[0] + 188u), c.f[3]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003E73C8u) [[unlikely]] return; }
L_003E73C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E73CC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E73F0:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E7410; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003E7410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E7420:
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), 0u);  c.pc = t; return; }
L_003E7430:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E745Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003E745Cu) [[unlikely]] return; }
L_003E745C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7468u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003E7468u) [[unlikely]] return; }
L_003E7468:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7474u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003E7474u) [[unlikely]] return; }
L_003E7474:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7484u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003E7484u) [[unlikely]] return; }
L_003E7484:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7494u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003E7494u) [[unlikely]] return; }
L_003E7494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E74B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E74C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003E74C4u) [[unlikely]] return; }
L_003E74C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10784u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E7594; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 10784u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  goto L_003E7544; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7540u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003E7540u) [[unlikely]] return; }
L_003E7540:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003E7544:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 56u)));  goto L_003E755C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7558u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003E7558u) [[unlikely]] return; }
L_003E7558:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_003E755C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E7574; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7570u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003E7570u) [[unlikely]] return; }
L_003E7570:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E7574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E757Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003E757Cu) [[unlikely]] return; }
L_003E757C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E7598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003E7594u) [[unlikely]] return; }
L_003E7594:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E7598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E75B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E75D8u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003E75D8u) [[unlikely]] return; }
L_003E75D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E75F8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E75F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 286u, depth + 1u); else { c.pc = 0x003E74B0u; return; } if (c.pc != 0x003E75F4u) [[unlikely]] return; }
L_003E75F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E75F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E7610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 121u);  c.pc = t; return; }
L_003E7620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003E7850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E765Cu); set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003E765Cu) [[unlikely]] return; }
L_003E765C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003E7840; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7680u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003E7680u) [[unlikely]] return; }
L_003E7680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003E7840; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E76A4u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003E76A4u) [[unlikely]] return; }
L_003E76A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003E7840; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7700u); set32(c.r[5], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003E7700u) [[unlikely]] return; }
L_003E7700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003E7840; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E77F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
L_003E7724:
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 32u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 28u), 0u);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 60u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 52;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7724u | kUnwind; return; } goto L_003E7724; } }
    c.budget -= 1;
L_003E77F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7804u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 307u, depth + 1u); else { c.pc = 0x003E7870u; return; } if (c.pc != 0x003E7804u) [[unlikely]] return; }
L_003E7804:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E7838; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E7814:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7820u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B1(c, 309u, depth + 1u); else { c.pc = 0x003E78C0u; return; } if (c.pc != 0x003E7820u) [[unlikely]] return; }
L_003E7820:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7814u | kUnwind; return; } goto L_003E7814; }
    c.budget -= 1;
L_003E7838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003E7854; } }
L_003E7840:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003E7850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E7854:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E7870:
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003E78B8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E7888:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7888u | kUnwind; return; } goto L_003E7888; } }
    c.budget -= 1;
L_003E78B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E78C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[12]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E7958; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 76u), 0u);  goto L_003E7958; }
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E7954; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 5;
L_003E7954:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_003E7958:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[18].w[0] + 80u)));  goto L_003E7994; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003E7990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E798Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 307u, depth + 1u); else { c.pc = 0x003E7870u; return; } if (c.pc != 0x003E798Cu) [[unlikely]] return; }
L_003E798C:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_003E7990:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_003E7994:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003E7B20; } }
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003E7AE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E79CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E79CC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003E79CC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003E7AE8; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    c.budget -= 1;
L_003E79D8:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 8u)));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] - 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 16u)));
    st32((c.r[6].w[0] - 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] - 12u));
    st32((c.r[5].w[0] - 4u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 24u)));
    st32((c.r[6].w[0] - 16u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] - 20u));
    st32((c.r[5].w[0] - 12u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 32u)));
    st32((c.r[6].w[0] - 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] - 28u));
    st32((c.r[5].w[0] - 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 40u)));
    st32((c.r[6].w[0] - 32u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] - 36u));
    st32((c.r[5].w[0] - 28u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 48u)));
    st32((c.r[6].w[0] - 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] - 44u));
    st32((c.r[5].w[0] - 36u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 56u)));
    st32((c.r[6].w[0] - 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] - 52u));
    st32((c.r[5].w[0] - 44u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] - 64u)));
    st32((c.r[6].w[0] - 56u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] - 60u));
    set32(c.r[3], c.r[3].w[0] - 64u);
    c.budget -= 68;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[5].w[0] - 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E79D8u | kUnwind; return; } goto L_003E79D8; } }
L_003E7AE8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003E7B20; } }
    set32(c.r[6], c.r[4].w[0] << 3);
    c.budget -= 1;
L_003E7AF4:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] - 8u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0] - 4u));
    set32(c.r[6], c.r[6].w[0] - 8u);
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] > 0; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7AF4u | kUnwind; return; } goto L_003E7AF4; } }
L_003E7B20:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E7B54; }
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.f[0] = c.r[16].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
L_003E7B54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E7B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E7BC0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E7BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BB4u);  if (depth < kMaxDepth) unit_00B1(c, 309u, depth + 1u); else { c.pc = 0x003E78C0u; return; } if (c.pc != 0x003E7BB4u) [[unlikely]] return; }
L_003E7BB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 316u, depth + 1u); else { c.pc = 0x003E7BE0u; return; } if (c.pc != 0x003E7BC0u) [[unlikely]] return; }
L_003E7BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E7BC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7BE0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C3Cu);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x003E7C3Cu) [[unlikely]] return; }
L_003E7C3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[23], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[23].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C54u); set32(c.r[6], c.r[23].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003E7C54u) [[unlikely]] return; }
L_003E7C54:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C6Cu); st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003E7C6Cu) [[unlikely]] return; }
L_003E7C6C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C78u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003E7C78u) [[unlikely]] return; }
L_003E7C78:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[2] = ld32((c.r[5].w[0] + 60u));
    c.f[4] = ld32((c.r[5].w[0] + 48u));
    c.f[5] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[6] = ld32((c.r[5].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[4].w[0] + 48u);  if (t) { goto L_003E7CEC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0] + 8u));  if (t) { goto L_003E7D08; } }
L_003E7CEC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 7;
L_003E7D08:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[7], c.r[4].w[0] << 24);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = c.r[5].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[6]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003E7D48; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0] + 4u));  if (t) { goto L_003E7D60; } }
L_003E7D48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 6;
L_003E7D60:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[6], c.r[4].w[0] << 16);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = c.r[5].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];  if (t) { goto L_003E7DA0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0]));  if (t) { goto L_003E7DBC; } }
L_003E7DA0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = ld32((c.r[3].w[0]));
    c.budget -= 7;
L_003E7DBC:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[6], c.r[4].w[0] << 8);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = c.r[5].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];  if (t) { goto L_003E7DFC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003E7E18; } }
L_003E7DFC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003E7E18:
    c.r[17].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00B2(c, 5u, depth); } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E7E30:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_003E7F50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E7EC8; } }
    set32(c.r[7], c.r[5].w[0] + 16u);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E84u); set32(c.r[8], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003E7430u; return; } if (c.pc != 0x003E7E84u) [[unlikely]] return; }
L_003E7E84:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[8], c.r[29].w[0] + 336u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EBCu); set32(c.r[7], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003E7430u; return; } if (c.pc != 0x003E7EBCu) [[unlikely]] return; }
L_003E7EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7F78; } }
    c.budget -= 1;
L_003E7EC8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E7F28; } }
    set32(c.r[7], c.r[5].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EE4u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003E7430u; return; } if (c.pc != 0x003E7EE4u) [[unlikely]] return; }
L_003E7EE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[8], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F1Cu); set32(c.r[7], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003E7430u; return; } if (c.pc != 0x003E7F1Cu) [[unlikely]] return; }
L_003E7F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7F78; } }
    c.budget -= 1;
L_003E7F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 344u), 0u);
    st32((c.r[29].w[0] + 340u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 336u), 0u);  if (t) { goto L_003E7F78; } }
L_003E7F50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 344u), 0u);
    st32((c.r[29].w[0] + 340u), 0u);
    st32((c.r[29].w[0] + 336u), 0u);
    c.budget -= 10;
L_003E7F78:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F88u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003E7F88u) [[unlikely]] return; }
L_003E7F88:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FA0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003E7FA0u) [[unlikely]] return; }
L_003E7FA0:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FB0u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003E7FB0u) [[unlikely]] return; }
L_003E7FB0:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FC0u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003E7FC0u) [[unlikely]] return; }
L_003E7FC0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FD0u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003E7FD0u) [[unlikely]] return; }
L_003E7FD0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FDCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003E7FDCu) [[unlikely]] return; }
L_003E7FDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.f[3] = 0u;
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.budget -= 9;
    [[clang::musttail]] return unit_00B2(c, 1u, depth);
}

}
