#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0,
    0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0,
    0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D4000;
    case 2u: goto L_002D4020;
    case 3u: goto L_002D4034;
    case 4u: goto L_002D4040;
    case 5u: goto L_002D4044;
    case 6u: goto L_002D404C;
    case 7u: goto L_002D40C0;
    case 8u: goto L_002D4120;
    case 9u: goto L_002D4124;
    case 10u: goto L_002D4150;
    case 11u: goto L_002D4194;
    case 12u: goto L_002D41BC;
    case 13u: goto L_002D41E0;
    case 14u: goto L_002D4244;
    case 15u: goto L_002D4298;
    case 16u: goto L_002D42A4;
    case 17u: goto L_002D42B0;
    case 18u: goto L_002D42BC;
    case 19u: goto L_002D434C;
    case 20u: goto L_002D4358;
    case 21u: goto L_002D4364;
    case 22u: goto L_002D4370;
    case 23u: goto L_002D4398;
    case 24u: goto L_002D43B4;
    case 25u: goto L_002D43D8;
    case 26u: goto L_002D444C;
    case 27u: goto L_002D44F4;
    case 28u: goto L_002D4520;
    case 29u: goto L_002D4544;
    case 30u: goto L_002D45EC;
    case 31u: goto L_002D461C;
    case 32u: goto L_002D4630;
    case 33u: goto L_002D464C;
    case 34u: goto L_002D4668;
    case 35u: goto L_002D4694;
    case 36u: goto L_002D46C8;
    case 37u: goto L_002D46E0;
    case 38u: goto L_002D4770;
    case 39u: goto L_002D4794;
    case 40u: goto L_002D479C;
    case 41u: goto L_002D4818;
    case 42u: goto L_002D4828;
    case 43u: goto L_002D4840;
    case 44u: goto L_002D484C;
    case 45u: goto L_002D4858;
    case 46u: goto L_002D4864;
    case 47u: goto L_002D4878;
    case 48u: goto L_002D4894;
    case 49u: goto L_002D48D8;
    case 50u: goto L_002D4914;
    case 51u: goto L_002D4920;
    case 52u: goto L_002D4968;
    case 53u: goto L_002D49B8;
    case 54u: goto L_002D49F0;
    case 55u: goto L_002D4A80;
    case 56u: goto L_002D4A8C;
    case 57u: goto L_002D4A94;
    case 58u: goto L_002D4AB4;
    case 59u: goto L_002D4AC4;
    case 60u: goto L_002D4ACC;
    case 61u: goto L_002D4AE8;
    case 62u: goto L_002D4AF8;
    case 63u: goto L_002D4B00;
    case 64u: goto L_002D4B2C;
    case 65u: goto L_002D4B3C;
    case 66u: goto L_002D4B60;
    case 67u: goto L_002D4B74;
    case 68u: goto L_002D4B90;
    case 69u: goto L_002D4B98;
    case 70u: goto L_002D4BA8;
    case 71u: goto L_002D4BB8;
    case 72u: goto L_002D4BC0;
    case 73u: goto L_002D4BF0;
    case 74u: goto L_002D4C58;
    case 75u: goto L_002D4C78;
    case 76u: goto L_002D4C98;
    case 77u: goto L_002D4CB4;
    case 78u: goto L_002D4D24;
    case 79u: goto L_002D4DA8;
    case 80u: goto L_002D4DB8;
    case 81u: goto L_002D4DC4;
    case 82u: goto L_002D4DDC;
    case 83u: goto L_002D4E50;
    case 84u: goto L_002D4EA0;
    case 85u: goto L_002D4ED0;
    case 86u: goto L_002D4EE8;
    case 87u: goto L_002D4F00;
    case 88u: goto L_002D4F44;
    case 89u: goto L_002D4F5C;
    case 90u: goto L_002D4FB8;
    case 91u: goto L_002D4FC0;
    case 92u: goto L_002D4FD4;
    case 93u: goto L_002D4FEC;
    case 94u: goto L_002D5020;
    case 95u: goto L_002D503C;
    case 96u: goto L_002D506C;
    case 97u: goto L_002D509C;
    case 98u: goto L_002D5100;
    case 99u: goto L_002D5128;
    case 100u: goto L_002D5144;
    case 101u: goto L_002D5164;
    case 102u: goto L_002D5184;
    case 103u: goto L_002D51E8;
    case 104u: goto L_002D5210;
    case 105u: goto L_002D5284;
    case 106u: goto L_002D5294;
    case 107u: goto L_002D5310;
    case 108u: goto L_002D5490;
    case 109u: goto L_002D5520;
    case 110u: goto L_002D5530;
    case 111u: goto L_002D5564;
    case 112u: goto L_002D5578;
    case 113u: goto L_002D55AC;
    case 114u: goto L_002D55D8;
    case 115u: goto L_002D5600;
    case 116u: goto L_002D560C;
    case 117u: goto L_002D561C;
    case 118u: goto L_002D5630;
    case 119u: goto L_002D5664;
    case 120u: goto L_002D5678;
    case 121u: goto L_002D56AC;
    case 122u: goto L_002D56D8;
    case 123u: goto L_002D5704;
    case 124u: goto L_002D5730;
    case 125u: goto L_002D575C;
    case 126u: goto L_002D5778;
    case 127u: goto L_002D57D0;
    case 128u: goto L_002D5820;
    case 129u: goto L_002D5848;
    case 130u: goto L_002D5854;
    case 131u: goto L_002D5890;
    case 132u: goto L_002D58D8;
    case 133u: goto L_002D58E8;
    case 134u: goto L_002D5930;
    case 135u: goto L_002D5968;
    case 136u: goto L_002D5978;
    case 137u: goto L_002D5990;
    case 138u: goto L_002D59A0;
    case 139u: goto L_002D59C4;
    case 140u: goto L_002D59D4;
    case 141u: goto L_002D59F4;
    case 142u: goto L_002D5A98;
    case 143u: goto L_002D5AB8;
    case 144u: goto L_002D5AF4;
    case 145u: goto L_002D5B30;
    case 146u: goto L_002D5B50;
    case 147u: goto L_002D5B5C;
    case 148u: goto L_002D5B64;
    case 149u: goto L_002D5B6C;
    case 150u: goto L_002D5B88;
    case 151u: goto L_002D5BB4;
    case 152u: goto L_002D5BC0;
    case 153u: goto L_002D5BE4;
    case 154u: goto L_002D5BF0;
    case 155u: goto L_002D5C04;
    case 156u: goto L_002D5C10;
    case 157u: goto L_002D5C40;
    case 158u: goto L_002D5C6C;
    case 159u: goto L_002D5C9C;
    case 160u: goto L_002D5CB8;
    case 161u: goto L_002D5D00;
    case 162u: goto L_002D5D08;
    case 163u: goto L_002D5D30;
    case 164u: goto L_002D5D4C;
    case 165u: goto L_002D5D54;
    case 166u: goto L_002D5D80;
    case 167u: goto L_002D5DB8;
    case 168u: goto L_002D5DEC;
    case 169u: goto L_002D5E18;
    case 170u: goto L_002D5E40;
    case 171u: goto L_002D5E5C;
    case 172u: goto L_002D5E68;
    case 173u: goto L_002D5E90;
    case 174u: goto L_002D5EBC;
    case 175u: goto L_002D5EDC;
    case 176u: goto L_002D5EFC;
    case 177u: goto L_002D5F1C;
    case 178u: goto L_002D5F3C;
    case 179u: goto L_002D5F5C;
    case 180u: goto L_002D5F7C;
    case 181u: goto L_002D5F9C;
    case 182u: goto L_002D5FBC;
    case 183u: goto L_002D5FDC;
    case 184u: goto L_002D5FFC;
    case 185u: goto L_002D601C;
    case 186u: goto L_002D603C;
    case 187u: goto L_002D605C;
    case 188u: goto L_002D607C;
    case 189u: goto L_002D60A0;
    case 190u: goto L_002D60B4;
    case 191u: goto L_002D60C4;
    case 192u: goto L_002D60D8;
    case 193u: goto L_002D60E4;
    case 194u: goto L_002D60F8;
    case 195u: goto L_002D6110;
    case 196u: goto L_002D615C;
    case 197u: goto L_002D6200;
    case 198u: goto L_002D6274;
    case 199u: goto L_002D62CC;
    case 200u: goto L_002D6318;
    case 201u: goto L_002D63C0;
    case 202u: goto L_002D63D0;
    case 203u: goto L_002D64D0;
    case 204u: goto L_002D6520;
    case 205u: goto L_002D6530;
    case 206u: goto L_002D6540;
    case 207u: goto L_002D656C;
    case 208u: goto L_002D65BC;
    case 209u: goto L_002D65CC;
    case 210u: goto L_002D661C;
    case 211u: goto L_002D6648;
    case 212u: goto L_002D666C;
    case 213u: goto L_002D668C;
    case 214u: goto L_002D66B0;
    case 215u: goto L_002D66C0;
    case 216u: goto L_002D66FC;
    case 217u: goto L_002D6720;
    case 218u: goto L_002D6740;
    case 219u: goto L_002D6764;
    case 220u: goto L_002D6790;
    case 221u: goto L_002D6860;
    case 222u: goto L_002D69A0;
    case 223u: goto L_002D69C8;
    case 224u: goto L_002D6A14;
    case 225u: goto L_002D6A4C;
    case 226u: goto L_002D6AB0;
    case 227u: goto L_002D6AC4;
    case 228u: goto L_002D6B50;
    case 229u: goto L_002D6B54;
    case 230u: goto L_002D6B64;
    case 231u: goto L_002D6B6C;
    case 232u: goto L_002D6BF4;
    case 233u: goto L_002D6C08;
    case 234u: goto L_002D6C10;
    case 235u: goto L_002D6C18;
    case 236u: goto L_002D6C20;
    case 237u: goto L_002D6C28;
    case 238u: goto L_002D6C30;
    case 239u: goto L_002D6C38;
    case 240u: goto L_002D6C84;
    case 241u: goto L_002D6D30;
    case 242u: goto L_002D6D3C;
    case 243u: goto L_002D6D48;
    case 244u: goto L_002D6D54;
    case 245u: goto L_002D6D70;
    case 246u: goto L_002D6DA8;
    case 247u: goto L_002D6DB4;
    case 248u: goto L_002D6DD8;
    case 249u: goto L_002D6DE4;
    case 250u: goto L_002D6DF0;
    case 251u: goto L_002D6DF8;
    case 252u: goto L_002D6E14;
    case 253u: goto L_002D6E90;
    case 254u: goto L_002D6EC0;
    case 255u: goto L_002D6ED4;
    case 256u: goto L_002D6F14;
    case 257u: goto L_002D6F24;
    case 258u: goto L_002D6F30;
    case 259u: goto L_002D6F44;
    case 260u: goto L_002D6F60;
    case 261u: goto L_002D6F7C;
    case 262u: goto L_002D6F98;
    case 263u: goto L_002D6FA8;
    case 264u: goto L_002D6FC4;
    case 265u: goto L_002D6FDC;
    case 266u: goto L_002D6FF0;
    case 267u: goto L_002D7014;
    case 268u: goto L_002D7060;
    case 269u: goto L_002D7118;
    case 270u: goto L_002D7130;
    case 271u: goto L_002D713C;
    case 272u: goto L_002D7148;
    case 273u: goto L_002D7160;
    case 274u: goto L_002D71A4;
    case 275u: goto L_002D71D8;
    case 276u: goto L_002D71E8;
    case 277u: goto L_002D7258;
    case 278u: goto L_002D7268;
    case 279u: goto L_002D727C;
    case 280u: goto L_002D72B4;
    case 281u: goto L_002D72E4;
    case 282u: goto L_002D730C;
    case 283u: goto L_002D731C;
    case 284u: goto L_002D738C;
    case 285u: goto L_002D73B4;
    case 286u: goto L_002D743C;
    case 287u: goto L_002D744C;
    case 288u: goto L_002D74AC;
    case 289u: goto L_002D74DC;
    case 290u: goto L_002D74F4;
    case 291u: goto L_002D7524;
    case 292u: goto L_002D754C;
    case 293u: goto L_002D755C;
    case 294u: goto L_002D75CC;
    case 295u: goto L_002D75F4;
    case 296u: goto L_002D764C;
    case 297u: goto L_002D768C;
    case 298u: goto L_002D76BC;
    case 299u: goto L_002D76D4;
    case 300u: goto L_002D76E0;
    case 301u: goto L_002D76EC;
    case 302u: goto L_002D7708;
    case 303u: goto L_002D7714;
    case 304u: goto L_002D7724;
    case 305u: goto L_002D7750;
    case 306u: goto L_002D7778;
    case 307u: goto L_002D77A8;
    case 308u: goto L_002D77B8;
    case 309u: goto L_002D77C4;
    case 310u: goto L_002D77D0;
    case 311u: goto L_002D77E0;
    case 312u: goto L_002D7834;
    case 313u: goto L_002D7840;
    case 314u: goto L_002D7850;
    case 315u: goto L_002D785C;
    case 316u: goto L_002D7874;
    case 317u: goto L_002D7884;
    case 318u: goto L_002D7890;
    case 319u: goto L_002D789C;
    case 320u: goto L_002D78B0;
    case 321u: goto L_002D790C;
    case 322u: goto L_002D7918;
    case 323u: goto L_002D799C;
    case 324u: goto L_002D79D0;
    case 325u: goto L_002D7A40;
    case 326u: goto L_002D7A4C;
    case 327u: goto L_002D7A80;
    case 328u: goto L_002D7A90;
    case 329u: goto L_002D7A9C;
    case 330u: goto L_002D7AB4;
    case 331u: goto L_002D7AC4;
    case 332u: goto L_002D7AD0;
    case 333u: goto L_002D7ADC;
    case 334u: goto L_002D7B00;
    case 335u: goto L_002D7C00;
    case 336u: goto L_002D7CF0;
    case 337u: goto L_002D7D14;
    case 338u: goto L_002D7DC4;
    case 339u: goto L_002D7DDC;
    case 340u: goto L_002D7DE8;
    case 341u: goto L_002D7DF4;
    case 342u: goto L_002D7E10;
    case 343u: goto L_002D7E1C;
    case 344u: goto L_002D7E40;
    case 345u: goto L_002D7EE8;
    case 346u: goto L_002D7EF0;
    case 347u: goto L_002D7F10;
    case 348u: goto L_002D7F18;
    case 349u: goto L_002D7F80;
    case 350u: goto L_002D7FA4;
    case 351u: goto L_002D7FB0;
    case 352u: goto L_002D7FC8;
    default: bad_entry(c, 0x002D4000u); return;
    }
