#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009D[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 25, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 221,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0,
    0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384,
};

void unit_009D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00394000;
    case 2u: goto L_00394010;
    case 3u: goto L_00394028;
    case 4u: goto L_00394098;
    case 5u: goto L_003940C8;
    case 6u: goto L_00394128;
    case 7u: goto L_00394148;
    case 8u: goto L_003941D0;
    case 9u: goto L_003941F0;
    case 10u: goto L_00394200;
    case 11u: goto L_0039421C;
    case 12u: goto L_00394270;
    case 13u: goto L_00394284;
    case 14u: goto L_00394298;
    case 15u: goto L_003942A4;
    case 16u: goto L_003942C4;
    case 17u: goto L_003942F8;
    case 18u: goto L_003944A8;
    case 19u: goto L_003944BC;
    case 20u: goto L_003944D4;
    case 21u: goto L_003944E8;
    case 22u: goto L_0039452C;
    case 23u: goto L_00394548;
    case 24u: goto L_00394558;
    case 25u: goto L_0039455C;
    case 26u: goto L_00394574;
    case 27u: goto L_00394588;
    case 28u: goto L_0039459C;
    case 29u: goto L_003945B0;
    case 30u: goto L_003945C4;
    case 31u: goto L_003945D8;
    case 32u: goto L_003945DC;
    case 33u: goto L_003945F0;
    case 34u: goto L_00394608;
    case 35u: goto L_0039461C;
    case 36u: goto L_00394638;
    case 37u: goto L_0039465C;
    case 38u: goto L_00394678;
    case 39u: goto L_00394688;
    case 40u: goto L_00394698;
    case 41u: goto L_003946A4;
    case 42u: goto L_003946E0;
    case 43u: goto L_00394740;
    case 44u: goto L_0039475C;
    case 45u: goto L_00394790;
    case 46u: goto L_003947B0;
    case 47u: goto L_003947C8;
    case 48u: goto L_003947DC;
    case 49u: goto L_003947F0;
    case 50u: goto L_003947FC;
    case 51u: goto L_00394828;
    case 52u: goto L_0039484C;
    case 53u: goto L_00394898;
    case 54u: goto L_003948B4;
    case 55u: goto L_003948CC;
    case 56u: goto L_003949C0;
    case 57u: goto L_003949F8;
    case 58u: goto L_00394A0C;
    case 59u: goto L_00394A24;
    case 60u: goto L_00394A38;
    case 61u: goto L_00394A50;
    case 62u: goto L_00394A6C;
    case 63u: goto L_00394A98;
    case 64u: goto L_00394AC0;
    case 65u: goto L_00394AD4;
    case 66u: goto L_00394AE8;
    case 67u: goto L_00394B00;
    case 68u: goto L_00394B1C;
    case 69u: goto L_00394B30;
    case 70u: goto L_00394B40;
    case 71u: goto L_00394B4C;
    case 72u: goto L_00394B54;
    case 73u: goto L_00394B60;
    case 74u: goto L_00394B6C;
    case 75u: goto L_00394B78;
    case 76u: goto L_00394B98;
    case 77u: goto L_00394BB4;
    case 78u: goto L_00394BC8;
    case 79u: goto L_00394BD8;
    case 80u: goto L_00394BE4;
    case 81u: goto L_00394C58;
    case 82u: goto L_00394CE0;
    case 83u: goto L_00394D48;
    case 84u: goto L_00394D64;
    case 85u: goto L_00394D90;
    case 86u: goto L_00395028;
    case 87u: goto L_00395068;
    case 88u: goto L_00395080;
    case 89u: goto L_00395090;
    case 90u: goto L_003950A0;
    case 91u: goto L_003950B8;
    case 92u: goto L_003950D0;
    case 93u: goto L_003950E8;
    case 94u: goto L_003950F0;
    case 95u: goto L_00395108;
    case 96u: goto L_00395120;
    case 97u: goto L_00395130;
    case 98u: goto L_00395148;
    case 99u: goto L_00395170;
    case 100u: goto L_00395180;
    case 101u: goto L_0039518C;
    case 102u: goto L_0039519C;
    case 103u: goto L_003951C0;
    case 104u: goto L_00395208;
    case 105u: goto L_00395220;
    case 106u: goto L_00395270;
    case 107u: goto L_00395284;
    case 108u: goto L_00395298;
    case 109u: goto L_003952AC;
    case 110u: goto L_003952C0;
    case 111u: goto L_003952D8;
    case 112u: goto L_003952E8;
    case 113u: goto L_003952F8;
    case 114u: goto L_00395318;
    case 115u: goto L_00395340;
    case 116u: goto L_0039535C;
    case 117u: goto L_0039536C;
    case 118u: goto L_00395390;
    case 119u: goto L_0039539C;
    case 120u: goto L_003953B8;
    case 121u: goto L_00395410;
    case 122u: goto L_00395428;
    case 123u: goto L_00395480;
    case 124u: goto L_00395498;
    case 125u: goto L_003954D0;
    case 126u: goto L_003954E8;
    case 127u: goto L_003955C0;
    case 128u: goto L_003955E8;
    case 129u: goto L_003955FC;
    case 130u: goto L_00395618;
    case 131u: goto L_00395628;
    case 132u: goto L_0039563C;
    case 133u: goto L_0039564C;
    case 134u: goto L_00395668;
    case 135u: goto L_0039568C;
    case 136u: goto L_0039571C;
    case 137u: goto L_00395738;
    case 138u: goto L_00395768;
    case 139u: goto L_0039577C;
    case 140u: goto L_003957F8;
    case 141u: goto L_0039580C;
    case 142u: goto L_00395828;
    case 143u: goto L_00395840;
    case 144u: goto L_00395B60;
    case 145u: goto L_00395B70;
    case 146u: goto L_00395B98;
    case 147u: goto L_00395BB0;
    case 148u: goto L_00395BC4;
    case 149u: goto L_00395BD8;
    case 150u: goto L_00395BE0;
    case 151u: goto L_00395BF8;
    case 152u: goto L_00395C1C;
    case 153u: goto L_00395C28;
    case 154u: goto L_00395C3C;
    case 155u: goto L_00395C6C;
    case 156u: goto L_00395C88;
    case 157u: goto L_00395CA8;
    case 158u: goto L_00395CCC;
    case 159u: goto L_00395CD8;
    case 160u: goto L_00395D0C;
    case 161u: goto L_00395D30;
    case 162u: goto L_00395D54;
    case 163u: goto L_00395D78;
    case 164u: goto L_00395DB0;
    case 165u: goto L_00395DE0;
    case 166u: goto L_00395E18;
    case 167u: goto L_00395E54;
    case 168u: goto L_00395E6C;
    case 169u: goto L_00395E7C;
    case 170u: goto L_00395EA8;
    case 171u: goto L_00395EC8;
    case 172u: goto L_00395F04;
    case 173u: goto L_00395F28;
    case 174u: goto L_00395F5C;
    case 175u: goto L_00395F8C;
    case 176u: goto L_00395FA4;
    case 177u: goto L_00395FC0;
    case 178u: goto L_00395FD0;
    case 179u: goto L_00395FE4;
    case 180u: goto L_00396014;
    case 181u: goto L_00396030;
    case 182u: goto L_00396078;
    case 183u: goto L_003960A0;
    case 184u: goto L_003960C8;
    case 185u: goto L_003960F8;
    case 186u: goto L_0039610C;
    case 187u: goto L_00396120;
    case 188u: goto L_00396140;
    case 189u: goto L_00396164;
    case 190u: goto L_00396200;
    case 191u: goto L_00396224;
    case 192u: goto L_00396340;
    case 193u: goto L_00396360;
    case 194u: goto L_00396374;
    case 195u: goto L_00396398;
    case 196u: goto L_003963A8;
    case 197u: goto L_003963BC;
    case 198u: goto L_003963C8;
    case 199u: goto L_003963E0;
    case 200u: goto L_003963F8;
    case 201u: goto L_00396428;
    case 202u: goto L_00396688;
    case 203u: goto L_003966AC;
    case 204u: goto L_003966D4;
    case 205u: goto L_003967D0;
    case 206u: goto L_003967EC;
    case 207u: goto L_00396840;
    case 208u: goto L_00396890;
    case 209u: goto L_003968A4;
    case 210u: goto L_003968D0;
    case 211u: goto L_003968DC;
    case 212u: goto L_003968E4;
    case 213u: goto L_003968EC;
    case 214u: goto L_00396908;
    case 215u: goto L_00396920;
    case 216u: goto L_0039693C;
    case 217u: goto L_00396978;
    case 218u: goto L_00396994;
    case 219u: goto L_003969E8;
    case 220u: goto L_003969F0;
    case 221u: goto L_003969FC;
    case 222u: goto L_00396A08;
    case 223u: goto L_00396AD8;
    case 224u: goto L_00396AFC;
    case 225u: goto L_00396B20;
    case 226u: goto L_00396B34;
    case 227u: goto L_00396B4C;
    case 228u: goto L_00396B64;
    case 229u: goto L_00396B7C;
    case 230u: goto L_00396B98;
    case 231u: goto L_00396BBC;
    case 232u: goto L_00396BE8;
    case 233u: goto L_00396BF8;
    case 234u: goto L_00396C04;
    case 235u: goto L_00396DF0;
    case 236u: goto L_00396E68;
    case 237u: goto L_00396E78;
    case 238u: goto L_00396E90;
    case 239u: goto L_00396EC0;
    case 240u: goto L_00396ED8;
    case 241u: goto L_00396EF0;
    case 242u: goto L_00396F0C;
    case 243u: goto L_00396F64;
    case 244u: goto L_00396F78;
    case 245u: goto L_00396F90;
    case 246u: goto L_00396FC0;
    case 247u: goto L_00396FCC;
    case 248u: goto L_00396FDC;
    case 249u: goto L_00396FF0;
    case 250u: goto L_00397008;
    case 251u: goto L_00397018;
    case 252u: goto L_00397030;
    case 253u: goto L_00397040;
    case 254u: goto L_00397058;
    case 255u: goto L_00397068;
    case 256u: goto L_00397098;
    case 257u: goto L_003970D0;
    case 258u: goto L_003970E8;
    case 259u: goto L_0039712C;
    case 260u: goto L_00397144;
    case 261u: goto L_00397178;
    case 262u: goto L_0039718C;
    case 263u: goto L_00397194;
    case 264u: goto L_003971C0;
    case 265u: goto L_003971E0;
    case 266u: goto L_003971F4;
    case 267u: goto L_003971FC;
    case 268u: goto L_00397230;
    case 269u: goto L_00397240;
    case 270u: goto L_00397264;
    case 271u: goto L_00397284;
    case 272u: goto L_003972A8;
    case 273u: goto L_003972C4;
    case 274u: goto L_003972E0;
    case 275u: goto L_00397300;
    case 276u: goto L_00397314;
    case 277u: goto L_00397338;
    case 278u: goto L_00397348;
    case 279u: goto L_0039735C;
    case 280u: goto L_00397370;
    case 281u: goto L_00397390;
    case 282u: goto L_003973A0;
    case 283u: goto L_003973B4;
    case 284u: goto L_003973C8;
    case 285u: goto L_003973E4;
    case 286u: goto L_003973F8;
    case 287u: goto L_00397414;
    case 288u: goto L_00397428;
    case 289u: goto L_00397444;
    case 290u: goto L_00397460;
    case 291u: goto L_00397484;
    case 292u: goto L_00397498;
    case 293u: goto L_003974B4;
    case 294u: goto L_003974D0;
    case 295u: goto L_003974EC;
    case 296u: goto L_00397500;
    case 297u: goto L_0039751C;
    case 298u: goto L_00397530;
    case 299u: goto L_0039754C;
    case 300u: goto L_00397560;
    case 301u: goto L_0039757C;
    case 302u: goto L_00397590;
    case 303u: goto L_003975AC;
    case 304u: goto L_003975C0;
    case 305u: goto L_003975DC;
    case 306u: goto L_003975F8;
    case 307u: goto L_00397630;
    case 308u: goto L_00397640;
    case 309u: goto L_00397660;
    case 310u: goto L_00397684;
    case 311u: goto L_003976AC;
    case 312u: goto L_003976D8;
    case 313u: goto L_003976F0;
    case 314u: goto L_00397718;
    case 315u: goto L_0039773C;
    case 316u: goto L_00397750;
    case 317u: goto L_0039776C;
    case 318u: goto L_0039777C;
    case 319u: goto L_003977C8;
    case 320u: goto L_003977E4;
    case 321u: goto L_003977F8;
    case 322u: goto L_0039780C;
    case 323u: goto L_00397814;
    case 324u: goto L_00397820;
    case 325u: goto L_00397830;
    case 326u: goto L_00397868;
    case 327u: goto L_00397878;
    case 328u: goto L_00397888;
    case 329u: goto L_00397898;
    case 330u: goto L_003978AC;
    case 331u: goto L_003978D8;
    case 332u: goto L_003978E8;
    case 333u: goto L_00397918;
    case 334u: goto L_00397960;
    case 335u: goto L_003979B0;
    case 336u: goto L_003979D8;
    case 337u: goto L_003979F0;
    case 338u: goto L_00397A10;
    case 339u: goto L_00397A2C;
    case 340u: goto L_00397A40;
    case 341u: goto L_00397A60;
    case 342u: goto L_00397A7C;
    case 343u: goto L_00397A90;
    case 344u: goto L_00397AB0;
    case 345u: goto L_00397AC8;
    case 346u: goto L_00397AE0;
    case 347u: goto L_00397AF4;
    case 348u: goto L_00397B08;
    case 349u: goto L_00397B20;
    case 350u: goto L_00397B58;
    case 351u: goto L_00397B90;
    case 352u: goto L_00397BC8;
    case 353u: goto L_00397C00;
    case 354u: goto L_00397C18;
    case 355u: goto L_00397C30;
    case 356u: goto L_00397C98;
    case 357u: goto L_00397CA8;
    case 358u: goto L_00397CB0;
    case 359u: goto L_00397CC8;
    case 360u: goto L_00397CF8;
    case 361u: goto L_00397D38;
    case 362u: goto L_00397D60;
    case 363u: goto L_00397D80;
    case 364u: goto L_00397D94;
    case 365u: goto L_00397D9C;
    case 366u: goto L_00397DA8;
    case 367u: goto L_00397DC8;
    case 368u: goto L_00397DF8;
    case 369u: goto L_00397E08;
    case 370u: goto L_00397E10;
    case 371u: goto L_00397E68;
    case 372u: goto L_00397E80;
    case 373u: goto L_00397ECC;
    case 374u: goto L_00397ED8;
    case 375u: goto L_00397F08;
    case 376u: goto L_00397F18;
    case 377u: goto L_00397F30;
    case 378u: goto L_00397F48;
    case 379u: goto L_00397F5C;
    case 380u: goto L_00397FA0;
    case 381u: goto L_00397FB8;
    case 382u: goto L_00397FCC;
    case 383u: goto L_00397FE4;
    case 384u: goto L_00397FFC;
    default: bad_entry(c, 0x00394000u); return;
    }