L_002D4000:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4020u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x002D4020u) [[unlikely]] return; }
L_002D4020:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4034u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0015C830u; return; } if (c.pc != 0x002D4034u) [[unlikely]] return; }
L_002D4034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4040; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_002D4040:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002D4044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D404Cu);  if (depth < kMaxDepth) unit_006C(c, 9u, depth + 1u); else { c.pc = 0x002D0120u; return; } if (c.pc != 0x002D404Cu) [[unlikely]] return; }
L_002D404C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D4120; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[3].d[0] | 2048ull;
    c.r[3].d[0] = c.r[4].d[0] & 6ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[20].w[0] + 176u), c.r[4].w[0]);  if (t) { goto L_002D4120; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D40A0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D40A0; } }
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4120; } }
L_002D40A0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002D40B8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_002D40B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D40C0u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D40C0u) [[unlikely]] return; }
L_002D40C0:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4120; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4120; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D410C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_002D4120; } }
L_002D410C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002D4120; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[20].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 3;
L_002D4120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002D4124:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002D4150:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4194u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002D4194u) [[unlikely]] return; }
L_002D4194:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 476u)));
    st32((c.r[21].w[0] + 480u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 476u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[21].w[0] + 516u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 480u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41BCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 373u, depth + 1u); else { c.pc = 0x002A7F80u; return; } if (c.pc != 0x002D41BCu) [[unlikely]] return; }
L_002D41BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    st32((c.r[21].w[0] + 488u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002D41D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4210; } }
L_002D41D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002D41E0u) [[unlikely]] return; }
L_002D41E0:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002D4200; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4210; } }
L_002D4200:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002D4210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 484u), c.r[2].w[0]);  if (t) { goto L_002D4220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D49BC; } }
L_002D4220:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 176u));
    c.f[0] = 0u;
    st32((c.r[21].w[0] + 176u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[21].w[0] + 512u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D4248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4244u); set32(c.r[4], ld32((c.r[21].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x002D4244u) [[unlikely]] return; }
L_002D4244:
    st32((c.r[21].w[0] + 512u), 0u);
    c.budget -= 1;
L_002D4248:
    c.budget -= 2;
    if (c.r[20].sd[0] >= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002D4254; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4254:
    set32(c.r[3], ld32((c.r[21].w[0] + 484u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D4274; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D4284; } }
L_002D4274:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002D4284:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 1320u)));  goto L_002D42CC; }
    set32(c.r[4], ld32((c.r[21].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x002D4298u) [[unlikely]] return; }
L_002D4298:
    set32(c.r[4], ld32((c.r[21].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x002D42A4u) [[unlikely]] return; }
L_002D42A4:
    set32(c.r[4], ld32((c.r[21].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 149u, depth + 1u); else { c.pc = 0x00158EA0u; return; } if (c.pc != 0x002D42B0u) [[unlikely]] return; }
L_002D42B0:
    set32(c.r[4], ld32((c.r[21].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x002D42BCu) [[unlikely]] return; }
L_002D42BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002D465C; } }
L_002D42CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002D42E4; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002D46A4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002D42E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_002D4310; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_002D4304; } }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 492u), c.f[0]);  if (t) { goto L_002D430C; } }
L_002D4304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[21].w[0] + 492u), c.r[2].w[0]);
    c.budget -= 2;
L_002D430C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002D4310:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 464u)));  goto L_002D433C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_002D4330; } }
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 500u), c.f[0]);  if (t) { goto L_002D4338; } }
L_002D4330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[21].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 2;
L_002D4338:
    set32(c.r[4], ld32((c.r[21].w[0] + 464u)));
    c.budget -= 1;
L_002D433C:
    set32(c.r[16], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[22], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D434Cu); set32(c.r[5], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x002D434Cu) [[unlikely]] return; }
L_002D434C:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4358u); set32(c.r[4], ld32((c.r[21].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x002D4358u) [[unlikely]] return; }
L_002D4358:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4364u); set32(c.r[4], ld32((c.r[21].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 149u, depth + 1u); else { c.pc = 0x00158EA0u; return; } if (c.pc != 0x002D4364u) [[unlikely]] return; }
L_002D4364:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4370u); set32(c.r[4], ld32((c.r[21].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x002D4370u) [[unlikely]] return; }
L_002D4370:
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[21].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_002D439C; }
    st32((c.r[21].w[0] + 496u), 0u);
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4398u); set32(c.r[4], ld32((c.r[21].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x002D4398u) [[unlikely]] return; }
L_002D4398:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002D439C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_002D43B4; } }
    st32((c.r[21].w[0] + 504u), 0u);
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43B4u); set32(c.r[4], ld32((c.r[21].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 151u, depth + 1u); else { c.pc = 0x00158EE0u; return; } if (c.pc != 0x002D43B4u) [[unlikely]] return; }
L_002D43B4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 580u)));  goto L_002D452C; }
    set32(c.r[5], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002D43D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4428; } }
L_002D43D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002D43D8u) [[unlikely]] return; }
L_002D43D8:
    set32(c.r[5], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 1);  goto L_002D43F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D4408; } }
L_002D43F8:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002D4408:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D4428; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D4420; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4428; } }
L_002D4428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4528; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0])));  if (t) { goto L_002D4440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D449C; } }
L_002D4440:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D444Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002D444Cu) [[unlikely]] return; }
L_002D444C:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002D446C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D447C; } }
L_002D446C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002D447C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D449C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D4494; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D449C; } }
L_002D449C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002D4528; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_002D4620; }
    set32(c.r[4], ld32((c.r[21].w[0] + 1168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D461C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 584u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D44E4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D44E4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D44E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D461C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44F4u);  if (depth < kMaxDepth) unit_0039(c, 7u, depth + 1u); else { c.pc = 0x00204180u; return; } if (c.pc != 0x002D44F4u) [[unlikely]] return; }
L_002D44F4:
    set32(c.r[2], ld32((c.r[21].w[0] + 584u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002D4514; }
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_002D4514; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4514:
    set32(c.r[4], ld32((c.r[21].w[0] + 1168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4520u);  if (depth < kMaxDepth) unit_0038(c, 406u, depth + 1u); else { c.pc = 0x00203F20u; return; } if (c.pc != 0x002D4520u) [[unlikely]] return; }
L_002D4520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D461C; } }
L_002D4528:
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 1;
L_002D452C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 476u)));  if (t) { goto L_002D453C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4594; } }
L_002D453C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4544u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002D4544u) [[unlikely]] return; }
L_002D4544:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002D4564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D4574; } }
L_002D4564:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002D4574:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D4594; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D458C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D458C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4594; } }
L_002D4594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D461C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D461C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 1168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D461C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 584u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D45DC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002D45DC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D45DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D461C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45ECu);  if (depth < kMaxDepth) unit_0039(c, 7u, depth + 1u); else { c.pc = 0x00204180u; return; } if (c.pc != 0x002D45ECu) [[unlikely]] return; }
L_002D45EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 584u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002D4610; }
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002D4610; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4610:
    set32(c.r[4], ld32((c.r[21].w[0] + 1168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D461Cu);  if (depth < kMaxDepth) unit_0038(c, 406u, depth + 1u); else { c.pc = 0x00203F20u; return; } if (c.pc != 0x002D461Cu) [[unlikely]] return; }
L_002D461C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002D4620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D465C; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 608u)));
    c.budget -= 2;
L_002D4630:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 1004u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D464Cu); set32(c.r[4], c.r[4].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 277u, depth + 1u); else { c.pc = 0x0018B260u; return; } if (c.pc != 0x002D464Cu) [[unlikely]] return; }
L_002D464C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 608u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4630u | kUnwind; return; } goto L_002D4630; }
L_002D465C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D46A4; } }
L_002D4668:
    set32(c.r[2], ld32((c.r[21].w[0] + 468u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002D46A4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4694u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D4694u) [[unlikely]] return; }
L_002D4694:
    set32(c.r[2], ld32((c.r[21].w[0] + 468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_002D46A4:
    set32(c.r[2], ld32((c.r[21].w[0] + 472u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4668u | kUnwind; return; } goto L_002D4668; }
    set32(c.r[4], ld32((c.r[21].w[0] + 468u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 472u), 0u);  goto L_002D46D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46C8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002D46C8u) [[unlikely]] return; }
L_002D46C8:
    st32((c.r[21].w[0] + 468u), 0u);
    st32((c.r[21].w[0] + 472u), 0u);
    c.budget -= 2;
L_002D46D0:
    c.budget -= 2;
    if (c.r[20].sd[0] >= 0) { set32(c.r[4], ld32((c.r[21].w[0] + 1320u)));  goto L_002D48C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D4740; } }
L_002D46E0:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D46F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D4708; } }
L_002D46F8:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002D4708:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4728; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002D4740; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D473C; } }
L_002D4728:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D473C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 472u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 472u), c.r[2].w[0]);
    c.budget -= 3;
L_002D473C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D4740:
    set32(c.r[3], ld32((c.r[21].w[0] + 484u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D46E0u | kUnwind; return; } goto L_002D46E0; }
    set32(c.r[3], ld32((c.r[21].w[0] + 472u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D48BC; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4770u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002D4770u) [[unlikely]] return; }
L_002D4770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 468u), c.r[2].w[0]);  if (t) { goto L_002D49A4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 472u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4794u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002D4794u) [[unlikely]] return; }
L_002D4794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002D48A8; } }
L_002D479C:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D47B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002D47C4; } }
L_002D47B4:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002D47C4:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002D48A8; }
    set32(c.r[4], c.r[16].w[0] - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 468u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], 0u + 352u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4818u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002D4818u) [[unlikely]] return; }
L_002D4818:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_002D482C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4828u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x002D4828u) [[unlikely]] return; }
L_002D4828:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002D482C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 144u)));  goto L_002D49A8; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4840u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x002D4840u) [[unlikely]] return; }
L_002D4840:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D484Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x002D484Cu) [[unlikely]] return; }
L_002D484C:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4858u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000E(c, 149u, depth + 1u); else { c.pc = 0x00158EA0u; return; } if (c.pc != 0x002D4858u) [[unlikely]] return; }
L_002D4858:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4864u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x002D4864u) [[unlikely]] return; }
L_002D4864:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D48A4; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 608u)));
    c.budget -= 2;
L_002D4878:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 1004u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4894u); set32(c.r[4], c.r[4].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 277u, depth + 1u); else { c.pc = 0x0018B260u; return; } if (c.pc != 0x002D4894u) [[unlikely]] return; }
L_002D4894:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 608u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4878u | kUnwind; return; } goto L_002D4878; }
L_002D48A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D48A8:
    set32(c.r[3], ld32((c.r[21].w[0] + 484u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D479Cu | kUnwind; return; } goto L_002D479C; }
L_002D48BC:
    set32(c.r[4], ld32((c.r[21].w[0] + 1320u)));
    c.budget -= 1;
L_002D48C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D4988; }
    c.budget -= 2;
    if (c.r[19].sd[0] >= 0) { set32(c.r[3], ld32((c.r[21].w[0] + 484u)));  goto L_002D48E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D48D8u);  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x002D48D8u) [[unlikely]] return; }
L_002D48D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4914; } }
L_002D48E0:
    c.r[5].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D48FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D490C; } }
L_002D48FC:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002D490C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4914u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x002D4914u) [[unlikely]] return; }
L_002D4914:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4988; } }
L_002D4920:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002D4938; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D4948; } }
L_002D4938:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002D4948:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002D4988; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4968u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002D4968u) [[unlikely]] return; }
L_002D4968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4984; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002D4984; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[2].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_002D4984:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D4988:
    set32(c.r[3], ld32((c.r[21].w[0] + 484u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4920u | kUnwind; return; } goto L_002D4920; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D49BC; } }
L_002D49A4:
    set32(c.r[5], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 1;
L_002D49A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D49B8u); set32(c.r[4], c.r[4].w[0] + 26432u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002D49B8u) [[unlikely]] return; }
L_002D49B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D49BC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002D49F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 608u)));
    c.f[4] = ld32((c.r[4].w[0] + 444u));
    c.f[3] = ld32((c.r[4].w[0] + 460u));
    c.f[1] = ld32((c.r[4].w[0] + 440u));
    c.f[5] = ld32((c.r[3].w[0] + 988u));
    c.f[2] = ld32((c.r[3].w[0] + 984u));
    c.f[0] = ld32((c.r[4].w[0] + 456u));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[5], c.f[4]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 980u));
    c.f[3] = ld32((c.r[4].w[0] + 436u));
    c.f[2] = ld32((c.r[4].w[0] + 452u));
    c.f[1] = ld32((c.r[3].w[0] + 976u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 448u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[23] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_002D4BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A80u); set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_006C(c, 9u, depth + 1u); else { c.pc = 0x002D0120u; return; } if (c.pc != 0x002D4A80u) [[unlikely]] return; }
L_002D4A80:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 190u, depth + 1u); else { c.pc = 0x002C2440u; return; } if (c.pc != 0x002D4A8Cu) [[unlikely]] return; }
L_002D4A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x002D4A94u) [[unlikely]] return; }
L_002D4A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D4AE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002D4AB4u) [[unlikely]] return; }
L_002D4AB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AC4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002D4AC4u) [[unlikely]] return; }
L_002D4AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4ACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002D4ACCu) [[unlikely]] return; }
L_002D4ACC:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_002D4AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AE8u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002D4AE8u) [[unlikely]] return; }
L_002D4AE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002D4AF8u) [[unlikely]] return; }
L_002D4AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002D4B00u) [[unlikely]] return; }
L_002D4B00:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    st32((c.r[2].w[0]), c.f[23]);
    st32((c.r[2].w[0] + 4u), c.f[22]);
    st32((c.r[2].w[0] + 8u), c.f[21]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 176u)));  goto L_002D4B40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002D4B2Cu) [[unlikely]] return; }
L_002D4B2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B3Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002D4B3Cu) [[unlikely]] return; }
L_002D4B3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_002D4B40:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 31604u)));  goto L_002D4B7C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31604u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  goto L_002D4B9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B60u);  if (depth < kMaxDepth) unit_0064(c, 81u, depth + 1u); else { c.pc = 0x002B0960u; return; } if (c.pc != 0x002D4B60u) [[unlikely]] return; }
L_002D4B60:
    set32(c.r[4], ld32((c.r[28].w[0] - 30308u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D4B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B74u); st32((c.r[28].w[0] - 31604u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002D4B74u) [[unlikely]] return; }
L_002D4B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4B98; } }
L_002D4B7C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B90u);  if (depth < kMaxDepth) unit_0064(c, 81u, depth + 1u); else { c.pc = 0x002B0960u; return; } if (c.pc != 0x002D4B90u) [[unlikely]] return; }
L_002D4B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B98u);  if (depth < kMaxDepth) unit_0064(c, 90u, depth + 1u); else { c.pc = 0x002B0A50u; return; } if (c.pc != 0x002D4B98u) [[unlikely]] return; }
L_002D4B98:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_002D4B9C:
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D4BA8u) [[unlikely]] return; }
L_002D4BA8:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D4BB8u) [[unlikely]] return; }
L_002D4BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x002D4BC0u) [[unlikely]] return; }
L_002D4BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D4BF0:
    set32(c.r[29], c.r[29].w[0] - 1216u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 208u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C58u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_006C(c, 9u, depth + 1u); else { c.pc = 0x002D0120u; return; } if (c.pc != 0x002D4C58u) [[unlikely]] return; }
L_002D4C58:
    c.f[28] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[19].w[0] + 644u));
    c.f[0] = ld32((c.r[19].w[0] + 628u));
    c.f[21] = ld32((c.r[19].w[0] + 656u));
    c.f[20] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C78u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002D4C78u) [[unlikely]] return; }
L_002D4C78:
    c.f[2] = 0u;
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C98u); c.f[27] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D4C98u) [[unlikely]] return; }
L_002D4C98:
    set32(c.r[5], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002D4CAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4D04; } }
L_002D4CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4CB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002D4CB4u) [[unlikely]] return; }
L_002D4CB4:
    set32(c.r[5], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 1);  goto L_002D4CD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D4CE4; } }
L_002D4CD4:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002D4CE4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D4D04; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D4CFC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4D04; } }
L_002D4D04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 1176u)));  goto L_002D4D94; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002D4D1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4D74; } }
L_002D4D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002D4D24u) [[unlikely]] return; }
L_002D4D24:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002D4D44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D4D54; } }
L_002D4D44:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002D4D54:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D4D74; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002D4D6C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4D74; } }
L_002D4D74:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D4D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 1172u)));  if (t) { goto L_002D4D94; } }
L_002D4D90:
    set32(c.r[17], ld32((c.r[19].w[0] + 1176u)));
    c.budget -= 1;
L_002D4D94:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x53480000u);  goto L_002D4DB0; }
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D4DA8u) [[unlikely]] return; }
L_002D4DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { goto L_002D577C; } }
L_002D4DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DB8u); c.r[4].d[0] = c.r[2].d[0] | 17495ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x002D4DB8u) [[unlikely]] return; }
L_002D4DB8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 89u, depth + 1u); else { c.pc = 0x00214C00u; return; } if (c.pc != 0x002D4DC4u) [[unlikely]] return; }
L_002D4DC4:
    set32(c.r[22], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[22].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_002D4DE4; }
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D4DDCu) [[unlikely]] return; }
L_002D4DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5778; } }
L_002D4DE4:
    st32((c.r[29].w[0] + 908u), 0u);
    st32((c.r[29].w[0] + 912u), 0u);
    st32((c.r[29].w[0] + 932u), 0u);
    st32((c.r[29].w[0] + 936u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 956u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 960u), 0u);
    st32((c.r[29].w[0] + 980u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 984u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 608u)));  goto L_002D4F68; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4F64; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 992u);  goto L_002D4E48; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 192u));  goto L_002D4E58; }
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.budget -= 1;
L_002D4E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D4E50u) [[unlikely]] return; }
L_002D4E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5778; } }
L_002D4E58:
    set32(c.r[2], 0u - 65u);
    st32((c.r[29].w[0] + 864u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 196u));
    st32((c.r[29].w[0] + 868u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 200u));
    st32((c.r[29].w[0] + 872u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 204u));
    st32((c.r[29].w[0] + 876u), c.f[0]);
    st32((c.r[29].w[0] + 880u), c.f[27]);
    st32((c.r[19].w[0] + 576u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 332u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4EA0u); set32(c.r[5], ld32((c.r[19].w[0] + 1296u)));  if (depth < kMaxDepth) unit_0051(c, 390u, depth + 1u); else { c.pc = 0x002674E0u; return; } if (c.pc != 0x002D4EA0u) [[unlikely]] return; }