L_00394000:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00394010:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 288u, depth); }
L_00394098:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 406u, depth); }
L_003940C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003940DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_003940DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_00394128:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394148u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_009E(c, 134u, depth + 1u); else { c.pc = 0x00398B68u; return; } if (c.pc != 0x00394148u) [[unlikely]] return; }
L_00394148:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00396E90; }
L_003941D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003941DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003941DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003941F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  c.pc = t; return; }
L_00394200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039421Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039421Cu) [[unlikely]] return; }
L_0039421C:
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11784u);
    set32(c.r[5], 0u + 54u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] << 2);  if (t) { goto L_00394250; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00394250:
    set32(c.r[6], c.r[3].w[0] + c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] << 3);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003940C8u | kUnwind; return; } goto L_003940C8; }
L_00394270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00394284u) [[unlikely]] return; }
L_00394284:
    set32(c.r[4], 0u - 12u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003942B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394298u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x00394298u) [[unlikely]] return; }
L_00394298:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942A4u); set32(c.r[4], c.r[4].w[0] + 11832u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003942A4u) [[unlikely]] return; }
L_003942A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003942E8; } }
    c.budget -= 1;
L_003942B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003942EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942C4u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 381u, depth + 1u); else { c.pc = 0x003AB658u; return; } if (c.pc != 0x003942C4u) [[unlikely]] return; }
L_003942C4:
    set32(c.r[6], 0u + 6u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_003942E4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];  if (t) { goto L_003942E8; } }