L_002D4EA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 536u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D4EB8; } }
    set32(c.r[7], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D4EB8:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], 0u + 500u);
    set32(c.r[8], c.r[29].w[0] + 864u);
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4ED0u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 438u, depth + 1u); else { c.pc = 0x001BBD50u; return; } if (c.pc != 0x002D4ED0u) [[unlikely]] return; }
L_002D4ED0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D4F38; }
    set32(c.r[3], ld32((c.r[19].w[0] + 576u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 576u), c.r[3].w[0]);  if (t) { goto L_002D4F14; } }
L_002D4EE8:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 536u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F00u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0026(c, 439u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x002D4F00u) [[unlikely]] return; }
L_002D4F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4F34; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 576u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 576u), c.r[3].w[0]);
    c.budget -= 3;
L_002D4F14:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4F34; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 576u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4EE8u | kUnwind; return; } goto L_002D4EE8; }
L_002D4F34:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D4F38:
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 390u, depth + 1u); else { c.pc = 0x002674E0u; return; } if (c.pc != 0x002D4F44u) [[unlikely]] return; }
L_002D4F44:
    set32(c.r[2], ld32((c.r[19].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4F64; } }
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D4F5Cu) [[unlikely]] return; }
L_002D4F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5778; } }
L_002D4F64:
    set32(c.r[2], ld32((c.r[19].w[0] + 608u)));
    c.budget -= 1;
L_002D4F68:
    c.f[1] = ld32((c.r[19].w[0] + 444u));
    c.f[0] = ld32((c.r[19].w[0] + 460u));
    c.r[21].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 988u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[22].d[0] == 0ull; c.f[26] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002D576C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[24] = fp::ee::add(c.fcr31, c.f[0], c.f[27]);
    c.f[23] = ld32((c.r[5].w[0] + 26512u));
    c.f[22] = ld32((c.r[4].w[0] + 26516u));
    c.f[21] = ld32((c.r[3].w[0] + 26520u));
    c.f[20] = ld32((c.r[2].w[0] + 26524u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[19].w[0] + 352u);  if (t) { goto L_002D5760; } }
L_002D4FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D4FC0u) [[unlikely]] return; }
L_002D4FC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 816u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FD4u); c.r[7].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 96u, depth + 1u); else { c.pc = 0x00214CF0u; return; } if (c.pc != 0x002D4FD4u) [[unlikely]] return; }
L_002D4FD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002D5760; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FECu); set32(c.r[6], c.r[29].w[0] + 832u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D4FECu) [[unlikely]] return; }
L_002D4FEC:
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 464u));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    set32(c.r[5], c.r[29].w[0] + 560u);
    st32((c.r[29].w[0] + 568u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 560u), c.f[2]);
    st32((c.r[29].w[0] + 564u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5020u); st32((c.r[29].w[0] + 572u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D5020u) [[unlikely]] return; }
L_002D5020:
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D503Cu); st128((c.r[29].w[0] + 800u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D503Cu) [[unlikely]] return; }
L_002D503C:
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[5], c.r[29].w[0] + 800u);
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[6], c.r[29].w[0] + 544u);
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[29].w[0] + 544u), c.f[2]);
    st32((c.r[29].w[0] + 548u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D506Cu); st32((c.r[29].w[0] + 556u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D506Cu) [[unlikely]] return; }
L_002D506C:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[29].w[0] + 1192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    c.f[12] = c.f[24];
    st32((c.r[29].w[0] + 1184u), c.f[2]);
    st32((c.r[29].w[0] + 1188u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D509Cu); st32((c.r[29].w[0] + 1196u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D509Cu) [[unlikely]] return; }
L_002D509C:
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[2], 0u + 4u);
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[29].w[0] + 1072u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 360u));
    set32(c.r[4], c.r[29].w[0] + 1104u);
    st32((c.r[29].w[0] + 1200u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 992u);
    st32((c.r[29].w[0] + 1008u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 364u));
    st32((c.r[29].w[0] + 1204u), c.f[0]);
    st32((c.r[29].w[0] + 1012u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1184u));
    st32((c.r[29].w[0] + 1208u), c.f[2]);
    st32((c.r[29].w[0] + 1016u), c.f[2]);
    st32((c.r[29].w[0] + 992u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 1188u));
    c.f[0] = ld32((c.r[29].w[0] + 1196u));
    st32((c.r[29].w[0] + 1212u), c.f[1]);
    st32((c.r[29].w[0] + 1020u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 1192u));
    st32((c.r[29].w[0] + 996u), c.f[2]);
    st32((c.r[29].w[0] + 1004u), c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5100u); st32((c.r[29].w[0] + 1000u), c.f[1]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D5100u) [[unlikely]] return; }
L_002D5100:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D51B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D514C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5128u); set32(c.r[4], c.r[4].w[0] + 30192u);  if (depth < kMaxDepth) unit_0027(c, 50u, depth + 1u); else { c.pc = 0x001BC6D0u; return; } if (c.pc != 0x002D5128u) [[unlikely]] return; }
L_002D5128:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 30192u);
    set32(c.r[5], c.r[5].w[0] - 18176u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5144u); set32(c.r[6], c.r[6].w[0] + 30168u);  if (depth < kMaxDepth) unit_0008(c, 160u, depth + 1u); else { c.pc = 0x00141F10u; return; } if (c.pc != 0x002D5144u) [[unlikely]] return; }
L_002D5144:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 30256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D514C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[5], c.r[5].w[0] + 26496u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5164u); set32(c.r[6], c.r[6].w[0] + 30192u);  if (depth < kMaxDepth) unit_0017(c, 59u, depth + 1u); else { c.pc = 0x0017C9C0u; return; } if (c.pc != 0x002D5164u) [[unlikely]] return; }
L_002D5164:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D52B0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[29].w[0] + 800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5184u); set32(c.r[4], c.r[4].w[0] + 30192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002D5184u) [[unlikely]] return; }
L_002D5184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 30208u), c.f[23]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 30192u);
    st32((c.r[3].w[0] + 30212u), c.f[22]);
    st32((c.r[2].w[0] + 30216u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 30228u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 30220u), c.f[20]);  if (t) { goto L_002D52B0; } }
L_002D51B8:
    c.f[0] = ld32((c.r[29].w[0] + 1192u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.f[2] = ld32((c.r[29].w[0] + 1184u));
    set32(c.r[5], c.r[29].w[0] + 1184u);
    c.f[1] = ld32((c.r[29].w[0] + 1188u));
    set32(c.r[6], c.r[29].w[0] + 1200u);
    st32((c.r[29].w[0] + 776u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1196u));
    st32((c.r[29].w[0] + 768u), c.f[2]);
    st32((c.r[29].w[0] + 772u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51E8u); st32((c.r[29].w[0] + 780u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D51E8u) [[unlikely]] return; }
L_002D51E8:
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.r[20].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 792u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    st32((c.r[29].w[0] + 784u), c.f[2]);
    st32((c.r[29].w[0] + 788u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 796u), c.f[0]);  if (t) { goto L_002D52A0; } }
L_002D5210:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D5240; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002D5240:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002D524C; }
    set32(c.r[4], c.r[2].w[0] + 272u);
    c.budget -= 1;
L_002D524C:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 536u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_002D526C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D5294; } }
L_002D526C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D527C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D5294; } }
L_002D527C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5284u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x002D5284u) [[unlikely]] return; }
L_002D5284:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], c.r[29].w[0] + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5294u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 1u, depth + 1u); else { c.pc = 0x001A0000u; return; } if (c.pc != 0x002D5294u) [[unlikely]] return; }
L_002D5294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D52B0; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002D52A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 576u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5210u | kUnwind; return; } goto L_002D5210; }
L_002D52B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D575C; } }
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_002D52DC; }
L_002D52DC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[27]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D575C; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[27], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 752u);
    set32(c.r[5], c.r[5].w[0] + 11088u);
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[27]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5310u); c.f[12] = fp::ee::mul(c.fcr31, c.f[28], c.f[0]);  if (depth < kMaxDepth) unit_001D(c, 238u, depth + 1u); else { c.pc = 0x00196700u; return; } if (c.pc != 0x002D5310u) [[unlikely]] return; }
L_002D5310:
    c.f[2] = ld32((c.r[29].w[0] + 764u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[26]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 764u), c.f[2]);  if (t) { goto L_002D534C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002D5368; } }
L_002D534C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_002D5368:
    c.f[1] = ld32((c.r[29].w[0] + 760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_002D53A4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002D53C0; } }
L_002D53A4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_002D53C0:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.f[0] = ld32((c.r[29].w[0] + 756u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_002D5404; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002D541C; } }
L_002D5404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_002D541C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.f[0] = ld32((c.r[29].w[0] + 752u));
    c.r[5].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_002D5460; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002D5478; } }
L_002D5460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_002D5478:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[20].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5490u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D5490u) [[unlikely]] return; }
L_002D5490:
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.f[2] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[5], c.r[29].w[0] + 720u);
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    set32(c.r[6], c.r[29].w[0] + 704u);
    st32((c.r[29].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 332u));
    st32((c.r[29].w[0] + 720u), c.f[2]);
    st32((c.r[29].w[0] + 724u), c.f[1]);
    st32((c.r[29].w[0] + 732u), c.f[0]);
    c.f[4] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 816u));
    c.f[2] = ld32((c.r[29].w[0] + 820u));
    st32((c.r[29].w[0] + 736u), c.f[4]);
    c.f[4] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[29].w[0] + 824u));
    c.f[0] = ld32((c.r[29].w[0] + 828u));
    st32((c.r[29].w[0] + 740u), c.f[4]);
    c.f[4] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 744u), c.f[4]);
    c.f[4] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[29].w[0] + 748u), c.f[4]);
    st32((c.r[29].w[0] + 656u), c.f[3]);
    st32((c.r[29].w[0] + 660u), c.f[2]);
    st32((c.r[29].w[0] + 664u), c.f[1]);
    st32((c.r[29].w[0] + 668u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[29].w[0] + 672u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[29].w[0] + 676u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 680u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5520u); st32((c.r[29].w[0] + 684u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 59u, depth + 1u); else { c.pc = 0x0017C9C0u; return; } if (c.pc != 0x002D5520u) [[unlikely]] return; }
L_002D5520:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5530u); set32(c.r[6], c.r[29].w[0] + 704u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D5530u) [[unlikely]] return; }
L_002D5530:
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[29].w[0] + 432u));
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[5], c.r[29].w[0] + 512u);
    st32((c.r[29].w[0] + 520u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 512u), c.f[2]);
    st32((c.r[29].w[0] + 516u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5564u); st32((c.r[29].w[0] + 524u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D5564u) [[unlikely]] return; }
L_002D5564:
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5578u); st128((c.r[29].w[0] + 640u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002D5578u) [[unlikely]] return; }
L_002D5578:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_002D55A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 644u), 0u);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 652u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 648u), 0u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 6;
L_002D55A0:
    set32(c.r[5], c.r[29].w[0] + 704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D55ACu); set32(c.r[6], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D55ACu) [[unlikely]] return; }