L_003942E4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003942E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003942EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003942F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (t) { goto L_00394320; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_00394320:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00394340; } }
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_00394340:
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_003944A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003944BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003944BCu) [[unlikely]] return; }
L_003944BC:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_003944E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003944D4u); set32(c.r[4], c.r[4].w[0] + 11920u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003944D4u) [[unlikely]] return; }
L_003944D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00394534; } }
    c.budget -= 1;
L_003944E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003944E8u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 400u, depth + 1u); else { c.pc = 0x003AB900u; return; } if (c.pc != 0x003944E8u) [[unlikely]] return; }
L_003944E8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00394530; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00394518; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00394530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00394524; } }
    c.budget -= 1;
L_00394518:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00394530; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_00394524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039452Cu); set32(c.r[4], c.r[4].w[0] + 11968u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x0039452Cu) [[unlikely]] return; }
L_0039452C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00394530:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00394534:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394548:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039455Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039455Cu) [[unlikely]] return; }
    goto L_0039455C;
L_00394558:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0039455C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12016u);  if (t) { goto L_00394580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394574u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00394574u) [[unlikely]] return; }
L_00394574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003945A0; } }
    c.budget -= 1;
L_00394580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394588u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A0(c, 89u, depth + 1u); else { c.pc = 0x003A0E20u; return; } if (c.pc != 0x00394588u) [[unlikely]] return; }
L_00394588:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 12072u);  if (t) { goto L_0039459C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039459Cu);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x0039459Cu) [[unlikely]] return; }
L_0039459C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003945A0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003945B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003945C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003945C4u) [[unlikely]] return; }
L_003945C4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003945E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003945DCu); set32(c.r[4], c.r[4].w[0] + 12104u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003945DCu) [[unlikely]] return; }
    goto L_003945DC;
L_003945D8:
    set32(c.r[4], c.r[4].w[0] + 12104u);
    c.budget -= 1;
L_003945DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003945F4; } }
    c.budget -= 1;
L_003945E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003945F0u);  if (depth < kMaxDepth) unit_009D(c, 4u, depth + 1u); else { c.pc = 0x00394098u; return; } if (c.pc != 0x003945F0u) [[unlikely]] return; }
L_003945F0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003945F4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00394608:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039461Cu); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 256u, depth + 1u); else { c.pc = 0x003A9F10u; return; } if (c.pc != 0x0039461Cu) [[unlikely]] return; }
L_0039461C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00394638:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039465Cu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039465Cu) [[unlikely]] return; }
L_0039465C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12160u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00394680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394678u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00394678u) [[unlikely]] return; }
L_00394678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003946C0; } }
L_00394680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394688u); set32(c.r[4], ld32((c.r[18].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A3(c, 33u, depth + 1u); else { c.pc = 0x003AC528u; return; } if (c.pc != 0x00394688u) [[unlikely]] return; }
L_00394688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 309u);  if (t) { goto L_003946B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394698u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x00394698u) [[unlikely]] return; }
L_00394698:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003946A4u); set32(c.r[4], c.r[4].w[0] + 12208u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003946A4u) [[unlikely]] return; }
L_003946A4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003946B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003946CC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003946C0:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003946CC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003946E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003946FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_003946FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A0(c, 80u, depth); }
L_00394740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039475Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039475Cu) [[unlikely]] return; }
L_0039475C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00394788; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12248u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00394788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394790u);  if (depth < kMaxDepth) unit_009C(c, 446u, depth + 1u); else { c.pc = 0x00393708u; return; } if (c.pc != 0x00394790u) [[unlikely]] return; }
L_00394790:
    set32(c.r[4], c.r[16].w[0] + 660u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397530; }
L_003947B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003947C8u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003947C8u) [[unlikely]] return; }
L_003947C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003947E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003947DCu); set32(c.r[4], c.r[4].w[0] + 12296u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003947DCu) [[unlikely]] return; }
L_003947DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00394810; } }
    c.budget -= 1;
L_003947E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003947F0u);  if (depth < kMaxDepth) unit_009C(c, 447u, depth + 1u); else { c.pc = 0x00393720u; return; } if (c.pc != 0x003947F0u) [[unlikely]] return; }
L_003947F0:
    set32(c.r[4], c.r[17].w[0] + 660u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003947FCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 302u, depth + 1u); else { c.pc = 0x00397590u; return; } if (c.pc != 0x003947FCu) [[unlikely]] return; }
L_003947FC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] ^ c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[16].d[0];
    c.budget -= 5;
L_00394810:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394828:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039484Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039484Cu) [[unlikely]] return; }
L_0039484C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00394880; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12344u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00394880:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00393738u | kUnwind; return; } [[clang::musttail]] return unit_009C(c, 448u, depth); }
L_00394898:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003948B4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003948B4u) [[unlikely]] return; }
L_003948B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003948E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003948CCu); set32(c.r[4], c.r[4].w[0] + 12392u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003948CCu) [[unlikely]] return; }
L_003948CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003948E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00393750u | kUnwind; return; } [[clang::musttail]] return unit_009C(c, 449u, depth); }
L_003949C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 37u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_003949E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_003949E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003949F8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00394A0Cu) [[unlikely]] return; }
L_00394A0C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00394A30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A24u); set32(c.r[4], c.r[4].w[0] + 12440u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00394A24u) [[unlikely]] return; }
L_00394A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00394A3C; } }
    c.budget -= 1;
L_00394A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A38u);  if (depth < kMaxDepth) unit_009D(c, 4u, depth + 1u); else { c.pc = 0x00394098u; return; } if (c.pc != 0x00394A38u) [[unlikely]] return; }
L_00394A38:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_00394A3C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00394A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A6Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00394A6Cu) [[unlikely]] return; }
L_00394A6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00394A90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12496u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00394A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A98u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00394A98u) [[unlikely]] return; }
L_00394A98:
    c.r[6].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 7u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_00394AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394AD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00394AD4u) [[unlikely]] return; }