L_002D55AC:
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[29].w[0] + 696u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 316u));
    st32((c.r[29].w[0] + 688u), c.f[2]);
    st32((c.r[29].w[0] + 692u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D55D8u); st32((c.r[29].w[0] + 700u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D55D8u) [[unlikely]] return; }
L_002D55D8:
    c.f[1] = ld32((c.r[29].w[0] + 848u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[28].w[0] - 32068u));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[6], c.r[29].w[0] + 640u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5600u); c.f[25] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D5600u) [[unlikely]] return; }
L_002D5600:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D560Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D560Cu) [[unlikely]] return; }
L_002D560C:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D561Cu); set32(c.r[6], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D561Cu) [[unlikely]] return; }
L_002D561C:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5630u); st128((c.r[29].w[0] + 608u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D5630u) [[unlikely]] return; }
L_002D5630:
    c.f[2] = ld32((c.r[29].w[0] + 608u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[1] = ld32((c.r[29].w[0] + 612u));
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.f[0] = ld32((c.r[29].w[0] + 616u));
    set32(c.r[6], c.r[29].w[0] + 624u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[25]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[25]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[25]);
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 612u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5664u); st32((c.r[29].w[0] + 616u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D5664u) [[unlikely]] return; }
L_002D5664:
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5678u); st128((c.r[29].w[0] + 592u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D5678u) [[unlikely]] return; }
L_002D5678:
    c.f[2] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[1] = ld32((c.r[29].w[0] + 596u));
    set32(c.r[5], c.r[29].w[0] + 704u);
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    set32(c.r[6], c.r[29].w[0] + 592u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[25]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[25]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[25]);
    st32((c.r[29].w[0] + 592u), c.f[2]);
    st32((c.r[29].w[0] + 596u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D56ACu); st32((c.r[29].w[0] + 600u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D56ACu) [[unlikely]] return; }
L_002D56AC:
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[5], c.r[29].w[0] + 704u);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    set32(c.r[6], c.r[29].w[0] + 608u);
    st32((c.r[29].w[0] + 896u), c.f[2]);
    st32((c.r[29].w[0] + 916u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 900u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D56D8u); st32((c.r[29].w[0] + 904u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D56D8u) [[unlikely]] return; }
L_002D56D8:
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[5], c.r[29].w[0] + 688u);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    set32(c.r[6], c.r[29].w[0] + 608u);
    st32((c.r[29].w[0] + 920u), c.f[2]);
    st32((c.r[29].w[0] + 940u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 924u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5704u); st32((c.r[29].w[0] + 928u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D5704u) [[unlikely]] return; }
L_002D5704:
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    set32(c.r[5], c.r[29].w[0] + 688u);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[6], c.r[29].w[0] + 592u);
    st32((c.r[29].w[0] + 944u), c.f[2]);
    st32((c.r[29].w[0] + 964u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 948u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5730u); st32((c.r[29].w[0] + 952u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D5730u) [[unlikely]] return; }
L_002D5730:
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[5], 0u + 4u);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 968u), c.f[2]);
    st32((c.r[29].w[0] + 988u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 972u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D575Cu); st32((c.r[29].w[0] + 976u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x002D575Cu) [[unlikely]] return; }
L_002D575C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002D5760:
    c.r[2].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4FB8u | kUnwind; return; } goto L_002D4FB8; } }
L_002D576C:
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5778u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D5778u) [[unlikely]] return; }
L_002D5778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_002D577C:
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1216u);  c.pc = t; return; }
L_002D57D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D5878; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = 0u;
    st32((c.r[17].w[0] + 528u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 176u));
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 512u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[17].w[0] + 520u)));  goto L_002D5828; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5820u); set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x002D5820u) [[unlikely]] return; }
L_002D5820:
    st32((c.r[17].w[0] + 512u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 2;
L_002D5828:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  goto L_002D5840; }
    set32(c.r[2], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    st32((c.r[17].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 4;
L_002D5840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5848u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x002D5848u) [[unlikely]] return; }
L_002D5848:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5854u); set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x002D5854u) [[unlikely]] return; }
L_002D5854:
    st32((c.r[17].w[0] + 496u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[17].w[0] + 504u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 9;
L_002D5878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D5918; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 528u)));  goto L_002D58C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002D591C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 528u)));
    c.budget -= 1;
L_002D58C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2C000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 520u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58D8u); set32(c.r[4], ld32((c.r[16].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x002D58D8u) [[unlikely]] return; }
L_002D58D8:
    st32((c.r[16].w[0] + 520u), 0u);
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58E8u); set32(c.r[4], ld32((c.r[16].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x002D58E8u) [[unlikely]] return; }
L_002D58E8:
    st32((c.r[16].w[0] + 496u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[16].w[0] + 504u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 12;
L_002D5918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D591C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D5930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D5980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002D5968u) [[unlikely]] return; }
L_002D5968:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5978u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00800000u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002D5978u) [[unlikely]] return; }
L_002D5978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002D5B14; } }
L_002D5980:
    set32(c.r[3], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 992u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5998; } }
L_002D5990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 204u), 0u);  if (t) { goto L_002D5B10; } }
L_002D5998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59A0u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D59A0u) [[unlikely]] return; }
L_002D59A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 400u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5990u | kUnwind; return; } goto L_002D5990; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D59EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002D59C4u) [[unlikely]] return; }
L_002D59C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59D4u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00800000u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002D59D4u) [[unlikely]] return; }
L_002D59D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_002D5A80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5990u | kUnwind; return; } goto L_002D5990; } }
L_002D59EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59F4u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D59F4u) [[unlikely]] return; }
L_002D59F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 400u)));  if (t) { goto L_002D5A3C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_002D5A34; }
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  goto L_002D5A2C; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5A34; } }
L_002D5A2C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_002D5A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5A40; } }
L_002D5A3C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5A40:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5990u | kUnwind; return; } goto L_002D5990; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], ld32((c.r[3].w[0] + 992u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 7u);  goto L_002D5AD8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 204u), c.r[4].w[0]);  goto L_002D5AA0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D5A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5B10; } }
L_002D5A7C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002D5A80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 996u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A98u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x002D5A98u) [[unlikely]] return; }
L_002D5A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5B10; } }
L_002D5AA0:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    c.f[20] = ld32((c.r[2].w[0] + 1000u));
    set32(c.r[5], ld32((c.r[2].w[0] + 996u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x002D5AB8u) [[unlikely]] return; }
L_002D5AB8:
    st32((c.r[17].w[0] + 160u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 176u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_002D5B10; } }
L_002D5AD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    c.f[20] = ld32((c.r[2].w[0] + 1000u));
    set32(c.r[5], ld32((c.r[2].w[0] + 996u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5AF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x002D5AF4u) [[unlikely]] return; }
L_002D5AF4:
    st32((c.r[17].w[0] + 160u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 176u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 7;
L_002D5B10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002D5B14:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D5B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B50u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 134u, depth + 1u); else { c.pc = 0x002D5930u; return; } if (c.pc != 0x002D5B50u) [[unlikely]] return; }
L_002D5B50:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B5Cu); set32(c.r[5], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x002D5B5Cu) [[unlikely]] return; }
L_002D5B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B64u); set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x002D5B64u) [[unlikely]] return; }
L_002D5B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D5C14; } }
L_002D5B6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 134u, depth + 1u); else { c.pc = 0x002D5930u; return; } if (c.pc != 0x002D5B88u) [[unlikely]] return; }
L_002D5B88:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5BC8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D5BC8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002D5BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 9u, depth + 1u); else { c.pc = 0x002041E0u; return; } if (c.pc != 0x002D5BB4u) [[unlikely]] return; }
L_002D5BB4:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x002D5BC0u) [[unlikely]] return; }
L_002D5BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_002D5C08; } }
L_002D5BC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_002D5BFC; }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002D5BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BE4u); set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x002D5BE4u) [[unlikely]] return; }
L_002D5BE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x002D5BF0u) [[unlikely]] return; }
L_002D5BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5C04; } }
L_002D5BF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002D5BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C04u); set32(c.r[5], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x002D5C04u) [[unlikely]] return; }
L_002D5C04:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002D5C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C10u);  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x002D5C10u) [[unlikely]] return; }
L_002D5C10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D5C14:
    set32(c.r[3], ld32((c.r[17].w[0] + 472u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5B6Cu | kUnwind; return; } goto L_002D5B6C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 416u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D5CA8; } }
L_002D5C6C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { c.r[3].d[0] = c.r[4].d[0] + 0ull;  goto L_002D5CA4; }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[17].d[0]) { st32((c.r[4].w[0] + 8u), c.r[17].w[0]);  goto L_002D5C9C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_002D5C90; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002D5C94; } }
L_002D5C90:
    st32((c.r[16].w[0] + 416u), c.r[2].w[0]);
    c.budget -= 1;
L_002D5C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C9Cu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002D5C9Cu) [[unlikely]] return; }
L_002D5C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D5CDC; } }
L_002D5CA4:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_002D5CA8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5C6Cu | kUnwind; return; } goto L_002D5C6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5CB8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002D5CB8u) [[unlikely]] return; }
L_002D5CB8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 416u)));  goto L_002D5CC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D5CDC; } }
L_002D5CC8:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_002D5CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 416u)));  if (t) { goto L_002D5D18; } }
L_002D5D08:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_002D5D18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_002D5D24; } }
L_002D5D18:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5D08u | kUnwind; return; } goto L_002D5D08; }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002D5D24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D5D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 416u)));  if (t) { goto L_002D5D58; } }
L_002D5D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D54u); set32(c.r[16], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002D5D54u) [[unlikely]] return; }
L_002D5D54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D5D58:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5D4Cu | kUnwind; return; } goto L_002D5D4C; } }
    st32((c.r[17].w[0] + 416u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5D80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D5DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D5E1C; } }
L_002D5DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 532u)));  if (t) { goto L_002D5DC8; } }
L_002D5DB8:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_002D5DD8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D5DC8:
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5DB8u | kUnwind; return; } goto L_002D5DB8; } }
L_002D5DD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 4u), c.r[17].w[0]);  goto L_002D5E04; }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x002D5DECu) [[unlikely]] return; }
L_002D5DEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D5E1C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 532u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 532u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 4;
L_002D5E04:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 464u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E18u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x002D5E18u) [[unlikely]] return; }
L_002D5E18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D5E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 532u)));  if (t) { goto L_002D5E6C; } }
L_002D5E5C:
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D5E68u) [[unlikely]] return; }
L_002D5E68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D5E6C:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5E5Cu | kUnwind; return; } goto L_002D5E5C; } }
    st32((c.r[17].w[0] + 532u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 172u)));  goto L_002D5EC4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5EBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5EBCu) [[unlikely]] return; }