L_00394AD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 468u)));  goto L_00394AEC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394AE8u); set32(c.r[4], c.r[4].w[0] + 12552u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00394AE8u) [[unlikely]] return; }
L_00394AE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00394AEC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394B00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B1Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00394B1Cu) [[unlikely]] return; }
L_00394B1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00394B38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B30u); set32(c.r[4], c.r[4].w[0] + 12600u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00394B30u) [[unlikely]] return; }
L_00394B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_00394B88; } }
L_00394B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B40u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00394B40u) [[unlikely]] return; }
L_00394B40:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 406u, depth + 1u); else { c.pc = 0x003ABA88u; return; } if (c.pc != 0x00394B4Cu) [[unlikely]] return; }
L_00394B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 508u, depth + 1u); else { c.pc = 0x00393D48u; return; } if (c.pc != 0x00394B54u) [[unlikely]] return; }
L_00394B54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B60u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 513u, depth + 1u); else { c.pc = 0x00393DB0u; return; } if (c.pc != 0x00394B60u) [[unlikely]] return; }
L_00394B60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B6Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 214u, depth + 1u); else { c.pc = 0x00391C18u; return; } if (c.pc != 0x00394B6Cu) [[unlikely]] return; }
L_00394B6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B78u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 57u, depth + 1u); else { c.pc = 0x003949F8u; return; } if (c.pc != 0x00394B78u) [[unlikely]] return; }
L_00394B78:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 4;
L_00394B88:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00394B98:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BB4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00394BB4u) [[unlikely]] return; }
L_00394BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00394BD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BC8u); set32(c.r[4], c.r[4].w[0] + 12648u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00394BC8u) [[unlikely]] return; }
L_00394BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_00394C48; } }
L_00394BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BD8u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00394BD8u) [[unlikely]] return; }
L_00394BD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BE4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 406u, depth + 1u); else { c.pc = 0x003ABA88u; return; } if (c.pc != 0x00394BE4u) [[unlikely]] return; }
L_00394BE4:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[6].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[7].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[8].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[9].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[10].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[11].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[12].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[13].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[2].d[0] = ld64((c.r[29].w[0] + 136u));
    st64((c.r[17].w[0]), c.r[3].d[0]);
    st64((c.r[17].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[17].w[0] + 8u), c.r[4].d[0]);
    st64((c.r[17].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[17].w[0] + 24u), c.r[6].d[0]);
    st64((c.r[17].w[0] + 32u), c.r[7].d[0]);
    st64((c.r[17].w[0] + 40u), c.r[8].d[0]);
    st64((c.r[17].w[0] + 48u), c.r[9].d[0]);
    st64((c.r[17].w[0] + 56u), c.r[10].d[0]);
    st64((c.r[17].w[0] + 64u), c.r[11].d[0]);
    st64((c.r[17].w[0] + 72u), c.r[12].d[0]);
    st64((c.r[17].w[0] + 80u), c.r[13].d[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 25;
L_00394C48:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00394C58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 476u)));
    set32(c.r[5], c.r[2].w[0] + 16383u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 11);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    c.budget -= 21;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00394128u | kUnwind; return; } goto L_00394128; }
L_00394CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00394D38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00394D28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00394D38; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00394D20; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009E(c, 136u, depth); }
L_00394D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00394D38; } }
L_00394D28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009E(c, 136u, depth); }
L_00394D38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394D48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D64u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00394D64u) [[unlikely]] return; }
L_00394D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00394D88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12696u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00394D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D90u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00394D90u) [[unlikely]] return; }
L_00394D90:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 7u, depth); }
L_00395028:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00395058; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 12792u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00397C30; }
L_00395058:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 61u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_00395068:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 61u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395080u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 400u, depth + 1u); else { c.pc = 0x003AB900u; return; } if (c.pc != 0x00395080u) [[unlikely]] return; }
L_00395080:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00395090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003950A0u);  if (depth < kMaxDepth) unit_00A4(c, 149u, depth + 1u); else { c.pc = 0x003B1AD0u; return; } if (c.pc != 0x003950A0u) [[unlikely]] return; }
L_003950A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[4].w[0] + 20664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 165u, depth); }
L_003950B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00397C30; }
L_003950D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 160u, depth); }
L_003950E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6175u);  c.pc = t; return; }
L_003950F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 166u, depth); }
L_00395108:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 180u, depth); }
L_00395120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 172u)));  c.pc = t; return; }
L_00395130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00395148; }
L_00395148:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395170u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_009D(c, 103u, depth + 1u); else { c.pc = 0x003951C0u; return; } if (c.pc != 0x00395170u) [[unlikely]] return; }
L_00395170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395180u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 105u, depth + 1u); else { c.pc = 0x00395220u; return; } if (c.pc != 0x00395180u) [[unlikely]] return; }
L_00395180:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039518Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 111u, depth + 1u); else { c.pc = 0x003952D8u; return; } if (c.pc != 0x0039518Cu) [[unlikely]] return; }
L_0039518C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039519Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 113u, depth + 1u); else { c.pc = 0x003952F8u; return; } if (c.pc != 0x0039519Cu) [[unlikely]] return; }
L_0039519C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00395340; }
L_003951C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0039520C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003951F0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003951F4; } }
    c.budget -= 1;
L_003951F0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003951F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00395210; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395208u); set32(c.r[4], c.r[4].w[0] + 12840u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00395208u) [[unlikely]] return; }
L_00395208:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0039520C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00395210:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[17], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[9].w[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 72u), c.r[17].w[0]);  if (t) { goto L_00395278; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395270u); c.r[6].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 112u, depth + 1u); else { c.pc = 0x003952E8u; return; } if (c.pc != 0x00395270u) [[unlikely]] return; }
L_00395270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003952C4; } }
L_00395278:
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395284u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 192u, depth + 1u); else { c.pc = 0x00391808u; return; } if (c.pc != 0x00395284u) [[unlikely]] return; }
L_00395284:
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395298u); set32(c.r[6], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_009D(c, 112u, depth + 1u); else { c.pc = 0x003952E8u; return; } if (c.pc != 0x00395298u) [[unlikely]] return; }
L_00395298:
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003952ACu); set32(c.r[6], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_009D(c, 112u, depth + 1u); else { c.pc = 0x003952E8u; return; } if (c.pc != 0x003952ACu) [[unlikely]] return; }
L_003952AC:
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003952C0u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_009D(c, 112u, depth + 1u); else { c.pc = 0x003952E8u; return; } if (c.pc != 0x003952C0u) [[unlikely]] return; }
L_003952C0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003952C4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003952D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 76u), c.r[2].w[0]);  c.pc = t; return; }
L_003952E8:
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_003952F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395318u); set32(c.r[4], ld32((c.r[4].w[0] + 172u)));  if (depth < kMaxDepth) unit_00A4(c, 196u, depth + 1u); else { c.pc = 0x003B2078u; return; } if (c.pc != 0x00395318u) [[unlikely]] return; }
L_00395318:
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00395340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039535Cu); set32(c.r[17], c.r[5].w[0] + 96u);  if (depth < kMaxDepth) unit_009D(c, 120u, depth + 1u); else { c.pc = 0x003953B8u; return; } if (c.pc != 0x0039535Cu) [[unlikely]] return; }
L_0039535C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039536Cu); set32(c.r[16], c.r[16].w[0] + 140u);  if (depth < kMaxDepth) unit_009D(c, 122u, depth + 1u); else { c.pc = 0x00395428u; return; } if (c.pc != 0x0039536Cu) [[unlikely]] return; }
L_0039536C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395390u); st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009D(c, 124u, depth + 1u); else { c.pc = 0x00395498u; return; } if (c.pc != 0x00395390u) [[unlikely]] return; }
L_00395390:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039539Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 124u, depth + 1u); else { c.pc = 0x00395498u; return; } if (c.pc != 0x0039539Cu) [[unlikely]] return; }
L_0039539C:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003953B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 3u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_00395400; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003953F0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 1u);  goto L_00395410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00395408; } }
L_003953F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00395414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00395408; } }
L_00395400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_00395410; } }
L_00395408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395410u); set32(c.r[4], c.r[4].w[0] + 12880u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00395410u) [[unlikely]] return; }
L_00395410:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00395414:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395428:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_00395470; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00395460; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00395484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00395478; } }
L_00395460:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 3u);  goto L_00395480; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00395478; } }
L_00395470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_00395480; } }
L_00395478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395480u); set32(c.r[4], c.r[4].w[0] + 12920u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00395480u) [[unlikely]] return; }
L_00395480:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00395484:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395498:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003954C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003954D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003954C8; } }
    c.budget -= 1;
L_003954C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003954D0; } }
L_003954C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003954D0u); set32(c.r[4], c.r[4].w[0] + 12960u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003954D0u) [[unlikely]] return; }
L_003954D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003954D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003954E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 189u, depth); }
L_003955C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955E8u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003955E8u) [[unlikely]] return; }
L_003955E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_00395608; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955FCu); set32(c.r[4], c.r[4].w[0] + 13088u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003955FCu) [[unlikely]] return; }
L_003955FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00395650; } }
    c.budget -= 1;