L_002D5EBC:
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 2;
L_002D5EC4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 168u)));  goto L_002D5EE4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5EDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5EDCu) [[unlikely]] return; }
L_002D5EDC:
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 2;
L_002D5EE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_002D5F04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5EFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5EFCu) [[unlikely]] return; }
L_002D5EFC:
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 2;
L_002D5F04:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_002D5F24; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5F1Cu) [[unlikely]] return; }
L_002D5F1C:
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_002D5F24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_002D5F44; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5F3Cu) [[unlikely]] return; }
L_002D5F3C:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 2;
L_002D5F44:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_002D5F64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5F5Cu) [[unlikely]] return; }
L_002D5F5C:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 2;
L_002D5F64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_002D5F84; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5F7Cu) [[unlikely]] return; }
L_002D5F7C:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 2;
L_002D5F84:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_002D5FA4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5F9Cu) [[unlikely]] return; }
L_002D5F9C:
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 2;
L_002D5FA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  goto L_002D5FC4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5FBCu) [[unlikely]] return; }
L_002D5FBC:
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 2;
L_002D5FC4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_002D5FE4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5FDCu) [[unlikely]] return; }
L_002D5FDC:
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 2;
L_002D5FE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_002D6004; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D5FFCu) [[unlikely]] return; }
L_002D5FFC:
    st32((c.r[16].w[0] + 140u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 2;
L_002D6004:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_002D6024; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D601Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D601Cu) [[unlikely]] return; }
L_002D601C:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 2;
L_002D6024:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  goto L_002D6044; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D603Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D603Cu) [[unlikely]] return; }
L_002D603C:
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 2;
L_002D6044:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_002D6064; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D605Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D605Cu) [[unlikely]] return; }
L_002D605C:
    st32((c.r[16].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 2;
L_002D6064:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), 0u);  goto L_002D6084; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D607Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D607Cu) [[unlikely]] return; }
L_002D607C:
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 2;
L_002D6084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D60A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002D60B4u) [[unlikely]] return; }
L_002D60B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D60FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 197u, depth + 1u); else { c.pc = 0x002D6200u; return; } if (c.pc != 0x002D60C4u) [[unlikely]] return; }
L_002D60C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D60DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60D8u);  if (depth < kMaxDepth) unit_0051(c, 255u, depth + 1u); else { c.pc = 0x00265F20u; return; } if (c.pc != 0x002D60D8u) [[unlikely]] return; }
L_002D60D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D60DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60E4u);  if (depth < kMaxDepth) unit_006D(c, 203u, depth + 1u); else { c.pc = 0x002D64D0u; return; } if (c.pc != 0x002D60E4u) [[unlikely]] return; }
L_002D60E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D60F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60F8u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0028D510u; return; } if (c.pc != 0x002D60F8u) [[unlikely]] return; }
L_002D60F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D60FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D6110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D61EC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D61F0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D61EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D615Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D615Cu) [[unlikely]] return; }
L_002D615C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002D617C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002D61EC; } }
L_002D617C:
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 1180u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_002D61C0; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D61BC; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D61BC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D61BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 132u)));  if (t) { goto L_002D61DC; } }
L_002D61BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_002D61C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002D61EC; } }
L_002D61DC:
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
L_002D61EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D61F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D6200:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D6224; } }
    st32((c.r[3].w[0] + 76u), 0u);
    c.budget -= 1;
L_002D6224:
    set32(c.r[5], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D64B4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 96u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D627C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D6268; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002D6260; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6290; } }
L_002D6260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 116u)));  if (t) { goto L_002D6290; } }
L_002D6268:
    set32(c.r[5], ld32((c.r[5].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6274u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002D6274u) [[unlikely]] return; }
L_002D6274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D6290; } }
L_002D627C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 368u)));  if (t) { goto L_002D6290; } }
L_002D6290:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D64B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_002D62C0; }
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D64B0; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002D62C0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D62CCu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002D62CCu) [[unlikely]] return; }
L_002D62CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002D62E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_002D62F4; } }
L_002D62E0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002D62F4; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_002D62F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D6318; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002D6318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D6318u) [[unlikely]] return; }
L_002D6318:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002D64B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002D633C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_002D633C:
    set32(c.r[5], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 132u)));  goto L_002D63D4; }
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 1180u)));  goto L_002D6394; }
    set32(c.r[4], ld32((c.r[5].w[0] + 1180u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));  goto L_002D637C; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6390; } }
L_002D6378:
    set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 1;
L_002D637C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D6390; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_002D6390:
    set32(c.r[3], ld32((c.r[5].w[0] + 1180u)));
    c.budget -= 1;
L_002D6394:
    set32(c.r[3], c.r[3].w[0] - 14u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D63D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 26528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_006D[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D63C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D63D0; } }
    st32((c.r[3].w[0] + 76u), 0u);
    c.budget -= 1;
L_002D63D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 1;
L_002D63D4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002D640C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D63FC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  goto L_002D6400; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002D63FC:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002D6400:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D64B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D640C:
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002D643C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_002D643C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002D6448; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002D6448:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D64B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1180u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));  goto L_002D649C; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6498; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6498; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6498; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D64B0; } }
L_002D6498:
    set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 1;
L_002D649C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D64B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_002D64B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D64B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D64D0:
    set32(c.r[6], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 132u)));  goto L_002D64F0; }
    set32(c.r[5], ld32((c.r[6].w[0] + 88u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 5;
L_002D64F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6510; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D6510; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_002D6510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6540:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D66B0; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D656Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002D656Cu) [[unlikely]] return; }
L_002D656C:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D6580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_002D6594; } }
L_002D6580:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D6594; }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_002D6594:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_002D65C0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002D65BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D65BCu) [[unlikely]] return; }
L_002D65BC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002D65C0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65CCu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002D65CCu) [[unlikely]] return; }
L_002D65CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D65E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_002D65F4; } }
L_002D65E0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D65F4; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_002D65F4:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002D6620; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002D661C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D661Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D661Cu) [[unlikely]] return; }
L_002D661C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002D6620:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6648u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002D6648u) [[unlikely]] return; }
L_002D6648:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D6670; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002D666C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D666Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D666Cu) [[unlikely]] return; }
L_002D666C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D6670:
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D668Cu); st32((c.r[29].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002D668Cu) [[unlikely]] return; }
L_002D668C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D66B4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002D66B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D66B0u) [[unlikely]] return; }
L_002D66B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D66B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002D66C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D6774; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66FCu); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002D66FCu) [[unlikely]] return; }
L_002D66FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_002D6724; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002D6720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D6720u) [[unlikely]] return; }
L_002D6720:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_002D6724:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6740u); st32((c.r[29].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002D6740u) [[unlikely]] return; }
L_002D6740:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002D6768; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002D6764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6764u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D6764u) [[unlikely]] return; }
L_002D6764:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002D6768:
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002D6774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D6790:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    st32((c.r[4].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    st32((c.r[4].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    st32((c.r[4].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    st32((c.r[4].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    st32((c.r[4].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 232u)));
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] + 80u);  goto L_002D67CC; }
    set32(c.r[3], c.r[5].w[0] + 256u);
    c.budget -= 1;
L_002D67CC:
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 284u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 232u)));
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] + 144u);  goto L_002D6800; }
    set32(c.r[3], c.r[5].w[0] + 272u);
    c.budget -= 1;
L_002D6800:
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 300u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 232u)));
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 184u)));  goto L_002D6834; }
    set32(c.r[3], ld32((c.r[5].w[0] + 288u)));
    c.budget -= 1;
L_002D6834:
    st32((c.r[4].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 232u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 212u)));  goto L_002D684C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.budget -= 1;
L_002D684C:
    st32((c.r[4].w[0] + 324u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 256u), c.r[3].w[0]);  c.pc = t; return; }
L_002D6860:
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 312u)));
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 316u)));
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[3].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[3].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[3].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[3].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[3].w[0] + 76u), c.f[0]);
    st32((c.r[3].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[3].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[3].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    st32((c.r[3].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 300u));
    st32((c.r[3].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[3].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    st32((c.r[3].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 300u));
    st32((c.r[3].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[3].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 300u));
    st32((c.r[3].w[0] + 140u), c.f[0]);
    st32((c.r[3].w[0] + 172u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[3].w[0] + 176u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 184u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 180u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 200u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 324u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[3].w[0] + 204u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 212u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 208u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 228u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 79;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 256u), c.r[3].w[0]);  c.pc = t; return; }
L_002D69A0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D69C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002D69C8u) [[unlikely]] return; }
L_002D69C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002D69DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_002D69F0; } }
L_002D69DC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D69F0; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_002D69F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_002D6A18; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002D6A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D6A14u) [[unlikely]] return; }
L_002D6A14:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002D6A18:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D6F48; }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D6C38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_006D[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D6A4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));  goto L_002D6C3C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D6AB8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 104u)));  goto L_002D6A8C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002D6AC8; } }
L_002D6A8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6AC8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AB0u); set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x002D6AB0u) [[unlikely]] return; }
L_002D6AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6AC8; } }
L_002D6AB8:
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AC4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002D6AC4u) [[unlikely]] return; }
L_002D6AC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D6AC8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D6C38; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6C38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D6B14; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002D6B14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002D6B20; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D6B20:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D6B5C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6B58; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D6B48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6C38; } }
L_002D6B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 273u, depth + 1u); else { c.pc = 0x002D7160u; return; } if (c.pc != 0x002D6B50u) [[unlikely]] return; }
L_002D6B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6C38; } }
    goto L_002D6B58;
L_002D6B54:
    c.budget -= 1;
L_002D6B58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D6B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 305u, depth + 1u); else { c.pc = 0x002D7750u; return; } if (c.pc != 0x002D6B64u) [[unlikely]] return; }
L_002D6B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6C38; } }
L_002D6B6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6B7C; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 368u)));
    c.budget -= 1;
L_002D6B7C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D6C38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D6BB8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002D6BB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002D6BC4; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D6BC4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D6C00; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6BFC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D6BEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6C38; } }
L_002D6BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6BF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 273u, depth + 1u); else { c.pc = 0x002D7160u; return; } if (c.pc != 0x002D6BF4u) [[unlikely]] return; }
L_002D6BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6C38; } }
L_002D6BFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D6C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 305u, depth + 1u); else { c.pc = 0x002D7750u; return; } if (c.pc != 0x002D6C08u) [[unlikely]] return; }
L_002D6C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6C38; } }
L_002D6C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 311u, depth + 1u); else { c.pc = 0x002D77E0u; return; } if (c.pc != 0x002D6C18u) [[unlikely]] return; }
L_002D6C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6C38; } }
L_002D6C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 336u, depth + 1u); else { c.pc = 0x002D7CF0u; return; } if (c.pc != 0x002D6C28u) [[unlikely]] return; }
L_002D6C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6C38; } }
L_002D6C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 344u, depth + 1u); else { c.pc = 0x002D7E40u; return; } if (c.pc != 0x002D6C38u) [[unlikely]] return; }
L_002D6C38:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_002D6C3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[4].w[0] + 80u));  goto L_002D6C60; }
    c.f[0] = 0u;
    c.budget -= 1;