L_00395608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00395620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395618u); set32(c.r[4], c.r[4].w[0] + 13136u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00395618u) [[unlikely]] return; }
L_00395618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00395650; } }
L_00395620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395628u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x00395628u) [[unlikely]] return; }
L_00395628:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039563Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 98u, depth + 1u); else { c.pc = 0x00395148u; return; } if (c.pc != 0x0039563Cu) [[unlikely]] return; }
L_0039563C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039564Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 265u, depth + 1u); else { c.pc = 0x003B2F90u; return; } if (c.pc != 0x0039564Cu) [[unlikely]] return; }
L_0039564C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00395650:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00395668:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039568Cu); c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039568Cu) [[unlikely]] return; }
L_0039568C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 400u)));  goto L_003956B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 13184u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_003956B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00395710; }
    set32(c.r[2], 0u + 257u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003956E8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 13240u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_003956E8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00395710; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 13312u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00395710:
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039571Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039571Cu) [[unlikely]] return; }
L_0039571C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0039574C; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0039574C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 230u, depth + 1u); else { c.pc = 0x00391DC0u; return; } if (c.pc != 0x00395738u) [[unlikely]] return; }
L_00395738:
    set32(c.r[3], 0u + 17u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ~(0ull | c.r[16].d[0]);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_0039574C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00395768; }
L_00395768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039577Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x0039577Cu) [[unlikely]] return; }
L_0039577C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 186u, depth); }
L_003957F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039580Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x0039580Cu) [[unlikely]] return; }
L_0039580C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 187u, depth); }
L_00395828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 202u, depth); }
L_00395840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00395828u | kUnwind; return; } goto L_00395828; }
L_00395B60:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00395B70:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00395B8C; } }
    set32(c.r[2], 0u + 257u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00395B8C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00395B8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00395B98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BB0u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_009D(c, 145u, depth + 1u); else { c.pc = 0x00395B70u; return; } if (c.pc != 0x00395BB0u) [[unlikely]] return; }
L_00395BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00395BE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 404u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BC4u); set32(c.r[5], ld32((c.r[16].w[0] + 408u)));  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x00395BC4u) [[unlikely]] return; }
L_00395BC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 13792u);  if (t) { goto L_00395BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BD8u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00395BD8u) [[unlikely]] return; }
L_00395BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 67u, depth + 1u); else { c.pc = 0x003906C8u; return; } if (c.pc != 0x00395BE0u) [[unlikely]] return; }
L_00395BE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00395BE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395BF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 400u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00395C1C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00395C1Cu) [[unlikely]] return; }
L_00395C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395C28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 144u, depth + 1u); else { c.pc = 0x00395B60u; return; } if (c.pc != 0x00395C3Cu) [[unlikely]] return; }
L_00395C3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 400u)));  goto L_00395C50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00395C78; } }
L_00395C50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00395C78; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 256u, depth + 1u); else { c.pc = 0x003AED70u; return; } if (c.pc != 0x00395C6Cu) [[unlikely]] return; }
L_00395C6C:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00395C78:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395C88:
    set32(c.r[2], c.r[4].w[0] + 424u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 420u), c.r[3].w[0]);  c.pc = t; return; }
L_00395CA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 400u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00395CCC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00395CCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00395CCCu) [[unlikely]] return; }
L_00395CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395CD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 424u);  if (t) { goto L_00395D20; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00395D24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395D0Cu);  if (depth < kMaxDepth) unit_009D(c, 163u, depth + 1u); else { c.pc = 0x00395D78u; return; } if (c.pc != 0x00395D0Cu) [[unlikely]] return; }
L_00395D0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00395F28; }
L_00395D20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00395D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00395D68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395D54u);  if (depth < kMaxDepth) unit_009D(c, 163u, depth + 1u); else { c.pc = 0x00395D78u; return; } if (c.pc != 0x00395D54u) [[unlikely]] return; }
L_00395D54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00395F28; }
L_00395D68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395D78:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 424u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 400u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00395DB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00395DB0u) [[unlikely]] return; }
L_00395DB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13840u);
    set32(c.r[6], c.r[6].w[0] + 13848u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 16u);  if (t) { goto L_00395DE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 404u)));
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395DE0u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0096(c, 320u, depth + 1u); else { c.pc = 0x0037B920u; return; } if (c.pc != 0x00395DE0u) [[unlikely]] return; }
L_00395DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[16].w[0] + 412u);  if (t) { goto L_00395E00; } }
L_00395DE8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_00395EA8; } }
    c.budget -= 1;
L_00395E00:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00395E88; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395E18u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x00395E18u) [[unlikely]] return; }
L_00395E18:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[29].w[0] + 32u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00395E54u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00395E54u) [[unlikely]] return; }
L_00395E54:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00395E6Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00395E6Cu) [[unlikely]] return; }
L_00395E6C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00395E7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00395E7Cu) [[unlikely]] return; }
L_00395E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00395EAC; } }
    c.budget -= 1;
L_00395E88:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395EA8u); st32((c.r[17].w[0] + 8u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_009D(c, 178u, depth + 1u); else { c.pc = 0x00395FD0u; return; } if (c.pc != 0x00395EA8u) [[unlikely]] return; }
L_00395EA8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00395EAC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00395EC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + 412u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00395F04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395F04u); set32(c.r[4], c.r[4].w[0] + 13856u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00395F04u) [[unlikely]] return; }
L_00395F04:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00395F28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[3], c.r[2].w[0] + 424u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 172u)));  if (t) { goto L_00395F68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395F5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 192u, depth + 1u); else { c.pc = 0x003B1FE0u; return; } if (c.pc != 0x00395F5Cu) [[unlikely]] return; }
L_00395F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00395FC4; } }
    c.budget -= 1;
L_00395F68:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 13912u);
    set32(c.r[6], c.r[6].w[0] + 13920u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395F8Cu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0096(c, 320u, depth + 1u); else { c.pc = 0x0037B920u; return; } if (c.pc != 0x00395F8Cu) [[unlikely]] return; }
L_00395F8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00395FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395FA4u);  if (depth < kMaxDepth) unit_00A4(c, 192u, depth + 1u); else { c.pc = 0x003B1FE0u; return; } if (c.pc != 0x00395FA4u) [[unlikely]] return; }
L_00395FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00395FC4; } }
    c.budget -= 1;
L_00395FB0:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395FC0u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_00A4(c, 192u, depth + 1u); else { c.pc = 0x003B1FE0u; return; } if (c.pc != 0x00395FC0u) [[unlikely]] return; }
L_00395FC0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00395FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00395FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 144u, depth + 1u); else { c.pc = 0x00395B60u; return; } if (c.pc != 0x00395FE4u) [[unlikely]] return; }
L_00395FE4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 400u)));  goto L_00395FF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00396020; } }
L_00395FF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00396020; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396014u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 256u, depth + 1u); else { c.pc = 0x003AED70u; return; } if (c.pc != 0x00396014u) [[unlikely]] return; }
L_00396014:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00396020:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00396030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 197u, depth); }
L_00396078:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003960A0u); set32(c.r[4], ld32((c.r[4].w[0] + 172u)));  if (depth < kMaxDepth) unit_00A4(c, 196u, depth + 1u); else { c.pc = 0x003B2078u; return; } if (c.pc != 0x003960A0u) [[unlikely]] return; }
L_003960A0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003960C8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003960F8u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x003960F8u) [[unlikely]] return; }
L_003960F8:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039610Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 98u, depth + 1u); else { c.pc = 0x00395148u; return; } if (c.pc != 0x0039610Cu) [[unlikely]] return; }
L_0039610C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396120u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 198u, depth + 1u); else { c.pc = 0x003B20F8u; return; } if (c.pc != 0x00396120u) [[unlikely]] return; }
L_00396120:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 184u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00396140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396164u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x00396164u) [[unlikely]] return; }
L_00396164:
    c.r[16].d[0] = c.r[16].d[0] ^ 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A4(c, 199u, depth); }
L_00396200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396224u); c.r[18].d[0] = c.r[7].d[0] & 255ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x00396224u) [[unlikely]] return; }
L_00396224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A4(c, 200u, depth); }
L_00396340:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396360u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00396360u) [[unlikely]] return; }
L_00396360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 14024u);  if (t) { goto L_00396380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396374u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00396374u) [[unlikely]] return; }
L_00396374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003963CC; } }
    c.budget -= 1;
L_00396380:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003963A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396398u); set32(c.r[4], c.r[4].w[0] + 14072u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00396398u) [[unlikely]] return; }
L_00396398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003963CC; } }
L_003963A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003963A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x003963A8u) [[unlikely]] return; }
L_003963A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003963BCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 98u, depth + 1u); else { c.pc = 0x00395148u; return; } if (c.pc != 0x003963BCu) [[unlikely]] return; }
L_003963BC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003963C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 143u, depth + 1u); else { c.pc = 0x003B1970u; return; } if (c.pc != 0x003963C8u) [[unlikely]] return; }
L_003963C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003963CC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003963E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 212u, depth); }
L_003963F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 215u, depth); }
L_00396428:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 214u, depth); }
L_00396688:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003966CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003966ACu);  if (depth < kMaxDepth) unit_009C(c, 230u, depth + 1u); else { c.pc = 0x00391DC0u; return; } if (c.pc != 0x003966ACu) [[unlikely]] return; }
L_003966AC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_003966C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003966CC; } }
    c.budget -= 1;
L_003966C8:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_003966CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003966D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x003966D4u) [[unlikely]] return; }
L_003966D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A4(c, 186u, depth); }
L_003967D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003967ECu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003967ECu) [[unlikely]] return; }
L_003967EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 14328u);  if (t) { goto L_00396810; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00396810:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_00396838; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 14376u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00396838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396840u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 115u, depth + 1u); else { c.pc = 0x00374EB8u; return; } if (c.pc != 0x00396840u) [[unlikely]] return; }
L_00396840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 14424u);  if (t) { goto L_00396870; } }
    set32(c.r[2], 0u + 4u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00396870:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00396890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003968A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003968A4u) [[unlikely]] return; }
L_003968A4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003968C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 14472u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00397C30; }
L_003968C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003968D0u);  if (depth < kMaxDepth) unit_009D(c, 241u, depth + 1u); else { c.pc = 0x00396EF0u; return; } if (c.pc != 0x003968D0u) [[unlikely]] return; }
L_003968D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003968DCu); set32(c.r[5], ld32((c.r[16].w[0] + 468u)));  if (depth < kMaxDepth) unit_009C(c, 393u, depth + 1u); else { c.pc = 0x00393098u; return; } if (c.pc != 0x003968DCu) [[unlikely]] return; }
L_003968DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003968E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 423u, depth + 1u); else { c.pc = 0x003933C8u; return; } if (c.pc != 0x003968E4u) [[unlikely]] return; }
L_003968E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003968ECu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0095(c, 122u, depth + 1u); else { c.pc = 0x003750B8u; return; } if (c.pc != 0x003968ECu) [[unlikely]] return; }
L_003968EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00396908; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00396908u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00396908u) [[unlikely]] return; }
L_00396908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F2A8u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 287u, depth); }
L_00396920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039693Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039693Cu) [[unlikely]] return; }
L_0039693C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 14528u);  if (t) { goto L_00396960; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00396960:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00375610u | kUnwind; return; } [[clang::musttail]] return unit_0095(c, 155u, depth); }
L_00396978:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396994u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00396994u) [[unlikely]] return; }
L_00396994:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 14576u);  if (t) { goto L_003969B8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_003969B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003969E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 14624u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_003969E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003969E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 429u, depth + 1u); else { c.pc = 0x00393478u; return; } if (c.pc != 0x003969E8u) [[unlikely]] return; }
L_003969E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003969F0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0095(c, 124u, depth + 1u); else { c.pc = 0x00375120u; return; } if (c.pc != 0x003969F0u) [[unlikely]] return; }
L_003969F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003969FCu); set32(c.r[5], ld32((c.r[16].w[0] + 440u)));  if (depth < kMaxDepth) unit_009D(c, 205u, depth + 1u); else { c.pc = 0x003967D0u; return; } if (c.pc != 0x003969FCu) [[unlikely]] return; }
L_003969FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396A08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 215u, depth + 1u); else { c.pc = 0x00396920u; return; } if (c.pc != 0x00396A08u) [[unlikely]] return; }
L_00396A08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00396890u | kUnwind; return; } goto L_00396890; }
L_00396AD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396AFCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00396AFCu) [[unlikely]] return; }
L_00396AFC:
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[29].w[0] + 8u);  if (t) { goto L_00396B28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B20u); set32(c.r[4], c.r[4].w[0] + 14776u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00396B20u) [[unlikely]] return; }
L_00396B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00396B80; } }
L_00396B28:
    set32(c.r[6], ld32((c.r[17].w[0] + 440u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B34u); set32(c.r[17], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_008E(c, 176u, depth + 1u); else { c.pc = 0x00359258u; return; } if (c.pc != 0x00396B34u) [[unlikely]] return; }
L_00396B34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00396B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B4Cu);  if (depth < kMaxDepth) unit_008E(c, 185u, depth + 1u); else { c.pc = 0x00359438u; return; } if (c.pc != 0x00396B4Cu) [[unlikely]] return; }
L_00396B4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B64u); set32(c.r[8], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_0095(c, 116u, depth + 1u); else { c.pc = 0x00374EE0u; return; } if (c.pc != 0x00396B64u) [[unlikely]] return; }
L_00396B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00396B80; } }
    c.budget -= 1;
L_00396B70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B7Cu); set32(c.r[4], c.r[4].w[0] + 14824u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00396B7Cu) [[unlikely]] return; }
L_00396B7C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00396B80:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00396B98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396BBCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00396BBCu) [[unlikely]] return; }
L_00396BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));  if (t) { goto L_00396BE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 14880u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00396BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396BE8u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0095(c, 124u, depth + 1u); else { c.pc = 0x00375120u; return; } if (c.pc != 0x00396BE8u) [[unlikely]] return; }
L_00396BE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396BF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 223u, depth + 1u); else { c.pc = 0x00396AD8u; return; } if (c.pc != 0x00396BF8u) [[unlikely]] return; }
L_00396BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396C04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 215u, depth + 1u); else { c.pc = 0x00396920u; return; } if (c.pc != 0x00396C04u) [[unlikely]] return; }
L_00396C04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00396890u | kUnwind; return; } goto L_00396890; }
L_00396DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00375248u | kUnwind; return; } [[clang::musttail]] return unit_0095(c, 131u, depth); }
L_00396E68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396E78u);  if (depth < kMaxDepth) unit_0095(c, 131u, depth + 1u); else { c.pc = 0x00375248u; return; } if (c.pc != 0x00396E78u) [[unlikely]] return; }
L_00396E78:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00396E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00396EB0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00375500u | kUnwind; return; } [[clang::musttail]] return unit_0095(c, 150u, depth); }
L_00396EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00396EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396ED8u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_0095(c, 151u, depth + 1u); else { c.pc = 0x00375568u; return; } if (c.pc != 0x00396ED8u) [[unlikely]] return; }
L_00396ED8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00396EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396F0Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00396F0Cu) [[unlikely]] return; }
L_00396F0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 15128u);  if (t) { goto L_00396F30; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397C30; }
L_00396F30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_00396F48; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_00396F44; }
L_00396F44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_00396F48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_00396F7C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_00396F7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396F64u);  if (depth < kMaxDepth) unit_009F(c, 31u, depth + 1u); else { c.pc = 0x0039C6B0u; return; } if (c.pc != 0x00396F64u) [[unlikely]] return; }
L_00396F64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 15176u);  if (t) { goto L_00396F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396F78u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00396F78u) [[unlikely]] return; }
L_00396F78:
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_00396F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00396F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[6].w[0] + 2047u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[7], c.r[7].w[0] >> 11);
    set32(c.r[5], c.r[5].w[0] + 15224u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396FC0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00396FC0u) [[unlikely]] return; }