L_002D6C60:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 132u)));  if (t) { goto L_002D6C84; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002D6C84u) [[unlikely]] return; }
L_002D6C84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_002D6D4C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6D48; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 80u);  goto L_002D6CB8; }
    set32(c.r[2], c.r[3].w[0] + 256u);
    c.budget -= 1;
L_002D6CB8:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 144u);  goto L_002D6CEC; }
    set32(c.r[2], c.r[3].w[0] + 272u);
    c.budget -= 1;
L_002D6CEC:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D30u); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_006E(c, 102u, depth + 1u); else { c.pc = 0x002D9600u; return; } if (c.pc != 0x002D6D30u) [[unlikely]] return; }
L_002D6D30:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D3Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002D6D3Cu) [[unlikely]] return; }
L_002D6D3C:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D48u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002D6D48u) [[unlikely]] return; }
L_002D6D48:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_002D6D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D54u);  if (depth < kMaxDepth) unit_003A(c, 212u, depth + 1u); else { c.pc = 0x00209EC0u; return; } if (c.pc != 0x002D6D54u) [[unlikely]] return; }
L_002D6D54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_002D6D84; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002D6D70u) [[unlikely]] return; }
L_002D6D70:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 2049u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
L_002D6D84:
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 36u)));  if (t) { goto L_002D6DF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DA8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x002D6DA8u) [[unlikely]] return; }
L_002D6DA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DB4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x002D6DB4u) [[unlikely]] return; }
L_002D6DB4:
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DD8u); c.r[11].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 102u, depth + 1u); else { c.pc = 0x002D9600u; return; } if (c.pc != 0x002D6DD8u) [[unlikely]] return; }
L_002D6DD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DE4u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000D(c, 327u, depth + 1u); else { c.pc = 0x00157220u; return; } if (c.pc != 0x002D6DE4u) [[unlikely]] return; }
L_002D6DE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DF0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 329u, depth + 1u); else { c.pc = 0x00157280u; return; } if (c.pc != 0x002D6DF0u) [[unlikely]] return; }
L_002D6DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 260u, depth + 1u); else { c.pc = 0x002D6F60u; return; } if (c.pc != 0x002D6DF8u) [[unlikely]] return; }
L_002D6DF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D6E44; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  goto L_002D6E48; }
    goto L_002D6E18;
L_002D6E14:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002D6E18:
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[2], 0u + 2001u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6E44; } }
    set32(c.r[2], 0u + 20026u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6E44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6E44; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002D6E44:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002D6E48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 96u)));  goto L_002D6EA4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6EA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D6EA0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D6EA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D6E90u) [[unlikely]] return; }
L_002D6E90:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_002D6EB4; }
L_002D6EA0:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002D6EA4:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_002D6F38; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002D6EB4:
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EC0u); set32(c.r[6], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D6EC0u) [[unlikely]] return; }
L_002D6EC0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6ED4u); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D6ED4u) [[unlikely]] return; }
L_002D6ED4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D6F08; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002D6F08:
    set32(c.r[5], c.r[2].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F14u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D6F14u) [[unlikely]] return; }
L_002D6F14:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F24u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D6F24u) [[unlikely]] return; }
L_002D6F24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F30u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000D(c, 334u, depth + 1u); else { c.pc = 0x00157310u; return; } if (c.pc != 0x002D6F30u) [[unlikely]] return; }
L_002D6F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6F44; } }
L_002D6F38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F44u); set32(c.r[5], c.r[5].w[0] + 11056u);  if (depth < kMaxDepth) unit_000D(c, 334u, depth + 1u); else { c.pc = 0x00157310u; return; } if (c.pc != 0x002D6F44u) [[unlikely]] return; }
L_002D6F44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D6F48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002D6F60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D6F7Cu) [[unlikely]] return; }
L_002D6F7C:
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002D6FE0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F98u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D6F98u) [[unlikely]] return; }
L_002D6F98:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FA8u); set32(c.r[6], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D6FA8u) [[unlikely]] return; }
L_002D6FA8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.f[13] = ld32((c.r[29].w[0] + 100u));
    c.f[14] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FC4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002D6FC4u) [[unlikely]] return; }
L_002D6FC4:
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002D6FDCu) [[unlikely]] return; }
L_002D6FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D6FE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D6FF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7014u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002D7014u) [[unlikely]] return; }
L_002D7014:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002D7028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_002D703C; } }
L_002D7028:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002D703C; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_002D703C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_002D7064; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002D7060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7060u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D7060u) [[unlikely]] return; }
L_002D7060:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002D7064:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002D714C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002D708C; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D7148; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D708C:
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D7148; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7148; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D70D8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002D70D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002D70E4; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D70E4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D7124; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7120; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D710C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_002D7134; } }
L_002D710C:
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7118u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006E(c, 5u, depth + 1u); else { c.pc = 0x002D8110u; return; } if (c.pc != 0x002D7118u) [[unlikely]] return; }
L_002D7118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7130; } }
L_002D7120:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D7124:
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7130u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006E(c, 20u, depth + 1u); else { c.pc = 0x002D84D0u; return; } if (c.pc != 0x002D7130u) [[unlikely]] return; }
L_002D7130:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_002D7134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D713Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002D713Cu) [[unlikely]] return; }
L_002D713C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7148u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002D7148u) [[unlikely]] return; }
L_002D7148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D714C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D7160:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D71AC; } }
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D71A4u); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 61u, depth + 1u); else { c.pc = 0x002D8CA0u; return; } if (c.pc != 0x002D71A4u) [[unlikely]] return; }
L_002D71A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002D71EC; } }
L_002D71AC:
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D71C8; }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 544u);  goto L_002D71E0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D71C8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D71D8u); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 75u, depth + 1u); else { c.pc = 0x002D8E10u; return; } if (c.pc != 0x002D71D8u) [[unlikely]] return; }
L_002D71D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D71E8; } }
L_002D71E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D71E8u); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 5u, depth + 1u); else { c.pc = 0x002D8110u; return; } if (c.pc != 0x002D71E8u) [[unlikely]] return; }
L_002D71E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D71EC:
    c.f[1] = 0u;
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.f[0] = ld32((c.r[3].w[0] + 13712u));
    c.f[20] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[3].w[0] + 13696u);  if (t) { goto L_002D7238; } }
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_002D723C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7238; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002D7238:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_002D723C:
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0] + 512u), 0u);
    st32((c.r[29].w[0] + 496u), 0u);
    st32((c.r[29].w[0] + 500u), 0u);
    st32((c.r[29].w[0] + 504u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7258u); st32((c.r[29].w[0] + 508u), 0u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D7258u) [[unlikely]] return; }
L_002D7258:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7268u); set32(c.r[6], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D7268u) [[unlikely]] return; }
L_002D7268:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D727Cu); st128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D727Cu) [[unlikely]] return; }
L_002D727C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u - 17u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 280u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[6].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D72B4u); st32((c.r[6].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D72B4u) [[unlikely]] return; }
L_002D72B4:
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 528u));
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    set32(c.r[6], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 540u));
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D72E4u); st32((c.r[29].w[0] + 268u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D72E4u) [[unlikely]] return; }
L_002D72E4:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D730Cu); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002D730Cu) [[unlikely]] return; }
L_002D730C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D731Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D731Cu) [[unlikely]] return; }
L_002D731C:
    c.f[6] = fp::ee::sub(c.fcr31, c.f[21], c.f[20]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.f[4] = ld32((c.r[29].w[0] + 276u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[3] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[29].w[0] + 272u), c.f[5]);
    st32((c.r[29].w[0] + 304u), c.f[5]);
    st32((c.r[29].w[0] + 276u), c.f[4]);
    st32((c.r[29].w[0] + 300u), c.f[1]);
    st32((c.r[29].w[0] + 308u), c.f[4]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    st32((c.r[29].w[0] + 280u), c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D738Cu); st32((c.r[29].w[0] + 312u), c.f[2]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D738Cu) [[unlikely]] return; }
L_002D738C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D73A0; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D73A0:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D73B4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D73B4u) [[unlikely]] return; }
L_002D73B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002D766C; }
    c.f[21] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[29].w[0] + 252u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7668; } }
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[1]);
    st32((c.r[29].w[0] + 212u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D743Cu); st32((c.r[29].w[0] + 216u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D743Cu) [[unlikely]] return; }
L_002D743C:
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D744Cu); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D744Cu) [[unlikely]] return; }
L_002D744C:
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], ld32((c.r[18].w[0] + 116u)));  if (t) { goto L_002D7474; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - c.r[2].w[0]);  if (t) { goto L_002D747C; } }
L_002D7474:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 2;
L_002D747C:
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 256ull;  goto L_002D74B4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74ACu); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 61u, depth + 1u); else { c.pc = 0x002D8CA0u; return; } if (c.pc != 0x002D74ACu) [[unlikely]] return; }
L_002D74AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 536u));  if (t) { goto L_002D74F8; } }
L_002D74B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D74CC; }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D74E4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D74CC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74DCu); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 75u, depth + 1u); else { c.pc = 0x002D8E10u; return; } if (c.pc != 0x002D74DCu) [[unlikely]] return; }
L_002D74DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D74F4; } }
L_002D74E4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74F4u); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 5u, depth + 1u); else { c.pc = 0x002D8110u; return; } if (c.pc != 0x002D74F4u) [[unlikely]] return; }
L_002D74F4:
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    c.budget -= 1;
L_002D74F8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 528u));
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    set32(c.r[6], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 540u));
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7524u); st32((c.r[29].w[0] + 268u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D7524u) [[unlikely]] return; }
L_002D7524:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D754Cu); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002D754Cu) [[unlikely]] return; }
L_002D754C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[22] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D755Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D755Cu) [[unlikely]] return; }
L_002D755C:
    c.f[6] = fp::ee::sub(c.fcr31, c.f[22], c.f[20]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.f[4] = ld32((c.r[29].w[0] + 276u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[3] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[29].w[0] + 272u), c.f[5]);
    st32((c.r[29].w[0] + 304u), c.f[5]);
    st32((c.r[29].w[0] + 276u), c.f[4]);
    st32((c.r[29].w[0] + 300u), c.f[1]);
    st32((c.r[29].w[0] + 308u), c.f[4]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    st32((c.r[29].w[0] + 280u), c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75CCu); st32((c.r[29].w[0] + 312u), c.f[2]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D75CCu) [[unlikely]] return; }
L_002D75CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D75E0; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D75E0:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75F4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D75F4u) [[unlikely]] return; }
L_002D75F4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D7668; } }
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D764Cu); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_0061(c, 352u, depth + 1u); else { c.pc = 0x002A7BC0u; return; } if (c.pc != 0x002D764Cu) [[unlikely]] return; }
L_002D764C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7668; } }
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D7668; } }
    st32((c.r[18].w[0] + 116u), c.r[16].w[0]);
    c.budget -= 1;