L_00396FC0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396FCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 217u, depth + 1u); else { c.pc = 0x00396978u; return; } if (c.pc != 0x00396FCCu) [[unlikely]] return; }
L_00396FCC:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396FDCu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00396FDCu) [[unlikely]] return; }
L_00396FDC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00396FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397008u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_009D(c, 255u, depth + 1u); else { c.pc = 0x00397068u; return; } if (c.pc != 0x00397008u) [[unlikely]] return; }
L_00397008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397018:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397030u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_009D(c, 255u, depth + 1u); else { c.pc = 0x00397068u; return; } if (c.pc != 0x00397030u) [[unlikely]] return; }
L_00397030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397058u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_009D(c, 256u, depth + 1u); else { c.pc = 0x00397098u; return; } if (c.pc != 0x00397058u) [[unlikely]] return; }
L_00397058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[7], 0u + 2048u);
    c.r[2].d[0] = c.r[2].d[0] | 18916ull;
    c.r[3].d[0] = 0ull | 40000ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);  c.pc = t; return; }
L_00397098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], 0u + 8192u);
    c.r[2].d[0] = c.r[2].d[0] | 38188ull;
    c.r[3].d[0] = c.r[3].d[0] | 15464ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);  c.pc = t; return; }
L_003970D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003970E8; }
L_003970E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 660u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039712Cu); set32(c.r[5], c.r[5].w[0] + 192u);  if (depth < kMaxDepth) unit_009F(c, 286u, depth + 1u); else { c.pc = 0x0039E960u; return; } if (c.pc != 0x0039712Cu) [[unlikely]] return; }
L_0039712C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 192u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397144u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 286u, depth + 1u); else { c.pc = 0x0039E960u; return; } if (c.pc != 0x00397144u) [[unlikely]] return; }
L_00397144:
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039718Cu);  if (depth < kMaxDepth) unit_009D(c, 326u, depth + 1u); else { c.pc = 0x00397868u; return; } if (c.pc != 0x0039718Cu) [[unlikely]] return; }
L_0039718C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397194u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397194u) [[unlikely]] return; }
L_00397194:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003971D0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003971D0; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_003971C8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003971C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003971C0u) [[unlikely]] return; }
L_003971C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_003971C8:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003971D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003971E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003971F4u);  if (depth < kMaxDepth) unit_009D(c, 326u, depth + 1u); else { c.pc = 0x00397868u; return; } if (c.pc != 0x003971F4u) [[unlikely]] return; }
L_003971F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003971FCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x003971FCu) [[unlikely]] return; }
L_003971FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397234; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_00397230; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00397230; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397234; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00397230u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00397230u) [[unlikely]] return; }
L_00397230:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00397234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00397240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397264u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397264u) [[unlikely]] return; }
L_00397264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00397288; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00397288; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00397284u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00397284u) [[unlikely]] return; }
L_00397284:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00397288:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003972A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003972C4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x003972C4u) [[unlikely]] return; }
L_003972C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003972E4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003972E4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003972E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003972E0u) [[unlikely]] return; }
L_003972E0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003972E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397314u) [[unlikely]] return; }
L_00397314:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039733C; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039733C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039733C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00397338u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00397338u) [[unlikely]] return; }
L_00397338:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039733C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00397348:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039735Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x0039735Cu) [[unlikely]] return; }
L_0039735C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397394; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397370u);  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397370u) [[unlikely]] return; }
L_00397370:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00397390; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397394; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00397390u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00397390u) [[unlikely]] return; }
L_00397390:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00397394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003973A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003973B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x003973B4u) [[unlikely]] return; }
L_003973B4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003973E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003973C8u);  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x003973C8u) [[unlikely]] return; }
L_003973C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003973E4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003973E8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003973E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003973E4u) [[unlikely]] return; }
L_003973E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003973E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003973F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397414u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x00397414u) [[unlikely]] return; }
L_00397414:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039744C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397428u);  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397428u) [[unlikely]] return; }
L_00397428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00397448; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0039744C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00397444u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00397444u) [[unlikely]] return; }
L_00397444:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00397448:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039744C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397484u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x00397484u) [[unlikely]] return; }
L_00397484:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003974B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397498u);  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397498u) [[unlikely]] return; }
L_00397498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003974B4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003974B4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003974B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003974B4u) [[unlikely]] return; }
L_003974B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003974B8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003974D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003974ECu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x003974ECu) [[unlikely]] return; }
L_003974EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397500u);  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397500u) [[unlikely]] return; }
L_00397500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0039751C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397520; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039751Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039751Cu) [[unlikely]] return; }
L_0039751C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00397520:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039754Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x0039754Cu) [[unlikely]] return; }
L_0039754C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397580; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397560u);  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397560u) [[unlikely]] return; }
L_00397560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0039757C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397580; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039757Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039757Cu) [[unlikely]] return; }
L_0039757C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00397580:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003975ACu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x003975ACu) [[unlikely]] return; }
L_003975AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003975E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003975C0u);  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x003975C0u) [[unlikely]] return; }
L_003975C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003975E0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003975E4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003975DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003975DCu) [[unlikely]] return; }
L_003975DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003975E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003975E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003975F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 660u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397630u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x00397630u) [[unlikely]] return; }
L_00397630:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003976F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397640u);  if (depth < kMaxDepth) unit_009D(c, 261u, depth + 1u); else { c.pc = 0x00397178u; return; } if (c.pc != 0x00397640u) [[unlikely]] return; }
L_00397640:
    set32(c.r[21], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[5], c.r[29].w[0] + 4u);
    st32((c.r[18].w[0] + 16u), c.r[20].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397660u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_009D(c, 269u, depth + 1u); else { c.pc = 0x00397240u; return; } if (c.pc != 0x00397660u) [[unlikely]] return; }
L_00397660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 15240u);  if (t) { goto L_003976D0; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397684u); set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x00397684u) [[unlikely]] return; }
L_00397684:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003976A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 15288u);  if (t) { goto L_003976D0; } }
    c.budget -= 1;
L_003976A0:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003976ACu); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_009D(c, 272u, depth + 1u); else { c.pc = 0x003972A8u; return; } if (c.pc != 0x003976ACu) [[unlikely]] return; }
L_003976AC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 192u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003976E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 15328u);
    c.budget -= 2;
L_003976D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003976D8u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003976D8u) [[unlikely]] return; }
L_003976D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003976F4; } }
L_003976E0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003976F0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 286u, depth + 1u); else { c.pc = 0x0039E960u; return; } if (c.pc != 0x003976F0u) [[unlikely]] return; }
L_003976F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003976F4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003976F8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00397718:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 660u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039773Cu); set32(c.r[19], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x0039773Cu) [[unlikely]] return; }
L_0039773C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397750u); set32(c.r[16], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x00397750u) [[unlikely]] return; }
L_00397750:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003977B0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00397770; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039776Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 282u, depth + 1u); else { c.pc = 0x003973A0u; return; } if (c.pc != 0x0039776Cu) [[unlikely]] return; }
L_0039776C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00397770:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039777Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039777Cu) [[unlikely]] return; }
L_0039777C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009F(c, 286u, depth); }
L_003977B0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003977C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003977E4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 329u, depth + 1u); else { c.pc = 0x00397898u; return; } if (c.pc != 0x003977E4u) [[unlikely]] return; }
L_003977E4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003977F8u);  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x003977F8u) [[unlikely]] return; }
L_003977F8:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_00397850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039780Cu);  if (depth < kMaxDepth) unit_009D(c, 359u, depth + 1u); else { c.pc = 0x00397CC8u; return; } if (c.pc != 0x0039780Cu) [[unlikely]] return; }
L_0039780C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 282u, depth + 1u); else { c.pc = 0x003973A0u; return; } if (c.pc != 0x00397814u) [[unlikely]] return; }
L_00397814:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 275u, depth + 1u); else { c.pc = 0x00397300u; return; } if (c.pc != 0x00397820u) [[unlikely]] return; }
L_00397820:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00397830u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00397830u) [[unlikely]] return; }
L_00397830:
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003971E0u | kUnwind; return; } goto L_003971E0; }
L_00397850:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00397854:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 9792u);  c.pc = t; return; }
L_00397878:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 9792u)));  c.pc = t; return; }
L_00397888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 9792u), c.r[4].w[0]);  c.pc = t; return; }
L_00397898:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003978ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 327u, depth + 1u); else { c.pc = 0x00397878u; return; } if (c.pc != 0x003978ACu) [[unlikely]] return; }
L_003978AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003978C8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003978C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003978C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003978D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003978E8u);  if (depth < kMaxDepth) unit_0097(c, 102u, depth + 1u); else { c.pc = 0x0037CF50u; return; } if (c.pc != 0x003978E8u) [[unlikely]] return; }
L_003978E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] + 24896u), 0u);
    st32((c.r[3].w[0] + 24900u), 0u);
    st32((c.r[4].w[0] + 24904u), 0u);
    st32((c.r[5].w[0] + 24908u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00397918:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037CF90u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 104u, depth); }
L_00397960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 24896u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C978u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 66u, depth); }
L_003979B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003979D8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 70u, depth + 1u); else { c.pc = 0x0037CA38u; return; } if (c.pc != 0x003979D8u) [[unlikely]] return; }
L_003979D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[2].w[0] + 24900u), c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003979F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], ld32((c.r[2].w[0] + 24900u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C978u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 66u, depth); }
L_00397A10:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0037C870u; return; } if (c.pc != 0x00397A2Cu) [[unlikely]] return; }
L_00397A2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 24904u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00397A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], ld32((c.r[2].w[0] + 24904u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C978u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 66u, depth); }
L_00397A60:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A7Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0037C870u; return; } if (c.pc != 0x00397A7Cu) [[unlikely]] return; }
L_00397A7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 24908u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00397A90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], ld32((c.r[2].w[0] + 24908u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C978u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 66u, depth); }
L_00397AB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397AC8u); set32(c.r[4], c.r[4].w[0] + 31496u);  if (depth < kMaxDepth) unit_0097(c, 112u, depth + 1u); else { c.pc = 0x0037D090u; return; } if (c.pc != 0x00397AC8u) [[unlikely]] return; }
L_00397AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[4].w[0] + 31520u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037D0A8u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 113u, depth); }
L_00397AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397AF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 112u, depth + 1u); else { c.pc = 0x0037D090u; return; } if (c.pc != 0x00397AF4u) [[unlikely]] return; }
L_00397AF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037D0A8u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 113u, depth); }
L_00397B08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00393BF0u | kUnwind; return; } [[clang::musttail]] return unit_009C(c, 496u, depth); }
L_00397B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00393C08u | kUnwind; return; } [[clang::musttail]] return unit_009C(c, 497u, depth); }
L_00397B58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C4D8u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 32u, depth); }
L_00397B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C4F0u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 33u, depth); }
L_00397BC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C508u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 34u, depth); }
L_00397C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C520u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 35u, depth); }
L_00397C18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037CFE8u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 106u, depth); }
L_00397C30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 24640u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[6].d[0]);
    set32(c.r[6], 0u + 256u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[12]);
    st32((c.r[29].w[0] + 44u), c.f[13]);
    st32((c.r[29].w[0] + 48u), c.f[14]);
    st32((c.r[29].w[0] + 52u), c.f[15]);
    st32((c.r[29].w[0] + 56u), c.f[16]);
    st32((c.r[29].w[0] + 60u), c.f[17]);
    st32((c.r[29].w[0] + 64u), c.f[18]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397C98u); st32((c.r[29].w[0] + 68u), c.f[19]);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00397C98u) [[unlikely]] return; }
L_00397C98:
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x00397CA8u) [[unlikely]] return; }
L_00397CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397CB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 360u, depth + 1u); else { c.pc = 0x00397CF8u; return; } if (c.pc != 0x00397CB0u) [[unlikely]] return; }
L_00397CB0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00397CC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037CBB8u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 77u, depth); }
L_00397CF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C608u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 40u, depth); }
L_00397D38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00397D58; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00397D60; }
L_00397D58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00397D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
L_00397D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00397DB4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397D94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003988A0u; return; } if (c.pc != 0x00397D94u) [[unlikely]] return; }
L_00397D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397D9Cu);  if (depth < kMaxDepth) unit_008F(c, 27u, depth + 1u); else { c.pc = 0x0035C378u; return; } if (c.pc != 0x00397D9Cu) [[unlikely]] return; }
L_00397D9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397DA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003988A0u; return; } if (c.pc != 0x00397DA8u) [[unlikely]] return; }
L_00397DA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00397D80u | kUnwind; return; } goto L_00397D80; } }
L_00397DB4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397DC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_00397E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397DF8u);  if (depth < kMaxDepth) unit_009E(c, 4u, depth + 1u); else { c.pc = 0x00398028u; return; } if (c.pc != 0x00397DF8u) [[unlikely]] return; }
L_00397DF8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { st32((c.r[16].w[0] + 448u), 0u);  goto L_00397E00; }
L_00397E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397E08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 372u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x00397E08u) [[unlikely]] return; }
L_00397E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397E10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 381u, depth + 1u); else { c.pc = 0x003AB658u; return; } if (c.pc != 0x00397E10u) [[unlikely]] return; }
L_00397E10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 6u);  if (t) { goto L_00397E2C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397E50; }
L_00397E2C:
    set32(c.r[2], 0u + 2u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00397E68; }
L_00397E50:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397E68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00396688u | kUnwind; return; } goto L_00396688; }
L_00397E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 660u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00397EA0; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00397EA8; }
L_00397EA0:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00397FA0; }
L_00397EA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 660u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397ECCu); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 381u, depth + 1u); else { c.pc = 0x003AB658u; return; } if (c.pc != 0x00397ECCu) [[unlikely]] return; }
L_00397ECC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397ED8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 286u, depth + 1u); else { c.pc = 0x003973F8u; return; } if (c.pc != 0x00397ED8u) [[unlikely]] return; }
L_00397ED8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00397F88; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00397F10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00397F08u) [[unlikely]] return; }
L_00397F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00397F88; } }
L_00397F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 354u, depth + 1u); else { c.pc = 0x00392CA8u; return; } if (c.pc != 0x00397F18u) [[unlikely]] return; }
L_00397F18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 118u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 116u)));  goto L_00397F34; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 408u, depth + 1u); else { c.pc = 0x00393218u; return; } if (c.pc != 0x00397F30u) [[unlikely]] return; }
L_00397F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_00397F34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 118u)));  goto L_00397F60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F48u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_009F(c, 31u, depth + 1u); else { c.pc = 0x0039C6B0u; return; } if (c.pc != 0x00397F48u) [[unlikely]] return; }
L_00397F48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 118u)));  goto L_00397F60; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F5Cu); set32(c.r[4], c.r[4].w[0] + 15376u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00397F5Cu) [[unlikely]] return; }
L_00397F5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 118u)));
    c.budget -= 1;
L_00397F60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00397F88; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003974D0u | kUnwind; return; } goto L_003974D0; }
L_00397F88:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397FB8u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 381u, depth + 1u); else { c.pc = 0x003AB658u; return; } if (c.pc != 0x00397FB8u) [[unlikely]] return; }
L_00397FB8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_009E(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397FCCu);  if (depth < kMaxDepth) unit_009C(c, 354u, depth + 1u); else { c.pc = 0x00392CA8u; return; } if (c.pc != 0x00397FCCu) [[unlikely]] return; }
L_00397FCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 118u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00397FE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397FE4u);  if (depth < kMaxDepth) unit_009C(c, 408u, depth + 1u); else { c.pc = 0x00393218u; return; } if (c.pc != 0x00397FE4u) [[unlikely]] return; }
L_00397FE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  [[clang::musttail]] return unit_009E(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397FFCu); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_009F(c, 31u, depth + 1u); else { c.pc = 0x0039C6B0u; return; } if (c.pc != 0x00397FFCu) [[unlikely]] return; }
L_00397FFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_009E(c, 1u, depth);
}

}