L_002D7668:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002D766C:
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 256ull;  goto L_002D7694; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D768Cu); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 61u, depth + 1u); else { c.pc = 0x002D8CA0u; return; } if (c.pc != 0x002D768Cu) [[unlikely]] return; }
L_002D768C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_002D76D8; } }
L_002D7694:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002D76AC; }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002D76C4; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D76AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76BCu); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 75u, depth + 1u); else { c.pc = 0x002D8E10u; return; } if (c.pc != 0x002D76BCu) [[unlikely]] return; }
L_002D76BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D76D4; } }
L_002D76C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76D4u); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 5u, depth + 1u); else { c.pc = 0x002D8110u; return; } if (c.pc != 0x002D76D4u) [[unlikely]] return; }
L_002D76D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_002D76D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76E0u); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002D76E0u) [[unlikely]] return; }
L_002D76E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76ECu); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002D76ECu) [[unlikely]] return; }
L_002D76EC:
    c.f[3] = ld32((c.r[29].w[0] + 544u));
    c.f[2] = ld32((c.r[29].w[0] + 528u));
    c.f[1] = ld32((c.r[29].w[0] + 552u));
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7708u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x002D7708u) [[unlikely]] return; }
L_002D7708:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7714u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002D7714u) [[unlikely]] return; }
L_002D7714:
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7724u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D7724u) [[unlikely]] return; }
L_002D7724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_002D7750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D7780; } }
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7778u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_006E(c, 69u, depth + 1u); else { c.pc = 0x002D8D60u; return; } if (c.pc != 0x002D7778u) [[unlikely]] return; }
L_002D7778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_002D77BC; } }
L_002D7780:
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D779C; }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 48u);  goto L_002D77B0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D779C:
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D77A8u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_006E(c, 89u, depth + 1u); else { c.pc = 0x002D9180u; return; } if (c.pc != 0x002D77A8u) [[unlikely]] return; }
L_002D77A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D77B8; } }
L_002D77B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D77B8u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_006E(c, 20u, depth + 1u); else { c.pc = 0x002D84D0u; return; } if (c.pc != 0x002D77B8u) [[unlikely]] return; }
L_002D77B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_002D77BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D77C4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002D77C4u) [[unlikely]] return; }
L_002D77C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D77D0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002D77D0u) [[unlikely]] return; }
L_002D77D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D77E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D7828; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002D782C; } }
L_002D7828:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D782C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7834u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D7834u) [[unlikely]] return; }
L_002D7834:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7840u); set32(c.r[5], c.r[17].w[0] + 368u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D7840u) [[unlikely]] return; }
L_002D7840:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7850u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002D7850u) [[unlikely]] return; }
L_002D7850:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D785Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x002D785Cu) [[unlikely]] return; }
L_002D785C:
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[7], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7874u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002D7874u) [[unlikely]] return; }
L_002D7874:
    set32(c.r[6], c.r[17].w[0] + 352u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7884u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D7884u) [[unlikely]] return; }
L_002D7884:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7890u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002D7890u) [[unlikely]] return; }
L_002D7890:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D789Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002D789Cu) [[unlikely]] return; }
L_002D789C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002D78B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D78FC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002D7900; } }
L_002D78FC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7900:
    set32(c.r[16], ld32((c.r[5].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D790Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D790Cu) [[unlikely]] return; }
L_002D790C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7918u); set32(c.r[5], c.r[17].w[0] + 368u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D7918u) [[unlikely]] return; }
L_002D7918:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[4].d[0]) { st32((c.r[18].w[0] + 152u), 0u);  goto L_002D7A58; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D7958; }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002D7958:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D7964; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D7964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7A54; } }
    c.f[0] = ld32((c.r[16].w[0] + 1280u));
    set32(c.r[5], c.r[17].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[5].w[0] + 16u);
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1284u));
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1288u));
    st32((c.r[18].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1292u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D799Cu); st32((c.r[18].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D799Cu) [[unlikely]] return; }
L_002D799C:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D79D0u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D79D0u) [[unlikely]] return; }
L_002D79D0:
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[18].w[0] + 112u);
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 152u), c.f[0]);
    ld128((c.r[16].w[0] + 1264u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 116u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st32((c.r[29].w[0] + 124u), c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A40u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x002D7A40u) [[unlikely]] return; }
L_002D7A40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002D7B00u; return; } if (c.pc != 0x002D7A4Cu) [[unlikely]] return; }
L_002D7A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002D7A84; } }
L_002D7A54:
    st32((c.r[18].w[0] + 152u), 0u);
    c.budget -= 1;
L_002D7A58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 148u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 144u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 120u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A80u); st32((c.r[18].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002D7B00u; return; } if (c.pc != 0x002D7A80u) [[unlikely]] return; }
L_002D7A80:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002D7A84:
    set32(c.r[6], c.r[18].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A90u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002D7A90u) [[unlikely]] return; }
L_002D7A90:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A9Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x002D7A9Cu) [[unlikely]] return; }
L_002D7A9C:
    set32(c.r[6], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[7], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AB4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002D7AB4u) [[unlikely]] return; }
L_002D7AB4:
    set32(c.r[6], c.r[17].w[0] + 352u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AC4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D7AC4u) [[unlikely]] return; }
L_002D7AC4:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AD0u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002D7AD0u) [[unlikely]] return; }
L_002D7AD0:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7ADCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002D7ADCu) [[unlikely]] return; }
L_002D7ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002D7B00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D7B64; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002D7B68; } }
L_002D7B64:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7B68:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[4].d[0] = c.r[3].d[0] & 65535ull;  goto L_002D7B80; }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull | 65535ull;  if (t) { goto L_002D7B8C; } }
L_002D7B80:
    c.r[20].d[0] = 0ull | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 3;
L_002D7B8C:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002D7BA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[20].w[0]);  if (t) { goto L_002D7BB0; } }
L_002D7BA4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[18].w[0] + 112u), c.r[4].w[0]);  goto L_002D7BB4; }
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_002D7BB0:
    st32((c.r[18].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 1;
L_002D7BB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 396u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 392u)));  goto L_002D7BD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_002D7BE4; } }
L_002D7BD0:
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  goto L_002D7BE8; }
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 1;
L_002D7BE4:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002D7BE8:
    set32(c.r[3], 0u + 8u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002D7CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C00u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002D7C00u) [[unlikely]] return; }
L_002D7C00:
    set32(c.r[5], ld32((c.r[19].w[0] + 392u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], ld32((c.r[19].w[0] + 396u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002D7C1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull | 32768ull;  if (t) { goto L_002D7C80; } }
L_002D7C1C:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 116u)));  goto L_002D7C84; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], 0u - 16384u);  goto L_002D7C3C; }
    set32(c.r[7], 0u + 16384u);
    c.budget -= 1;
L_002D7C3C:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[4].d[0] = c.r[3].d[0] & c.r[20].d[0];  goto L_002D7C50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] & c.r[20].d[0];  if (t) { goto L_002D7C58; } }
L_002D7C50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 2;
L_002D7C58:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002D7C70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[20].w[0]);  if (t) { goto L_002D7C7C; } }
L_002D7C70:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[18].w[0] + 116u), c.r[4].w[0]);  goto L_002D7C80; }
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_002D7C7C:
    st32((c.r[18].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 1;
L_002D7C80:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 1;
L_002D7C84:
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[7].w[0]);  if (t) { goto L_002D7CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.r[4].w[0]);  if (t) { goto L_002D7CB0; } }
L_002D7CA0:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D7CB0; } }
    st32((c.r[18].w[0] + 116u), c.r[5].w[0]);
    c.budget -= 1;
L_002D7CB0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_002D7CCC; }
    st32((c.r[18].w[0] + 112u), c.r[21].w[0]);
    st32((c.r[18].w[0] + 116u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 120u), 0u);
    st32((c.r[18].w[0] + 124u), c.r[22].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 5;
L_002D7CCC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002D7CF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D7D14u) [[unlikely]] return; }
L_002D7D14:
    c.f[0] = ld32((c.r[16].w[0] + 1392u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1396u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1400u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1404u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 80u);  goto L_002D7D48; }
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.budget -= 1;
L_002D7D48:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D7D9C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002D7D9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D7DA8; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D7DA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002D7DCC; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7DC4u); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_006E(c, 47u, depth + 1u); else { c.pc = 0x002D8B30u; return; } if (c.pc != 0x002D7DC4u) [[unlikely]] return; }
L_002D7DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002D7DE0; } }
L_002D7DCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7DDCu); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_006E(c, 55u, depth + 1u); else { c.pc = 0x002D8BF0u; return; } if (c.pc != 0x002D7DDCu) [[unlikely]] return; }
L_002D7DDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_002D7DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7DE8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002D7DE8u) [[unlikely]] return; }
L_002D7DE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7DF4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002D7DF4u) [[unlikely]] return; }
L_002D7DF4:
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E10u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x002D7E10u) [[unlikely]] return; }
L_002D7E10:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E1Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002D7E1Cu) [[unlikely]] return; }
L_002D7E1C:
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D7E40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 1104u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  [[clang::musttail]] return unit_006E(c, 4u, depth); }
    set32(c.r[3], ld32((c.r[5].w[0] + 608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 928u));
    c.f[2] = ld32((c.r[3].w[0] + 944u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 160u)));  goto L_002D7EDC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 240u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 248u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 252u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[16].w[0] + 212u));  if (t) { goto L_002D7F9C; } }
L_002D7EDC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EE8u); set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D7EE8u) [[unlikely]] return; }
L_002D7EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EF0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002D7EF0u) [[unlikely]] return; }
L_002D7EF0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F10u); set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D7F10u) [[unlikely]] return; }
L_002D7F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F18u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002D7F18u) [[unlikely]] return; }
L_002D7F18:
    set32(c.r[3], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[2].d[0] & 65535ull;  goto L_002D7F34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_002D7F3C; } }
L_002D7F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002D7F3C:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002D7F58; }
    set32(c.r[2], c.r[3].w[0] - 32768u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] - 32767u);  if (t) { goto L_002D7F68; } }
L_002D7F58:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  goto L_002D7F6C; }
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002D7F68:
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 1;
L_002D7F6C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    set32(c.r[6], c.r[16].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F80u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x002D7F80u) [[unlikely]] return; }
L_002D7F80:
    c.f[2] = ld32((c.r[16].w[0] + 208u));
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);
    c.budget -= 7;
L_002D7F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FA4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D7FA4u) [[unlikely]] return; }
L_002D7FA4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FB0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D7FB0u) [[unlikely]] return; }
L_002D7FB0:
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[7], ld32((c.r[16].w[0] + 116u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FC8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002D7FC8u) [[unlikely]] return; }
L_002D7FC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 19616u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[2].w[0] + 19620u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 19624u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 19628u));
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.budget -= 14;
    [[clang::musttail]] return unit_006E(c, 1u, depth);
}

}
